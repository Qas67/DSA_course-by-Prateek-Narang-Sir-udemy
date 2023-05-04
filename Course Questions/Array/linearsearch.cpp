#include<bits/stdc++.h>
using namespace std;
int linear_search(vector<int>& v1,int key){
    for(int i=0;i<v1.size();i++){
        if(v1[i]==key){
            return i;
        }
}
return -1;
}
int main(){
    cout<<"Enter the size of array: ";
    int size,key,x;
    cin>>size;
    vector<int>v1(size);
    cout<<"Enter the elements of array: ";
    for(int i=0;i<size;i++){
        cin>>v1[i];
    }
    cout<<"Enter the key: ";
    cin>>key;
    int index=linear_search(v1,key);
    if(index==-1){
        cout<<"The element is not present";
    }
    else{
        cout<<"The element is present at index "<<index;
    }
}