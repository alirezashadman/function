#include <iostream>
#include <math.h>

using namespace std;

int main () {
    double x,y,z,p,f,a;
    int fun;
    cout << "input x and y: " << endl;
    cin >> x >> y ;
    cout << "choose a function:\n1 - sinh(x)\n2 - x^2 \n3 - exp(x) " << endl;
    cin >> fun;
        switch (fun) {
            case 1:
                f = sinh(x);
                break;
            case 2:
                f = pow(x,2);
                break;
            case 3:
                f = exp(x);
                break;
            default: cout << "chosen function not exists!" << endl;
        }
    z = x*y;
    p = pow(f+y,2);
    if (z > 0) {
        a = p -pow(fabs(f),1./3);
    }
    else
        if (z < 0) {
            a = p +sin(x);
        }
        else a = p + pow(y,3);

    cout << "Result is: " << a << endl;
}


