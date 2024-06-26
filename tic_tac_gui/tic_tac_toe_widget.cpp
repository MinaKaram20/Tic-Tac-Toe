#include "tic_tac_toe_widget.h"

TicTacToeWidget::TicTacToeWidget(QWidget *parent)
    : QWidget(parent), buttons(9)
{
    for (int i = 0; i < 9; ++i) {
        QPushButton *button = new QPushButton(this);
        button->setFlat(true); // Make the button flat
        button->setGeometry(i % 3 * 100, i / 3 * 100, 100, 100); // Arrange in a 3x3 grid
        button->setStyleSheet("background-color: white;"); // Set initial style
        buttons[i] = button;
        connect(button, &QPushButton::clicked, this, &TicTacToeWidget::onButtonClicked);
    }

    setFixedSize(300, 300); // Set the size of the widget
}

TicTacToeWidget::~TicTacToeWidget()
{
}

void TicTacToeWidget::mousePressEvent(QMouseEvent *event)
{
    QPushButton *button = qobject_cast<QPushButton*>(childAt(event->pos()));
    if (button) {
        emit buttonClicked(button);
    }
}

void TicTacToeWidget::onButtonClicked()
{
  // Handle button clicks here
}
