#include <iostream>
#include <vector>
#include "LinkedBag.h"
using namespace std;

template<class ItemType>
LinkedBag<ItemType>::LinkedBag() : headPtr(nullptr), size(0) {
}

template<class ItemType>
LinkedBag<ItemType>::LinkedBag(const LinkedBag<ItemType>& aBag){

	size = aBag.size;
	Node<ItemType>* origChainPtr = aBag.headPtr;
	if (origChainPtr==nullptr){
		headPtr = nullptr;  // original bag is empty; so is copy 
	}
	else
	{
		//copy the first node
		headPtr = new Node<ItemType>();
		headPtr->setItem(origChainPtr->getItem()); // now headPtr->next=null
		
		//copy the remaining nodes
		Node<ItemType>* newChainPtr = headPtr;
		origChainPtr = origChainPtr->getNext();
		while (origChainPtr != nullptr)
		{
			//Get next item for the origianl chain
			ItemType nextItem = origChainPtr->getItem();

			// Create a new node contaning the next item 
			Node<ItemType>* newNodePtr = new Node<ItemType>(nextItem);
			
			// Connect new node to the new chain 
			newChainPtr->setNext(newNodePtr);    // This is missing in the textbook

			// Advance pointers
			newChainPtr = newChainPtr->getNext();
			origChainPtr = origChainPtr->getNext();
		}

		newChainPtr->setNext(nullptr);   // Flag end of the new chain

	}

}


template<class ItemType>
LinkedBag<ItemType>::~LinkedBag(){
	clear();
}

template<class ItemType>
bool LinkedBag<ItemType>::isEmpty() const{
	if (size == 0) {
		return true;
	}
	return false;
}

template<class ItemType>
int LinkedBag<ItemType>::getCurrentSize() const{
	return size;
}


template<class ItemType>
bool LinkedBag<ItemType>::add(const ItemType& newEntry){
	Node<ItemType>* newNodePtr = new Node<ItemType>();
	newNodePtr->setItem(newEntry);
	newNodePtr->setNext(headPtr);
	headPtr = newNodePtr;
	size++;
	return true;
}

template<class ItemType>
bool LinkedBag<ItemType>::remove(const ItemType& anEntry){
	Node<ItemType>* entryNodePtr = getPointerTo(anEntry);
	bool canRemoveItem = !isEmpty() && (entryNodePtr != nullptr);
	if (canRemoveItem)
	{
		entryNodePtr->setItem(headPtr->getItem());
		Node<ItemType>* nodeToDeletePtr = headPtr;
		headPtr = headPtr->getNext();
		nodeToDeletePtr->setNext(nullptr);
		delete nodeToDeletePtr;
		nodeToDeletePtr = nullptr;
		size--;
	}
	return canRemoveItem;
}

template<class ItemType>
int LinkedBag<ItemType>::getFrequencyOf(const ItemType& anEntry) const{
	int frequency = 0;
	int counter = 0;
	Node<ItemType>* curPtr = headPtr;
	while ((curPtr != nullptr) && (counter<size)){
		if (anEntry == curPtr->getItem()){
			frequency++;
		}
		counter ++;
		curPtr = curPtr->getNext();
	}
	return frequency;
}

template<class ItemType>
bool LinkedBag<ItemType>::contains(const ItemType& anEntry) const{
	return (getPointerTo(anEntry) != nullptr);
}

template<class ItemType>
void LinkedBag<ItemType>::clear(){
	while (headPtr != nullptr){
		Node<ItemType>* nodeToDeletePtr = headPtr;
		headPtr = headPtr->getNext();
		nodeToDeletePtr->setNext(nullptr);
		delete nodeToDeletePtr;
		nodeToDeletePtr = nullptr;
	}

	size = 0;
}

template<class ItemType>
vector<ItemType> LinkedBag<ItemType>::toVector() const{
	vector<ItemType> bagContents;
	Node<ItemType>* curPtr = headPtr;
	int counter = 0;
	while ((curPtr != nullptr) && (counter < size)){
		bagContents.push_back(curPtr->getItem());
		curPtr = curPtr->getNext();
		counter++;
	}
	return bagContents;
}

template<class ItemType>// Changed to a while loop instead of recursion.
Node<ItemType>* LinkedBag<ItemType>::getPointerTo(const ItemType& target)const{
	bool exist = false;
	Node<ItemType>* curPtr = headPtr;
	while (!exist && (curPtr != nullptr)){
		if (target == curPtr->getItem())
			exist = true;
		else
			curPtr=curPtr->getNext();
	}
	return curPtr;
}