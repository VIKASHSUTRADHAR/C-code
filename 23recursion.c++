//factorial in recursion
#include<iostream>
using namespace std;
int factorial (int a) {
   if (a<=1){
       return 1;
   }
    return (a* factorial(a-1));
}
//........................................................................................//
// fibonachi number using recursion
int fib (int n) {
   if (n<=1){
       return 1;
   }
    return (fib(n-2) + fib(n-1));
}
int main() {
    int a , n;
    cout<<"Entre factorial "<<endl;
    cin>>a;
    cout<<"The factorial is "<<factorial(a)<<endl;
    //.....................................................................................//
    cout<<"Entre position of fib "<<endl;
    cin>>n;
    cout<<"The fib number of "<<n<<" is position is "<<fib(n)<<endl;
    return 0;
}