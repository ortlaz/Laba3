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
        Node createQ(); //создание очереди
        void outQ(Node a); //вывод очереди
        void erase(); //удаление элемента из очереди
        void Add(); //добавление элемента в конец
};

#endif // QUEUE_H
