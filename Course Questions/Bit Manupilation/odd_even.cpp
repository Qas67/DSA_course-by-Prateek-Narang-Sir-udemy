#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"number: ";
    int n;
    cin>>n;
    if(n&1==1){   // as 1 is 0000....001 so (doing 'and' of the given number and 1) will be equal to 1 if the last bit of number is 1 (i.e. number is odd) and it will be equal to 0 if the last bit of number is 0(i.e number is even)  
        cout<<"odd";
    }
    else
    cout<<"even";
}