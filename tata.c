#include <stdio.h>
struct process{
    int all;
    int max;
    int need;
    int avail;
};

int main(){
    struct process myprocess[100];
    int n,i;
    printf("Enter the nuber of process\n");
    scanf("%d",&n);
     printf("Enter the number of allocated resource of 1st process\n");
        scanf("%d",&myprocess[0].all);
         printf("Enter the number of Maximum resource of 1st process\n");
        scanf("%d",&myprocess[0].max);
         printf("Enter the number of available resource of 1st process\n");
        scanf("%d",&myprocess[0].avail);
        myprocess[0].need= myprocess[0].max - myprocess[0].all;
        
    
    for(i=1;i<n;i++){
        printf("Enter the number of allocated resource\n");
        scanf("%d",&myprocess[i].all);
         printf("Enter the number of Maximum resource\n");
        scanf("%d",&myprocess[i].max);
        myprocess[i].need= myprocess[i].max - myprocess[i].all;


    }
    for(i=1;i<n;i++){
       if(myprocess[i-1].avail > myprocess[i].need){
           myprocess[i].avail= myprocess[i].need + myprocess[i].all;
       }

    }
    
printf("allocated\tmax\tneed\tavailable");
printf("\n");
for(i=0;i<n;i++){
        printf("%d\t", myprocess[i].all);
         printf("%d\t",myprocess[i].max);
         printf("%d\t",myprocess[i].need);
         printf("%d\t",myprocess[i].avail);

       
        printf("\n");

    }
    return 0;
}
