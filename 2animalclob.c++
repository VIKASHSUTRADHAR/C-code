#include<iostream>
using namespace std;
class Animal{
    private:
    string a,b;
    public:
    string c,d;
    void setData(string a1, string b1);
     void getData(){
        cout<<"Type of animal hybrid "<<a<<endl;
         cout<<"Type of animal normal "<<b<<endl;
          cout<<"Type of animal sound "<<c<<endl;
           cout<<"Type of animal speak  "<<d<<endl;

     }
    
};
void Animal::setData(string a1,string b1){
        a=a1;
        b=b1;
     }
int main(){
    Animal dog;
    dog.c = "bark";
    dog.d="bowww";
    dog.setData("super","power");
    dog.getData();
    return 0;
}