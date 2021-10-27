//#include <iostream>
//using namespace std;
//
//int main()
//{
//    float inputNum;
//    float sumNum = 0.0f; //will also store initialNumber
//    float meanNum = 0.0f; //will also store initialNumber
//    int counter = 0;
//
//    do
//    {
//        if (sumNum == 0.0f) //haven't started the loop before, input the initial num
//        {
//            cout << "Input the first number:" << endl;
//            cin >> inputNum;  //needs to be done so 0 can be checked.
//            sumNum = inputNum;
//            meanNum = inputNum;
//            counter++;
//        }
//        else
//        {
//            //stuck this in an else so inputNum is checked before getting the second number.
//            cout << "Input the next number:" << endl;
//            cin >> inputNum;
//
//            if (inputNum != 0) counter++; //don't increase counter if 0 so the final result is a copy of the previous
//            sumNum = sumNum + inputNum; //sum num will end up already having all of the numbers added together, which is the first step of mean calculation anyway
//            meanNum = sumNum / counter;
//
//            cout << "New sum: " << sumNum << endl;
//            cout << "New mean: " << meanNum << endl;
//
//        }
//    } while (inputNum != 0);
//
//    return 0;
//}
