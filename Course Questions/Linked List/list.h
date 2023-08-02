#include<bits/stdc++.h>
using namespace std;

//Forward declaration for as we make it friend in the node class
class LList;

class node{
   private:
    int data;
    node* next;
   public:
    //making LL ist class as a friend of node class so that list can access private data memebers of node class
    friend class LList;

    //Constructor to intialise the node here we are assigning data with the help of intializer list
    node(int d):data(d),next(NULL){}

    //destructor
    ~node(){
        if(next!=NULL){
            delete next;
        }
    }
     
    //get data returns the data in the linked list
    int get_data(){
        return data;
    }
    
    //getter function returns the next 
    node* getter(){
        return next;
    }
};

class LList{
    node* head;
    node* tail;
   public:

    //constructor to intialize head and tail 
    LList():head(NULL),tail(NULL){}

    //destructor
    ~LList(){
    /* Loop implementation    
    
    node* temp1=head;
    node* temp2=NULL;
    while(temp1!=NULL){
        temp2=temp1->next;
        cout<<"Deleting the node with value "<<data<<"\n";
        delete temp1;
        temp1=temp2;
        }
    */

   //Recursive implemnation

    if(head!=NULL){
        delete head;
        head=NULL;
    }
    }

    //begin returns head of the list
    node* begin(){
        return head;
    }

    //print the linked list
    void print(){
        node* temp=head;
        while(temp!=NULL){
            cout<<(temp->data)<<"->";
            temp=temp->next;
        }
    }

    //pushes data at the front of linked list
    void push_front(int data){
        if(head==NULL){
            node* n= new node(data);
            head=n;
            tail=n;
        }
        else{
            node* n = new node(data);
            n->next=head;
            head=n;
        }   
    }

    //pushes data at the back of linked list
    void push_back(int data){
        if(tail==NULL){
            node* n=new node(data);
            head=n;
            tail=n;
        }
        else{
            node* n= new node(data);
            tail->next=n;
            tail=n;
            // tail->next=NULL; We donot need to to write this line as when the new node gets created then with the help of constructor the nextis by default intiliased to null
        }
    }

    //inserts data at the pos of linked list 
    void insert(int data,int pos){
        node* temp=head;
        for(int i=1;i<=pos-1;i++){
            temp=temp->next;
        }
        node* n= new node(data);
        n->next=temp->next;
        temp->next=n;
    }

    //Delete the data at the front of linked list
    void pop_front(){
        node* temp=head;
        head=head->next;
        temp->next=NULL;//This is done so that if temp->next is not equal to null then after deleting temp all of the LL gets destroyed because of the recursive calls in the destructor of node class
        delete temp;
    }

    //Delete the node at the end of linked list
    void pop_back(){
        node* temp=head;
        node* temp1=NULL;
        while(temp->next!=NULL){
            temp1=temp;
            temp=temp->next;
        }
        temp1->next=NULL;
        delete temp;
    }

    //Delete the node at any position of LL
    void remove(int pos){
        if(pos==1){
            pop_front();
        }
        else{
            node* temp=head;
            node* temp1=NULL;
            for(int i=1;i<pos;i++){
                temp1=temp;
                temp=temp->next;
            }
            temp1->next=temp->next;
            temp->next=NULL;
            delete temp;
        }
    }

    //Search data in linked list
    //pos will tell us at which index the element is present at linked list starting from index 0
    int search(int key){
        node* temp=head;
        int pos=0;
        while(temp!=nullptr){
            if(temp->data==key){
                return pos;
            }
            pos++;
            //with this temp points to the next element of linked list
            temp=temp->next;
        }
        //-1 will be returned when the loop is end and loop will end iff the element is not present in the linked list as if it was present then the return statement would work
        return -1;
    }

    void reverse_ll(){
    /*My Try
    node* temp[100];
    int i=0;
    temp[i]=head;
    while(temp[i]->next!=NULL){
        temp[i+1]=temp[i]->next;
        i++;
    }
    while(i!=0){
        temp[i]->next=temp[i-1];
        i--;
    }
    temp[0]=NULL;
    */
    node* prev=NULL;
    node* temp;
    node* current=head;
    while(current!=NULL){
        //to store addres of next node in a temp variable
        temp=current->next;
        //used to establish new link 
        current->next=prev;
        //moving prev to current
        prev=current;
        //moving current to temp
        current=temp;
    }
    head=prev;   
  }
};

bool recursive_search(node*temp,int key){
    //In this base case is when temp of that function call is a null pointer as temp is null pointer iff it has traversed all elements of the linked list and the elements is not found
    
    if(temp==nullptr){//base case 
        return false;
    }
    //recursive case first we will be checking at the current node if element is present at current node then we will return true otherwise we will search for the remaining linked list
    
    if(temp->get_data()==key){ //recursive case
        return true;
    }
    //In this if in the rest of linked list returns true then we return true and if rest of linked list return false then we return false
    bool b1=recursive_search(temp->getter(),key);
    return b1;
}


