/*Question 19: Given two strings s1 and s2, write a function to find the length of the longest concatenated string formed by taking one substring from each string.1

Input: "abc", "def" 
Output: 6
*/
#include<iostream>
using namespace std;
int lenght(string s1,string s2){
    int size1=s1.size();
    int size2=s2.size();
    return size1+size2;
}
int main()
{
    string s1="shaban";
    string s2="MUHMMAD";
    cout<<lenght(s1,s2);
    return 0;
}