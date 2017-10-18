#include "Etudiant.h"
#include "Diplome.h"


Etudiant::Etudiant(const string& nom, const int age, bool b, Diplome *d) :
_nom(nom),
_age(age),
_bourse(b),
_di(d)
{
	_di->inscrire(this);
}


Etudiant::~Etudiant()
{
	_di->desinscrire(this);
}

void Etudiant::setNom(const string& n){
	_nom = n;
}

void Etudiant::setAge(const int a){
	_age = a;
}

void Etudiant::setBourse(const bool b){
	_bourse = b;
}

void Etudiant::setDiplome(Diplome *d){
	if (_di != NULL)
		_di->desinscrire(this);
	_di = d;
	_di->inscrire(this);
}

//getters
string Etudiant::getNom()const{
	return _nom;
}

int Etudiant::getAge()const{
	return _age;
}

bool Etudiant::getBourse()const{
	return _bourse;
}

Diplome Etudiant::getDiplome()const{
	return *_di;
}

bool Etudiant::equals(Etudiant e){
	if (_nom == e._nom && _age == e._age && _bourse == e._bourse && _di.equals(e._di))
		return true;
	else return false;
}