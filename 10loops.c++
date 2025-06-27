#include<iostream>
using namespace std;
int main(){

    /*Types of loops
       for loop
       while loop
       do while loop
       */ 
      //for loop 
      /*syntax for(initialization;condition;updation){
                 loop body
                 }*/

    //for(int i= 0;i<11;i++){
       // cout<<i<<endl;
    //}
    //***************************************************************************

    /*while loop
       syntax while(condition){
                   loop body
                   }*/
       /* int i=0;
        while(i<=10){
            cout<<i<<endl;
            i++;
        }*/

    /*do while loop important if the condition is fales it print at least 1 number
             syntax initilization
                     do{
                     loop body & updation 
                     }while();(condition)*/
        int i=1;
        do{
            cout<<i<<endl;
            i++;
        }while(i<=10);


    return 0;

}