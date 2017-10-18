#pragma once

#include "Etudiant.h"
#include <vector>
#include <string>

using namespace std;

class Option
{
private :
	string _nom;
	int _effMax;
	vector<Etudiant> _inscrits;

public:
	Option(const string& n, int max);
	~Option();

	//setters

};

