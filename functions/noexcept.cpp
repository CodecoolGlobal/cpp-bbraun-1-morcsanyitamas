#include <vector>
#include <iostream>

using namespace std;

// TODO: implement a function that calculates the sum of the elements in a vector
int sumElements(const vector<int> &numbers) noexcept
{
    int sum = 0;
    for (int num : numbers)
    {
        sum += num;
    }
    return sum;
}

int main()
{
    vector<int> numbers = {1, 2, 3, 4, 5};
    int sum = sumElements(numbers);
    cout << "The sum of the elements is: " << sum << endl;
    return 0;
}