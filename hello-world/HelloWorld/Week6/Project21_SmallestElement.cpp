#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int numbers[10];
    int minVal, pos;

    cout << "Input 10 numbers!" << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << "Input number " << i + 1 << ":" << endl;
        cin >> numbers[i];
    }

    minVal = *min_element(numbers,numbers+10);
    cout << "Smallest number is: " << minVal << endl;

    for (int i = 0; i < 10; i++)
    {
        if (numbers[i] == minVal)
        {
            pos = i + 1;
        }
    }
    cout << "Position of smallest number is: " << pos << endl;

    return 0;
}
