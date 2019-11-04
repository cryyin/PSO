#include "pch.h"
#include "Function.h"


Function::Function()
{
}

double Function::workOut(Particle particle)
{
	double p, v,Value;
	p = particle.getLocation();
	v = particle.getVelocity();
	Value = p * p;
	return Value;
}

double Function::workOut(double p)
{
	double Value;
	Value = p * p;
	return Value;
}

double Function::FindgBest(Particle * particle)
{
	Particle *bestparticle = particle;
	for (int i = 0; i < N; i++)
	{
		if (workOut((particle + i)->getpBestLocation()) < workOut(bestparticle->getpBestLocation())) {
			bestparticle = particle + i;
		}
	}
	return bestparticle->getpBestLocation();
}



Function::~Function()
{
}
