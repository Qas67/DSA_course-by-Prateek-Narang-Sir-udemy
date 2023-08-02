#include<iostream>
#include "list.h"
using namespace std;
int main(){
    LList l1;
    l1.push_back(2);
    l1.push_front(1);
    l1.push_back(3);
    l1.insert(4,3);
    l1.insert(5,2);
    l1.print();
    cout<<endl;
    int a=l1.search(5);
    if(a==-1){
        cout<<"The element is not present";
    }
    else{
        cout<<"The element is present at "<<a;
    }
    cout<<endl;
    bool b1=recursive_search(l1.begin(),5);
    cout<<b1<<endl;
    l1.reverse_ll();
    l1.print();
    cout<<endl;
}
