#include <iostream>
using namespace std;

int main()
{
    typedef int health;
    enum Weapons
    {
        SWORD = 1,
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
