#include "Composant7.h"

double pricePath2( string typePayOff, double path[], double strike, double maturity)
{
	double value=-10;
	if (typePayOff == "CALL")
		value = 23;
	else if (typePayOff =="PUT")
		value = -3;
	return value;
}