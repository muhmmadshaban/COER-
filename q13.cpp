/*Question 13:
Write a C++ program to print the following pattern for a given number of rows n. The pattern consists of asterisks (*) and digits in a specific format.
1
1*2
1*2*3
1*2*3*4
1*2*3*4*5
*/
#include<iostream>
using namespace std;
int main()
{
    int n=5;

    for (int i = 1; i <=n; i++)
    {
        for (int  j = 1; j<= i; j++)
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