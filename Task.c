/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <limits.h>
int main()
{
     for (int i = 2; i <= 25; i++)
    {

      if (i == 13 || i == 16 || i == 19)
	{
	  continue;

	}
      if (i == 23)
	{
	  break;
	}
       printf("%d\n", i);;

    }

  int sum = INT_MIN;
  int sum1 = INT_MAX;	// minimum value


  for (int i = 1; i <= 5; i++)
    {
      printf( "Enter Number %d\n " , i );
      int num;
      scanf("%d", &num);

      if (num > sum)
	{
	  sum = num;

	}
      if (num < sum1)
	{
	  sum1 = num;

	}

    }
  printf(" largest value  %d\n",sum ) ;
  printf ( "smallest value %d\n",sum1);

    return 0;
}
