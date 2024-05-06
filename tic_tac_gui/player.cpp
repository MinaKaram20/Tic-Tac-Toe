#include "player.h"

player::player(): signedIn(false) {}
player* player::instance = nullptr;

player* player::getInstance() {
    if (!instance) {
        instance = new player();
    }
    return instance;
}

void player::signIn(const std::string& name, const std::string& pass) {
    username = name;
    password = pass;
    signedIn = true;
}

void player::signOut() {
    signedIn = false;
}

bool player::isSigned() const {
    return signedIn;
}

std::string player::getUsername() const {
    return username;
}

std::string player::getPassword() const {
    return password;
}
