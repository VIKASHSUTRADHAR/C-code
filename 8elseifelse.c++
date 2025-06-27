//Using selection operator if, else if , else .
#include<iostream>
using namespace std;
int main() {
    int age;
    cout<<"Entre the age : ";
    cin>>age;
    if((age<18) && (age>0)) {
        cout<<"you are kid";
    }
    else if(age==18) {
        cout<<"you are not eligible for party";
    }
    else if(age<0) {
        cout<<"you are not born";
    }
    else {
        cout<<"you are eligible";
    }
    return 0;
}