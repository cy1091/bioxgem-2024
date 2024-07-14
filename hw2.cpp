#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main(){
    
    string name;
    cout<<"Enter your name:"<<endl;
    cin>>name;
    
    string school;
    cout<<"Enter your graduation school:"<<endl;
    cin>>school;
    
    cout<<"+--------------------+"<<endl;
    cout<<"|"<< setw(17)<<name<< setw(8)<<"|"<<endl;
    cout<<"|"<<setw(17)<<school<<setw(8)<<"|"<<endl;
    cout<<"+--------------------+"<<endl;
    
    return 0;
}


