#include <iostream>
#include "pattern.h"

using namespace std;

int main()
{
    pattern p;
    cout << "Enter the number of lines: ";
    cin >> p.n;
    p.pattern1();
    return 0;
}