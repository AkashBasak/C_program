

#include <stdio.h>
#include<conio.h>
#define max 30;

int main()
{
    int i,j,n,t,p[max],wt[max],tat[max],bt[max];
    float awt=0, atat=0;
    printf("Enter the number of process\n");
    scanf("%d",&n);
     printf("Enter the process number\n");
     for(i=0;i<n;i++){
         scanf("%d",&p[i]);
         
     }
      printf("Enter the brust time of the process\n");
      for(i=0;i<n;i++){
         scanf("%d",&bt[i]);
         
     }
     for(i=0;i<n;i++){
         for(j=0;i<n-i-1;i++){
             if(bt[j]>bt[j+1]){
                 
             }
         }
         
     }

    return 0;
}
