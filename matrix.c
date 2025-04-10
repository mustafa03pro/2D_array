#include<stdio.h>
int main(){
    int n,m,i,j,o,p,c;
    printf("enter the no of row and coloumn: ");scanf("%d%d",&n,&m);
    printf("enter the no of row and coloumn: ");scanf("%d %d",&o,&p);
    int a[n][m]; int b[o][p];
    printf("enter the first array elements");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("element - [%d], [%d] : ",i,j);
            scanf("%d", &a[i][j]);
        }
    }
    
   
   
    printf("enter the array 2 elements");
    for(i=0;i<o;i++){
        for(j=0;j<p;j++){
            printf("element - [%d], [%d] : ",i,j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("first array...........\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("second array ........\n");
    for(i=0;i<o;i++){
        for(j=0;j<p;j++){
            
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    c=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i][j]==b[i][j]){
                c=c+1;
            }
    }
    }
    if(c==(n*m)){
        printf("The array are equal");
    }
    else{
        printf("The array are not equal");

    }
    return 0;
}
// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     int n,m,i,j,s,max;
//     system("cls");
//     printf("Enter the size of matrix: ");
//     scanf("%d %d", &n, &m);
//     int a[n][m];
//     printf("Input elements in the %dx%d matrix: \n",n,m);
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<m;j++)
//         {
//             printf("element - [%d], [%d] : ",i,j);
//             scanf("%d", &a[i][j]);
//         }
//     }
//     printf("The matrix is : \n");
//     for(i=0;i<n;i++)
//     { for(j=0;j<m;j++)
//         {
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
//     for(i=0,max=0;i<n;i++)
//     {
//         printf("Max element of row %d: ",i+1);
//         for(j=0;j<m;j++)
//         {
//             if(max<a[i][j])
//             {
//                 max=a[i][j];
//             }
//         }
//         printf("%d\n",max);
//     }
// return 0;

// }