#include <iostream>
using namespace std;

int main(int argc, char **_argv)
{
    int a, b, c;
    cout << "Enter sides of triangle: \n";
    cin >> a >> b >> c;
    if ((a + b > c) && (b + c > a) && (a + c > b))
    {
        if (a == b && a == c)
        {
            cout << "Equilateral Triangle\n";
        }
        else if (a == b || a == c || b == c)
        {
            cout << "Isosceles Triangle\n";
        }
        // else if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b))
        // {
        //     cout << "Right Angled Triangle";
        // }
        else
        {
            cout << "Scalene Triangle\n";
        }
    }
    else
        cout << "Triangle not possible\n";

    return 0;
}
