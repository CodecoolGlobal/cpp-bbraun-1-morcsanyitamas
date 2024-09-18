#include <iostream>

using namespace std;

int main()
{
    const int number = -5;

    // TODO: Use if constexpr to check if the number is positive, negative or zero.
    if constexpr (number > 0)
    {
        cout << number << " positive number." << endl;
    }
    else if constexpr (number < 0)
    {
        cout << number << " negativ number." << endl;
    }
    else
    {
        cout << "Number is 0." << endl;
    }

    return 0;
}