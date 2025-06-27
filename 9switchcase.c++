//Switch case 
#include<iostream>
using namespace std;
int main() {
    int age;
    cout<<"entre age : ";
    cin>>age;


    switch(age) {
        case 18:
        cout<<"YOU are 18 "<< endl;
        break; // it say that leave this come out without break it print all program

         case 21:
        cout<<"YOU are 21 "<< endl;
        break;

         case 31:
        cout<<"YOU are 31 "<< endl;
        break;

        default:
        cout<<"No special cases "<< endl;
        break;
    }
    return 0;
}