#include "Stage.h"


Stage::Stage(int min = 4, int max = 8, bool eval = false) : _min(min), _max(max), _eval(eval)
{}


Stage::~Stage()
{}

int Stage::getMin()const{
	return _min;
}

int Stage::getMax()const{
	return _max;
}

bool Stage::getEval()const{
	return _eval;
}

