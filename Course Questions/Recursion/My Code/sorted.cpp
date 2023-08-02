#include<bits/stdc++.h>
using namespace std;
int sorted(int * arr,int n){
    if(n==1){          //Base case when when we have to check for first and second element of array
        return 1;
    }
    if(arr[n-1]>=arr[n-2]){   // To check if the array is sorted in ascending order
        int t=sorted(arr,n-1);
        return (1+t);
    }
    else{
        return 0;
    }
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
    int z=sorted(arr,n);
    if(z==n){
        cout<<"The given array is sorted";
    }
    else{
        cout<<"The given array is not sorted";
    }
}