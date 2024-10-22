/*
Question: 4
Two functions, A and B, call each other in a cyclic manner (i.e., A calls B, and B calls A). 
Explain what would happen if there’s no base condition to stop the calls, // 
ANS->> FUNTION RUN INFITE TIME UPTO STACK OVERFLOW CONDITION
and how this situation can be resolved to avoid infinite recursion or a stack overflow.
ANS ->> USE COUNTER TO TERMINATE THE FUNCTION AT CERTAIN CONDITION

*/
#include<iostream>
using namespace std;
void B(int);
void A(int a){
    if(a<=0){
        return;
    }
    cout<<"A called"<<endl;
    if(a>0){
    B(a-1);
    a--;
    }
}
void B(int a){
     if(a<=0){
        return;
    }
cout<<"B CALLED "<<endl;
A(a-1);
}
int main()
{
    A(5);


    return 0;
}