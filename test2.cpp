#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int x;
    int y;
    int z;

     cout << "Please input a positive integer:" << endl;
     cin >> x;

    if (x < 0) {
        cout << "x is not a positive integer!" << endl;
    } if (1 <= x && x <= 9) {
        cout << x << " is a small integer" << endl;
    } if (10 <= x && x <= 100) {
        y= x/10;
        z=x-10*y;
        cout << "The tens digit of" << x << "is" << y << endl; 
        cout << "The units digit of" << x << "is" << z << endl; 
    } if (x>=100 && x%5 == 0) {
        cout << x <<"is a large integer." << endl; 
        cout << x <<"is divisible by 5." << endl; 
    } if (x>=100 && x%5 == 1) {
        cout << x <<"is a large integer." << endl; 
        cout << x <<"+5=" << x+5 << endl; 
    } if (x>=100 && x%5 == 2) {
        cout << x <<"is a large integer." << endl; 
        cout << x <<"-5=" << x-5 << endl; 
    } if (x>=100 && x%5 == 3) {
        cout << x <<"is a large integer." << endl; 
        cout << x <<"*5=" << x*5 << endl; 
    } if (x>=100 && x%5 == 4) {
        double d ;
        d=x;
        cout << fixed <<setprecision(2);
        cout << x <<"is a large integer." << endl; 
        cout << x <<"/5=" << d/5 << endl; 
    }

    return 0;
}