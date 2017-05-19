#include "header.h"
using namespace std;

node* insert(node* head, int toAdd){
    return insert_recursive(head,toAdd);
}

node* insert_recursive(node *head, int toAdd){
    if(!head){
        node * temp = new node();
        temp->data = toAdd;
        temp->next = NULL;
        return temp;
    }
    head->next = insert_recursive(head->next,toAdd);
    return head;

}

void display(node* head){
    display_recursive(head);
}

void display_recursive(node* head){
    if(!head)
        return;
    if(!head->next){
        cout<<head->data<< endl;
        return;
    }
    cout<< head->data << " -> ";
    display_recursive(head->next);
}

node* build(node *head){
    srand(time(0));
    for(int i=0;i<rand()%10 +2; ++i){
        head = insert(head,rand()%3);
    }
    return head;
}
