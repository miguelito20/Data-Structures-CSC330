#ifndef _LINKED_BAG
#define _LINKED_BAG
#include"Node.h"

template <class ItemType>
class LinkedBag
{
public:
	LinkedBag();  //default constructor. Create an empty list.
    
	LinkedBag(const LinkedBag<ItemType>& aBag);  // Copy constructor. 
    
	virtual ~LinkedBag(); // Destructor should be virtual

	bool isEmpty() const;  // Test if the bag is empty
	
	int getCurrentSize() const; // Get the number of items in the bag
	
	bool add(const ItemType& newEntry);
	//Insert the newEntry into a bag that is not full. Place it right after the last item in the array.
	
	bool remove(const ItemType& anEntry);
	//Remove an item from the bag that matches the newEntry
	
	int getFrequencyOf (const ItemType& anEntry) const;
	// To count the number of times a given object occurs in a bag.
    
	bool contains(const ItemType& anEntry) const;
	// To test if the item "anEntry" is in the bag.
    
	void clear(); // Remove all items from the bag.
    
    
	std::vector<ItemType> toVector() const;
	// Get the entries that are in a bag and return them within a vector.
    
private:
	Node<ItemType> *headPtr;  // the pointer pointing to the first linked node of the bag
	int size; // current count of bag items

	Node<ItemType> * getPointerTo(const ItemType& target)const; 
	// Return either a pointer to the node containing the given entry
    // or the NULL if the entry is not in the bag.
};

#endif

