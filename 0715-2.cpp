#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int a;
    cout<<"Please input the number of integers:"<<endl;
    cin>>a;
    int b[a],min,max,total=0;
    double ave;
    for(int i=1; i<=a;i++)
    {
        cout<<"integer #"<< i <<":"<<endl;
        cin>>b[i];
        total =total+b[i];
        max=min=b[1];
        for(int i=1; i<=a;i++)
        {
            if(b[i]>max){
                max=b[i];
            }
            if (b[i]<min){
                min=b[i];
            }
            ave=static_cast<double>(total)/a;
        }
    }
    
        cout<<"The total is:"<<total<<endl;
        cout<<"The average is:"<<fixed<<setprecision(2)<<ave<<endl;
        cout<<"The maximum is:"<<max<<endl;
        cout<<"The minimum is:"<<min<<endl;
   
    return 0;
}

