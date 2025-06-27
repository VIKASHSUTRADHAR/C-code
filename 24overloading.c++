#include<iostream>
using namespace std;

int sum (int a , int b){
    return a+b;
}

int sum(int a , int b, int c){
    return a+b+c;
}

int volume(int r, int h){
    return (3.14*r*r*h);
}
int volume(int d){
    return (d*d*d);
}
int volume(int l, int B, int h){
    return (l*B*h);
}
int main(){
    int a,b,c;
    cout<<"Entre numbera,b,c "<<endl;
    cin>>a>>b>>c;
    cout<<"The sum of a and b "<<sum(a,b)<<endl;
    cout<<"The sum of a,b and c is "<<sum(a,b,c)<<endl;
    int r,h,l,B,d;
    cout<<"Entre number r "<<endl;
    cout<<"Entre number h "<<endl;
    cout<<"Entre number l "<<endl;
    cout<<"Entre number B "<<endl;
    cout<<"Entre number d "<<endl;
    cin>>r>>h>>l>>B>>d;
    cout<<"The volume of cylinder "<<volume(r,h)<<endl;
    cout<<"The volume of cuboid "<<volume(l,B,h)<<endl;
    cout<<"The volume of cube "<<volume(d)<<endl;
    return 0;
}