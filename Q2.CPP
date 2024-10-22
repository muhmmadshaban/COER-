/*
Question-2 The loop shown below has been written by an inexperienced C++ programmer. The behavior of the loop is not correctly represented by the formatting.
int n = 10;
while (n > 0)
    n /= 2;
cout << n * n << endl;

 a. What is the output of the loop as it is written? // ans 0
 b. Correct the syntax of the loop so that the logic of the corrected loop corresponds to the formatting of the original loop. What is the output of the corrected loop? 
 c. Correct the formatting of the (original) loop so that the new format reflects the logical behavior of the original loop

*/
#include<iostream>
using namespace std;
int main()
{
    int n = 10;
while (n > 0){
    cout << n * n << endl;
    n /= 2;
    /*
    now output
    100
    25
    4
    1
    */
}

    return 0;
}