#include <iostream>
#include <cstdlib>

// The linked list nodes are instances of this class
class Node {
public:
    Node(int v) : value(v), next(nullptr) { }
    int value;
    Node *next;
};

int main(void)
{
    Node *head;
    Node *tail;

    //initialize the empty list (by assigning to head and tail)
    head = tail = nullptr;

    // Get values from the user
    std::cout << "Enter integer values (-1 to end):" << std::endl;

    bool done = false;
    while (!done) {
        int userVal;
        std::cin >> userVal;



        if (userVal < 0) {
            done = true;
        } else {
            // TODO: append the value to the end (tail) of the linked list
            if(head== nullptr && tail== nullptr){
                head = tail = new Node(userVal);
            }
            else {
                tail->next = new Node(userVal);
                tail = tail->next;
            }
        }
    }

    std::cout << "Here are your values:" << std::endl;

    // TODO: print out the values, in order

    while(head!=nullptr) {
        std::cout << head->value;
        head = head->next;
    }


    return 0;
}
