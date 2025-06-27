//pointer in array
#include<iostream>
using namespace std;
int main(){
    int marks[]= {5,6,7,8};
    int* p= marks;
    cout<<*p++<<endl;
    //cout<<*p<<endl;
    cout<<*(++p)<<endl;
    cout<<*(++p)<<endl;
    
    //Using dereference(*)
    /*cout<<"The value at *p is "<<*p<<endl;
    cout<<"The value at *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value at *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value at *(p+3) is "<<*(p+3)<<endl;*/
    return 0;

}