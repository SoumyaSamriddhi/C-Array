#include<stdio.h>
int main(){
     
     int ni,ne,i=0;
     float int_p=18,ext_p=12,cost,temp;
     scanf("%d %d",&ni,&ne);

    if(ni<0||ne<0){ printf("Invalid input");}
    else if(ni==0 && ne==0){ printf("Total estimated cost is:0.0INR");}
    else
    {
        for(i=0;i<ni;i++){
            scanf("%f",&temp);
            cost+=int_p*temp;
        }
        printf("\n");
        
        for(i=0;i<ne;i++){
            scanf("%f",&temp);
            cost+=ext_p*temp;
        }
        printf("Total cost:%.1f INR",cost);

    }
     return 0;
}