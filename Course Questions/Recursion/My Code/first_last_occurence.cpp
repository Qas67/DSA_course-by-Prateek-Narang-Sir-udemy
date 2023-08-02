#include<bits/stdc++.h>
using namespace std;
int first(int arr[],int n,int key,int t){  //First occurence
    if(arr[t]==key){
        return t;
    }
    if(t>n-1){
        return -1;
    }
    int z=first(arr,n,key,t+1);
    return z;
}
int last(int arr[],int n,int key,int t){   //last occurence
    if(arr[t]==key){
        return t;
    }
    if(t<0){
        return -1;
    }
    int z=last(arr,n,key,t-1);
    return z;
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elemnets of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"ENter the key: ";
    int key;
    cin>>key;
    int index=first(arr,n,key,0);
    cout<<index<<endl;
    int index2=last(arr,n,key,n-1);
    cout<<index2;
}
