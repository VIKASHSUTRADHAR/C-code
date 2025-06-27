//Break - It break or stop the loop according to condition 
/*#include<iostream>
using namespace std;
int main () {
    int i;
    for(int i=0;i<=10;i++){
        //cout<<i<<endl; // It will print 0 to 3
         if(i==3){
            break;
        }
        cout<<i<<endl; // It will print 0 to 2
        
    }
    return 0;
}*/
//*************************************************************************************************

// Continue - It skip the number in loop then continue the loop according to the condition

#include <iostream>
using namespace std;
int main(){
    int i;
    for(int i=0;i<=10;i++){
         if(i==3){
            continue;
        }
        cout<<i<<endl; 
    }
    
    return 0;
}