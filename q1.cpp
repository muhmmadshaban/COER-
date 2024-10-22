/* Question 1: Suppose you have two functions: one uses and the other uses.	
Both functions attempt to modify the value of an integer variable passed as an argument.
 After calling both functions with the same initial value of the variable, 
you observe that the variable's value changed after the second function call, but not after the first one.
 Explain why this happens,detailing the difference between and mechanisms, and how they affect the variable's state.*/
 #include<iostream>
 using namespace std;
 void  oneUses(int a){
    a=5;
 }
 void  otherUses(int &a){
    a=5;
 }
 int main()
 {
    int a=10;
    oneUses(a);
    /* NOT UPDATING THE ORIGINAL VALUE BECAUSE WHEN WE CALL THE FUCTION AND PASS SOME ARGUNMENT TO THAT FUNCION,
    IT MAKE THE COPY OF THE ARGUMENT AND PERFORM UPDATION AND CALCULATION THE COPY VALUE NOT ON THE ORIGNAL VALUE,*/
    cout<<a<<endl;
    otherUses(a);
    /* 
    IT UPDATE THE ORIGINAL VALUE BECAUSE IT TAKE THE ADDRESS OF THE VARIABLE INSTEAD OF THE VALUE,
    AND PERFORM ACTION ON THE VALUE PRESENT ON THE ADDRRESS. SO THATS WHY, WHEN THIS FUNCTION CALL, IT UPDATE THE ORIGINAL VALUE WITH NEW ONE*/
    cout<<a<<endl;
    
     return 0;
 }