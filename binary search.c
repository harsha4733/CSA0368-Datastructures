# CSA0368-Datastructures
programs on data structures lab
#include<stdio.h>
int main()
{
 int a[100],s,n,i,flag = 0,mid,high,low;
 printf("Enter the Number of Elements : ");
 scanf("%d",&n);
 for(i = 0;i < n;i++){
  printf("Enter : ");
  scanf("%d",&a[i]);
 }
 printf("\n");
 printf("Enter the Element you want to Search For : ");
 scanf("%d",&s);
 high = n;
 low = 1;
 mid = (high+low)/2;
 while(s != a[mid]){
  if(s <= a[mid]){
   low = 1;
   high = mid + 1;
   mid = (low + high)/2;
  }
  else
  {
   low = mid + 1;
   high = n;
   mid = (low+high)/2;
  }
 }
 printf("The Element %d is found at index %d",s,mid);
 return 0;
}
