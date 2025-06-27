//Pointer---> pointer is a data type which holds the address of other data types.
#include <iostream>
using namespace std;
int main(){
    // &---> (address of) operator
    int a=1;
    int* b= &a;
    cout<<"The address of a"<<" "<< &a<<endl;
    cout<<"The address of a"<<" "<< b <<endl;

    // *--->(value at) dereference of operator
    cout<<"The value of b"<<" "<< *b <<endl;

    // pointer to pointer 
    int** c = &b;
     cout<<"The address of c"<<" "<< &b <<endl;
      cout<<"The address of c"<<" "<< c <<endl;
      cout<<"The value at address c"<<" "<< *c <<endl;
       cout<<"The value at address value_at(value_at(c)) is "<<" "<< **c <<endl;

    return 0;

}