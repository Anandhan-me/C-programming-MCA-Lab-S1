#include<stdio.h>
int main()
    {
        int n,i,pick,element,locked,mid;
        printf("How many elements you want in your array : ");
        scanf("%d",&n);
        printf("***ENTER A WELL SORTED ELEMENTS TO YOUR ARRAY*** \n");
        int bi[n];
        for(i=0;i<n;i++)
        {
            printf("E%d = ",i+1);
            scanf("%d",&bi[i]);
        }
        printf("bi[%d] = | ",n);
        for(i=0;i<n;i++)
        {
            printf("%d | ",bi[i]);
        }
        printf("\n");
        printf("choose any element : ");
        scanf("%d",&pick);
        int start=0,end=n-1;
        for(i=0;i<n;i++)
        {
            mid=(start+end)/2;
            if(bi[mid]==pick)
            {
                printf("element %d is present at the index %d ",pick,i);
                element=locked;
                break;
            }
            else if(bi[mid]>pick)
                {
                    end=mid-1;
                }
            else{
                start=mid+1;
            }
        }
        if(element!=locked)
        {
            printf("%d is not present in the array ",pick);
        }
return 0;
    }
