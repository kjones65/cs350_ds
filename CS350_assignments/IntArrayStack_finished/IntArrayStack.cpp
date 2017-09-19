//
//  IntArrayStack.cpp
//

#include "IntArrayStack.h"
#include "Flags.h"

/* **************************************************************** */

#if CONSTRUCTOR || ALL
IntArrayStack::IntArrayStack() {
    stack = new int[1];
    capacity = 1;
    top = -1;
}
#endif
/* **************************************************************** */

#if DESTRUCTOR || ALL
IntArrayStack::~IntArrayStack(){
    delete[] stack;
}
#endif

/* **************************************************************** */

#if PUSH || ALL
void IntArrayStack::push(int x) {
    if(top + 1==capacity) {
        resize(capacity * 2);
    }
        stack[++top] = x;
}
#endif

/* **************************************************************** */

#if POP || ALL
int IntArrayStack::pop() {
    if(top==-1) {
        return -1;
    }

    int popVal = stack[top];
    top--;
    if(top+1<=capacity/3) {
        resize(capacity / 2);
    }

    return popVal;
}
#endif

/* **************************************************************** */

#if PEEK || ALL
int IntArrayStack::peek() {
    if(top==-1) {
        return -1;
    }

    return stack[top];
}
#endif

/* **************************************************************** */

#if ISEMPTY || ALL
bool IntArrayStack::isEmpty() {
    return (top==-1);
}
#endif

/* **************************************************************** */

#if EMPTYSTACK || ALL
void IntArrayStack::emptyStack() {
    top = -1;
    resize(1);
}
#endif

/* **************************************************************** */

#if RESIZE || ALL
void IntArrayStack::resize(int newCapacity) {
    int *newStack = new int[newCapacity];
    for(int i=0; i<=top; i++) {
        newStack[i] = stack[i];
    }

    delete[] stack;
    stack = newStack;
    capacity = newCapacity;
}
#endif

/* **************************************************************** */
// Do NOT modify anything below this line
// Do NOT use these methods in your implementation of your data
// structure.  They are included here to support the unit tests.
/* **************************************************************** */

#ifndef BUILD_LIB
void IntArrayStack::printStack()
{
    std::cout << std::endl;
    std::cout << "Current array size: " << capacity << std::endl;
    std::cout << "Number of ints in stack: " << top+1 << std::endl;
    for (int i=top; i >= 0; i--)
    {
        std::cout << stack[i] << " ";
    }
    std::cout << std::endl;
}


// Do NOT use this method in your implementation
int IntArrayStack::getCapacity()
{
    return capacity;
}


// Do NOT use this method in your implementation
int IntArrayStack::getSize()
{
    return top+1;
}


// Do NOT use this method in your implementation
int IntArrayStack::getTop()
{
    return top;
}


// Do NOT use this method in your implementation
void IntArrayStack::toArray(int* arr)
{
    for (int i=0; i < capacity; i++)
    {
        arr[i] = stack[i];
    }
}
#endif

/* **************************************************************** */


