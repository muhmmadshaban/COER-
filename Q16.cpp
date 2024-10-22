
/*
Write
a C++ program to print a right-angle triangle pattern of asterisks and digits.
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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
        
        
    for (int j = 1; j <=n-i ; j++)
    {
        cout<<j;
        if(j>0 && j<n-i){
            cout<<"*";
        }
    }
    cout<<endl;
            
    }
    
    return 0;
}