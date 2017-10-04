//
//  SkipList.cpp
//

#include "SkipList.h"
#include "Flags.h"

/* **************************************************************** */

#if CONSTRUCTOR || ALL
// constructor
template<class T>
SkipList<T>::SkipList() {
    head = new Node<T>(T(),maxHeight);
    head->height = maxHeight;
    height = 1;
}
#endif

/* **************************************************************** */

#if DESTRUCTOR || ALL
// destructor
template<class T>
SkipList<T>::~SkipList() {
    makeEmpty();
    delete head;
}
#endif

/* **************************************************************** */

#if FIND || ALL
// find() method
template<class T>
bool SkipList<T>::find(const T &x) const {
    Node<T> *currentNode = head;
    if(isEmpty())
        return false;
    for(int i = height - 1; i>=0; i--) {
        while(currentNode->next[i] != nullptr && currentNode->next[i]->data < x) {
            currentNode = currentNode->next[i];
        }
    }

    // Check for nullptr then move to right one more time
    return currentNode->next[0] != nullptr && currentNode->next[0]->data == x;
}
#endif

/* **************************************************************** */

#if INSERT || ALL
// insert() method
template <class T>
void SkipList<T>::insert(const T &x) {
    //start search at the head node
    Node<T> *currentNode = head;

    //create update array that will hold pointers to nodes
    Node<T> *update = new Node<T>[maxHeight + 1];

    // go through skip list until the correct spot is found right before where node will be inserted
    for(int i = height - 1; i>=0; i--) {
        while(currentNode->next[i] != nullptr && currentNode->next[i]->data < x) {
            currentNode = currentNode->next[i];
        }
        // insert pointer of node into update array
        update[i] = *currentNode;
    }

    // move to right one more time
    currentNode = currentNode->next[0];

    // check if data already exists
    if(currentNode != nullptr && currentNode->data == x) {
        //if exists, do nothing
    } else {
        // create random level
        int randomLvl = randomLevel();

        //if new level is higher than current height,
        //add the header to the update array, so the skip list will have proper pointers
        if(randomLvl > height){
            for(int i=height; i<randomLvl; i++) {
                update[i] = *head;
            }
            height = randomLvl;
        }

        // create new node, and update the pointer on skip list
        currentNode = new Node<T>(x,randomLvl);
        for(int i = 0; i<randomLvl; i++){
            currentNode->next[i] = update[i].next[i];
            update[i].next[i] = currentNode;
        }
    }
}
#endif

/* **************************************************************** */

#if REMOVE || ALL
//remove() method
template <class T>
void SkipList<T>::remove(const T &x) {
    //start search at the head node
    Node<T> *currentNode = head;

    //create update array that will hold pointers to nodes
    Node<T> *update = new Node<T>[maxHeight + 1];

    // go through skip list until the correct spot is found right before where node will be inserted
    for(int i = height - 1; i>=0; i--) {
        while(currentNode->next[i] != nullptr && currentNode->next[i]->data < x) {
            currentNode = currentNode->next[i];
        }
        // insert pointer of node into update array
        update[i] = *currentNode;
    }

    // move to right one more time
    currentNode = currentNode->next[0];

    // check if data exists
    if(currentNode != nullptr && currentNode->data == x) {
        for(int i = 0; i<= height; i++){
            if(update[i].next[i] != currentNode)
                break;
            update[i].next[i] = currentNode->next[i];
        }
        delete currentNode;

        while(height > 0 && head->next[height-1] == nullptr)
            height -= 1;
    }
}
#endif

/* **************************************************************** */

#if ISEMPTY || ALL
// isEmpty() method
template <class T>
bool SkipList<T>::isEmpty() const {
    //go through the header array, checking if any index has any non-head nodes next
    for(int i = 0; i<height; i++) {
        if(head->next[i] != nullptr)
            return false;
    }

    return true;
}
#endif

/* **************************************************************** */

#if MAKEEMPTY || ALL
// makeEmpty() method
template <class T>
void SkipList<T>::makeEmpty() {
    Node<T> *nextNode = head->next[0];
    while(nextNode != nullptr) {
        Node<T> *tempNext = nextNode->next[0];
        delete nextNode;
        nextNode = tempNext;
    }

    delete head;
    head = new Node<T>(T(),maxHeight);
    head->height = maxHeight;
    height = 1;

}
#endif

/* **************************************************************** */

#if RANDOMLEVEL || ALL
// randomLevel() method
template<class T>
int SkipList<T>::randomLevel() {
    int lvl = 1;
    while(getRandomNumber()<=0.5 && lvl < height + 1 && lvl < maxHeight) {
        lvl = lvl + 1;
    }
    return lvl;
}
#endif

/* **************************************************************** */



/* **************************************************************** */
// Do NOT modify anything below this line
/* **************************************************************** */

#ifndef BUILD_LIB
// random number generator
template <class T>
double SkipList<T>::getRandomNumber()
{
    static int i = 0;
    static double a[10] = {0.32945,0.15923,0.12982,0.16250,0.36537,0.64072,0.27597,0.83957,0.75531,0.22502};
    
    return a[(i++)%10];
}


// printList() method
template <class T>
void SkipList<T>::printList()
{
    Node<T> *n = head;
    
    if (isEmpty())
    {
        std::cout << "Empty List" << std::endl;
    } else {
        while(n->next[0] != nullptr)
        {
            n = n->next[0];
            // Print node data
            std::cout << "Node " << n->data << " height " << n->height << ": ";
            
            // Print levels
            for (int i=(n->height - 1); i >= 0; i--) {
                std::cout << "Level " << i << " -> ";
                if (n->next[i] != nullptr) {
                    std::cout << n->next[i]->data;
                } else {
                    std::cout << "nullptr";
                }
                std::cout << ",";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }
}
#endif

template class SkipList<int>;


