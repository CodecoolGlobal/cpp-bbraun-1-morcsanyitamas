#include <iostream>

using namespace std;

// TODO: implement a function that swaps two integers
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// TODO: implement a function that returns the length of a string
int getLength(const string &str)
{
    return str.length();
}

int main()
{
    int x = 10, y = 20;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swap(x, y);
    cout << "After swap: x = " << x << ", y = " << y << endl;

    string text = "Hello, world!";
    int len = getLength(text);
    cout << "The length of the string is: " << len << endl;

    return 0;
}
