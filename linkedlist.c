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
    if(start->next != NULL) {
      start = start->next;
    }
  } while(start->next != NULL);
  printf("]\n");
}

struct node * insert_front(struct node * start, int value) {
  struct node * newStart = calloc(sizeof(start), 1);
  newStart->value = value;
  newStart->next = start;
  return newStart;
}

struct node * free_list(struct node * start) {
  struct node * beginning = start;
  do {
    free(start);
    start = start->next;
  } while (start->next != NULL);
  free(start);
  return beginning;
}

struct node * remove_node(struct node *start, int data) {
  struct node * beginning = start;
  if(start->value == data && start->next == NULL) {
    free(start);
  } else {
    while (start->next != NULL) {
      if((start->next)->next != NULL && (start->next)->value == data) {
        struct node * nextNode = (start->next)->next;
        free(start->next);
        start->next = nextNode;
      } else if((start->next)->value == data) {
        free(start->next);
        start->next = NULL;
      }
      start = start->next;
    }
  }
  return beginning;
}
