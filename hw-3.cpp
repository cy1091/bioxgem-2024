#include <iostream>
using namespace std;

bool isPrime(int num) { //判斷是否為質數函數
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) { //2開始檢查到根號num
        if (num % i == 0) 
        return false; //可被整除就不是質數
    }
    return true;
}

int main() {
    int N;
    cout<<"Please input a number:";
    cin >>N;

    int twinprime[2];//儲存找到的twinprimes
    int count=0;

    for (int i = 2; i <= N -2; ++i) {
        if (isPrime(i)&&isPrime(i+2)) //i和i+2都是質數
        {
            twinprime[0]=i;
            twinprime[1]=i+2;
            count++;
            cout<<"("<<twinprime[0]<<","<<twinprime[1]<<")";
        }
    }
    cout<<endl;
    cout<<"Total is:"<<count<<endl;

    return 0;
}