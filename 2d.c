#include<stdio.h>
int main(){
    int a[100][100];
    int i,r,c,nr,nc,s=0;
    printf("enter the no of row and coloumn: ");scanf("%d%d",&nr,&nc);
    printf("enter the array elements: ");
    
    if(nr==nc){
        for(r=0;r<nr;r++){
            for(c=0;c<nc;c++){
                scanf("%d",&a[r][c]);
                if(r==c){
                    s=s+a[r][c];
                }
            }
        }
        printf("the trace elements %d",s);
        
                
            
    }
    else{
        printf("the no of rows should be equal to coloumn");
    }

    return 0;
}