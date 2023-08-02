#include<bits/stdc++.h>
using namespace std;
void number_spell(int n){
    //Base case
    if(n==0){
        return;
    }
    int last_digit,r_n;
    //It gives the last digit of the given number
    last_digit=n%10;
    //It gives the remaining number
    r_n=n/10;
    number_spell(r_n);
    switch (last_digit){
        case 0:
        cout<<"Zero ";
        break;
        case 1:
        cout<<"One ";
        break;
        case 2:
        cout<<"Two ";
        break;
        case 3:
        cout<<"Three ";
        break;
        case 4:
        cout<<"Four ";
        break;
        case 5:
        cout<<"Five ";
        break;
        case 6:
        cout<<"Six ";
        break;
        case 7:
        cout<<"Seven ";
        break;
        case 8:
        cout<<"Eight ";
        case 9:
        cout<<"Nine ";
        break;
    }
}
int main(){
    cout<<"Number: ";
    int n;
    cin>>n;
    number_spell(n);

}