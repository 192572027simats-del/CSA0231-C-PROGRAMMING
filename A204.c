#include <stdio.h>

int main(){
    int a[50],n,i,j,count=0,div;

    printf("Enter size: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++){
        div=0;
        for(j=1;j<=a[i];j++){
            if(a[i]%j==0)
                div++;
        }
        if(div>2)
            count++;
    }

    printf("Number of Composite Numbers = %d",count);
}
