
// printing all even number upto num

#include<stdio.h>
int main()
{
    int num,i;
    printf("ENTER THE NUMBER :  ");
    scanf("%d",&num);
    printf("\nALL THE EVEN NUMBER FROM 1 TO %d\n",num);
    
    for(i=1;i<=num;i++)
    {
        if(i%2==0)
        
            printf("%d\n",i);
    } 

   
    return 0;
}
