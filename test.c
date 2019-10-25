#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

int main() {
  struct node * yeet = calloc(sizeof(yeet), 1);
  yeet->value = 1;

  print_list(yeet);
}
