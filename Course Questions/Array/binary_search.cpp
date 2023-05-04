#include<bits/stdc++.h>
using namespace std;
int binary_search(vector<int>& v1,int key){
    int s=0,e=(v1.size()-1);
    int mid;
    while(s<=e){
        mid=(s+e)/2;
        if(v1[mid]==key){
            return mid;
        }
        else if(v1[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
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
    cout<<v1.size()<<endl;
    cout<<"Enter the key: ";
    cin>>key;
    int index=binary_search(v1,key);
    cout<<"The element is present at index: "<<index;
}
