#include<bits/stdc++.h>
using namespace std;
int count_bits(int n){
    int count;
    while(n>0){
        int last_bit=(n &1);
        count=count+last_bit;
        n=n>>1;
    }
    return count;
}
int main(){
    cout<<"Enetr number:";
    int n;
    cin>>n;
    int count=0;
    while(n!=0){   //We used while loop because we donot know that how manytims that loop will be repeated but one thing we know for sure that we have to run the loop till n==0
        int bit=(n & 1);
        if(bit==1){
            count++;
        }
        n=n>>1;
    }
    cout<<count;
}