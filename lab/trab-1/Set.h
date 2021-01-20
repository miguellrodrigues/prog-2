#ifndef TAD_SET_H
#define TAD_SET_H

typedef struct Set *SET;

SET create(unsigned int capacity);

SET createAltern(unsigned int capacity, unsigned int count, int *items);

unsigned int valueInSet(SET set, int value);

unsigned int canInsert(SET set, int value);

unsigned int setItemsCount(SET set);

unsigned int findValueIndex(SET set, int value);

unsigned int insert(SET set, int value);

unsigned int canRemove(SET set, int value);

unsigned int removeItem(SET set, int value);

unsigned int contains(SET set, SET set1);

SET merge(SET set, SET set1);

SET intersection(SET set, SET set1);

SET difference(SET set, SET set1);

unsigned int equals(SET set, SET set1);

unsigned int max(SET set);

unsigned int empty(SET set);

void print(SET set);

void del(SET set);

#endif
