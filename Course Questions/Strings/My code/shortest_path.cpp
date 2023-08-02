#include<bits/stdc++.h>
using namespace std;
void shortest_path(char di[]){
    int n=0,e=0;
    //Assigns first character in input buffer into temp
    char temp=cin.get();
    while(temp!='\0'){
        if(temp=='N'){
            n++;
        }
        else{
            if(temp=='S'){
                n--;
            }
            else{
                if(temp=='E'){
                    e++;
                }
                else{
                    e--;
                }
            }
        }
        temp=cin.get();
    }
    if(n>=0){
        for(int i=0;i<n;i++){
            cout<<"N";
        }
    }
    if(n<0){
        n=(-1)*n;
        for(int i=0;i<n;i++){
            cout<<"S";
        }
    }
    if(e>=0){
        for(int i=0;i<e;i++){
            cout<<"E";
        }
    }
    if(e<0){
        e=(-1)*e;
        for(int i=0;i<e;i++){
            cout<<"W";
        }
    }
}
int main(){
    char di[1000];
    cout<<"Enter: ";
    shortest_path(di);
}