#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char **argv)
{
    float a, b, c, s, r, sq_s, area;
    int ch;
    cout << "\n1.Area of Circle\n2.Area of Rectangle";
    cout << "\n3.Area of Triangle\n4.Area of Square\nEnter your choice :";
    cin >> ch;

    switch (ch)
    {
    case 1:
    {
        cout << "\nEnter radius of the Circle :";
        cin >> r;
        area = 3.14 * r * r;
        break;
    }
    case 2:
    {
        cout << "\nEnter length and breadth of Rectangle :";
        cin >> a >> b;
        area = a * b;
        break;
    }
    case 3:
    {
        cout << "\nEnter three sides of the Triangle :";
        cin >> a >> b >> c;
        s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        break;
    }
    case 4:
    {
        cout << "\nEnter side of Square :";
        cin >> sq_s;
        area = sq_s * sq_s;
        break;
    }
    default:
        cout << "\n--- Wrong Choice ---";
        break;
    }

    cout << "Area = " << area;

    return 0;
}
