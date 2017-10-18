#pragma once
#include <string>
class Diplome;

class Etudiant
{
private :
	string _nom;
	int _age;
	bool _bourse;
	Diplome *_di;


public:
	Etudiant(const string& nom, const int age, bool b, Diplome *d);
	~Etudiant();

	//setters
	void setNom(const string& n);
	void setAge(const int a);
	void setBourse(const bool b);
	void setDiplome(Diplome *d);

	//getters
	string getNom()const;
	int getAge()const;
	bool getBourse()const;
	Diplome getDiplome()const;

	bool equals(Etudiant e);
};

