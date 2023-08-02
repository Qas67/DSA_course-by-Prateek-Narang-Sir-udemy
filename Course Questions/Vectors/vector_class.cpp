#include<bits/stdc++.h>
using namespace std;
class Vector{
    int *ptr;
    int cs;
    int ms;
public:
    Vector(int max_size=1){    // In this we are creating a constructor when the object of this class will be made then i will create a array having maximum size 1 and which is currently empty.  
        cs=0;  // In this if user provides the size of vector then it will be assigned to max_size otherwise its value will be 1
        ms=max_size;
        ptr= new int[ms];
    }
    void push_back(const int d){
        // when array is filled
        if(cs==ms){   //Before adding we need to double the size of vector
            int *oldptr=ptr;  // oldptr points to old array and now ptr wil  point to new array which will be of double size then the previous one
            ms=2*ms;
            ptr= new int[ms];
            for(int i=0;i<cs;i++){   // Copying elements from old array to new array. We run the loop til cs-1 not ms-1 because as the array contain elements till cs-1 index
                *(ptr+i)=*(oldptr+i);
            }
            delete [] oldptr;    // as there is no need of old array so deleting the old array
        }
        // when array is not filled
        *(ptr+cs)=d;   // as if cs=5 then there will be 5 elementgs present in the array and if we want to add new element then it will come a 5th index which is equal to cs and cs++ increses the current size of array as new elemennt is added. 
        cs++;
    }
    void pop_back(){  // Now we will delete the element if there is any element present in array and cs>0 ensures that
       if(cs>0){
        cs--; //by doing cs-- we cannot access the last element of array as 
       }
       else{
        cout<<"The vector is already empty";
       }
    }
    bool is_empty() const{
        if(cs==0){
            return true;
        }
        else return false;
    }
    int front() const{
        return ((*ptr));
    }
    int back() const{  // cs-1 reprsent the index of last element
        if(cs>0){
            return (*(ptr+cs-1));
        }
    }
    int at(int i) const{
        return (*(ptr+i));
    }
    int size() const{
        return cs;
    }
    int capacity() const{
        return ms;
    }
    int operator[](int i) const{
        return (*(ptr+i));
    }
};


int main(){
    Vector v1(5);
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