#include<iostream>
using namespace std;
/*Write a C++ function that checks if an array is a palindrome (i.e., it reads the same forwards and backwards).*/
void chechPalindrome(int arr[],int size){
    int st=0; //INTIALISE START WITH ZERO
    int end=size-1;// INITIALIZE END WITH SIZE - 1 ,TO ACCESS LAST ELEMENT OF THE ARR
    bool isPalin=false; // THIS IS A BOOLEAN VARIABLE, WE USE IT WHILE CHECKING THE ARRAY IF THE LAST ELEMENT OF THE ARRAY IS EQAUL TO THE FRIST ELEMENT OF THE ARRAY, I
    // UPDATE THS isPalin TO THE TRUE AND UPDATE START WITH STRAT + 1 AND DECREMENT END WITH -1, BECAUSE WE NEED TO TRAVEL LEST TO RIGHT FROM THE START AND RIGHT TO LEFT FROM THE END, 
    //IF NOT UPDATE isPalin TO THE FALSE, IF ARRAY [ST] NOT EQUAL TO THE ARRAAY[END], JUST BREAK THE LOOP, BECAUSE IF ANY VALUE PAIR IS NOT EQUAL IN THE WHOLE ARRAY, SO THERE IS NO MEAN TO CHECK ANY OTHER INDEX VALUE,
    //IN THE EACH ITERATION OF THE LOOP
    /*
    AFTER WHEN ALL ITERATION ARE OVER, NOW CHECK IS isPalin IS EQUAL TO TRUE, IF YES, PRINT "PALINDROME ", IF NOT PRINT "NOT PALINDROME "
    */
    while (st<=end)
    {
        if (arr[st]==arr[end])
        {
            isPalin=true;
            st++;
            end--;
        }
        else{

            isPalin=false;
            break;
        }
    }
    if(isPalin==true){
        cout<<"PALIINDROME "<<endl;
    }
    else{
        cout<<"NOT PALINDROME "<<endl;
    }
    
}
int main()
{
    int arr[]={1,1,1,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    chechPalindrome(arr,size);
    return 0;
}
