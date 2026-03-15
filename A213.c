#include <stdio.h>

int main(){
    int a[50],n,d,i,temp;

    printf("Enter size: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter rotations: ");
    scanf("%d",&d);

    for(int j=0;j<d;j++){
        temp=a[0];
        for(i=0;i<n-1;i++)
            a[i]=a[i+1];
        a[n-1]=temp;
    }

    printf("Rotated array:\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
