#ifndef GAMEHISTORY_H
#define GAMEHISTORY_H

#include <QString>
#include <QList>
#include <QJsonDocument>
#include <QJsonObject>

class GameHistory {
public:
    GameHistory();
    void addMove(char player, int row, int col);
    void setWinner(char winner);
    void setTimestamp();
    QString getGameId();
    QList<QString> getMoves();
    char getWinner();
    QString getTimestamp();

    void fromJson(QJsonObject json);
    QJsonObject toJson();

private:
    QString gameId;
    QList<QString> moves;
    char winner;
    QString timestamp;
};

#endif // GAMEHISTORY_H
