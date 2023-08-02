#include<bits/stdc++.h>
using namespace std;
void shortest_path(char route[]){
    int n=0,e=0;
    for(int i=0;route[i]!='\0';i++){
        switch(route[i]){
            case('N'):
            n++;
            break;
            case('S'):
            n--;
            break;
            case('E'):
            e++;
            break;
            case('W'):
            e--;
            break;

        }
    }
    cout<<"The final coordinate of the is "<<n<<","<<e;
    if(n>=0 and e>=0){
        while(n!=0){
            cout<<"N";
            n--;
        }
        while(e!=0){
            cout<<"E";
            e--;
        }
    }
    if(n>=0 and e<=0){
        while(n!=0){
            cout<<"N";
            n--;
        }
         while(e!=0){
            cout<<"W";
            e++;
        } 
    }
    if(n<=0 and e>=0){
        while(n!=0){
            cout<<"S";
            n++;
        }
         while(e!=0){
            cout<<"E";
            e--;
        }
    }
    if(n<=0 and e<=0){
         while(n!=0){
            cout<<"S";
            n++;
        }
         while(e!=0){
            cout<<"W";
            e++;
        }
    }
}
int main(){
    char route[1000];
    cout<<"Enter: ";
    cin.getline(route,1000);
    shortest_path(route);
}
