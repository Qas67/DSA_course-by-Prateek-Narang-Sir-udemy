#include<bits/stdc++.h>
using namespace std;
int main(){
    char temp=cin.get(); 
    int len=1;
    while(temp!='#'){
        len++;
        cout<<temp;
        temp=cin.get();
    }
    cout<<endl<<"Length "<<len;
}

/* #include<bits/stdc++.h>
using namespace std;
int main(){
    char temp;
    cout<<"Enter: ";
    cin>>temp;
    while(temp!='\n'){
        cout<<temp;
        temp=cin.get();
    }
}*/
