#include <iostream>
#include <math.h>
using namespace std;

int main() 
{    float a, b, c, root1, root2, D, real, im;
    cout <<"Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    D= b*b - 4*a*c;
    
    if (D > 0) 
    {
        root1 = (-b + sqrt(D)) / (2*a);
        root2 = (-b - sqrt(D)) / (2*a);
        cout << " Roots are real and different." << endl;
        cout << "x1 = " << root1 << endl;
        cout << "x2 = " << root2 << endl;
    }
    
    else if (D == 0) 
    {
        cout << "Roots are real and identical." << endl;
        root1 = -b / (2*a);
        cout << "The equal roots is " << root1 << endl;
    }

    else 
    {
        real = -b/(2*a);
        im =sqrt(-D)/(2*a);
        cout << "Roots are complex and different."  << endl;
        cout << "x1 = " << real << "+" << im << "i" << endl;
        cout << "x2 = " << real << "-" << im << "i" << endl;
    }

    return 0;
}
