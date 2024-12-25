#include <iostream>
using namespace std;

struct node
{
    node *previous;
    int value;
    node *next;
};

node *create_node(node *current, int value)
{
    node *new_node;
    new_node = new node;
    new_node->previous = current;
    new_node->value = value;
    new_node->next = NULL;
    current->next = new_node;

    return new_node;
}

void print_list(node *head)
{
    node *current;
    current = head;
    while (current != NULL)
    {

        cout << current->value << " ";
        current = current->next;
    }
    cout << endl;
}

int sum(node *head)
{
    int sum_ = 0;

    node *temp = head;
    while (temp != NULL)
    {
        sum_ += temp->value;
        temp = temp->next;
    }

    return sum_;
}

void del_specific_node(node * to_delete){
    node * current, *temp;

    current = to_delete->previous;
    temp =  current->next;
    current->next = current->next->next; 
    delete temp;

}
int main()
{
    node *head, *current, *previous;
    head = new node;
    head->value = 1;
    head->previous = NULL;
    head->next = NULL;

    current = head;

    current = create_node(current, 17);
    current = create_node(current, 19);
    current = create_node(current, 21);
    current = create_node(current, 23);
    print_list(head);
    cout <<"SUM: " << sum(head) << endl;

    return 0;
}