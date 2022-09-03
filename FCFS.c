#include<stdio.h>
struct process
{
  int arrival;
  int brust;
  int comp_time;
  int turn_time;
  int wait_time;  
};
int main(){
   struct process newprocess[100];
    int n;
    printf("Enter number of process\n");
    scanf("%d", &n);
    printf("enter the arrival time\n");
    scanf("%d",&newprocess[0].arrival);
    printf("enter the brust time\n");
    scanf("%d",&newprocess[0].brust);
    newprocess[0].comp_time = newprocess[0].brust +newprocess[0].arrival;
    newprocess[0].turn_time =newprocess[0].comp_time - newprocess[0].arrival;
    newprocess[0].wait_time = newprocess[0].turn_time - newprocess[0].brust;
    int i;
    for ( i = 1; i <n; i++)
    {
        scanf("%d",&newprocess[i].arrival);
        scanf("%d",&newprocess[i].brust);
        if(newprocess[i-1].comp_time > newprocess[i].arrival){
         newprocess[i].comp_time= newprocess[(i-1)].comp_time + newprocess[i].brust;
        
        }
        else{
            newprocess[i].comp_time = newprocess[i].arrival + newprocess[i].brust;
        }
         newprocess[i].turn_time =newprocess[i].comp_time - newprocess[i].arrival;
         newprocess[i].wait_time = newprocess[i].turn_time - newprocess[i].brust;

    }
    printf("processno\tarrival time\tbrusttime\tcompletiontime\tturntime\twaiting\n");
    for ( i = 0; i <n; i++)
    {
      printf(" P%d\t\t",i);
       printf("%d\t\t",newprocess[i].arrival);
       printf("%d\t\t",newprocess[i].brust);
       printf("%d\t\t",newprocess[i].comp_time);
        printf("%d\t\t",newprocess[i].turn_time);
        printf("%d\t\t",newprocess[i].wait_time);
        printf("\n");
        
       
    }
    
return 0;
}
