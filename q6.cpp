/*
Question:6  
Implement a C++ function that finds the intersection of two arrays (i.e., elements that are present in both arrays).
 The resulting array should not contain duplicates.

*/


#include<iostream>
using namespace std;
void intersection(int arr1[],int size1,int arr2[],int size2){
//CREATE SIZE AND INITIALISE WITH SIZE1+SIZE2 DIVIDE BY  TWO. THIS IS USED TO GIVE SIZE TO A NEW ARRAY WHICH MAY STORE THE RESULT
int size=(size1+size2)/2;
// CREATE A NEW ARRAY WITH THE SIZE CREATED ABOVE, THIS IS USED TO STORE THE ANSWER
int newA[size];
// INITIALIZE X=0, THIS IS USED FOR INDEXING IN THE NEW ARRAY
int x=0;

    /*
   
int arr1[]={1,2,3};
    int arr2[]={2,5,3};
    */
   /* NOW RUN TWO LOOPS WHICH CHECK FOR THE ELEMENT THAT IS PRESENT IN BOTH ARRAY,
    AND STORE THAT ELEMENT IN THE NEW ARRAY AND UPDATE THE VALUE OF X WITH X++
    */


   /*

   THE WORKING OF THE INTERSECTION CHECKER LOOP 
    for example, WE HAVE TWO ARRAY
    A { 1   2   3   }
    B { 2   1   3   }
    LET i =0 FOR (FOR STARTING ) | i < size1=3  | CONDITION ARE TRUE
    NOW J = 0 | 0   <   SIZE2 =3 |          CONDITION TRUE
    NOW CHECK IF arr1[0]== arr2[0]
    THAT IS  1 == 2     |   CONDITION FALSE
        j++
    j=1    |    1   <   3   |   CONDITION TRUE
    NOW CHECK IF arr1[0]== arr2[1]
    THAT IS 1 == 1      |   CONDITION TRUE   
    INSERT arr2[j]  TO THE NEWARRAY[x]
    THAT IS NEWARRAY[0]     BECAUSE THE LAST VALUE OF THE X IS 0
    NOW NEW ARRAY BECOME {1,?,?}
    ('?' DENOTES GARBAGE VALUE) 
    x++
    j++;
    j=2     | 2 <   3   |   CONDITION TRUE
    NOW CHECK IF arr1[0]== arr2[2]
    THAT IS 1 == 3      |   CONDITION FALSE   
    j++
    j=3     | 3 <   3   | CONDITION FALSE
    EXIT LOOP 
    NOW i++

    i=1 |   1   <   3   |   CONDITION TRUE
    j=0 |   0   <   3   |   CONDITION TRUE
    NOW CHECK IF arr1[1]== arr2[0]
    THAT IS 2 == 2      |   CONDITION TRUE
    INSERT arr2[0]  TO THE NEWARRAY[X]
    THAT IS NEWARRAY[1]  BECAUSE THE LAST VALUE OF THE X IS 1
    NOW NEW ARRAY BECOMES {1,2,?}
    ('?' DENOTES GARBAGE VALUE) 
    x++
    j++;
    j=1 |   1    <   3   |   CONDITION TRUE
    NOW CHECK IF arr1[1]== arr2[1]
    THAT IS 2 == 1      |   CONDITION FALSE
    j++
    j=2 |   2    <   3   |   CONDITION TRUE
    NOW CHECK IF arr1[1]== arr2[2]
    THAT IS 2 == 3       |   CONDITION FALSE
    j++
    j=3 |   3    <   3   |   CONDITION FALSE
    EXIT THE LOOP
    i++
    
    i=2 |   2   <   3   |   CONDITION TRUE
    j=0 |   0   <   3   |   CONDITION TRUE
    NOW CHECK IF arr1[2]== arr2[0]
    THAT IS 3 == 2      |   CONDITION FALSE
    
    j++;
    j=1 |   1    <   3   |   CONDITION TRUE
    NOW CHECK IF arr1[2]== arr2[1]
    THAT IS 3 == 1      |   CONDITION FALSE
    j++
    j=2 |   2    <   3   |   CONDITION TRUE
    NOW CHECK IF arr1[2]== arr2[2]
    THAT IS 3 == 3       |   CONDITION TRUE
    INSERT arr2[2]  TO THE NEWARRAY[X]
    THAT IS NEWARRAY[2]  BECAUSE THE LAST VALUE OF THE X IS 2
    NOW NEW ARRAY BECOMES {1,2,3}
    x++
    
    j=3 |   3    <   3   |   CONDITION FALSE
    EXIT THE LOOP
    i++
    i=3 |   3   <   3   |   CONDITION FALSE
    EXIT THE LOOP
   */
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
           if(arr1[i] == arr2[j]){
            newA[x]=arr2[j];
            x++;
           }
        }
        
    }


    /*
    THIS LOOP IS TO CHECK DUPLICATE ELEMENT IN THE ARRAY, IF EXSITS THIS LOOP REMOVE THAT ELEMENT FROM THE ARRY.
    INITIALISE i =  0
    WE HAVE NEWARRAY =  {1,2,3}
    WE HAVE VALUE OF X =   3 FROM ABOVE LOOP
    LET RUN THE  LOOP TO CHECK FOR DUPLICATE ELEMENTS
    i  =    0   |   0   <   3   |   CONDITION TRUE
        j =  1+0    |   1   <   3   |   CONDITION TRUE
        NOW CHECK IS NEWARR[i]== NEWARR[J]
        THAT IS 
        1   ==  2   |   CONDITION FALSE
        j++
        j  = 1+1    |   2   <   3   |   CONDITION TRUE
        NOW CHECK IS NEWARR[i]== NEWARR[J]
        THAT IS 
        1   ==  3   |   CONDITION FALSE
        j++
        j  = 2+1    |   3   <   3   |   CONDITION FALSE
        EXIT THE LOOP
        i++
    i  =    1   |   1   <   3   |   CONDITION TRUE
        j =  1+1    |   2   <   3   |   CONDITION TRUE
        NOW CHECK IS NEWARR[1]== NEWARR[2]
        THAT IS 
        2   ==  3   |   CONDITION FALSE
        j++
        j  = 1+2    |   3   <   3   |   CONDITION FALSE
        EXIT THE LOOP
        i++
    i  =    2   |   2   <   3   |   CONDITION TRUE
        j =  1+2    |   3  <   3   |   CONDITION FALSE
        EXIT THE LOOP
        i++
    i  =    3   |   3   <   3   |   CONDITION FALSE
    EXIT THE LOOP


    -----------------------------------------------------------
    LET A CASE WHERE ARRAY CONTAINs DUPLICATE ELEMENT 
    LIKE NEWARR[]={1,2,3,2}
    SIZE = 4

    INITIALISE i =  0
    WE HAVE NEWARR[]={1,2,3,2}
    LET RUN THE  LOOP TO CHECK FOR DUPLICATE ELEMENTS
    i  =    0   |   0   <   4   |   CONDITION TRUE
        j =  1+0    |   1   <   4   |   CONDITION TRUE
        NOW CHECK IS NEWARR[i]== NEWARR[J]
        THAT IS 
        1   ==  2   |   CONDITION FALSE
        j++
        j  = 1+1    |   2   <   4   |   CONDITION TRUE
        NOW CHECK IS NEWARR[i]== NEWARR[J]
        THAT IS 
        1   ==  3   |   CONDITION FALSE
        j++
        j  = 1+2    |   3   <   4   |   CONDITION TRUE
        NOW CHECK IS NEWARR[i]== NEWARR[J]
        THAT IS 
        1   ==  2   |   CONDITION FALSE
        j++

        j  = 3+1    |   4   <   4   |   CONDITION FALSE
        EXIT THE LOOP
        i++
    i  =    1   |   1   <   4   |   CONDITION TRUE
        j =  1+1    |   2   <   4   |   CONDITION TRUE
        NOW CHECK IS NEWARR[1]== NEWARR[2]
        THAT IS 
        2   ==  3   |   CONDITION FALSE
        j++
        j  = 1+2    |   3   <   4   |   CONDITION TRUE
        NOW CHECK IS NEWARR[1]== NEWARR[3]
        THAT IS 
        2   ==  2  |   CONDITION TRUE
            NOW RUN A LOOP FROM j = SIZE
            LET P = J ->  3  
            P   =   3 | 3 < 4 | CONDITION TRUE
                NOW UPDATE NEWARR[J] TO NEWARR[J+1]
                THAT IS 
                NEWARR[3]=NEWARR[4]
                NOW  NEWARR[]={1,2,3,?} 
                WHERE "?" DENOTES THE GARBAGE VALUE
                P++
            P = 4   | 4 <   4 | CONDITION FALSE 
            EXIT THE LOOP
            AFTER EXITING 
            UPDATE SIZE OF THE NEWARR WITH SIZE -- NOW SIZE BECOME 3 
            UPDATE j  WITH j -- NOW j BECOME 2 
        
        j++

        j  = 3+1    |   4   <   3   |   CONDITION FALSE
        EXIT THE LOOP

        i++
    i  =    2   |   2   <   3   |   CONDITION TRUE
        j =  1+2    |   3  <   3   |   CONDITION FALSE
        EXIT THE LOOP
        i++
    i  =    3   |   3   <   3   |   CONDITION FALSE
    EXIT THE LOOP


    NOW WE HAVE NEWARR[]= {1,2,3,?} (? DENOTES THE GARBAGE VALUE)
    AND SIZE OF THE ARRAY 3
    WHILE WE PRINT THIS ARRAY USING ANY LOOP.
    LOOP WILL RUN UPTO 3 TO PRINT THE VALUE FROM THE LOOP
    SO WE GET ONLY 
    1   2   3 
    IN ANSWER.
    
    


    */

    for (int i = 0; i < x; i++)
    {
        for (int j = 1+i; j < x; j++)
        {
            if (newA[i]==newA[j])
            {
                for (int k = j; k < x; k++)
                {
                    newA[k]=newA[k+1];
                    
                }
                x--;
                j--;
            }
            
        }
        
    }
    
    for (int i = 0; i < x; i++)
    {
        cout<<newA[i]<< " ";
    }
    
    
}
int main()

{
    int arr1[]={1,2,3,2};
    int arr2[]={1,2,3};
    intersection(arr1,4,arr2,3);
    return 0;
}
