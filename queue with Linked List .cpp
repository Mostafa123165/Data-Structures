// ## queue Using array Implementation
#include <bits/stdc++.h>
using namespace std;
const int MX = 100 ;
template< class  t>
class Queue {

public:
    struct node{
        t item;
        node *next;
    };
    node *rear , *front ;
    Queue(){
        rear = NULL;
        front = NULL;
    }
    bool isEmpty(){
        if(front == NULL )return true ;
        return false ;
    }
    void push(t element){
        node *NewItem = new node; // new position in memory
        NewItem->item = element; // store element in new position
        if(isEmpty()){
            NewItem->next = NULL ;
            rear = NewItem;
            front = NewItem;
        }else {
            rear->next = NewItem ; // link rear with new iteme 
            NewItem->next = NULL; // linke last element with NULL 
            rear = NewItem ; // move rear in last position
        }
    }
    void pop(){
        if(isEmpty()) cout<<"Queue is empty !!" ;
        else {
            node *del = front ;
            front = front->next ;
            delete del ;
        }
    }
    void getfront(){
        cout<<front->item<<'\n' ;
    }
    void getrear(){
        cout<<rear->item<<'\n' ;
    }
    void print(){
        node* cur = front ;
        while (cur != NULL ){
            cout<<cur->item<<" ";
            cur = cur->next ;
        }cout<<"\n" ;
    }

};

int main() {
    Queue<int>q ;
    q.push(5) ;
    q.push(10) ;
    q.push(41) ;
    q.push(123) ;
    q.push(43434) ;
    q.print() ;
    q.pop() ;
    q.print() ;
    q.pop() ;
    q.print() ;

}



