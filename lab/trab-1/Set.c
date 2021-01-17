#include "Set.h"
#include <string.h>
#include <malloc.h>
#include <assert.h>

struct Set {
    unsigned int capacity;
    unsigned int count;

    int *items;
};

SET create(unsigned int capacity) {
    SET setPtr = malloc(sizeof(SET));

    setPtr->capacity = capacity;
    setPtr->items = malloc(sizeof(int) * capacity);
    setPtr->count = 0;

    assert(setPtr != NULL);

    return setPtr;
}

SET createAltern(unsigned int capacity, unsigned int count, int *items) {
    SET setPtr = malloc(sizeof(SET));

    setPtr->capacity = capacity;
    setPtr->items = items;
    setPtr->count = count;

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

unsigned int valueInSet(SET set, int value) {
    assert(set != NULL);

    unsigned int count = setItemsCount(set);

    for (unsigned int i = 0; i < count; i++) {
        if (set->items[i] == value) {
            return 1;
        }
    }

    return 0;
}

unsigned int valueInArray(const int *array, int value, unsigned int count) {
    for (unsigned int i = 0; i < count; i++) {
        if (array[i] == value) {
            return 1;
        }
    }

    return 0;
}

unsigned int canInsert(SET set, int value) {
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
        if (valueInArray(copy, set->items[i], size))
            continue;

        copy[size++] = set->items[i];
    }

    for (unsigned int j = 0; j < set1Items; j++) {
        if (valueInArray(copy, set1->items[j], size))
            continue;

        copy[size++] = set1->items[j];
    }

    copy = realloc(copy, size);

    return createAltern(size, size, copy);
}

SET intersection(SET set, SET set1) {
    assert(set != NULL && set1 != NULL);

    unsigned int setItems = setItemsCount(set);
    unsigned int set1Items = setItemsCount(set1);

    unsigned int size = setItems > set1Items ? setItems : setItems == set1Items ? setItems : set1Items;

    int *copy = (int *) malloc(size * sizeof(int));

    size = 0;

    for (unsigned int i = 0; i < setItems; i++) {
        for (unsigned int j = 0; j < set1Items; j++) {
            if (set->items[i] == set1->items[j]) {
                copy[size++] = set->items[i];
            }
        }
    }

    copy = realloc(copy, size);

    return createAltern(size, size, copy);
}

SET difference(SET set, SET set1) {
    assert(set != NULL && set1 != NULL);

    SET inter = intersection(set, set1);

    int *commonItems = malloc(sizeof(int) * inter->count);
    memcpy(commonItems, inter->items, sizeof(int) * inter->count);

    int *copy = malloc(sizeof(int) * set->count);

    unsigned int size = 0;

    for (unsigned int i = 0; i < set->count; i++) {
        int item = set->items[i];

        if (valueInArray(commonItems, item, inter->count))
            continue;

        copy[size++] = item;
    }

    copy = realloc(copy, size);

    return createAltern(size, size, copy);
}

unsigned int equals(SET set, SET set1) {
    return contains(set, set1) && contains(set1, set);
}

unsigned int max(SET set) {
    return setItemsCount(set) == set->capacity;
}

unsigned int empty(SET set) {
    return setItemsCount(set) == 0;
}

void print(SET set) {
    assert(set != NULL);

    if (!empty(set)) {
        for (unsigned int i = 0; i < setItemsCount(set); i++) {
            printf("\nIndex: %d | Value: %d", i, set->items[i]);
        }
    }
}
