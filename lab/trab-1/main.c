#include <stdio.h>
#include "set.h"

int main(void) {

  SET set = create(4);
  SET set1 = create(2);

  insert(set, 2);
  insert(set, 4);
  insert(set, 8);
  insert(set, 1);

  insert(set1, 1);
  insert(set1, 4);

  SET d = merge(set, set1);

  return 0;
}
