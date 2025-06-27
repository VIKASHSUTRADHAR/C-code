//Array- It is a collection of items of similar type storage in contiguos memory location.
#include<iostream>
using namespace std;
int main(){
    int marks[]= {23,43,53,63};
    cout<<"The marks is"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    // or we can write array in other format
    int mathmarks[4];
    mathmarks[0]=3;
    mathmarks[1]=4;
    mathmarks[2]=5;
    mathmarks[3]=6;
    cout<<"math marks is"<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;
    return 0;
}