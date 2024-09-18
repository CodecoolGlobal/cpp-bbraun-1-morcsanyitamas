#include <iostream>
#include <tuple>
#include <cmath>

using namespace std;

struct Point
{
    int x;
    int y;
};

// TODO: implement a function that calculates a new point (x + 1, y + 1) based on the input
Point calculatePoint(int x, int y)
{
    Point p;
    p.x = x + 1;
    p.y = y + 1;
    return p;
}

// TODO: implement a function that calculates the distance between two points
tuple<Point, Point, double> calculatePointAndDistance(int x1, int y1, int x2, int y2)
{
    Point p1{x1, y1};
    Point p2{x2, y2};
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return make_tuple(p1, p2, distance);
}

int main()
{
    Point result = calculatePoint(2, 8);
    cout << "The calculated point is: (" << result.x << ", " << result.y << ")" << endl;

    auto [p1, p2, dist] = calculatePointAndDistance(1, 1, 2, 2);
    cout << "Point 1: (" << p1.x << ", " << p1.y << "), Point 2: (" << p2.x << ", " << p2.y << "), Distance: " << dist << endl;

    return 0;
}