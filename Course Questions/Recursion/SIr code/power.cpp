#include<bits/stdc++.h>
using namespace std;
int power(int a,int n){
    // base case
    if(n==0){
        return 1;
    }
    int t= power(a,n-1);
    return (a*t);
}
int power_opt(int a,int n){
    //base case
    if(n==0){
        return 1;
    }
    //base case
    if(n==1){
        return a;
    }
    int t=power_opt(a,(n/2));
    if(n%2){
        // n is odd
        return (a*t*t);
    }
    else{
        // n is even
        return(t*t);
    }
}
int main(){

}