/*Question 14:
Write a C++ program to print a right-angle triangle pattern of asterisks and digits.
1
1*2
1*2*3
1*2*3*4
1*2*3*4*5
1*2*3*4
1*2*3
1*2
1
*/
#include<iostream>
using namespace std;
int main()
{
    int n=5;
    for (int i = 1; i <=n; i++)    
    {
        for (int  j = 1; j <= i; j++)
        {
            cout<<j;
            if(j>=1 && j<i){
                cout<<"*";
            }
        }
        cout<<endl;
        
    }
    for (int i = n-1; i >=1; i--)    
    {
        for (int  j = 1; j <= i; j++)
        {
            cout<<j;
            if(j>=1 && j<i){
                cout<<"*";
            }
        }
        cout<<endl;
        
    }
    return 0;
}