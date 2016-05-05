#include "Queue.h"
Queue::Queue(): front(0), count(0),back(MAX_SIZE-1){}

bool Queue::empty() const
{
    if (count == 0){
    return true;}
    return false;
}

bool Queue::dequeue()
{
    if (!empty())
    {
        front = (front + 1) % MAX_SIZE;
        count--;
        return true;
    }
    return false;
}

bool Queue::enqueue(const itemType &item)
{
    if (count < MAX_SIZE){
        back = (back +1) % MAX_SIZE;
        items[back] = item;
        count ++;
        return true;
    }
    return false;
}
bool Queue::peekFront(itemType &item) const
{
    if (!empty())
    {
        item = items[front];
        return true;
    }
    return false;
}
// To get the number of the entries in the queue
int Queue::getSize() const {
    return count;
}
//
// Created by Michael on 3/28/2016.
//

