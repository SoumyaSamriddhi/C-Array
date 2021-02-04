#include<stdio.h>

int main()
{
   //int wall =Rs.18/feet sq
   //ext wall=Rs.12/feet sq
   int w1,w2,SA1,SA2,total_cost;
   printf("number of interior walls\n");
   scanf("%d",&w1);
   printf("number of external walls\n");
   scanf("%d",&w2);
   printf("surface area of interior and exterior walls are:\n");
   scanf("%d %d",&SA1,&SA2);
   
   printf("total painting cost is:");
   total_cost=((w1*SA1)*18)+((w2*SA2)*12);
   
   printf("%d",total_cost);
   
   

    return 0;
}
