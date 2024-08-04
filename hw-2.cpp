#include <iostream>
using namespace std;

int main() {
    int num1,num2;
    char choice;
  
    do
    {
        cout<<"number 1:";
        cin>>num1;
        cout<<"number 2:";
        cin>>num2;
    if (num1>num2)
    {
        cout<<"Error!! Number 1 > Number 2!!"<<endl;
    }else{
        int sum=0;
        for (int i = num1; i <= num2; i++) 
        {
            sum=sum+i;
        }
        cout<<sum<<endl;
        }
        cout << "Again(Y/N)?? ";
        cin >> choice;
    } while (choice=='Y' || choice=='y');
    
    
        
    return 0;
    }
    

