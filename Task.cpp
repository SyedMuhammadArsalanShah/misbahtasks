
#include <iostream>
#include <limits>
using namespace std;

int
main ()
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
      cout << i << endl;

    }

  int sum = std::numeric_limits < int >::min ();	// minimum value
  int sum1 = std::numeric_limits < int >::max ();


  for (int i = 1; i <= 5; i++)
    {
      cout << "Enter " << i << " Number" << "\n";
      int num;
      cin >> num;

      if (num > sum)
	{
	  sum = num;

	}
      if (num < sum1)
	{
	  sum1 = num;

	}

    }
  cout << "largest value " << sum << endl;
  cout << "smallest value " << sum1 << endl;

  return 0;
}

