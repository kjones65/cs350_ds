//
//  LinkedList.cpp
//

#include "LinkedList.h"
#include "Flags.h"

/* **************************************************************** */

#if CONSTRUCTOR || ALL
// Constructor
template <class T>
LinkedList<T>::LinkedList()
{
    //Allocate dummy node
    dummy = new Node<T>(0);
    dummy->next = dummy;
    dummy->prev = dummy;

}
#endif

/* **************************************************************** */

#if DESTRUCTOR || ALL
// Destructor
template <class T>
LinkedList<T>::~LinkedList()
{
    // Remove any nodes
    makeEmpty();
    // Free dummy node
    delete dummy;

}
#endif

/* **************************************************************** */

#if ALL || GETFIRST
// getFirst
template <class T>
const T& LinkedList<T>::getFirst() const {
    const T &first = dummy->next->data;

    return first;
}

#endif

/* **************************************************************** */

#if ALL || GETLAST
// getLast
template <class T>
const T& LinkedList<T>::getLast() const {
    const T &last = dummy->prev->data;

    return last;
}
#endif

/* **************************************************************** */

#if ALL || FIND
// find
template <class T>
bool LinkedList<T>::find(const T &x) const {
    return (findNode(x)!=dummy);
}
#endif

/* **************************************************************** */

#if ALL || FINDNODE
// findNode
template <class T>
Node<T>* LinkedList<T>::findNode(const T &x) const {
    Node<T> *nodeAdr = dummy->next;
    while(nodeAdr!=dummy && nodeAdr->data != x) {
        nodeAdr = nodeAdr->next;
    }

    return nodeAdr;

}
#endif

/* **************************************************************** */

#if ALL || INSERT
// insert
template <class T>
void LinkedList<T>::insert(const T &x) {
    Node<T> *insertNode = new Node<T>(x);
    insertNode->next = dummy->next;
    dummy->next->prev = insertNode;
    dummy->next = insertNode;
    insertNode->prev = dummy;

}
#endif

/* **************************************************************** */

#if ALL || REMOVE
// remove
template <class T>
void LinkedList<T>::remove(const T &x) {
    Node<T> *nodeToRemove = findNode(x);
 
    if(nodeToRemove!=dummy) {
        nodeToRemove->prev->next = nodeToRemove->next;
        nodeToRemove->next->prev = nodeToRemove->prev;
        delete nodeToRemove;
    }


}
#endif

/* **************************************************************** */

#if ALL || ISEMPTY
//isEmpty
template <class T>
bool LinkedList<T>::isEmpty() const {
    return dummy->next == dummy && dummy->prev == dummy;
}
#endif

/* **************************************************************** */

#if ALL || MAKEEMPTY
// makeEmpty
template <class T>
void LinkedList<T>::makeEmpty() {
    Node<T> *nextNode = dummy->next;
    while(nextNode!=dummy) {
        remove(nextNode->data);
        nextNode = nextNode->next;
    }

    dummy->next = dummy->prev = dummy;
}
#endif

/* **************************************************************** */

#if ALL || COPY_CONSTRUCTOR
// Copy constructor
template <class T>
LinkedList<T>::LinkedList(const LinkedList &rhs) {
    dummy = new Node<T>(0);
    dummy->next = dummy;
    dummy->prev = dummy;

    *this = rhs;
}
#endif

/* **************************************************************** */

#if ALL || ASSIGN
// Assignment operator
template <class T>
const LinkedList<T> & LinkedList<T>::operator=(const LinkedList<T> &rhs) {
    makeEmpty();
    Node<T> *prev = rhs.dummy->prev;
    while(prev!=rhs.dummy) {
        insert(prev->data);
        prev = prev->prev;
    }
    return *this;
}
#endif

/* **************************************************************** */
// Do NOT modify anything below this line
/* **************************************************************** */

#ifndef BUILD_LIB
// Print list
template <class T>
void LinkedList<T>::printList()
{
    if(isEmpty())
    {
        // Empty list
        std::cout << "Empty List" << std::endl;
    } else {
        // Iterate to end
        Node<T> *p = dummy->next;
        
        // Loop to end
        while (p != dummy)
        {
            std::cout << p->data << " ";
            p = p->next;
        }
        std::cout << std::endl;
    }
}
#endif

template class LinkedList<int>;
