#ifndef _ARRAY_BAG
#define _ARRAY_BAG
#include <vector>

const int MAX_LIST=20;  // Maximum capacity of the bag

using namespace std;

template <class ItemType>
class ArrayBag
{
public:
	ArrayBag();  //default constructor. Create an empty list.

	bool isEmpty() const;  // test if the bag is empty
	
	int getCurrentSize() const; // get the number of items in the bag
	
	bool add(const ItemType& newEntry);
	//Insert the newEntry into a bag that is not full. Place it right after the last item in the array.
	
	bool remove(const ItemType& anEntry);
	//Remove an item from the bag that matches the newEntry
	
	int getFrequencyOf (const ItemType& anEntry) const;
	// To count the number of times a given object occurs in a bag.

	bool contains(const ItemType& anEntry) const;
	// To test if the item "anEntry" is in the bag.

	void clear(); // Remove all items from the bag.


	vector <ItemType> toVector() const; 
	// Get the entries that are in a bag and return them within a vector.


private:
	ItemType items[MAX_LIST];  // Array of bag items
	int size; // current count of bag items
};



#endif
