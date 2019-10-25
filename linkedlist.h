#include "node.h"

void print_list(struct node * start);

struct node * insert_front(struct node * start, int value);

struct node * free_list(struct node * start);

struct node * remove_node(struct node *start, int data);
