#include <cmath>

extern "C" __declspec(dllexport) double product(double* l, double* r)
{
	if (r - l == 1)
	{
		return sin(*l) - cos(*l);
	}
	else if (r - l == 2)
	{
		return (sin(*l) - cos(*l)) * (sin(*(l + 1)) - cos(*(l + 1)));
	}
	return product(l, l + (r - l) / 3) * product(l + (r - l) / 3, r);
}