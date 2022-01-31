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
    
    float percentage= (maths+english+physics+chemistry+painting)/5.0;
    printf("The obtained Percentage is : %.2f",percentage);
    
    return 0;
}    
