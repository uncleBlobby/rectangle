#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    // Program introduction.
    cout << "Rectangle perimeter, area, and diagonal length." << endl;
    cout << "***********************************************" << endl;
    cout << endl;

    // Prompt user for inputs and store in double variables.
    double width, height;
    cout << "Please enter the width and height of a rectangle: ";
    cin >> width;
    cin >> height;
    cout << endl;

    // Compute output and display to user.
    cout << "The perimeter is: " << (2 * width) + (2 * height) << endl;
    cout << "The area is: " << width * height << endl;
    cout << "The length of the diagonal is: " << sqrt((width * width) + (height * height)) << endl;
    cout << endl;
    cout << endl;

    // End program.
    return 0;
}