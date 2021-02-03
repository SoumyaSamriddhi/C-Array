//sorted array given ,number X then find a pair in array whose sum is closest to X.

//av v run ni hua h ,check qr lo wapas se
#include<stdio.h>
#include<limits.h>
#define INT_MAX;
int main(){
    int  X;
    int arr[]={14,16,19,21,46,84,126,169};
    
   int lenth=sizeof(arr)/sizeof(arr[0]);
    //scanf("%d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3]);
    printf("Number\n");
    scanf("%d",&X);

    int left=0,right=lenth-1,sum=0,closest=INT_MAX,closest_sum;

    while(left<right)
    {
        sum=arr[left]+arr[right];
        if(abs(X-sum)<closest)
        {
            closest=abs(X-sum);
            closest_sum=sum;
        }
        if(sum>X)
        right--;
        else if(sum<=X)
        left++; 
    }
    printf("closest_sum");

  return 0;
}