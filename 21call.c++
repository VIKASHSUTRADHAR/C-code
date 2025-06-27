#include<iostream>
using namespace std;
int sum(int a, int b){
    int c= a+b;
    return c;
}
//This will not swap a and b
void swap(int a, int b){
   int temp = a;           // temp a b
          a=b;             // 4    4  5
          b=temp;         //  4    5  5   
}                         //  4    5  4
//....................................................................................//
//call by reference using pointer
void swapPointer(int* a, int* b){ // swap a and b
   int temp = *a;           // temp a b
          *a= *b;             // 4    4  5
          *b= temp;         //  4    5  5   
}                         //  4    5  4
//......................................................................................//
//call by reference using c++ reference variables
void swapReferenceVar(int &a, int &b){ // swap a and b
   int temp = a;           // temp a b
          a= b;             // 4    4  5
          b= temp;         //  4    5  5   
}                          //  4    5  4
//......................................................................................//
//call by reference using c++ return reference variables
/*int & swapReferenceVar(int &a, int &b){ // swap a and b
   int temp = a;           // temp a b
          a= b;             // 4    4  5
          b= temp;         //  4    5  5   
                           //  4    5  4
        return a;

        }    */                     


int main() {
    int x= 4 , y= 5;
    cout<< "the value of x "<<x<< " The value of y "<<y<<endl;
    //swap(x,y); // this will not swap a and b

    //swapPointer(&x,&y); // swap a and b it take the reference

    swapReferenceVar(x,y); // swap a and b it take the reference var

    //swapReferenceVar(x,y) = 130; // swap a and b it take the return reference var
    cout<< "the value of x "<<x<< " The value of y "<<y<<endl;
cout<<"sum 3 and 10 is "<<sum(3,10);
    return 0;
}

