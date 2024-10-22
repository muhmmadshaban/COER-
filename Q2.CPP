#include<iostream>
using namespace std;
void pattern(int n){
    
    for (int i = 1; i <= n; i++)
    {
    for (int j = 1; j <= i ; j++)
    {
        cout<<j;
        if(i>1 && j<i){
            cout<<"*";
        }
    }
    cout<<endl;
    
    }
    for (int i = n-1; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<j;
            if(i>1 && i>j){
                cout<<"*";
            }
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"ENTER THE VALUE ";
    cin>>n;
    pattern(n);
  
    
    return 0;
}