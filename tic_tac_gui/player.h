#ifndef PLAYER_H
#define PLAYER_H
#include <string>

class player
{
private:
    std::string username;
    std::string password;
    bool signedIn;
    static player* instance;

public:
    static player* getInstance();
    void signIn(const std::string& name, const std::string& pass);
    void signOut();
    bool isSigned() const;
    std::string getUsername() const;
    std::string getPassword() const;

public:
    player();
};

#endif // PLAYER_H
