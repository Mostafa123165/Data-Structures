// ## Stack With array
#include <bits/stdc++.h>
using namespace std;
const int MaxSize = 100 ;
template< class  t>
class  Stack {
    int top ;
    int a[MaxSize] ;

public:
    Stack():top(-1){}

    bool isEmpty(){
        if(top < 0) return true ;
        else return false ;
    }

    void pop(){
        if(!isEmpty()) top--;
        else {
            cout<<"Stack is empty! \n" ;
        }
    }

    void getTop(){
        if(!isEmpty()) cout<<a[top]<<'\n' ;
        else {
            cout<<"Stack is empty! \n" ;
        }
    }

    void push(t Element){
        top++ ;
        a[top] = Element ;
    }

    void print(){
        for(int i =top ;i>=0 ;i--){
            cout<<a[i]<<" ";
        }cout<<'\n' ;
    }
};
int main() {
    Stack <int>s ;
    s.push(5) ;
    s.push(6) ;
    s.push(7) ;
    s.push(8) ;
    s.print();
    s.getTop();
    s.pop();
    s.getTop();
}

/*
# stack : is linear data structure that follows the principle of last-in-first-out(LIFO)
# LIFO : this mean tha last element inserted inside in stack is remover first
 ex : ( ctrl + z ) 
*/

