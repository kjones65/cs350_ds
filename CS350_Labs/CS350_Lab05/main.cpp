#include <iostream>
#include <cstdlib>

// The linked list nodes are instances of this class
class Node {
public:
    Node(int v) : value(v), next(nullptr), prev(nullptr) { }
    int value;
    Node *next;
    Node *prev;
};

int main(void)
{
    //initialize the empty list (by assigning to head)
    Node *head = new Node(0);
    head->next = head;
    head->prev = head;

    // Get values from the user
    std::cout << "Enter integer values (-1 to end):" << std::endl;

    bool done = false;
    while (!done) {
        int userVal;
        std::cin >> userVal;

        if (userVal < 0) {
            done = true;
        } else {
            //append the value to the end (tail) of the linked list
            Node *newNode = new Node(userVal);

            if(head->next == head->prev) {
                head->prev = newNode;
                head->next = newNode;
            }
            else {
                Node *oldLast = head->prev;
                newNode->prev = oldLast;
                newNode->next = head->next;

                oldLast->next = newNode;
                head->prev = newNode;

            }



        }
    }

    std::cout << "Here are your values:" << std::endl;

    //print out the values, in order
    for(int i=0; i<9; i++){
        head=head->next;
        std::cout<< head->value << std::endl;
    }

    return 0;
}
