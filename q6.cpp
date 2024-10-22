/*
Question:6  
Implement a C++ function that finds the intersection of two arrays (i.e., elements that are present in both arrays).
 The resulting array should not contain duplicates.

*/
#include<iostream>

/*
******************************
NOT WORKING PROPERLY ON ALL VALUE 
LOGIC OF INTERSECTION IS WORKING PROPERLY BUT
LOGIC OF REMOVING DUBLICATE NOT WORKING PROPERLY IN SOME CASE
LIKE IT ADDING SOME 1 OR 2 EXTRA DUMMY VALUE AFTER CORRECT OUTPUT

******************************

*/
using namespace std;
void intersection(int arr1[],int arr2[],int size1,int size2){
    int size=size1+size2;
    int arrfinal[size];
    int y=0;
    for (int  i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if(arr1[i]==arr2[j]){
             arrfinal[y]=arr1[i];
             y++;

            }
        }   
    }
  int counter=0;
  for (int i = 0; i < y; i++)
  {
    for (int j = 1+i; j < y; j++)
    {
        if(arrfinal[i]==arrfinal[j]){
            for (int x = j; x < y-1; x++)
            {
                arrfinal[x]=arrfinal[x+1];
            }counter++;    
            y--;
            j--;   
        }
    } 
  }
    for (int i = 0; i< y; i++)
    {
        cout<<arrfinal[i]<<" ";
    }
    
        
    
    
    
}
int main()
{
int arr1[]={1,2};
int arr2[]={2,3};
int size1=sizeof(arr1)/sizeof(arr1[0]);
int size2=sizeof(arr2)/sizeof(arr2[0]);
intersection(arr1,arr2,size1,size2);
    
    return 0;
}