#include <stdio.h>
int main () {
    int m,n;
    printf("Enter the limits ");
    scanf("%d %d",&m,&n);
    int a[m][n],i,j,sum=0;
    printf("Enter the array elements ");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
            sum = sum+a[i][j];
        }

        printf("sum of this array : %d",sum);
    }
    return 0;
} 
