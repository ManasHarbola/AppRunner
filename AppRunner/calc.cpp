#include <iostream>
#include <math.h>
#include "mainb.h"

using namespace std;

void calc()
{
    cout << "\n" <<"Enter problem (use 'v' for square root and type in '0x0' to exit this program) \n";
    double a;
    char b;
    double c;
    string ans = "The answer is ";
    cin >> a >> b >> c;
    if (b == '+'){
    cout << ans << (a+c) << "\n";
    calc();
    }
    else if (b == '-'){
    cout << ans << (a-c) << "\n";
    calc();
     }
    else if (b == '*'){
    cout << ans << (a*c) << "\n";
    calc();
    }
    else if (b == '/'){
    cout << ans << (a/c) << "\n";
    calc();
    }
    else if (b == '^'){
    cout << ans << pow(a,c) << "\n";
    calc();
    }
    else if (b == 'v'){
    cout << ans << a*sqrt(c) << "\n";
    calc();
    }
    else if (a == 0 && b == 'x' && c == 0){
        cout << "\n";
        mainb();
    }








}
