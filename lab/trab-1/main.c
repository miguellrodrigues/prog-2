#include <stdio.h>
#include "Set.h"

int main(void) {

    SET set = create(3);
    SET set1 = create(3);

    insert(set, 1);
    insert(set, 2);
    insert(set, 3);

    insert(set1, 1);
    insert(set1, 2);
    insert(set1, 3);

    SET setsMerge = merge(set, set1);

    SET setsIntersection = intersection(set, set1);

    SET setsDifference = difference(set, set1);

    unsigned int setsEquals = equals(set, set1);

    printf("\nMescla entre Conjunto 1 e 2: ");
    print(setsMerge);

    printf("\n");

    printf("\nIntersecao entre Conjunto 1 e 2: ");
    print(setsIntersection);

    printf("\n");

    printf("\nDiferenca entre Conjunto 1 e 2: ");
    print(setsDifference);

    printf("\n");

    printf("\nEqualidade entre Conjunto 1 e 2: %s", setsEquals ? "Iguais" : "Diferentes");

    printf("\n");

    removeItem(set, 1);
    removeItem(set1, 4);

    printf("\nConjunto 1 apos alteracao: \n");
    print(set);

    printf("\n");

    printf("\nConjunto 2 apos alteracao: \n");
    print(set1);

    printf("\n");

    return 0;
}
