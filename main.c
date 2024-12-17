#include<stdio.h>
#include<stdbool.h>

bool EVEN_OR_NOT(int n)
{
    if (n % 2 == 0)
    {
         true;
    }else
    {
         false;
    }   
}

int main()
{
  int n; 
  printf("EVEN OR ODD PROGRAM");
  printf("\nenter your number : ");
  scanf("%d",n);

if (EVEN_OR_NOT(n))
{
    printf("\n your number is even");
}else
{
    printf("\n your number is odd");
}

return 0;
    
}