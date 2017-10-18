#include "Stage.h"
#include "Etudiant.h"
#include <vector>
#include <string>

using namespace std;

#pragma once
class Diplome
{
private :
	string _titre;
	vector<Etudiant*> _etudiants;
	Stage *_stage;
public:
	Diplome(const string& t, const Stage *s);
	~Diplome();

	void setTitre(const string t);
	void setStage(const Stage *s);

	string getTitre()const;
	Stage getStage()const;

	void inscrire(const Etudiant *e);
	void desinscrire(const Etudiant *e);

	int getIndex(Etudiant e);

	bool equals(Diplome d);
};

