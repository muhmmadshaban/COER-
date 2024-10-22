/*Practice Question:
Question 23:

Write a C++ program that has a function to increment one number 
and decrement another. Use call by reference to modify both numbers in the main function.*/

#include<iostream>
using namespace std;
int incriniment(int &a,int &b){
    a=a+1;
    b=b-1;
    return a,b;
}
int main()
{
    int a=5,b=9;
    incriniment(a,b);
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}