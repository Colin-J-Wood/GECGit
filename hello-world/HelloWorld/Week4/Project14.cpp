#include <iostream>
using namespace std;

int main()
{
    float inputNum;
    float sumNum = 0.0f; //will also store initialNumber
    float meanNum = 0.0f; //will also store initialNumber

    do
    {
        if (sumNum == 0.0f) //haven't started the loop before, input the initial num
        {
            cout << "Input the first number:" << endl;
            cin >> inputNum;  //needs to be done so 0 can be checked.
            sumNum = inputNum;
            meanNum = inputNum;
        }
        else
        {
            //stuck this in an else so inputNum is checked before getting the second number.
            cout << "Input the next number:" << endl;
            cin >> inputNum;
            
            sumNum = sumNum + inputNum;
            meanNum = (meanNum + inputNum) / 2;

            cout << "New sum: " << sumNum << endl;
            cout << "New mean: " << meanNum << endl;
        }
    } while (inputNum != 0);
}
