/*
Author: Frida Mesa
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Homework E7.16

I wrote a function double distance(Point a, Point b) that computes the distance from a to b.
And a program that reads the coordinates of the points, calls your function, and displays the result.
*/

#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    double x;
    double y;
};

double distance(Point a, Point b) {
    return sqrt(pow(a.x-b.x, 2) + pow(a.y-b.y, 2));
}

int main() {
    Point p1, p2;
    
    cout << "Enter x and y of point 1: ";
    cin >> p1.x >> p1.y;
    
    cout << "Enter x and y of point 2: ";
    cin >> p2.x >> p2.y;
    
    cout << "Distance between given points is " << distance(p1, p2) << endl;
    return 0;
}
