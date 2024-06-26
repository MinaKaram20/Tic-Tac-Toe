#ifndef TIC_TAC_TOE_WIDGET_H
#define TIC_TAC_TOE_WIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QMouseEvent>
#include <QVector>

class TicTacToeWidget : public QWidget
{
    Q_OBJECT

public:
    explicit TicTacToeWidget(QWidget *parent = nullptr);
    ~TicTacToeWidget();

protected:
    void mousePressEvent(QMouseEvent *event) override;

private slots:
    void onButtonClicked();

signals:
    void buttonClicked(QPushButton*);
    void gameOverSignal(char); // Declare the gameOverSignal here
    void gameStarted();


private:
    QVector<QPushButton*> buttons;
    char currentPlayer; // 'X' or 'O'
    bool gameOver;
    bool checkWin(); // Declare the checkWin function here
};

#endif // TIC_TAC_TOE_WIDGET_H
