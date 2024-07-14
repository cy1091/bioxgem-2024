#include <iostream>
using namespace std;
int main() {
    int year;
    cout<<"Please input a year:"<<endl;
    cin>>year;
    
    if (year%400==0){
        cout<<year<<"is a leap year."<<endl;
    }
    if (year%4==0 && year%100!=0){
        cout<<year<<"is a leap year."<<endl;
    }
    if (year%4!=0){
        cout<<year<<"is a commom year."<<endl;
    }
    if (year%100==0 && year%400!=0){
        cout<<year<<"is a commom year."<<endl;
    }
   
    return 0;
}
