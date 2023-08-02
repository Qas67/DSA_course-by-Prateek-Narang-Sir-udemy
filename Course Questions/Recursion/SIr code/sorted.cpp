#include<bits/stdc++.h>
using namespace std;
bool sorted(int arr[],int n){  //n is the number of elements that the array currently has
    if(n==1){      //base case i.e only 1 element is present in array
        return true;
    }
    if(arr[0]<=arr[1] && sorted(arr+1,n-1)){  //recursive case inthis we are checking whether the rest of array is sorted or not with the help of sorted function and as we have pass the address of arr+1
        return true;
    }
    return false;
}
bool sorted2(int arr[],int i,int n){
    if(i==n-1){                               // In this i is pointing to last index of array i.e only one element is left
        return true;
    }
    if(arr[i]<=arr[i+1] and sorted2(arr,i+1,n)){
        return true;
    }
    return false;

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
}