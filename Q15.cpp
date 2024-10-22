/*Write a C++ program to modify the elements of an array using . The function should take the address of the array and increase each element by 10.  
Input: Array: [1, 2, 3, 4, 5]
Output: Array after modification: [11, 12, 13, 14, 15]

*/
#include<iostream>
using namespace std;
void modfy(int arr[],int size){
for (int  i = 0; i < size; i++)
{
    arr[i]=arr[i]+10;
}

}
int main()
{
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);

    modfy(arr,size);
    cout<<"THE ARAY"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}