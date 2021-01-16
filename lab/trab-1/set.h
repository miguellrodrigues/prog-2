#ifndef TAD_SET_H
#define TAD_SET_H

typedef struct set *SET;

SET create(unsigned int capacity);

int valueInSet(SET set, int value);

int canInsert(SET set, int value);

unsigned int setItemsCount(SET set);

unsigned int findValueIndex(SET set, int value);

unsigned int insert(SET set, int value);

unsigned int canRemove(SET set, int value);

unsigned int removeItem(SET set, int value);

unsigned int contains(SET set, SET set1);

SET merge(SET set, SET set1);

SET intersection(SET set, SET set1);

#endif
