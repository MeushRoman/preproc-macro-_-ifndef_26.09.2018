#ifndef _SA_
#define _SA_

#include "prime.h"

int PrimesInArray(int*arr, int n) {
	int k = 0;

	for (int i = 0; i < n; i++)
	{
		if (IsPrime(arr[i]))	k++;
	}

	return k;
}

#endif // !_SA_

