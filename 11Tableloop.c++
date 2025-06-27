// Table using  for loop
/*#include<iostream>
using namespace std;
int main() {
 int n;
 cout<<"Entre number ";
 cin>>n;

 for (int i=1; i<=10; i++){
    cout<<n << " * "<< i << " "<< "= " << i*n<<endl;
 }


    return 0;
}*/

// Table using while loop & do while loop

#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Entre the table ";
   cin>>n;
// Using while loop
   /*int i= 1;
   while(i<=10){
      cout<<n << " * " << i << " = "<< n*i << endl;
      i++;
   }*/

// Using do while loop
int i= 1;
do{
   cout<<n << " * " << i << " = "<< n*i << endl;
      i++;
}
   while(i<=10);
   return 0;
}