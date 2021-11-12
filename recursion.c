//  factorial using recursion 

#include <stdio.h>
void display();
int main()
{
   display(5);
   return 0;
}
void display(int n)
{
   if (n > 0)
   {
      printf("\nCalling Recursion !\n");
      display(n - 1); // recursive call
   }
}