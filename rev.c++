#include<iostream>
using namespace std;
//opps binary number using nesting of member
class binary{
  string s;
  public :
  void read(void);
  void chk_bin(void);
  void ones_complement (void);
  void display(void);
};
void binary :: read(void){
  cout<<"Enter binary number "<<endl;
  cin>>s;
}
void binary :: chk_bin(void){
  for(int i=0; i<s.length(); i++){
    if (s.at(i)!='0' && s.at(i)!='1'){
      cout<<"Incorrect binary format "<<endl;
    }
  }
}
void binary :: ones_complement(void){
  for (int i=0; i<s.length();i++){
    if (s.at(i)=='0'){
      s.at(i)='1';
    }
    else{
      s.at(i)='0';
    }
  }
}
void binary :: display(void){
  for(int i=0;i<s.length();i++){
    cout<<s.at(i);
  }
  cout<<endl;
}
int main (){
  binary b;
  b.read();
  b.chk_bin();
  b.display();
  b.ones_complement();
  b.display();
  return 0;
}