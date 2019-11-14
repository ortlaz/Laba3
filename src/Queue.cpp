#include "Queue.h"


Queue::~Queue()
{
    erase();
}

Node Queue::getLast(){
    return this->last;
}

Node Queue::getFirst(){
    return this->first;
}

Node Queue::createQ(){

    Node top;
    int data;
    std::cout<<"������� �������� ������� ��� 0, ���� ������ ��������� ����.\n";
    std::cin>>data;

    if (!data) return nullptr;

    top= new tNode;
    top->data=data;

    if(first){
        last = top;
    }else first = last = top;

    last-> next =createQ();

    return top;
}

void Queue::outQ(Node a){
    Node cur = a;
    if (cur){
        std::cout<<cur->data<<" ";
        outQ(cur->next);
    }
    return;
}

void Queue::erase(){
    Node temp = first;
    if(temp){
        temp = first->next;
        std::cout<<"������� "<<first->data<<"�����\n";
        delete first;
        first = temp;
        erase();
    }
    return;
}


