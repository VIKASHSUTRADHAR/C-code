#include <iostream>
using namespace std;
class employee{
    public:
    int a,b,c;
    void setData(int a1,int b1,int c1);
    void getData(){
        cout<<"The empId is "<<a<<endl;
        cout<<"The name is "<<b<<endl;
        cout<<"The dpt is "<<c<<endl;
    }
};
void employee :: setData(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}


int main(){
    employee tanvir;
     tanvir.a=123456;
      tanvir.b=1;
       tanvir.c=01;
      // tanvir.setData(1,2,3); //we can define public class in this way also
       tanvir.getData();
    return 0 ;
}