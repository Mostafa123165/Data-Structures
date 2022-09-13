// ## queue Using array Implementation
#include <bits/stdc++.h>
using namespace std;
const int MX = 100 ;
template< class  t>
class List{
public:
    struct node{
        t items ;
        node *prev ;
        node *next ;
    };
    node *front , *rear ;
    List(){
        front = NULL ;
        rear = NULL ;
    }

    bool isEmpty(){
        return front == NULL ;
    }
    void insertFront(t element){
        node *NewItem = new node ;
        NewItem->items = element ;
        if(isEmpty()){
            front =  rear = NewItem ;
            front->next = front->prev = rear->next = rear->prev = NULL ;
        }
        else {
            node *cur = front ;
            front->prev = NewItem ;
            front = NewItem ;
            front->prev = NULL ;
            front->next = cur ;
        }
    }

    void deleteFront(){
        if(isEmpty()){
            cout<<"List is Empty !!\n" ;
        }
        else {
            node *cur = front ;
            front = front->next ;
            front->prev = NULL ;
            delete cur ;
        }
    }

    void deleteBack(){
        if(isEmpty()){
            cout<<"List is Empty !!\n" ;
        }
        else {
            node *cur = rear ;
            rear = rear->prev ;
            rear->next = NULL ;
            delete cur ;
        }
    }

    void deleteAnyElement(t element){
        node *cur = front ;

        while (cur != NULL && cur->items != element) {
            cur = cur->next ;
        }
        if(cur == NULL){
            cout<<"Element is not found \n" ;
            return;
        }

        node *after = cur->next , *before = cur->prev;
        before->next = after ;
        after->prev = before ;
        delete cur ;
    }

    void insertBack(t element){
        node *NewItem = new node ;
        NewItem->items = element ;
        if(isEmpty()){
            front =  rear = NewItem ;
            front->next = front->prev = rear->next = rear->prev = NULL ;
        }
        else {
            node *cur = rear ;
            rear = NewItem ;
            cur->next = rear ;
            rear->next = NULL ;
            rear->prev = cur ;
        }
    }

    void getBack(){
        if(isEmpty())cout<<"List is Empty !!\n" ;
        else cout<<rear->items<<'\n' ;
    }

    void getFront(){
        if(isEmpty())cout<<"List is Empty !!\n" ;
        else cout<<front->items<<'\n' ;
    }

    int search(t key){
        node *cur = front ;
        int pos = 0 ;
        while (cur != NULL && cur->items != key){
            cur = cur->next ;
            pos++ ;
        }
        return cur == NULL ? -1 : pos ;
    }
    void print(){
        node *cur = front ;

        while (cur != NULL){
            cout<<cur->items<<" " ;
            cur = cur->next ;
        }cout<<'\n' ;
    }

};

int main() {
    List<int>l ;
    l.insertFront(10) ;
    l.insertFront(20) ;
    l.insertFront(30) ;
    l.insertFront(40) ;
    l.insertFront(50) ;
    l.insertFront(60) ;
    l.insertFront(70) ;
    l.getBack();
    l.getFront();
    l.print();
    l.deleteBack() ;
    l.print();
    l.deleteFront() ;
    l.print();
    l.deleteAnyElement(30);
    l.print();
    l.deleteAnyElement(100);

}



