#include<bits/stdc++.h>
using namespace std;
int fibo(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return(fibo(n-1)+fibo(n-2));
}
int main(){
    int n;
    cout<<"Enter the term in the sequence which you want to find: ";
    cin>>n;
    int num=fibo(n);
    cout<<"The "<<n<<"'th term of fibonacci sequence is "<<num;
}