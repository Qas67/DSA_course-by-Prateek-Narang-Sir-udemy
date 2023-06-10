#include<bits/stdc++.h>
using namespace std;
void reverse_array_sir(vector<int>& v1){
    int s=0, e=v1.size()-1;
    while(s<e){
        swap(v1[s],v1[e]);
        s++;
        e--;
    }
}
void reverse_array_me(vector<int>& v1){
    int s=0,i=0,e=v1.size()-1;
    int j;
    while(i<=(s+e)/2){
        j=v1.size()-1-i;
        swap(v1[i],v1[j]);
        i++;
    }
}
int main(){
    cout<<"Enter the size of array: ";
    int size;
    cin>>size;
    vector<int>v1(size);
    cout<<"Enter the elements of array: ";
    for(int i=0;i<size;i++){
        cin>>v1[i];
    }
    reverse_array_sir(v1);
    cout<<"The array after reversing is: ";
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    reverse_array_me(v1);
    cout<<"The array after reversing is: ";
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
}