#include "Composant6.h"




vector<double> getChemin(double spot, int maturite)
{
	vector<double> valeurs;
	for (int i = 0 ; i < maturite ; i++)
	{
		if (i%2 ==0)	
			valeurs.push_back(47+ i/10);
		else
			valeurs.push_back(47- i/10);
	}
	return valeurs;
}