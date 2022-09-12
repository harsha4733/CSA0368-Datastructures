#include<stdio.h>
int main()
{
    int i,n,a[10],pos,key,option;
    printf("\nenter the no of elements\n");
    scanf("%d",&n);
    printf("\n enter the array elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    printf("\nenter the pos and key element\n");
    scanf("%d\n%d",&pos,&key);
    printf("enter the option\n");
    printf("1.insert\n 2.delete\n");
    scanf("%d",&option);
    switch(option)
        {
        case 1:
            for(i=n;i>=pos;i--)
                a[i]=a[i-1];
            a[pos-1]=key;
            for(i=0;i<=n;i++)
                printf("%d",a[i]);
            break;
        case 2:
            for(i=pos-1;i<n;i++)
                a[i]=a[i+1];
            for(i=0;i<n-1;i++)
                printf("%d\t",a[i]);
            break;
        }
}
