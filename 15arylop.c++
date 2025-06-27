//using loops in array
// using for loop
#include<iostream>
using namespace std;
int main(){
    //Using for loop
   int marks[4]={3,4,5,6};
   cout<<"Using for loop"<<endl;
    for(int i= 0; i<4 ; i++){
      cout<<"The marks is"<<" "<< marks[i] << endl;
    }
    //Using while loop
    int mathmarks[]={8,9,10,11};
    cout<<"Using while loop"<<endl;
    int i=0;
    while(i<4){
        cout<<"The mathmarks is"<<" "<< mathmarks[i] << endl;
        i++;
    }
    //Using do while loop
    int sciencemarks[]={18,19,13,16};
    cout<<"Using do while loop"<<endl;
    int a=0;
    do{
         cout<<"The mathmarks is"<<" "<< sciencemarks[a] << endl;
        a++;
    }
    while(a<4);
    return 0;
}