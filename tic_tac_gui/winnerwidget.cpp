#include "winnerwidget.h"

WinnerWidget::WinnerWidget(QWidget *parent) : QWidget(parent) {
    QVBoxLayout *layout = new QVBoxLayout(this);

    winnerLabel = new QLabel(this);
    winnerLabel->setAlignment(Qt::AlignCenter);
    winnerLabel->setFont(QFont("Arial", 20, QFont::Bold));

    layout->addWidget(winnerLabel);

    setLayout(layout);
}

void WinnerWidget::setWinner(const QString &winner) {
    if (winner == "It's a draw!") {
        winnerLabel->setText(winner);
        winnerLabel->setStyleSheet("background-color: yellow; color: black;");
} else if (winner.contains("X")){
        winnerLabel->setText(winner+" Wins!");
    winnerLabel->setStyleSheet("background-color: green; color: white;");
    } else if (winner.contains("O")) {
        winnerLabel->setText(winner+" Wins!");
        winnerLabel->setStyleSheet("background-color: red; color: white;");
    }
}
