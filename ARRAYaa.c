//find a number is leader or not
//ye run ni hua h
#include<stdio.h>
int main()
{
    int i,j,n,arr[n];
    printf("size of array\n");
    scanf("%d",&n);

    printf("\nthe array is:\n");
    for(i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j])
            break;
        }
        if(j==n);
        printf("%d",arr[i]);
    }




    return 0;
}