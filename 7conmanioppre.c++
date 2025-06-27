//constant operator
#include <iostream>
#include <iomanip> //using setw manipulator 
using namespace std;
int main() {
   /* int a=1;
    cout<<"The value of a was : "<<a<<endl;
    a=3;
    cout<< "The value of a is : "<<a<<endl;

    // using constant 
    const int a=1;
    cout<<"The value of a was : "<<a<<endl;
    a=3; // It does not print because the value of a is constant
    cout<< "The value of a is : "<<a<<endl;*/

    //Manipulator ex- endl , setw
     int a=1, b=23, c=333;
    cout<<"The value of a was : "<<a<<endl;
    cout<< "The value of a was : "<<b<<endl;
    cout<< "The value of a was : "<<c<<endl;
    //using setw manipulator

    cout<<"The value of a was : " <<setw(4)<<a<<endl;
    cout<< "The value of a was : "<<setw(4)<<b<<endl;
    cout<< "The value of a was : "<<setw(4)<<c<<endl;

// operator precedance 
float x=3.1,y=8.3,z=6.6;
float sum;
sum = x*y+z-44+4;
cout<<"The sum is : "<<sum;
    return 0;
}