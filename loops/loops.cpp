#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // TODO: Print the numbers array using
    cout << "Traditional for loop:" << endl;
    for (int i = 0; i < 10; ++i)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Do-while loop
    cout << "Do-while loop:" << endl;
    int i = 0;
    do
    {
        cout << numbers[i] << " ";
        i++;
    } while (i < 10);
    cout << endl;

    // While loop
    cout << "While loop:" << endl;
    i = 0;
    while (i < 10)
    {
        cout << numbers[i] << " ";
        i++;
    }
    cout << endl;

    // Range-based for loop (C++11 and later)
    cout << "Range-based for loop:" << endl;
    for (int number : numbers)
    {
        cout << number << " ";
    }
    cout << endl; 
    
    return 0;
}