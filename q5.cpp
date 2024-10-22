#include<iostream>
using namespace std;
/*Write a C++ function that checks if an array is a palindrome (i.e., it reads the same forwards and backwards).*/
void chechPalindrome(int arr[],int size){
    int st=0;
    int end=size-1;
    bool isPalin=false;
    while (st<=end)
    {
        if (arr[st]==arr[end])
        {
            isPalin=true;
            st++;
            end--;
        }
        else{

            isPalin=false;
            break;
        }
    }
    if(isPalin==true){
        cout<<"PALIINDROME "<<endl;
    }
    else{
        cout<<"NOT PALINDROME "<<endl;
    }
    
}
int main()
{
    int arr[]={1,1,1,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    chechPalindrome(arr,size);
    return 0;
}