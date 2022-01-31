#include<stdio.h>
#include<math.h>
#define PI 3.142857
int main ()
// Finding area and circumference of a circle
// formula : Area = pie*r*r ,Circumference = 2*pie*r

{
    float area,radius,Circumference;
    printf("Enter the radius of circle: ");
    scanf("%f",&radius);
    
    area=PI*radius*radius;
    
    printf("The area of circle is: %f\n",area);
   
    
    Circumference=2*PI*radius;
    
    printf("The Circumference of circle is: %f",Circumference);
    
 return 0;   
}    
    
