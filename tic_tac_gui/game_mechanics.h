#ifndef GAME_MECHANICS_H
#define GAME_MECHANICS_H

#include <QWidget>
#include "tic_tac_toe_board.h"
#include "game_type_selection.h"
#include "game_mode.h"


class GameMechanics : public QWidget {
    Q_OBJECT
public:
    enum class Mode { Regular, ThreeXs };
    enum class GameType { Multiplayer, Singleplayer };

    GameMechanics(QWidget *parent = nullptr);
    ~GameMechanics();

    void startGame(Mode mode, GameType gameType);

private:
    TicTacToeBoard *board;
    GameTypeSelection *gameTypeSelection;

    void createBoard(Mode mode);
    void createGameTypeSelection();
    void connectSignalsAndSlots();
};

#endif // GAME_MECHANICS_H
