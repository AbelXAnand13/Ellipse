//Abel Anand
#include <iostream>
using namespace std;
#define _USE_MATH_DEFINES
#include <math.h>
#include "ellipse.h"
int main() {
    ellipse oval;
    int radii1;
    int radii2;
    cout << "Bruh, enter a radius like rn\n";
    cin >> radii1;
    cout << "Another one\n";
    cin >> radii2;
    oval.setRadii(radii1, radii2);
    cout << "Circumference = " << oval.getCircumference() << "\nArea = " << oval.getArea() << endl;
}
