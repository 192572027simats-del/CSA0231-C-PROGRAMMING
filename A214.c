#include <stdio.h>

int main(){
    int a[50],n,i,min,second;

    printf("Enter size: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    min=second=9999;

    for(i=0;i<n;i++){
        if(a[i]<min){
            second=min;
            min=a[i];
        }
        else if(a[i]<second && a[i]!=min)
            second=a[i];
    }

    printf("Second minimum = %d",second);
}
