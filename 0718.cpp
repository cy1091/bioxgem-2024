#include <iostream>
#include <cstdlib>  // 包含 <cstdlib> 庫
#include <ctime>    // 包含 <ctime> 庫，用於設置隨機數種子
using namespace std;

int main() {
    srand(time(0));
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    bool selected[10]={false}; //所有數字都還未被選取
    

        int x[4];
        for (int i = 0; i < 4; ++i) { //4位數
            x[i]= rand() % 10;
            do
            {
                x[i]= rand() % 10;
            } while (selected[x[i]]==true);//如果數字已被選取，重選一個數字
            selected[x[i]] = true;
        }
            cout << x[0] << x[1] << x[2] << x[3] <<endl;
    int q=1; 
    while (q>0)
    {
        int num[4],n;
            cout<<"Please input four digits (0~9):";
            cin>>n;
        
         num[0]=n/1000;//千
         num[1]=(n%1000)/100;//百
         num[2]=(n%100)/10;//十
         num[3]=n%10;//個

        int A=0,B=0,j;
        for (int i = 0; i < 4; i++)
        {
            if (num[i]==x[i])
            {
                A++;
            }else{
                for (int j = 0; j < 4; j++)
                {
                    if (num[i]==x[j] && num[i]!=x[i])
                    {
                        B++;
                    }   
                
                }     
                 
            }  
        }
            cout<<A<<"A"<<B<<"B"<<endl;
            q++;  
            if (A==4)
            {
                cout<<"You got it!! "<<q-1<<" times!!"<<endl;
                break;
            }
        
    }

    return 0;
}