//
//  BST.cpp
//

#include "BST.h"
#include "Flags.h"

/* **************************************************************** */

#if ALL || CONSTRUCTOR
template <class T>
BST<T>::BST()
{
     //Initialize root
    root = nullptr;
    numNodes = 0;
}
#endif

/* **************************************************************** */

#if ALL || DESTRUCTOR
template <class T>
BST<T>::~BST()
{
 //Remove any nodes
    makeEmpty();
}
#endif

/* **************************************************************** */

#if ALL || ISEMPTY
template <class T>
bool BST<T>::isEmpty() {
    return root == nullptr;
}
#endif

/* **************************************************************** */

#if ALL || FIND
//find() method
template <class T>
bool BST<T>::find(const T &x) {
    return findNode(root,x) != nullptr;
}
#endif

/* **************************************************************** */

#if ALL || FINDMIN
// findMin() method
template <class T>
const T& BST<T>::findMin() {
    if(isEmpty())
        throw 1;
    return findMinNode(root)->data;
}
#endif

/* **************************************************************** */

#if ALL || FINDMAX
//findMax() method
template <class T>
const T& BST<T>::findMax() {
    if(isEmpty())
        throw 1;
    return findMaxNode(root)->data;
}
#endif

/* **************************************************************** */

#if ALL || INSERT
//insert() method
template<class T>
void BST<T>::insert(const T &x) {
    if(find(x) == false){
        if(isEmpty()){
            Node<T> *newNode = new Node<T>(x);
            root = newNode;
            numNodes += 1;
        } else {
            insertNode(root, x);
        }
    }
}
#endif

/* **************************************************************** */

#if ALL || REMOVE
// remove() method
template<class T>
void BST<T>::remove(const T &x) {
    Node<T> *parentNode = nullptr;
    Node<T> *nodeToRemove = root;
//    Node<T> *foundNode = findNode(root, x);
    bool found = find(x);
    if(found && findNode(root, x)->data != root->data) {
        parentNode = findParentOf(x);
        nodeToRemove = (parentNode->left == findNode(root, x)) ? parentNode->left : parentNode->right;
    }
    if(!found){
        // do nothing, value not found in BST
    } else if (nodeToRemove->left == nullptr && nodeToRemove->right == nullptr) {    //no children
        if (nodeToRemove->data != root->data) {
            if (parentNode->left->data == nodeToRemove->data) {
                parentNode->left = nullptr;
            } else {
                parentNode->right = nullptr;
            }
        }
        if(nodeToRemove->data != root->data) {
            delete nodeToRemove;
        }else {
            delete nodeToRemove;
            root = nullptr;
        }
        numNodes--;
    } else if (nodeToRemove->left != nullptr && nodeToRemove->right != nullptr){    //two children
        Node<T> *succ = findSuccessor(nodeToRemove);
        int temp = succ->data;
        remove(succ->data);
        if(nodeToRemove->data != root->data) {
            if (parentNode->left->data == nodeToRemove->data) {
                parentNode->left->data = temp;
            } else {
                parentNode->right->data = temp;
            }
        } else {
            nodeToRemove->data = temp;
        }
    } else if(nodeToRemove->left != nullptr || nodeToRemove->right != nullptr) {      //one child
        Node<T> *nodeToRemoveChild = (nodeToRemove->left != nullptr) ? nodeToRemove->left : nodeToRemove->right;
        if(nodeToRemove->data != root->data) {
            if (parentNode->left->data == nodeToRemove->data) {
                parentNode->left->data = nodeToRemoveChild->data;
                parentNode->left->left = nodeToRemoveChild->left;
                parentNode->left->right = nodeToRemoveChild->right;

            } else {
                parentNode->right->data = nodeToRemoveChild->data;
                parentNode->right->left = nodeToRemoveChild->left;
                parentNode->right->right = nodeToRemoveChild->right;
            }
        } else {
            nodeToRemove->data = nodeToRemoveChild->data;
            nodeToRemove->left = nodeToRemoveChild->left;
            nodeToRemove->right = nodeToRemoveChild->right;
        }
        delete nodeToRemoveChild;
        numNodes--;
    }
}
#endif

/* **************************************************************** */

#if ALL || MAKEEMPTY
// makeEmpty() method
template <class T>
void BST<T>::makeEmpty() {
    removeAllNodes(root);
    root = nullptr;
    numNodes = 0;

}
#endif

/* **************************************************************** */



/* **************************************************************** */
/*  Private methods                                                 */
/* **************************************************************** */
#if ALL || FINDNODE
// findNode() private method
template<class T>
Node<T>* BST<T>::findNode(Node<T> *node, const T &x) {
    if(node == nullptr || node->data == x){
        return node;
    }
    else if(x < node->data){
        return findNode(node->left, x);
    }
    else {
        return findNode(node->right, x);
    }
}
#endif

/* **************************************************************** */

#if ALL || FINDMINNODE
// findMinNode() private method
template<class T>
Node<T>* BST<T>::findMinNode(Node<T> *node) {
    if(isEmpty()){
        return nullptr;
    }
    if(node->left == nullptr)
        return node;
    else
        return findMinNode(node->left);
}
#endif

/* **************************************************************** */

#if ALL || FINDMAXNODE
// FindMaxNode() private method
template<class T>
Node<T>* BST<T>::findMaxNode(Node<T> *node) {
    if(isEmpty()){
        return nullptr;
    }
    if(node->right == nullptr)
        return node;
    else
        return findMaxNode(node->right);
}
#endif

/* **************************************************************** */

#if ALL || INSERTNODE
// insertNode() private method
template<class T>
Node<T>* BST<T>::insertNode(Node<T> *node, const T &x) {
    if(node == nullptr) {
        node = new Node<T>(x);
        numNodes++;
    } else if(x < node->data) {
        node->left = insertNode(node->left, x);
    } else {
        node->right = insertNode(node->right, x);
    }

    return node;
}
#endif

/* **************************************************************** */

#if ALL || FINDSUCCESSOR
// findSuccessor() private method
template<class T>
Node<T>* BST<T>::findSuccessor(Node<T> *node) {
        Node<T> *currentNode = node->right;
        if(currentNode!=nullptr){
            Node<T> *nextNode = currentNode->left;
            while(nextNode != nullptr){
                currentNode = nextNode;
                nextNode = nextNode->left;
            }
        } else {
            return nullptr;
        }

    return currentNode;
}
#endif

/* **************************************************************** */

#if ALL || FINDPARENTOF
// findParentOf() private method
template <class T>
Node<T>* BST<T>::findParentOf(const T &x) {
    Node<T> *parent = nullptr;
    Node<T> *currentNode = root;
    while(currentNode!=nullptr && currentNode->data != x){
        if(currentNode->data < x) {
            parent = currentNode;
            currentNode = currentNode->right;
        }
        else if(currentNode->data > x) {
            parent = currentNode;
            currentNode = currentNode->left;
        }
    }

    return parent;
}
#endif

/* **************************************************************** */

#if ALL || REMOVEALLNODES
// removeAllNodes() private method
template<class T>
void BST<T>::removeAllNodes(Node<T> *node) {

    if(node!=nullptr){
        if(node->left != nullptr){
            removeAllNodes(node->left);
        }
        if(node->right != nullptr) {
            removeAllNodes(node->right);
        }

        delete node;
        numNodes--;
    }



}
#endif

/* **************************************************************** */



/* **************************************************************** */
/* Do NOT modify anything below this line                           */
/* **************************************************************** */

#ifndef BUILD_LIB
// Print tree
template <class T>
void BST<T>::printTree()
{
    if (!isEmpty())
    {
        printNodesInOrder(root);
        std::cout << std::endl;
    } else {
        std::cout << "Empty Tree" << std::endl;
    }
}

// Print tree using level order traversal
template <class T>
void BST<T>::printNodesInOrder(Node<T> * node)
{
    Node<T>*q[100];
    int head = 0;
    int tail = 0;
    q[0] = root;
    tail++;
    
    while (head != tail) {
        Node<T> *n = q[head];
        head++;
        std::cout << "Node " << n->data << " ";
        if (n->left != nullptr) {
            std::cout << " left child: " << n->left->data;
            q[tail] = n->left;
            tail++;
        }
        if (n->right != nullptr) {
            std::cout << " right child: " << n->right->data;
            q[tail] = n->right;
            tail++;
        }
        
        if (n->left == nullptr && n->right == nullptr) {
            std::cout << " no children";
        }
        std::cout << std::endl;
    }
}
#endif

template class BST<int>;
