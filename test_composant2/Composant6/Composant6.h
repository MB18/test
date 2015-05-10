#pragma once
#ifndef COMPOSANT6_H
#define COMPOSANT6_H

#ifdef COMPOSANT6_EXPORTS
	#define COMPOSANT6_INTERFACE __declspec(dllexport)
#else
	#define COMPOSANT6_INTERFACE __declspec(dllimport)
#endif

#include<vector>

// interface du composant1

//COMPOSANT1_INTERFACE char * getComposant1Version(void);
COMPOSANT6_INTERFACE std::vector<double> getChemin( double spot, int maturite);
#endif

