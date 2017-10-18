#pragma once
class Stage
{
private : 
	int _min, _max;
	bool _eval;

public:
	Stage(int min, int max, bool eval);
	virtual ~Stage();

	//Classe immuable donc pas de setters

	int getMin()const;
	int getMax()const;
	bool getEval()const;

};

