#include<iostream>
using namespace std;
int main() {
    int a=1, b=3;
//Arithematic operator
cout<<"Arithematic operator"<<endl;
cout<<"The value of a+b ="<<(a+b)<<endl;
cout<<"The value of a-b ="<<(a-b)<<endl;
cout<<"The value of a*b ="<<(a*b)<<endl;
cout<<"The value of a/b ="<<(a/b)<<endl;
cout<<"The value of a%b ="<<(a%b)<<endl;
cout<<"The value of a++ ="<<(a++)<<endl;
cout<<"The value of a-- ="<<(a--)<<endl;
cout<<"The value of ++a ="<<(++a)<<endl;
cout<<"The value of --a ="<<(--a)<<endl;
cout<< endl;

// Assignment operator - It assign the value of varibles
// ex - int a =1 , char c= '@' , etc

//comparision operator
cout<<"Comparision operator"<<endl;
cout<<"The value of a==b ="<<(a==b)<<endl;
cout<<"The value of a>=b ="<<(a>=b)<<endl;
cout<<"The value of a<=b ="<<(a<=b)<<endl;
cout<<"The value of (a!=b) ="<<(a!=b)<<endl;
cout<<"The value of a>b ="<<(a>b)<<endl;
cout<<"The value of a<b ="<<(a<b)<<endl;
cout<< endl;
//Logical operator
cout<<"Logical operator"<<endl;
cout<<"If the value of a==b && a<b ="<<((a==b)&&(a<b))<<endl;
cout<<"If the value of a==b || a<b ="<<((a==b)||(a<b))<<endl;
cout<<"If the value of !a==b ="<<(!(a==b))<<endl;


return 0;
}