#include<stdio.h>
int main(){
    int a[10][10],b[10][10],n,r,nr,nc,c,k,s;
    printf("Enter the array size: ");scanf("%d%d",&nr,&nc);
    printf("the a 1st %d array ",nr*nc);
     
    

    for(r=0;r<nr;r++)for(c=0;c<nc;c++)scanf("%d",&a[r][c]);
    printf("the a 2st %d array ",nr*nc);
    for(r=0;r<nr;r++)for(c=0;c<nc;c++)scanf("%d",&b[r][c]);
    puts("Result matrix elements are ");
    puts("-------------------------------------------");
    for(r=0;r<nr;r++){
        
       
        for(c=0;c<nc;c++){
            for(s=k=0;k<nc;k++)
            {
            s+=a[r][k]*b[k][c];
            }
            printf("%4d",s);

        }
        printf("\n");
        

    }
    return 0;

}