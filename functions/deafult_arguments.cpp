#include <iostream>
#include <string>

using namespace std;

// TODO: implement a function that prints a message a given number of times, by default once
void printMessage(const string &message, int times = 1)
{
    for (int i = 0; i < times; ++i)
    {
        cout << message << endl;
    }
}

int main()
{
    printMessage("Hello, world!");
    printMessage("This is a repeated message", 3);
}