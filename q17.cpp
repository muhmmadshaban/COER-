/*Write a C++ program to rotate an array by k positions to the right.
 For example, rotating the array [1, 2, 3, 4, 5] by 2 positions would result in [4, 5, 1, 2, 3].  */
 #include<iostream>
 using namespace std;
 void rotate(int arr[],int size){
    int temp1=arr[size-1];
    int temp2=arr[size-2];

    for(int i = size-1; i >0; i--)
    {
        arr[i]=arr[i-2];
        
    }
    arr[0]=temp2;
    arr[1]=temp1;
    
 }
 int main()
 {
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    rotate(arr,size);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
     return 0;
 }