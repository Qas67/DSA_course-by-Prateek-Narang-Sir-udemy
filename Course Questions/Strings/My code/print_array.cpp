// my code
#include<bits/stdc++.h>
using namespace std;
int main(){
    char sent[1000];
    int i=0;
    cout<<"Enter: ";
    //we intialzise it with any character because there might be achance that in garbage value it conatains #
    char temp='1';
    while(temp!='#'){
    // As first we will enter the input into the input buffer(as we enter some input like "Hello then eter new linr character" then first all this will bbe assigned to sent array along with new line characetr then we will be able to enter new input and now we suppose enter "How#" then # will also be assigned to the array confirm by doing dry run) and then temp will be assigned first character of input buffer after this now 
        temp=cin.get();
        sent[i]=temp;
        i++;
    }
    //we do this so that cout will work and i-1 becausee i++ already has happend and at i-1 we want to replace #
    sent[i-1]='\0';
    cout<<sent;
}
// sir programee

#include<bits/stdc++.h>
using namespace std;
int main(){
    char sent[1000];
    char temp=cin.get();
    int len=0;
    while(temp!='#'){
        sent[len++]=temp;
        temp=cin.get();
    }
    sent[len]='\0';
    cout<<sent<<endl<<"Length: "<<len;
}