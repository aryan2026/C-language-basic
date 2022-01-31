#include<stdio.h>
int main()
{
    // Finding percentage by taking marks in subjects from user
     
    int maths,english,physics,chemistry,painting;
    printf("Enter your Maths Marks: ");
    scanf("%d",&maths);
    printf("Enter your English Marks: ");
    scanf("%d",&english);
    printf("Enter your Physics marks: ");
    scanf("%d",&physics);
    printf("Enter your Chemistry Marks: ");
    scanf("%d",&chemistry);
    printf("Enter your Painting Marks: ");
    scanf("%d",&painting);
    
// using OR gate ---> if any condition is true then code will not run to find percentage
  
  if(maths>100 || english>100 || physics>100 || chemistry>100 || painting>100)
    {
        printf("Please enter valid marks");
    }
    
    else
    
     {
         float percentage= (maths+english+physics+chemistry+painting)/5.0;
        printf("The obtained Percentage is : %.2f",percentage);
     }
    return 0;
}    
