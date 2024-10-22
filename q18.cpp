/*Question 18:
A function is designed to return the sum of elements in an array,
 but when called, it consistently returns 0, 
 even though the array contains non-zero elements.
  List some potential reasons for this malfunction in the function's implementation, 
considering how parameters are passed and how the function operates on them.
*/
#include<iostream>
using namespace std;
int  sum(int arr[],int size){
 int result=0;
    for (int i = 0; i < size; i++)
    {
        result+=result;
    }
    return result;
    
}
int main()
{
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<sum(arr,size);
    return 0;
}