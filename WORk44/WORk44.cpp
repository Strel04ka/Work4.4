#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double F, R, x, xp, xk, dx;
    cout << "R = "; cin >> R;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    if (xp > xk || dx <= 0) 
    {
        cout << "Error!";
        return 1;
    }

    cout << "-----------------------" << endl
         << "|  " << " x " << "   |  " << "    y  " << "   |" << endl
         << "-----------------------" << endl;

    x = xp;
    while (x <= xk) 
    {
        if (x >= -4 && x < -2) 
        {
            F = x + 3;
        }
        if (x >= -2 && x < 4) 
        {
            F = -(x * R / 4);
        }
        if (x >= 4 && x < 8 - R) 
        {
            F = -R;            
        }
        if (x >= 8 - R && x <= 8 + R) 
        {
            F = sqrt(R * R - pow((x - 8), 2)) - R;
        }
    
        cout << "|" << setw(7) << setprecision(2) << x << " |" << setw(11) << setprecision(3) << F << " |" << endl;

        x += dx;
    }
    cout << "-----------------------";
    cin.get();
    return 0;
}
