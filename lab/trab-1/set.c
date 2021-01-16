#include "set.h"
#include <malloc.h>
#include <assert.h>

struct set {
    unsigned int capacity;
    unsigned int count;

    int *items;
};

SET create(unsigned int capacity) {
    SET setPtr = malloc(sizeof(SET));

    setPtr->capacity = capacity;
    setPtr->items = malloc(sizeof(int) * capacity);

    assert(setPtr != NULL);

    return setPtr;
}

unsigned int setItemsCount(SET set) {
    assert(set != NULL);

    return set->count;
}

unsigned int findValueIndex(SET set, int value) {
    assert(set != NULL);

    for (unsigned int i = 0; i < setItemsCount(set); i++) {
      if (set->items[i] == value) {
        return i;
    }
  }

  return 0;
}

int valueInSet(SET set, int value) {
    assert(set != NULL);

    for (unsigned int i = 0; i < setItemsCount(set); i++) {
        if (set->items[i] == value) {
            return 1;
        }
    }

    return 0;
}

int valueInArray(const int *array, int value, unsigned int count) {
    for (unsigned int i = 0; i < count; i++) {
        if (array[i] == value) {
            return 1;
        }
    }

    return 0;
}

int canInsert(SET set, int value) {
    assert(set != NULL);

    int inSet = valueInSet(set, value);

    unsigned int itemsCount = setItemsCount(set);

    return (!inSet && itemsCount < set->capacity);
}

unsigned int canRemove(SET set, int value) {
    assert(set != NULL);

    unsigned int inSet = valueInSet(set, value);

    return inSet;
}

unsigned int insert(SET set, int value) {
    assert(set != NULL);

    if (canInsert(set, value)) {
        unsigned int itemsCount = setItemsCount(set);

        set->items[itemsCount] = value;
        set->count++;

        return 1;
    }

    return 0;
}

unsigned int removeItem(SET set, int value) {
    assert(set != NULL);

    if (canRemove(set, value)) {
        unsigned int valueIndex = findValueIndex(set, value);

        for (unsigned int j = valueIndex; j < set->capacity; j++) {
            set->items[j] = set->items[j + 1];
        }

        set->count--;

        return 1;
    }

    return 0;
}

unsigned int contains(SET set, SET set1) {
    assert(set != NULL && set1 != NULL);
    
    if (set->capacity >= set1->capacity) {
        unsigned int equality = 0;

        unsigned int setItems = setItemsCount(set);
        unsigned int set1Items = setItemsCount(set1);

        for (unsigned int i = 0; i < setItems; i++) {
            for (unsigned int j = 0; j < set1Items; j++) {
                if (set->items[i] == set1->items[j]) {
                    equality++;
                }
            }
        }

        return equality == setItemsCount(set1);
    }
    

    return 0;
}

SET merge(SET set, SET set1) {
    assert(set != NULL && set1 != NULL);

    unsigned int setItems = setItemsCount(set);
    unsigned int set1Items = setItemsCount(set1);

    unsigned int size = setItems > set1Items ? setItems : setItems == set1Items ? setItems : set1Items;

    int *copy = malloc(sizeof(int) * size);

    size = 0;

    for (unsigned int i = 0; i < setItems; i++) {
        for (unsigned int j = 0; j < set1Items; j++) {
            if (set->items[i] != set->items[j]) {
                copy[size++] = set->items[i];
            }
        }
    }

    copy = realloc(copy, size);

    SET r = malloc(sizeof(SET));

    r->capacity = size;
    r->items = copy;

    assert(r != NULL);

    return r;
}
