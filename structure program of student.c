#include<stdio.h>
struct student
{
  int id;
  int marks;
  char fav_character;

};

int
main ()
{

  struct student amit, aryan, munesh;

  amit.id = 1;
    amit.marks = 340;
    amit.fav_character = 'a';
    
    aryan.id = 2;
    aryan.marks = 300;
    aryan.fav_character = 'b';
    
    munesh.id = 3;
    munesh.marks = 320; 
    munesh.fav_character = 'c'; 
    
    printf("Amit got %d marks\n",amit.marks);
    printf("Amit id is %d \n",amit.id);
    printf("Amit's fav character is %c\n",amit.fav_character);
    
    printf("Aryan got %d marks\n",aryan.marks);
    printf("Aryan id is %d\n",aryan.id);
    printf("Aryan's fav character is %c\n",aryan.fav_character);
    
    printf("Munesh got %d marks\n",munesh.marks);
    printf("Munesh id is %d\n",munesh.id);
    printf("Munesh's fav character is%c",munesh.fav_character);
    
    
    
    return 0;


}
