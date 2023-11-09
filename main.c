#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

int main() {
    struct Node* root = NULL;

    FILE* file = fopen("input.txt", "r");
    if (file == NULL) {
        fprintf(stderr, "Error opening file\n");
        exit(EXIT_FAILURE);
    }

    int value;
    while (fscanf(file, "%d", &value) == 1) {
        root = insert(root, value);
    }

    fclose(file);

    int mostFrequent = findMostFrequent(root);
    printf("Most frequent value: %d\n", mostFrequent);

    return 0;
}
