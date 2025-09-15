#include<stdio.h>
int main()
    {
        int n1,n2,i,size,merged,n1_size,n2_size;
        printf("****Enter the elements in array 1**** \n");
        printf("enter the size of array 1 : ");
        scanf("%d",&n1);
        int a1[n1];
        for(i = 0;i < n1;i++)
        {
            printf("E%d = ",i+1);
            scanf("%d",&a1[i]);
        }
        printf("****Enter the elements in array 2**** \n");
        printf("enter the size of array 1 : ");
        scanf("%d",&n2);
        int a2[n2];
        for(i = 0;i < n2;i++)
        {
            printf("E%d = ",i+1);
            scanf("%d",&a2[i]);
        }
        printf("\n");
        printf("a1[%d] = | ",n1);
        for(i = 0;i < n1;i++)
        {
            printf("%d | ",a1[i]);
        }
        printf("\n");
        printf("a2[%d] = | ",n2);
        for(i = 0;i < n2;i++)
        {
            printf("%d | ",a2[i]);
        }
        printf("\n\n");
        printf("****Merged Array**** \n");
        n1_size=sizeof(a1)/sizeof(a1[0]);
        n2_size=sizeof(a2)/sizeof(a2[0]);
        size = n1_size+n2_size;
        printf("\n");
        printf("a[%d] =",size);
        for(i = 0;i < n1 ;i++)
        {
            printf(" %d | ",a1[i]);
        }
        for(i = 0;i < n2 ;i++)
        {
            printf(" %d | ",a2[i]);
        }
    return 0;
    }
