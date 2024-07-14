//
//  main.cpp
//  hw4
//
//  Created by 陳芝諺 on 2024/7/14.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int score1;
    cout<<"Please input yourscore on test1:"<<endl;
    cin>>score1;
    
    int score2;
    cout<<"Please input yourscore on test2:"<<endl;
    cin>>score2;
    
    double average;
    average = static_cast<double>(score1 + score2) / 2;
    cout << fixed << setprecision(2)<<average<<endl;
   
    
    if (average>=90){
        cout<<"graed:A"<<endl;
    }
    if (average>=80 && average<90){
        cout<<"graed:B"<<endl;
    }
    if (average>=70 && average<80){
        cout<<"graed:C"<<endl;
    }
    if (average>=60 && average<70){
        cout<<"graed:D"<<endl;
    }
    if (average<=59){
        cout<<"graed:F"<<endl;
    }
        
    return 0;
}
