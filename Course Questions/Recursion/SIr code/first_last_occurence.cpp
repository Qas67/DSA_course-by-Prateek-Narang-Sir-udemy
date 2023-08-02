#include<bits/stdc++.h>
using namespace std;
int first_occ(int arr[],int size,int key){
    // base case (i.e element is not found in array)
    if(size==0){  
        return -1;
    }
    // If element is found at the 0th index of array
    if(arr[0]==key){
        return 0;
    }
    // If element is not found at the 0th index of current array then we make call to the array 
    int subindex= first_occ(arr+1,size-1,key);
    // If elemnt is not found till we search the last element then -1 will be returned(i.e if size==0) and if -1 is returned then we will also return -1
    if(subindex==-1){
        return -1;
    }
    // if some subindex is returned then we will return subindex+1
    else{
        return (subindex+1);
    }
}
int last_occ_my_try(int arr[],int size,int key){
    if(size==0){
        return -1;
    }
    if(arr[size-1]==key){
        return size-1;
    }
    int subindex= last_occ_my_try(arr,size-1,key);
    return subindex;
}
int last_occ(int arr[],int size,int key){
    // In this we check till the array is not empty
    if(size==0)   
    return -1;
    // In this we first ask the subproblem that at which index the key is present
    int index=last_occ(arr+1,size-1,key);  
    // In this if subproblem returns some index that means the element is present in subproblem so we simply return [index(index returned by subproblem)+1]
    if(index!=-1)  
    return index+1;
    // In this if subproblem returns -1 then it means that subproblems doesnt have the key then we will check the element at 0th index of our array if the key is present then we will return 0 otherwise we will return -1 as eleemnt is not present
    else{
        if(arr[0]==key)
        return 0;
        else
        return -1;
    }
}
int main(){
}