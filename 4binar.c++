//nesting of member function
#include<iostream>
#include<string>
using namespace std;
class binary {
    string s;
    void chk_bin(void);//make private we cant use from outside
    public:
    void read(void);
    //void chk_bin(void);//public
    void ones_compliment(void);
    void display(void);
};
void binary :: read(void){
    cout<<" The binary number is "<<endl;
    cin>>s;
}
void binary :: chk_bin(void){
    for (int i= 0; i < s.length(); i++){
        if (s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect binary format "<<endl;
            exit(0);
        }
    }
}
void binary :: ones_compliment(void){
    chk_bin(); //nesting of member function
    for(int i= 0; i<s.length(); i++){
        if (s.at(i)=='0'){
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
    }
}
void binary :: display(void){
    cout<<"display binary number "<<endl;
    for (int i = 0; i<s.length(); i++){
        cout<<s.at(i);
    }
    cout<<endl;  
}
int main(){
binary b;
b.read();
//b.chk_bin(); //make private
b.display();
b.ones_compliment();
b.display();
return 0;
}