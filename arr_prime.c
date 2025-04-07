#include<stdio.h>
int main(){
    int a[100],n,i,j,count;
    printf("Enter the array size: ");scanf("%d",&n);
    if(n<=0){
        printf("invalid size.....");
        return 0;
    }

    for(i=0;i<n;i++)scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        if(a[i]<=1){
            continue;
        }
        count=0;
        for(j=2;j<=a[i]/2;j++){
            if(a[i]%j==0){
                count++;
                break;
            }
        }
        if(count==0){
            printf("%d ",a[i]);
        }


    }
    return 0;

}