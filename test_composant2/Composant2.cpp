// Composant2.cpp : Defines the exported functions for the DLL application.
//
#include "stdafx.h"
#include <vector>
#include "Composant2.h"
#include <string>

using namespace std;

	Composant2::Composant2(){
	};

	double  Composant2::doMonteCarlo(string typePayOff, double maturity, double strike, int nbIterations){
		vector<double> vecteurPayOff(nbIterations);
		double sumPayOff = 0;
		double* vectorFromC6_tmp;
		double payOff_tmp;

		//Recuperation des n PayOff; soit n le nbIterations.
		for (int i = 0; i < nbIterations; i++){
			vectorFromC6_tmp = getPath();//Recuperation des 504 VA
			payOff_tmp = pricePath(typePayOff, vectorFromC6_tmp, strike, maturity);//Alimentation du C7 par le tableau des 504 VA, puis recuperation du payOff associe en fonction du type d option traite (asiat, euro ect.)
			vecteurPayOff.push_back(payOff_tmp);//Ajout du payOff dans le vecteur de PayOffs
		}

		//Calcul de la somme des PayOff
		for (vector<double>::iterator j = vecteurPayOff.begin(); j != vecteurPayOff.end(); ++j){
			sumPayOff = sumPayOff + *j;
		}

		//Calcul de l'esperance : Somme PayOff / Nb PayOff
		return sumPayOff / nbIterations;
	};

	double* Composant2::getPath(){
		//TODO : Récupérer un double* depuis le C6
		return new double[3];
	};

	double  Composant2::pricePath(string typePayOff, double* vecteur, double strike, double maturity){
		//TODO : Récupérer un double depuis le C7
		return NULL;
	};




