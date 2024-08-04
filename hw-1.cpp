#include <iostream>
using namespace std;

int main() {
    int row; //金字塔層數
    cout<<"Please input a number:";
    cin>>row;

    for (int i= 1 ; i <= row; i++) //層
    {
        for (int j=i ; j < row; j++) //對齊，從第一行開始，執行row-i次空格
        {
            cout<<" ";
        }
        for (int j = 1; j <=i; j++) //前半個金字塔遞增
        {
            cout<<(j%10);
        }
        for (int j = i-1; j >= 1; j--) //後半個金字塔遞減
        {
            cout<<(j%10);
        }
        
        cout<<endl;
          
    }

    return 0;
}
