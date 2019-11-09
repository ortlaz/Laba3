#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>
#include <stdlib.h>

struct tNode{
    int data;
    tNode* next;
};
typedef tNode *Node;


class Queue
{
    tNode *last;
    tNode *first;
    public:
        Queue():first(nullptr),last(nullptr){};
        ~Queue();
        Node getLast();
        Node getFirst();
        Node createQ(); //�������� �������
        void outQ(Node a); //����� �������
        void erase(); //�������� �������� �� �������
        void Add(); //���������� �������� � �����
};

#endif // QUEUE_H
