/*
Question 22:

Write a program to remove all duplicate characters from a string,
 preserving the order of their first occurrence.

Input: "programming"
Output: "progamin"
*/
#include<iostream>
using namespace std;
string dublicate(string s1){
    for (int  i = 0; i < s1.size(); i++)
    {
        for (int j = 1+i; j < s1.size(); j++)
        {
            if (s1[i]==s1[j])
            {
                for (int k = j; k < s1.size(); k++)
                {
                    s1[k]=s1[k+1];
                }
                
            }
            
        }
        
    }
    return s1;
    
}
int main()
{
  cout<<dublicate("shabanshaban");
    return 0;
}