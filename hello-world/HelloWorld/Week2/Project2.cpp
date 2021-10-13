#include <iostream>

int main()
{
    std::cout << "Size of char: " << sizeof(char) << " bytes" << std::endl;
    std::cout << "Size of int: " << sizeof(int) << " bytes" << std::endl;
    std::cout << "Size of short int: " << sizeof(short int) << " bytes" << std::endl;
    std::cout << "Size of long int: " << sizeof(long int) << " bytes" << std::endl;
    std::cout << "Size of float: " << sizeof(float) << " bytes" << std::endl;
    std::cout << "Size of double: " << sizeof(double) << " bytes" << std::endl;
    std::cout << "Size of wchar_t: " << sizeof(wchar_t) << " bytes" << std::endl;

    typedef int date;
    date currentDate;

    enum Month
    {
        JANUARY = 1,
        FEBRUARY,
        MARCH,
        APRIL,
        MAY,
        JUNE,
        JULY,
        AUGUST,
        SEPTEMBER,
        OCTOBER,
        NOVEMBER,
        DECEMBER
    };

    Month currentMonth;

    int myNum = 5;
    myNum = 10;

    double myNum1 = 4.0f, myNum2 = 4.32f, myNum3;

    const float kUniversalGravity = 6.67408f;
    const float kEarthGravity = 9.8f;
    
    return 0;
}