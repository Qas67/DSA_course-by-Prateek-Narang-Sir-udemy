#include<bits/stdc++.h>
using namespace std;
int get_sir(int n,int i){
    int mask=(1<<i);  // It is same as finding 2^i
    int z=n & mask;
    return z;
}
int get_i(int n,int i){
    int z=1;
    for(int t=1;t<=i;t++){   // For finding 2^i
        z=2*z;
    }
    int c= n & z;
    if(c==0){
        return 0;
    }
    else 
    return 1;
}
void set_i(int *n,int i){
    int mask=(1<<i);
    (*n)=(*n)|mask;
}
void clear_i(int *n,int i){
    int mask= ~(1<<i);
    (*n)=(*n)&mask;
}
void update_i(int *n,int i,int v){
    if(v==0){
        clear_i(n,i);
    }
    else
    set_i(n,i);
}
void update_sir(int *n,int i,int v){
    clear_i(n,i);
    if(v==0){
        (*n)=(*n)|0;
    }
    else{
        (*n)=(*n)|(1<<i);
    }
}
void clear_last_i(int *n,int i){
    int mask=(~0)>>i;
    *n=(*n)&mask;
}
void clear_range(int *n,int i,int j){
    int s1= -1<<(max(i,j)+1);
    int s2= ~(-1<<(min(i,j)));
    int mask= s1|s2;
    (*n)=(*n)&mask;
}
void clear_range_sir(int *n,int i,int j){
    int a= -1<<(max(i,j)+1);
    int b= (1<<i)-1;
    int mask=a|b;
    (*n)=(*n)&mask;
}
void replace_bits(int *n,int *m,int i,int j){
    clear_range(n,i,j);
    (*m)=(*m)>>i;
    (*n)=(*n)|(*m);
}
void replace_bits_sir(int *n,int *m,int i,int j){
    
}
int main(){
    cout<<"Number and bit ";
    int n,i;
    cin>>n>>i;
    int bit=get_i(n,i);
    if(bit==0)
    cout<<"i'th bit 0";
    else
    cout<<"i'th bit 1";
    cout<<endl;
    set_i(&n,i);
    cout<<"after setting "<<n<<endl;
    clear_i(&n,i);
    cout<<"after clearing "<<n<<endl;
    clear_last_i(&n,i);
    cout<<"after clearing last i bits"<<n<<endl;
    cout<<"Enter i and j: ";
    int j;
    cin>>i>>j;
    clear_range(&n,i,j);
    cout<<"after clearing range of bits my"<<n<<endl;
    clear_range_sir(&n,i,j);
    cout<<"after clearing range of bits my"<<n<<endl;
}
