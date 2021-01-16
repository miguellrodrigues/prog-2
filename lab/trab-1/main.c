#include <stdio.h>
#include "set.h"

int main(void) {

  SET set = create(4);
  SET set1 = create(3);

  insert(set, 1);
  insert(set, 2);
  insert(set, 3);
  insert(set, 4);

  insert(set1, 1);
  insert(set1, 4);
  insert(set1, 6);

  SET u = merge(set, set1);

  SET i = intersection(set, set1);

  SET d = difference(set, set1);

  int k = 0;

  return 0;
}
