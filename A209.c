#include <stdio.h>

int main(){
    int a[10][10],i,j,r,c,sum=0;

    printf("Enter rows and columns: ");
    scanf("%d%d",&r,&c);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            sum+=a[i][j];

    printf("Sum = %d\n",sum);
    printf("Average = %f",(float)sum/(r*c));
}
