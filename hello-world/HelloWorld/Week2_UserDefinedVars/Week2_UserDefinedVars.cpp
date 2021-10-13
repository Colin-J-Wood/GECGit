// Week2_UserDefinedVars.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    typedef int health;
    enum Weapons
    {
        SWORD,
        DAGGER,
        MACE,
        TWIN_SWORDS,
        SAMURAI,
        WIZARD_STAFF,
        FIRE_POTION,
        ICE_BLADE,
        SMALL_KNIFE
    };

    health myHealth = 13000;
    Weapons myWeapon = SAMURAI;

    cout << "My current health is: " << myHealth << endl;
    cout << "And the ID of my weapon of choice is: " << myWeapon << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
