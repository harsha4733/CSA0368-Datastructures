#include <stdio.h>
#include<stdlib.h>
#define TABLE_SIZE 10
int h[100];
void insert() {
	int k,hk,i,index;
	printf("Enter the Key to be inserted : ");
	scanf("%d",&k);
	hk = k%TABLE_SIZE;
	for(i = 0;i <TABLE_SIZE;i++){
		index = (hk+i)%TABLE_SIZE;
		if(h[index] == 0){
			h[index] = k;
			break;
		}
	}
	if(i == TABLE_SIZE){
		printf("Element cannot be inserted\n");
	}
}
void display() {
	int i;
	printf("\nelements in the hash table are \n");
	for(i=0; i< TABLE_SIZE; i++)
		printf("\nat index %d \t value = %d",i,h[i]);
	printf("\n");
}
int main() {
	int opt,i;
	printf("Choices \n1. Insert\n2. Display\n");
	while(1) {
		printf("Enter your Choice : ");
		scanf("%d",&opt);
		switch(opt) {
			case 1:
				insert();
				break;
			case 2:
				display();
				break;
		}
	}
	return 0;
}
