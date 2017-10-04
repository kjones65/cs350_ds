//
//  Tree.cpp
//

#include "Tree.h"


/* **************************************************************** */
/* **************************************************************** */


template <class T>
void Tree<T>::printKeysPreOrder(Node<T> *node) {

    // Implement method to print keys using PreOrder traversal
    std::cout << node->data <<  " " /*std::endl*/;
    if(node->left != nullptr)
        printKeysPreOrder(node->left);
    if(node->right != nullptr)
        printKeysPreOrder(node->right);

}


template <class T>
void Tree<T>::printKeysPostOrder(Node<T> *node) {

    // Implement method to print keys using PostOrder traversal
    if(node->left != nullptr)
        printKeysPostOrder(node->left);
    if(node->right != nullptr)
        printKeysPostOrder(node->right);
    std::cout << node->data <<  " " /*std::endl*/;

}


template <class T>
void Tree<T>::printKeysInOrder(Node<T> *node) {

    // Implement method to print keys using InOrder traversal
    if(node->left != nullptr)
        printKeysPostOrder(node->left);
    std::cout << node->data <<  " " /*std::endl*/;
    if(node->right != nullptr)
        printKeysPostOrder(node->right);


}


template <class T>
void Tree<T>::printKeysLevelOrder(Node<T> *node) {

    //Implement method to print keys using LevelOrder traversal
//    std::cout << "Method printKeysLevelOrder: Not yet implemented!" << std::endl;

//    Use the following line to define your queue
    std::queue<Node<T> *> nodeQueue;
    nodeQueue.push(node);

    while(!nodeQueue.empty()) {
        Node<T> *n = nodeQueue.front();
        std::cout << n->data << " ";
        nodeQueue.pop();
        if(n->left != nullptr)
            nodeQueue.push(n->left);
        if(n->right != nullptr)
            nodeQueue.push(n->right);
    }
}


/* **************************************************************** */
/* **************************************************************** */


template <class T>
Tree<T> * Tree<T>::makeRandomTree(int min, int max) {
    Tree<T> *t = new Tree<T>();
    t->root = Tree<T>::makeRandomTreeHelper(min, max);
    return t;
}


template <class T>
Node<T> * Tree<T>::makeRandomTreeHelper(int min, int max) {
    // Base case
    if (min == max) {
        return new Node<T>(min);
    }

    // Adjust min and max to narrow the range.
    // This will leave gaps in the range of keys.
    // (If we don't do this, the tree will contain every
    // key between min and max inclusive.)
    int r = (max-min);
    int x = 0;
    while (r/2 > 0) {
        r /= 2;
        x++;
    }
    if (min + x < max - x) {
        min += x;
        max -= x;
    }

    int mid = min + (rand() % (max-min+1));
    assert(mid >= min);
    assert(mid <= max);

    Node<T> *n = new Node<T>(mid);
    if (mid > min) {
        n->left = Tree<T>::makeRandomTreeHelper(min, mid-1);
    }
    if (mid < max) {
        n->right = Tree<T>::makeRandomTreeHelper(mid+1, max);
    }
    return n;
}


/* **************************************************************** */
/* **************************************************************** */

template class Tree<int>;
