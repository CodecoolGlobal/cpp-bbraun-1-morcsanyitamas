#include <iostream>

using namespace std;

namespace Result {
    double result;
}

double divide(double numerator, double denominator) {
    if (denominator == 0.0) {
        // TODO: throw a runtime_error exception with the message "Division by zero!"
        throw runtime_error("Division by zero!");
    }
    return numerator / denominator;
}

int main() {

    // TODO: initialize the result variable from Result namespace to 0.0ű
    Result::result = 0.0;
    
    // TODO: catch the exception thrown by the divide function
    try
    {
        Result::result = divide(10, 5);
    }
    catch(const exception& error)
    {
        cerr << "An exception occurred: " << error.what() << endl;
    }
    
    cout << "Result of the division: " << Result::result << endl;

    return 0;
}