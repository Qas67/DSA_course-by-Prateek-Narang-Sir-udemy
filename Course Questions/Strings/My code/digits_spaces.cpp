#include<bits/stdc++.h>
using namespace std;
vector<int> no_digit(char sent[]){
    // It reads input from user and stores it into input buffer and assign the first character in the temp;
    char temp=cin.get();
    vector<int>v1(3,0);
    while(temp!='\n'){
        if(temp>='0' and temp<='9'){
            (v1[0])++;
        }
        if((temp>='a' and temp<='z') or (temp>='A' and temp<='Z')){
            (v1[1])++;
        }
        if(temp==' '){
            (v1[2])++;
        }
        //It is used to read other character
        temp=cin.get();              
    }
    return(v1);
}
int main(){
    cout<<"Enter: ";
    char sent[1000];
    vector<int>v1=no_digit(sent);
    cout<<"No. of Alphabets are: "<<v1[1]<<" No. of Digits are: "<<v1[0]<<" No. of spaces are: "<<v1[2];
}