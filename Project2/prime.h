

#ifndef _PRIME_
#define _PRIME_

bool IsPrime(int v) {
	for (int i = 2; i < v; i++)
	{
		if (v % i == 0) return false;
	}

	return true;
}

#endif // !_PRIME_

