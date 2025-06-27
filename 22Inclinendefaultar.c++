#include<iostream>
using namespace std;

  inline int product(int a, int b){ // do not use in recursion or static function inline function 
       // static int c= 0;// Tis execue only once
       // c= c+1; // Next time function will run , the value of c will retained
        //  return a*b+c;
        return a*b;
  }

  //.............................................................................//
  // Default argument
  float moneyreceived(int currentmoney, float factor=1.04){
    return currentmoney*factor;
  }
  int main(){
    int a,b;
    cout<<"Entre a entre b"<<endl;
    cin>>a>>b;
 cout<<"The value of a and b is "<<product(a,b)<<endl;
 cout<<"The value of a and b is "<<product(a,b)<<endl;
 cout<<"The value of a and b is "<<product(a,b)<<endl;
 cout<<"The value of a and b is "<<product(a,b)<<endl;  
 cout<<"The value of a and b is "<<product(a,b)<<endl;
 cout<<"The value of a and b is "<<product(a,b)<<endl;
 //.......................................................................//
 //default
 int money = 1000;
 cout<<"if you have "<<money<<" your bank account will receive " <<moneyreceived(money)<<endl;
 cout<<"for VIP you have "<<money<<" your bank account will receive " <<moneyreceived(money,1.10)<<endl;


    return 0;
}