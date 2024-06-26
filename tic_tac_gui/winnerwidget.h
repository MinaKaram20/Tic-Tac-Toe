#ifndef WINNERWIDGET_H
#define WINNERWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>

class WinnerWidget : public QWidget {
    Q_OBJECT

public:
    explicit WinnerWidget(QWidget *parent = nullptr);
    void setWinner(const QString &winner);

signals:
    void resetGame();

private:
    QLabel *winnerLabel;
};

#endif // WINNERWIDGET_H
