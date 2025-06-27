#include<iostream>
using namespace std;
//**********Build in Data type***********
//int c = 10;
int main (){
    /*int a,b,c;
    cout<<"Entre the value of a"<<endl;
    cin>>a;
    cout<<"Entre the value of b"<<endl;
    cin>>b;
    c= a+b;
    cout<<"The sum is"<<c<<endl;
   cout<<"The global c is"<<::c<<endl; 

   //***********literals float and long double size of ********
   float d = 34.46f;
   long double e = 34.46L;
   cout<<"The value of d"<<d<<endl<<"The value of e"<<e<<endl;
   cout<<"The size of 34.46 is"<<sizeof(34.46)<<endl;
   cout<<"The size of 34.46f is"<<sizeof(34.46f)<<endl;
   cout<<"The size of 34.46F is"<<sizeof(34.46F)<<endl;
   cout<<"The size of 34.46l is"<<sizeof(34.46l)<<endl;
   cout<<"The size of 34.46L is"<<sizeof(34.46L)<<endl; 

   //*************Reference Variable*****************

   int x = 455;
   int & y = x;
   cout<<"The value x is"<<x<<endl<<"The value y is"<<y<<endl;*/

   //**************** Typecasting*******************

   int l= 45;
   float z = 45.50;
   cout<<"The typrcast of l is"<<float(l)<<endl;
   cout<<"The typecast of z is"<<(int)z<<endl;
   int(c)= int(z);
   cout<<"The sum is"<<(l+z)<<endl;
   cout<<"The sum is"<<(l+int(z))<<endl;
   cout<<"The sum is"<<(l+(int)z)<<endl;

    return 0;

}