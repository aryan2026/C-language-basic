#include<stdio.h>
int main()
{
    int age;

   
    printf("Which of the following is national bird of india?\n1.Sparrow\n2.Crow\n3.Peacock\n");
     scanf("%d",&age);
    
    switch(age)
    {
        case 1:
        printf("Incorrect answer");
        break;
        
        case 2:
        printf("Incorrect answer");
        break;
        
        case 3:
        printf("Correct answer");
        break;
        
    default:
    
    printf("The data for this input is not stored in this code");
    
    }
    
    return 0;
}
