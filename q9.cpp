#include<iostream>
#include<string>

using namespace std;
int main()
{
   const char* name={"This is a C++ string exercise"};
int size=0;
for (int i = 0; name[i] !='\0' ; i++)
{
    size++;
}


    int counter=0;
    
    int arr[100];
    int j=0;
    
    for( int i=0;i<size+1;i++)
    {
        if(name[i]!=' '){
            counter++;
            
        }
         else if(name[i]==' ')
        
        {
            arr[j]=counter;
           
            counter=0;
            
            j++;
        }

     
        
        arr[j]=counter;
        
    }
 
    for (int  i = 0; i < j+1; i++)
    {
        if(i==j+1-1){
            arr[i]=arr[i]-1;
        }
        
    }
     cout<<"OUTPUT " ;
     int maxi=INT16_MIN;
    for (int  i = 0; i < j+1; i++)
    {
     //   cout<<arr[i]<<" ";
        if(arr[i]>maxi){
            maxi=arr[i];
        }

    }
    cout<<maxi;
    
    
    return 0;
}