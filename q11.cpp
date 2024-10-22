#include<iostream>
using namespace std;
void comp(string alpha){
    string str="";
   int i=0;
    while( i < alpha.size())
    {
         int count = 1;
        for (int j = i+1; j < alpha.size(); j++)
        {
            if (alpha[i]!=alpha[j])
            {
                break;
            }
            else{
                ++count;
            }     
        }
        string num=to_string(count);
        str+=alpha[i];
        str+=num;
        
        i=i+count;     
    }
    cout<<str;    
}
int main()
{
    comp("aabccccaaa");
    return 0;
}