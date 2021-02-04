//find a number is leader or not
//ye run ni hua h
#include<stdio.h>
int main()
{
    int i,j,n,max_right,arr[n];
    printf("size of array\n");
    scanf("%d",&n);

    printf("\nthe array is:\n");
    for(i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    
/*
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j])
            break;
        }
        if(j==n);
        printf("%d",arr[i]);
    }
*/
    max_right=arr[n-1];
    for(i=n-2;i>=0;i--){
        if(arr[i]>max_right)
        {
         max_right=arr[i];
         printf("%d",max_right);
        }
    }


    return 0;
}