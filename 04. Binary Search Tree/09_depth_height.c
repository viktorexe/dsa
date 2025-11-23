#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    struct student {
        int age;
        struct student *left;
        struct student *right;
    };

    // Nodes
    struct student *n1 = malloc(sizeof(struct student));
    n1->age = 15;

    struct student *n2 = malloc(sizeof(struct student));
    n2->age = 10;

    struct student *n3 = malloc(sizeof(struct student));
    n3->age = 20;

    // Linking (BST)
    n1->left = n2;
    n1->right = n3;

    n2->left = NULL;
    n2->right = NULL;

    n3->left = NULL;
    n3->right = NULL;

    struct student *root = n1;

    // DEPTH (manual for this small tree)
    if(root != NULL) {
        printf("Depth of %d = 0\n", root->age);

        if(root->left != NULL) {
            printf("Depth of %d = 1\n", root->left->age);
        }

        if(root->right != NULL) {
            printf("Depth of %d = 1\n", root->right->age);
        }
    }

    printf("\n");

    // HEIGHT (manual for this small tree)

    // Leaf nodes have height 0
    if(root->left != NULL) {
        printf("Height of %d = 0\n", root->left->age);
    }

    if(root->right != NULL) {
        printf("Height of %d = 0\n", root->right->age);
    }

    // Root has height 1 (because both children are leaves)
    printf("Height of %d = 1\n", root->age);

    return 0;
}
