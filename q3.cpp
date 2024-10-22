#include<iostream>
using namespace std;
void replacedublicate(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        for (int j = 1+i; j < size; j++)
        {
            if(arr[i]==arr[j]){
                for (int k = j; k < size-1; k++)
                {
                    arr[k]=arr[k+1];
                }
                size--;
                j--;
                
            }
        }
        
    }
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main()
{
    // int arr[]={58,26,91,26,70,70,91,58,58,58,67};
    int arr[]={4,5,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    replacedublicate(arr,size);
    
    
    return 0;
}
