#include <iostream>
#include <ctime>
#include <cstdlib>

struct node{
    int data;
    node* next;
};


node* insert(node* head,int toAdd);
node* insert_recursive(node *head, int toAdd);

void display(node* head);
void display_recursive(node* head);

node* build(node *head);

//---------------------------------------
//
int count_2(node* head);
int count_2_recursive(node* head);



