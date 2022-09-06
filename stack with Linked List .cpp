// ## Stack Using Linked List Implementation
#include <bits/stdc++.h>
using namespace std;
template< class  t>
class  Stack {
public:
    struct node{
        t item ;
        node *next ;
    };
    node *top , *p;
    Stack():top(NULL){}

    void push(int element){
        node*newItems =  new node ;
        newItems->item = element ;
        newItems->next = top ;
        top = newItems ;
    }
    bool isEmpty(){
        if(top == NULL)return true ;
        return false ;
    }
    void pop(){
        if(isEmpty()) cout<<"stack is empty \n" ;
        else {
            node *cur = top;
            top = top->next;
            delete cur;
        }
    }
    void getTop(){
        if(isEmpty()) cout<<"stack is empty \n" ;
        else {
           cout<<top->item<<'\n' ;
        }
    }
    void print(){
        p = top ;
        while (p != NULL){
            cout<<p->item<<" ";
            p = p->next ;
        }
        cout<<'\n';
    }
};
int main() {
    Stack<int>s ;
    s.push(10) ;
    s.push(20) ;
    s.push(30) ;
    s.print() ;
    s.pop();
    s.print() ;
    s.getTop() ;
}

