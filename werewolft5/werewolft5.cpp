class PlayerCharacter{
public:
    bool turnVote;
    bool alive;
    bool endTurn;
private:
    std::string Rol[4] = { "villager", "wolf", "vident","medic" };
    bool wolf;
};

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}
