/*
Question:3
You have a recursive function that calculates the factorial of a number.
 For large input values, the function causes a stack overflow error.
  What could be the reason for this, //ans --> BECAUSE EACH RECURSIVE CALL , EACH  CALL USES STACK MEMORY TO STORE LAST CALL VALUE, FOR VERY,
  LARGE INPUT, FUNCTION NEED TOO MUCH RECURCISE CALL, WHICHH EXHOUST STACK MEMEORY AND CAUSED STACK OVERFLOW.
   and how can you modify the function to handle large inputs more efficiently?
   USE SIMPLE ITERATION METHOD TO CALCULATE FACTORIAL 

*/
#include<iostream>
using namespace std;
 // MAY CAUESED STACK OVERFLOW
long int factorial(int n){
    if(n==0||n==1){
        return 1;

    }
    else{
        return factorial(n-1)*n;
    }
}
// PREVENT STACK OVERFLOW UPTO 55 INPUT
long long int fact(int n){
long long int result=1;
    for (int  i = 2; i <=n; i++)
    {
        result=i*result;
    }
    return result;
}
int main()
{
    cout<<fact(55);
    return 0;
}