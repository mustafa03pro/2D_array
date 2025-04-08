#include<stdio.h>
int main(){
    int n,r,c,nr,nc;
    
    
    int a[10][10];
    printf("enter the no of row and coloumn: ");scanf("%d%d",&nr,&nc);
    printf("enter the %d elements ",nr*nc);

    for(r=0;r<nr;r++){
        for(c=0;c<nc;c++){
            scanf("%d",&a[r][c]);
        }
    }
    for(r=0;r<nr;r++){
        for(c=0;c<nc;c++){
            printf("%4d",a[r][c]);
        }
        printf("\n");
    }
    return 0;


}