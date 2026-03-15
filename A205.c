#include <stdio.h>

int main(){
    int a[50],n,i,count=0;

    printf("Enter size: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++){
        if(a[i]<0)
            count++;
    }

    printf("Number of negative numbers = %d",count);
}
