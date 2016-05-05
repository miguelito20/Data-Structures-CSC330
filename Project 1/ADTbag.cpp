#include"ADTbag.h"
using namespace std;
ArrayBag::ArrayBag()
{
    itemCount = 0;
    maxItems = MAX_LIST;
}
bool ArrayBag::isEmpty() const
{
    return itemCount == 0;
}
int ArrayBag::getCurrentSize() const
{
    return itemCount;
}
template<class ItemType>
bool ArrayBag::add(const ItemType& newEntry)
{
    bool hasRoomToAdd = (itemCount < maxItems);
    if (hasRoomToAdd)
    {
        items[itemCount] = newEntry;
        itemCount++;
    }
    return hasRoomToAdd;
}
template<class ItemType>
bool ArrayBag::remove(const ItemType& anEntry)
{
    return false;
}
template<class ItemType>
int ArrayBag::getFrequencyOf(const ItemType& anEntry) const
{
    int frequency = 0;
    int curIndex = 0;
    while (curIndex < itemCount)
    {
        if (items[curIndex] == anEntry)
        {
            frequency++;
        }
        curIndex++;
    }
    return frequency;
}
template<class ItemType>
bool ArrayBag::contains(const ItemType& target) const
{
    return getFrequencyOf(target) > 0;
}
template<class ItemType>
bool ArrayBag::contains(const ItemType& anEntry) const
{
    bool found = false;
    int curIndex = 0;
    while (found != true && (curIndex < itemCount))
    {
        if (anEntry == items[curIndex])
        {
            found = true;
        }
        curIndex++;
    }
    return found;
}
template<class ItemType>
void ArrayBag::clear()
{
}
template<class ItemType>
vector <ItemType> ArrayBag::toVector() const
{
    vector <ItemType> bagContents;
    for (int i = 0; i < itemCount; i++)
        bagContents.push_back(items[i]);
    return bagContents;
}