#include<iostream>
using namespace std;
  int fib(int n){
    if(n==0||n==1){
        return n;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
  }
  void store(int arr[],int size,int n){
    for (int  i = 0; i <n; i++)
     {
     arr[i]=fib(i);
        /* code */
     }
     int st=0,end=size-1;
     while (st<=end)
     {
        int temp=arr[st];
        arr[st]=arr[end];
        arr[end]=temp;
        st++;
        end--;
        
     }
     for (int  i = 0; i < size; i++)
     {
        cout<<arr[i]<<" ";
     }
     
     
  }
int main()
{
    /*Write a C++ program to generate the first n numbers in the Fibonacci sequence using recursion, and then print them in reverse order
     Use an array to store the sequence and a loop to reverse it.
     The Fibonacci sequence starts with 0 and 1, and each subsequent number is the sum of the two preceding ones.  */
     int n=5;
     int arr[n];
     int size=sizeof(arr)/sizeof(arr[0]);
    store(arr,size,n);
     
     
    return 0;
}