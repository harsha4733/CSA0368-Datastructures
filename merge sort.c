#include <stdio.h>
#include <stdlib.h>
void merge(int a[], int l, int m, int r) {
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;
	int left[n1], right[n2];
	for (i = 0; i < n1; i++){
		left[i] = a[l + i];
	}
	for (j = 0; j < n2; j++){
		right[j] = a[m + 1 + j];
	}
	i = 0;
	j = 0;
	k = l;
	while (i < n1 && j < n2) {
		if (left[i] <= right[j]) {
			a[k] = left[i];
			i++;
		} else {
			a[k] = right[j];
			j++;
		}
		k++;
	}
	while (i < n1) {
		a[k] = left[i];
		i++;
		k++;
	}
	while (j < n2) {
		a[k] = right[j];
		j++;
		k++;
	}
}
void mergesort(int a[],int l, int r) {
	if (l < r) {
		int m = l + (r - l) / 2;
		mergesort(a, l, m);
		mergesort(a, m + 1, r);
		merge(a, l, m, r);
	}
}
void printArray(int A[], int size) {
	int i;
	for (i = 0; i < size; i++){
		printf("%d\t", A[i]);
	}
	printf("\n");
}
int main() {
	int a[10],n,i;
	printf("Enter the Number of Elements : ");
	scanf("%d",&n);
	for(i = 0;i <n ;i++){
		printf("Enter : ");
		scanf("%d",&a[i]);
	}
	printf("Given array is \n");
	printArray(a, n);
	mergesort(a, 0,n - 1);
	printf("\nSorted array is \n");
	printArray(a, n);
	return 0;
}
