#pragma once
#include"Particle.h"
#define Dim 10
class Function
{
public:
	Function();
	static double workOut(Particle particle);
	static double workOut(double);
	static double FindgBest(Particle *particle);
	~Function();
};

