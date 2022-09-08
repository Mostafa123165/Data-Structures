// ## queue Using array Implementation (fifo)
#include <bits/stdc++.h>
using namespace std;
//template< class  t>
const int MX = 100 ;
class Queue {

    int front , rear , count , a[MX] ;

public:
    Queue(){
        front = 0 ;
        count = 0 ;
        rear = MX - 1 ;
    }


    bool isEmpty(){ return  count == 0 ; }
    bool isFull(){ return  count == MX  ; }


    void Enqueue(int element)  // circular array
    {
      
        if(isFull()){
            cout<<"queue is Full !!\n" ;
        }
        else {
            a [(rear + 1) % MX ] = element ;
            rear= (rear + 1) % MX;
            count++ ;
        }

    }

    void Dequeue() // Delete Queue
    {
       if(isEmpty()){
           cout<<"Empty queue Can't Dequeue !!\n" ;
       }
       else{
           front++ ;
           count-- ; // singel Line
       }
    }

    void frontQueue(){
        assert(!isEmpty()) ;
        cout<<a[front]<<"\n" ;
    }

    void rearQueue(){
        assert(!isEmpty()) ;
        cout<<a[rear]<<"\n" ;

    }

    void printQueue(){
        for(int i = front ; i != rear ;i = ((i+1 )% MX))    cout<<a[i]<<" ";

           cout<<a[rear]<<endl;
    }



};

int main() {
    Queue q ;
    q.Enqueue(10) ;
    q.Enqueue(20) ;
    q.Enqueue(30) ;
    q.Enqueue(40) ;

    cout<<"Queue Elements before pop front " ; q.printQueue() ;
    q.Dequeue();
    cout<<"Queue Elements after pop front " ; q.printQueue() ;
    cout<<"Queue rear element " ; q.rearQueue();
    cout<<"Queue front element " ;  q.frontQueue();

}



