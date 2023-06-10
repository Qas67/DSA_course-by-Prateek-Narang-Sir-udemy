#include<bits/stdc++.h>
using namespace std;
void convert_binary(int n){
    int last_bit;
    vector<int>v1(1);
    while(n!=0){
        last_bit= (n&1);
        v1.push_back(last_bit);
        n=n>>1;
    }
    reverse(v1.begin(),v1.end());  // The problem in this code is that as when vector would expand its size then the v1.end() iterator would point to the location next to the last element in vector but there can be case when there is gr*/
    for(int i=0;i<v1.size();i++){
        cout<<v1[i];
    }
}
int main(){
    cout<<"Enter number: ";
    int n;
    cin>>n;
    convert_binary(n);
}