#include <iostream>
#include <math.h>
using namespace std;

long dem(long n)
{
	long d = 0;
	n *= 2;
	for (long i = 2; i <= sqrt(n); i++)
	  if (n % i == 0)
	  {
	  	long j = n / i;
	  	if ((j > i) && ((j - i) % 2 != 0)) d++;
	  }
	return d;
}

main()
{
	long t, id, n;
	cin >> t;
	for (long q = 1; q <= t; q++)
	{
		cin >> id >> n;
		cout << id << " " << dem(n) << endl;
	}
}