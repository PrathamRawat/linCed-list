#include <stdio.h>
#include <stdlib.h>
#include "node.h"

// struct linkedlist {
//   struct node * start;
//   struct node * end;
// };

void print_list(struct node * start) {
  printf("[");
  do {
    printf(" %d ", start->value);
    start = start->next;
  } while (start->next != NULL);
  printf("]\n");
}

struct node * insert_front(struct node * start, int value) {
  struct node * newStart = calloc(sizeof(start), 1);
  newStart->value = value;
  *(newStart->next) = *start;
  return newStart;
}

struct node * free_list(struct node * start) {
  struct node * beginning = start;
  do {
    free(start);
    start = start->next;
  } while (start->next != NULL);
  return beginning;
}

struct node * remove_node(struct node *start, int data) {
  struct node * beginning = start;
  while (start->next != NULL && (start->next)->value != data) {
    start = start->next;
  }
  if((start->next)->value == data) {
    struct node * nextNode = (start->next)->next;
    free(start->next);
    start->next = nextNode;
  }
  return beginning;
}
