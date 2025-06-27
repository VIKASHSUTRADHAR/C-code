//Union- it is define as it use one data type at a time if we use other variable at same time it overright it.
#include<iostream>
using namespace std;
union student{
    int stdname;
    char sec;
    float roll;
};
int main(){
    union student ram;
    //ram.stdname=123; 
    //cout<<"name of the student "<<ram.stdname<<endl;
    //ram.stdname=123;
    //ram.sec='A'; // it will give garbage value 
    //cout<<"name of the student "<<ram.stdname<<endl;
    ram.stdname=123;
    ram.sec='A'; // it will over write 
    cout<<"name of the student "<<ram.sec<<endl;
    return 0;
} 