#include<stdio.h>
int main(){
    int a[100][100];
    int i,r,c,nr,nc,z,e,o;
    printf("enter the no of row and coloumn: ");scanf("%d%d",&nr,&nc);
    printf("enter the array elements: ");
    
   
    for(r=0;r<nr;r++){
        for(c=0;c<nc;c++){
            scanf("%d",&a[r][c]);
                
            }
        }
        printf("\tzero\teven\todd\n");
        printf("---------------------------------\n");
        for(r=0;r<nr;r++){
            for(z=e=o=c=0;c<nc;c++){
                if(a[r][c]==0)z++;
                else if(a[r][c]%2==0)e++;
                else o++;
            }
            printf("%d row\t%d\t%d\t%d\n",r+1,z,e,o);
        }
        
                
            
    
   

    return 0;
}