#include<stdio.h>
#include<stdlib.h>
void
main ()
{

  int n, i, *ptr;
  printf ("ENTER THE NUMBER OF ELEMENTS: ");
  scanf ("%d", &n);
  ptr = (int *) malloc (n * sizeof (int));
  if (ptr == NULL)
    {
      printf ("ERROR!MEMORY NOT ALLOCATED");
    }
  else
    {
      printf ("Enter the element :");
      for (i = 0; i < n; i++)
	{
	  scanf ("%d", ptr + i);
	}
      for (i = 0; i < n; i++)
	{
	  printf ("%d", ptr[i]);
	}
      free (ptr);
    }
}
