#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter number: ";
    int n,temp,i;
    cin>>n;
    /* Wrong Code
    for( i=1;i<50;i++){
        temp=n;
        temp=temp>>i;
        if(temp==1){
            break;
        }
    }
    if(i>50)
    cout<<"Not a power of 2";
    else
    cout<<"power of 2";
    */
   if((n & (n-1))==0 ){
    cout<<"power of 2";
   }
   else{
    cout<<"Not a power of 2";
   }
}