#include<stdio.h>
int main(){
    int n,r,c,nr,nc,nr1,nc1,s=0,i,j,o,p;
   
    
    
    
    printf("enter the no of row and coloumn: ");scanf("%d%d",&i,&j);
    int a[i][j];
    printf("enter the array elements");
    for(r=0;r<i;r++){
        for(c=0;c<j;c++){
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("enter the no of row and coloumn: ");scanf("%d%d",&o,&p);
    int b[o][p];
    printf("enter the array 2 elements");
    for(r=0;r<o;r++){
        for(c=0;c<p;c++){
            scanf("%d",&a[o][p]);
        }
    }
    for(r=0;r<i;r++){
        for(c=0;c<j;c++){
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
    for(r=0;r<o;r++){
        for(c=0;c<p;c++){
            printf("%4d",a[o][p]);
        }
        printf("\n");
    }
    for(r=0,c=0;r<i;r++){
        for(c=0;c<j;c++){
            if(a[i][j]==b[o][p])c++;
        }
    }
    if(c==(i*j)){
        printf("The array are equal");
    }
    else{
        printf("The array are not equal");

    }
    return 0;
}