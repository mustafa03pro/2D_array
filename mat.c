#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,m,o,p,i,j,s,c;
    
    printf("Enter the size of first matrix: ");
    scanf("%d %d", &n, &m);
    printf("Enter the size of second matrix: ");
    scanf("%d %d", &o, &p);
    int a[n][m], b[o][p];
    printf("Input elements in the first matrix: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("element - [%d], [%d] : ",i,j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Input elements in the second matrix: \n");
    for(i=0;i<o;i++)
    {
        for(j=0;j<p;j++)
        {
            printf("element - [%d], [%d] : ",i,j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("The first matrix is : \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("The second matrix is : \n");
    for(i=0;i<o;i++)
    {
        for(j=0;j<p;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    for(i=0,c=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]==b[i][j])
            {
                c=c+1;
            }
        }
    }
    if(c==(n*m))
    {
        printf("The matrix is equal");
    }
    else{
        printf("The matrix are not equal");
    }

}