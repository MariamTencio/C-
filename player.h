#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
public:
    Player();
    std::string getName() const;
    void setName(const std::string& name);

private:
    std::string name;
};

#endif // PLAYER_H
