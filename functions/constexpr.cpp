#include <iostream>

using namespace std;

// TODO: implement a function that returns the factorial of a number
constexpr int factorial(int number)
{
    return (number == 0) ? 1 : number * factorial(number - 1);
}

int main()
{
    // TODO: call the factorial function with an argument of 5
    constexpr int result = factorial(5);
    
    cout << "The factorial of 5 is: " << result << endl;

    int inputNumber = 4;
    cout << "The factorial of " << inputNumber << " is: " << factorial(inputNumber) << endl;

    return 0;
}