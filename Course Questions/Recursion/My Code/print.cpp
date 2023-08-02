#include<bits/stdc++.h>
using namespace std;
void printb(int n){ // printing from n to 1
    if(n==1){
    cout<<1<<endl;
    return ;
    }
    cout<<n<<endl;
    printb(n-1);
}

void printfo(int n){
    if(n==1){
        cout<<1<<endl;
        return;
    }
    printfo(n-1);
    cout<<n<<endl;
}

int main(){
    cout<<"Enter a number: ";
    int n;
    cin>>n;
    printb(n);
    printfo(n);
}