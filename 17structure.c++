//struct- it is define as different data type are use in structure
#include<iostream>
using namespace std;
typedef struct employee { // we can write---> struct employee
    int emid;
    char favchar;
    float salary;
}em;
int main(){
    struct employee ram;
    em syam; // using typedef so short of struct employee
    struct employee rohan;
    ram.emid=123456;
    ram.favchar='c';
    ram.salary=1200.3;
    cout<<"The value of ram "<<endl;
    cout<<"The ram detail is "<<ram.emid<<endl;
    cout<<"The ram detail is "<<ram.favchar<<endl;
    cout<<"The ram detail is "<<ram.salary<<endl;

     syam.emid=3456;
    syam.favchar='d';
    syam.salary=1203.3;
     cout<<"The value of syam "<<endl;
    cout<<"The syam detail is "<<syam.emid<<endl;
    cout<<"The syam detail is "<<syam.favchar<<endl;
    cout<<"The syam detail is "<<syam.salary<<endl;

    rohan.emid=323456;
    rohan.favchar='e';
    rohan.salary=1300.3;
     cout<<"The value of rohan "<<endl;
    cout<<"The rohan detail is "<<rohan.emid<<endl;
    cout<<"The rohan detail is "<<rohan.favchar<<endl;
    cout<<"The rohan detail is "<<rohan.salary<<endl;

    return 0;
}