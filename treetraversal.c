#include <stdio.h>
#include <stdlib.h>

struct node {
	int item;
	struct node* left;
	struct node* right;
};
void inorderTraversal(struct node* root) {
	if (root == NULL) return;
	inorderTraversal(root->left);
	printf("%d\t", root->item);
	inorderTraversal(root->right);
}
void preorderTraversal(struct node* root) {
	if (root == NULL) return;
	printf("%d\t", root->item);
	preorderTraversal(root->left);
	preorderTraversal(root->right);
}
void postorderTraversal(struct node* root) {
	if (root == NULL) return;
	postorderTraversal(root->left);
	postorderTraversal(root->right);
	printf("%d\t", root->item);
}
struct node* createNode(value) {
	struct node* newNode = malloc(sizeof(struct node));
	newNode->item = value;
	newNode->left = NULL;
	newNode->right = NULL;

	return newNode;
}
struct node* insertLeft(struct node* root, int value) {
	root->left = createNode(value);
	return root->left;
}
struct node* insertRight(struct node* root, int value) {
	root->right = createNode(value);
	return root->right;
}

int main() {
	struct node* root = createNode(153);
	insertLeft(root, 175);
	insertRight(root, 76);

	insertLeft(root->left, 543);
	insertRight(root->left, 624);
	insertLeft(root->left->left,566);
	insertLeft(root->left->right,65);

	printf("Inorder traversal \n");
	inorderTraversal(root);

	printf("\nPreorder traversal \n");
	preorderTraversal(root);

	printf("\nPostorder traversal \n");
	postorderTraversal(root);
}
