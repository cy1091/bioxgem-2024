#include <iostream>
using namespace std;
int main() {
    int total;
    
    cin>>total;
    
    int hr = total/3600;
    int min =(total-3600*hr)/60;
    int second =total-3600*hr-60*min;
    
    cout<<hr <<"hour"<<min <<"minute"<<second <<"second"<<endl;
    return 0;
}

