#include "game_mechanics.h"
#include "tic_tac_toe_board.h"
#include "game_type_selection.h"

GameMechanics::GameMechanics(QWidget *parent) : QWidget(parent) {
    createGameTypeSelection();
    connectSignalsAndSlots();
}

GameMechanics::~GameMechanics() {
    delete board;
    delete gameTypeSelection;
}

void GameMechanics::startGame(Mode mode, GameType gameType) {
    createBoard(mode);
    // Initialize game logic here
}

void GameMechanics::createBoard(Mode mode) {
    board = new TicTacToeBoard(this, mode);
    board->show();
}

void GameMechanics::createGameTypeSelection() {
    gameTypeSelection = new GameTypeSelection(this);
    gameTypeSelection->show();
}

void GameMechanics::connectSignalsAndSlots() {
    connect(gameTypeSelection, &GameTypeSelection::gameTypeSelected, this, &GameMechanics::startGame);
}
