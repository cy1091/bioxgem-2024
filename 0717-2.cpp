#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    while (a!=0 && b!=0){
        if (a > b)
            a %= b;
        else
            b %= a;
    }
    return a + b;
}
    
int main() {
    int a,b;
    cout <<"Please input two intergers:"<<endl;
    cin >> a >> b;
    int result=gcd(a,b);
    cout <<"GCD is: "<<result<<endl;

    return 0;
}

/*for (int i = 1; a >= i && b >= i; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            printf("%d ", i);
            max = i;
        }
    }*/
