#include<bits/stdc++.h>
using namespace std;
int facto(int n){
    if(n==0){      //base case
        return 1;
    }
    n=n*facto(n-1); //recursive case
    return n;
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int fact=facto(n);
    cout<<"THe factorial of "<<n<<" is "<<fact;

}
