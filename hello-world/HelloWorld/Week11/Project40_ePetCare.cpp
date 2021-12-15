#include <iostream>
#include "Pet.h"
#include "Cat.h"
#include "Dog.h"
#include "Hamster.h"

int main()
{
    Pet* petPtr;
    int choice;

    cout << "Choose an animal:" << endl;
    cout << "1. Dog" << endl;
    cout << "2. Cat" << endl;
    cout << "3. Hamster" << endl;
    cin >> choice;

    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    switch (choice)
    {
    case 1:
        petPtr = new Dog();
        break;
    case 2:
        petPtr = new Cat();
        break;
    case 3:
        petPtr = new Hamster();
        break;
    default:
        cout << "Not a choice." << endl;
        return 1;
    }

    petPtr->Talk();

    bool finished = false;
    while (!finished)
    {
        cout << "Choose an action: " << endl;
        cout << "0. Quit" << endl;
        cout << "1. Listen to your pet" << endl;
        cout << "2. Feed your pet" << endl;
        cout << "3. Play with the pet" << endl;
        cin >> choice;

        switch (choice) {
        case 0:
            cout << "Goodbye!" << endl;
            finished = true;
            break;
        case 1:
            petPtr->Talk();
            break;
        case 2:
            petPtr->Feed();
            break;
        case 3:
            petPtr->Play();
            break;
        default:
            cout << "Not a choice." << endl;
        }
    } 

    delete (petPtr);

    return 0;
}
