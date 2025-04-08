// Que 1 :
// =======

// Write a program in C to find the sum of rows and columns of a matrix.

// Sample input :
// Input the size of the square matrix : 2
// Input elements in the 2*2 matrix :
// element - [0],[0] : 5
// element - [0],[1] : 6
// element - [1],[0] : 7
// element - [1],[1] : 8

// Sample Output :
// The matrix is :
// 5 6
// 7 8

// The sum or rows and columns of the matrix is :
// 5   6  11
// 7   8  15
// 12 14
#include<stdio.h>
int main(){
    int n,r,c,nr,s=0;
    
    
    
    printf("enter the no of matrix: ");scanf("%d",&n);
    int a[n][n];
    printf("enter the %d X %d elements ",n,n);

    for(r=0;r<n;r++){
        for(c=0;c<n;c++){
            scanf("%d",&a[r][c]);
        }
    }
    for(r=0;r<n;r++){
        for(c=0;c<n;c++){
            printf("%4d",a[r][c]);
        }
        printf("\n");
    }
    printf("the sum of matrix row and coloumn\n");
    for(r=0;r<n;r++){
        for(c=0,s=0;c<n;c++){
            printf("%3d",a[r][c]);
            s=s+a[r][c];
            
        }
        printf("%3d",s);
        printf("\n");
        
    }
    
    for(c=0;c<n;c++){
        for(r=0,s=0;r<n;r++){
            s=s+a[r][c];
        }
        printf("%3d",s);
    }
   

    return 0;


}
