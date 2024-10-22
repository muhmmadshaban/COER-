/*Question 20:
Write a program that concatenates two strings by taking alternate characters from each string.
 If one string is longer, append the remaining characters at the end.  

Input: "abc", "12345" 
Output: "a1b2c345"
*/
#include<iostream>
using namespace std;
void cont(string s1,string s2){
    string res="";
    int st=0,st2=0,end=s1.size(),end1=s2.size();
    while (st<=end || st2<=end1)
    {
        if(st<=end){
        res+=s1[st];
        st++;}
        if(st2<=end1){
        res+=s2[st2];
        st2++;
        }
    }
    cout<<res;
    
    
}
int main()
{
    cont("abc", "12345" );
    return 0;
}