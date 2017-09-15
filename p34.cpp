#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, f, l, sum, digits, nn, a, b;

    cout << "\n enter any number: ";
    cin >> n;
    digits = (int)log10(n);
    f = n / pow(10, digits);
    l = n % 10;
    a = f* (pow(10, digits));
    b = n % a;
    n = b / 10;
    nn = l* (pow(10, digits)) + (n * 10 + f);
    cout << " The number after swaping the first and last digits are: " << nn << endl;
    return 0;
}
