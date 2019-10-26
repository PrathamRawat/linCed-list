#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

int main() {
  struct node * yeet = calloc(sizeof(yeet), 1);

  print_list(yeet);
  yeet->value = 1;
  print_list(yeet);

  int i;
  for(i = 0; i < 100; i++) {
    yeet = insert_front(yeet, i);
  }
  print_list(yeet);

  for(i = 0; i < 100; i++) {
    yeet = remove_node(yeet, i);
  }
  print_list(yeet);

  free_list(yeet);
  print_list(yeet);

  yeet = calloc(sizeof(yeet), 1);
  for(i = 0; i < 10; i++) {
    yeet = insert_front(yeet, i);
  }
  print_list(yeet);
}
