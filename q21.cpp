/*Question 21:

Write a program to check if two strings are anagrams
(i.e., they clontain the same characters with the same frequencies but in different orders).

Input: "isten", "silent"
Output: True

*/

#include <iostream>
using namespace std;
void anagrams(string s1, string s2)
{
    bool isanagram = false;
    for (int i = 0; i < s1.size(); i++)
    {
        int maincount = 0,count = 0;
        for (int k = 0; k < s1.size(); k++)
        {
            if (s1[i] == s1[k])
            {
                maincount++;
            }
        }
        for (int j = 0; j < s2.size(); j++)
        {
            if (s1[i] == s2[j])
            {
                count++;
            }
        }
        if (maincount == count)
        {
            isanagram = true;
        }
        else
        {
            isanagram = false;
            break;
        }
    }
    if (isanagram == true)
    {
        cout << "ANAGRAM ";
    }   else {
        cout << "NOT ANAGRAM";
    }
}
int main()
{
    anagrams("arc", "car");
    return 0;
}