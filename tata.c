#include <stdio.h>
struct process{
    int all;
    int max;
    int need;
};

int main(){
    struct process myprocess[100];
    int n,i;
    printf("Enter the nuber of process\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the number of allocated resource\n");
        scanf("%d",&myprocess[i].all);
         printf("Enter the number of Maximum resource\n");
        scanf("%d",&myprocess[i].max);
        myprocess[i].need= myprocess[i].max - myprocess[i].all;


    }

for(i=0;i<n;i++){
        printf("allocated: %d\n", myprocess[i].all);

         printf("maximum need: %d\n",myprocess[i].max);
         printf("remaining need: %d\n",myprocess[i].need);

        myprocess[i].need= myprocess[i].max - myprocess[i].all;


    }
    return 0;
}
