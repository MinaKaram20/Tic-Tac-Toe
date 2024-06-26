#ifndef TICTACTOE_H
#define TICTACTOE_H
#include <QLabel> // Add this line
#include "winnerwidget.h"



#include <QWidget>
#include <QPushButton>
#include <QGridLayout>
#include <QtSql>



class SquareWidget : public QWidget {
    Q_OBJECT
public:
    SquareWidget(QWidget *parent = nullptr);


protected:
    void resizeEvent(QResizeEvent *event) override;
};

class TicTacToe : public QWidget
{
    Q_OBJECT

public:
    enum Difficulty { Easy,Medium, Hard };

    explicit TicTacToe(QWidget *parent = nullptr, bool vsComputer = true, Difficulty difficulty = Medium );
    void setVsComputer(bool vsComputer);
    void resetGame();
    void setDifficulty(Difficulty difficulty);
    QStringList gameHistory;
    QSqlDatabase mydb;
    struct Move {
        int row;
        int col;
        char type; // 'X' or 'O'
    };

    QVector<Move> moves;

    void handleButtonClick();
    bool threeXsMode=false;

    void highlightOldMove();




signals:
    void returnToMainMenu();
    void closeGame();
    void gameClosed();




private slots:
    bool checkWin();
    void computerMove();
    int minimax(char board[3][3], bool isMax, int depth = 0,int alpha=-1000 ,int beta=1000);
    int evaluate(char board[3][3]);
    bool isMovesLeft(char board[3][3]);
    void updateScores(char winner);
    void saveHistory(char winner);
    bool isDraw();
    void toggleDifficulty();
    void highlightWinningLine(int winType, int index);
    void gameOver();
    void replayGame(); // Declare the replayGame method



private:
    QPushButton *buttons[3][3];
    char board[3][3];
    bool isXturn;
    bool vsComputer;
    Difficulty difficulty;
    int scoreX = 0;
    int scoreO = 0;
    bool m_vsComputer;
    Difficulty currentDifficulty;
    QPushButton *difficultyButton; // Declare difficultyButton here
    QLabel *xScoreLabel; // Declare QLabel for X score
    QLabel *oScoreLabel; // Declare QLabel for O score
    QPushButton *mainMenuButton;
    int currentDepth;  // Declare currentDepth as a member variable
    WinnerWidget *winnerWidget;  // Declare winnerWidget here
    QPushButton *replayButton; // Declare the replayButton
    QPushButton *threeXsButton; // Declare threeXsButton as a member variable
    int countMarksInQueue(char mark);
    void removeOldestMoveFromUI();


};

#endif // TICTACTOE_H
