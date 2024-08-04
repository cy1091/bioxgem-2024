#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i < num/2; i++)
    {
       if (num % i == 0) {
            return false; 
        }
    }   
        
    return true;
}
    
int main() {
    int number;
    cout << "Please input a positive integer: " << endl;
    cin >> number;
    
    if (isPrime(number)) {
       cout << "It is a prime number." << endl;
    }
    else {
        cout << "It is not a prime number." << endl;
    }

    return 0;
}