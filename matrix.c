#include <stdio.h>
int main() {
    int r,c,i,j;
    printf("Enter the size for rows : ");
    scanf("%d",&r);
    printf("Enter the size for columns : ");
    scanf("%d",&c);
    int m1[r][c],m2[r][c];
    printf("****Enter the elements in First Matrix**** \n");
    for(i = 0;i < r;i++)
        {
            for(j = 0;j < c;j++)
                {
                    printf("M%d%d = ",i+1,j+1);
                    scanf("%d",&m1[i][j]);
                }
        }
    printf("****Enter the elements in Second Matrix**** \n");
    for(i = 0;i < r;i++)
        {
            for(j = 0;j < c;j++)
                {
                    printf("M%d%d = ",i+1,j+1);
                    scanf("%d",&m2[i][j]);
                }
        }
    printf("****First Matrix****\n");
    for(i = 0;i < r;i++)
        {
            printf("[");
            for(j = 0;j < c;j++)
                {
                    printf("%2d ",m1[i][j]);
                }
                printf("]\n");
        }
    printf("****Second Matrix****\n");
    for(i = 0;i < r;i++)
        {
            printf("[");
            for(j = 0;j < c;j++)
                {
                    printf("%2d ",m2[i][j]);
                }
                printf("]\n");
        }
    int op,sum[r][c],sub[r][c],mult[r][c],oc,k;
    printf("How many times you want to operate the operations : ");
    scanf("%d",&oc);
    for(int op_count = 0;op_count < oc;op_count++)
        {
    printf("****Which Operation do you want to perform %d****\n",op_count+1);
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("Choose any = ");
    scanf("%d",&op);
        if(op == 1)
            for(i = 0;i < r;i++)
                {
                    printf("[");
                for(j = 0;j < c;j++)
                    {
                        sum[i][j] = m1[i][j]+m2[i][j];
                        printf("%2d ",sum[i][j]);
                    }
                printf("]\n");
                }
        else if (op == 2)
            for(i = 0;i < r;i++)
                {
                    printf("[");
                for(j = 0;j < c;j++)
                    {
                        sub[i][j] = m1[i][j]-m2[i][j];
                        printf("%2d ",sub[i][j]);
                    }
                printf("]\n");
                }
        else if(op == 3)
            if(r == c)
                {
                for(i = 0;i < r;i++)
                        {
                            printf("[");
                        for(j = 0;j < c;j++)
                            {
                            mult[i][j]=0;
                            for(k = 0;k < c;k++)
                                {
                                    mult[i][j]+=m1[i][k]*m2[k][j];
                                }
                                printf("%2d ",mult[i][j]);
                            }
                        printf("]\n");
                        }
                }
        else
            printf("Sorry,we only multiply square matrices !!!");
        }
    return 0;
}
