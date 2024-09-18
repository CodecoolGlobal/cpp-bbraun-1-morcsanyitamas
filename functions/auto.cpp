#include <iostream>

using namespace std;

// TODO: implement a function that returns the maximum of two integers
auto max(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    int x = 10, y = 20;
    auto result = max(x, y);
    cout << "The maximum is: " << result << endl;
    return 0;
}