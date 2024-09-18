#include <iostream>

using namespace std;

class MyClass
{
private:
    bool isEven;

public:
    MyClass(int number) : isEven(number % 2 == 0) {}
    operator bool()
    {
        return isEven;
    }
};

int main()
{
    int number;

    cout << "Give me a number: ";
    cin >> number;
    
    // TODO: Implement the conditional statement
    bool isEven = number % 2 == 0;
    
    // TODO: Implement the conditional statement using a class
    MyClass myClass(number);

    if (myClass)
    {
        cout << number << " is even." << endl;
    }
    else
    {
        cout << number << " is odd." << endl;
    }

    return 0;
}