#include<stdio.h>
int main(){
    int n,r,c;
    
    
    int a[2] [3]={1,2,3,4,5,6};
    for(r=0;r<2;r++){
        for(c=0;c<3;c++){
            printf("a[%d][%d] value =%d and addres %u\n",r,c,a[r][c],&a[r][c]);
        }
        printf("\n");
    }
    return 0;


}