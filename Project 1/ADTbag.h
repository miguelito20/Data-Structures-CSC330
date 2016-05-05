#ifndef _ARRAY_BAG
#define _ARRAY_BAG
#include "vector"
#include "ADTbag.cpp"
static const int MAX_LIST = 20;
using namespace std;
template<class ItemType>
class ArrayBag
{
private:
    int maxItems;
    ItemType items[MAX_LIST];


    public:
        ArrayBag();
         bool isEmpty() const;
        int getCurrentSize() const;
        bool add(const ItemType& newEntry);
       bool remove(const ItemType& anEntry);
        int getFrequencyOf(const ItemType& anEntry) const;
        bool contains(const ItemType& anEntry) const;
        void clear();
        vector <ItemType> toVector() const;

public:
    static int itemCount;

};
#endif
