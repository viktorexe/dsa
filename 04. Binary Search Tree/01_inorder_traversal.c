#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    struct student{
        int age;
        struct student *left;
        struct student *right;
    };

    // Define 
    struct student *n1 = malloc(sizeof(struct student));
    n1->age = 15;
    struct student *n2 = malloc(sizeof(struct student));
    n2->age = 10;
    struct student *n3 = malloc(sizeof(struct student));
    n3->age = 20;

    // Linking
    n1->right= n2;
    n1->left = n3;
    n2->right = NULL; 
    n2->left = NULL;
    n3->right = NULL;
    n3->left = NULL;

    // root node
    struct student *root = n1;

    printf("Inorder Traversal: \n");
    if(root->left!=NULL){
        printf("%d ", root->left->age);
    }
    printf("%d ", root->age);
    if(root->right!=NULL){
        printf("%d ", root->right->left);
    }
    return 0;
}