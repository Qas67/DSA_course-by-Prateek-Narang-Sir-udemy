#include<iostream>
using namespace std;
void printpair(int *,int,int * );
int main()
{
 int i,n;
 cout<<"Enter the size of array: ";
 cin>>n;
 int arr[n];
 cout<<"Enter the elements of array: ";
 for(i=0;i<n;i++)
 {
    cin>>arr[i];
 }
 printpair(&arr[0],n,&arr[n-1]);
}
void printpair(int *p,int n, int *end)
{
    int *q;
    q=p+1;
    while(p!=end)
    {
        while(q!=end)
        {
            cout<<"The pairs are "<<"("<<(*p)<<","<<(*q)<<")"<<endl;
            q=q+1; 
        }
        p=p+1;
        q=q+1;
    }
}
