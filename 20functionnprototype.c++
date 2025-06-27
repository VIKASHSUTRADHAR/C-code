//function
#include<iostream>
using namespace std;
//int sum(int a, int b){ //function
  //  int c= a+b;
  //return c;
//}
//int sum(int a, int b); // Acceptable
//int sum(int a,b); // not acceptable
int sum(int , int ); // Acceptable
void g();
int main(){
    int num1,num2; //num1 and num2 is actual parameter
    cout<<"Entre number "<<endl;
    cin>>num1;
    cout<<"Entre number "<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1,num2)<<endl;
    g();
    return 0;

}
int sum(int a, int b){ //prototype // a and b are formal parameter which will take the value form actual parameter.
    int c= a+b;
    return c;
}
void g(){
  cout << "Hello vikash how are you "<<endl;
}