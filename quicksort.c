#include<stdio.h>
void quick(int a[],int first,int last){
	int p,i,j,temp;
	if(first < last){
		p = first;
		i = first;
		j = last;
		while(i < j){
			while(a[i] <= a[p] && i < last){
				i++;
			}
			while(a[j] > a[p]){
				j--;
			}
			if(i < j){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
		temp = a[p];
		a[p] = a[j];
		a[j] = temp;
		quick(a,first,j-1);
		quick(a,j+1,last);
	}
}
int main(){
	int n[100],num,i;
	printf("Enter the Number of Elements : ");
	scanf("%d",&num);
	for(i = 0;i<num;i++){
		printf("Enter : ");
		scanf("%d",&n[i]);
	}
	printf("\nThe Numbers before sorting : \n");
	for(i = 0;i < num;i++){
		printf("%d\t",n[i]);
	}
	printf("\n\nThe Numbers after Sorting is : ");
	quick(n,0,num-1);
	printf("\n");
	for(i = 0;i < num;i++){
		printf("%d\t",n[i]);
	}
	return 0;
}
