#include<bits/stdc++.h>
#include"vector.h"
using namespace std;
int main(){
    Vector<int> v1;
    v1.push_back(1);
    v1.push_back(1);
    v1.push_back(1);
    v1.push_back(1);
    v1.push_back(1);
    cout<<v1.size()<<endl;
    cout<<v1.capacity()<<endl;
    v1.pop_back();
    cout<<v1.size()<<endl;

}
