// Complete Guide to C++ Programming Foundations
// Exercise 02_09
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class character_role {protagonist, antagonist, sidekick, npc};

struct game_character{
    std::string name;
    int level;
    character_role role;
    std::string greeting;
};

int main(){
    game_character buddy;
    buddy.name = "LCSign Tony";
    buddy.level = 10;
    buddy.role = character_role::sidekick;
    buddy.greeting = "HOWDY HOMIES, I'M TONY!";

    std::cout << buddy.name << " is a level " << buddy.level << " character with the role of " << static_cast<int>(buddy.role) << "." << std::endl;

    std::cout << buddy.name << ": " << buddy.greeting << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
