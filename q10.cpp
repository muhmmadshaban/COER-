/*Question 9:
Write a program to count the number of vowels and consonants in a given string.

•	Input: "Hello World"
•	Output: Vowels = 3, Consonants = 7
*/
#include<iostream>
using namespace std;
void counter(string s1){
    int vc=0;
    int cc=0;
    for (int i = 0; i < s1.size(); i++)
    {
     if(s1[i]=='a'|| s1[i]=='e' || s1[i]=='i'||s1[i]=='o'|| s1[i]=='u' ||s1[i]=='A'|| s1[i]=='E' || s1[i]=='I'||s1[i]=='O'|| s1[i]=='U'){
        vc++;
     }
     else if(s1[i]==' '){
        continue;
     }
     else if(s1[i]!='a'|| s1[i]!='e' || s1[i]!='i'||s1[i]!='o'|| s1[i]!='u'){
        cc++;
     }
    }
    cout<<vc<< " , "<<cc<<endl;

}
int main()
{
    string s1= "hello world";
    counter(s1);
    return 0;
}