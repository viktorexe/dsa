#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    struct student {
        int age;
        struct student *left;
        struct student *right;
    };

    // Creating nodes
    struct student *n1 = malloc(sizeof(struct student));
    n1->age = 15;

    struct student *n2 = malloc(sizeof(struct student));
    n2->age = 10;

    struct student *n3 = malloc(sizeof(struct student));
    n3->age = 12;

    // Linking to create "one child" case
    n1->left = n2;      // 15 -> 10
    n1->right = NULL;

    n2->left = NULL;    // 10 has only RIGHT child
    n2->right = n3;

    n3->left = NULL;
    n3->right = NULL;

    struct student *root = n1;

    int key;
    printf("Enter value to delete (node with one child): ");
    scanf("%d", &key);

    if(root->left!=NULL && root->left->age){
        struct student *child;
        if(root->left->left!=NULL){
            child = root->left->left;
        }
        else{
            child = root->left->right;
        }
        free(root->left);
        root->left = child;
        printf("Deleted");
    }
    else{
        printf("Not found ");
    }
    return 0;
}
