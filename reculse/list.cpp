#include <iostream>

using namespace std;
struct node
{
    int val;
    node * next;
};

node * create_node(node * current, int value){
    node * new_node;
    new_node = new node;
    new_node->val = value;
    new_node->next = NULL;
    current->next = new_node;
    return new_node;
}

void print_list(node *head){
    node *current;
    current = head;
    cout << "[";
    while (current != NULL ){

        cout << current->val << " ";
        current = current->next;
    }
    cout << "]" << endl;


}

int main(){
    node * head, *current;
    head = new node;
    head->val = 1;
    head->next= NULL;

    current = head;

    for(int i:{1,2,3,4,67,86,45,32,13}){
    current = create_node(current, i);
    }

    print_list(head);

    return 0;
}