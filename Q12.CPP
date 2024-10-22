/*Write a program to find and print the first non-repeating character in a string.
Input: "swiss"
Output: "w"*/
#include <iostream>
using namespace std;
void repe(string alpha)
{
        for (int i = 0; i < alpha.size(); i++)
    {
       int count = 1;
        for (int j = 1 + i; j < alpha.size(); j++)
        {
            if (alpha[i] == alpha[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << alpha[i];
            break;
        }
    }
}
int main()
{
    // s w i s s
    repe("swiss");
    return 0;
}