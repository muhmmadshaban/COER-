#include<iostream>

using namespace std;
void  intersection(int arr1[],int size1,int arr2[],int size2){
    
    int x=0;
    int arr[size1+size2];
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if(arr1[i]==arr2[j]){
                arr[x]=arr2[j];
                x++;
                break;


            }
        
        }

    
        
    }

for (int i = 0; i < x; i++)
{
    for (int j = 1+i; j < x; j++)
    {
        if (arr[i]==arr[j])
        {
            for (int k = j; k < x; k++)
            {
                arr[k]=arr[k+1];
            }
            x--;
            j--;
            
        }
        
    }
    
}

for (int i = 0; i < x; i++)
{
cout<<arr[i]<<" ";
}

    

}
int main()
{
    
    int arr1[]={1,2,4};
    int arr2[]={2,3,1};
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);

  intersection(arr1,size1,arr2,size2);
    return 0;
}