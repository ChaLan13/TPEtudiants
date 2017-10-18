#include "Diplome.h"
#include "Etudiant.h"

using namespace std;


Diplome::Diplome(const string& t, const Stage *s=NULL)
{
	_titre = t;
	if (s != NULL)
		_stage = new Stage(*s);
}


Diplome::~Diplome()
{
	delete _stage;
}

void Diplome::setTitre(const string t){
	_titre = t;
}

void Diplome::setStage(const Stage *s){
	delete _stage;
	if (s != NULL)
		_stage = new Stage(*s);
}

string Diplome::getTitre()const{
	return _titre;
}

Stage Diplome::getStage()const{
	return *_stage;
}

void Diplome::inscrire(const Etudiant *e){
	if (e->_di != this){
		e->_di(desinscrire(e));
	}
	_etudiants.push_back(new Etudiant(*e));
}

void Diplome::desinscrire(Etudiant *e){
	_etudiants.erase();
}

bool Diplome::equals(Diplome d){
	unsigned int it;
	bool egal = true;
	if (_titre != d._titre)
		egal = false;
	for (it = 0; it < _etudiants.size(); it++){
		if (_etudiants[it].equals(d._etudiants[it]){
			continue;
		}
		else {
			egal = false;
			break;
		}
	}
	if

}


