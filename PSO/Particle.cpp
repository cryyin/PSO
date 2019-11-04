#include "pch.h"
#include "Particle.h"
#include"Function.h"

Particle::Particle()
{
}

Particle::Particle(double location, double velocity):location(location),velocity(velocity)
{
}


Particle::~Particle()
{
}

void Particle::setLocation(double location)
{
	this->location = location;
}

void Particle::setVelocity(double velocity)
{
	this->velocity = velocity;
}

void Particle::setpBest(double Value)
{
	
		pBestLocation = location;
}

double Particle::getLocation()
{
	return location;
}

double Particle::getVelocity()
{
	return velocity;
}

double Particle::getpBestLocation()
{
	return pBestLocation;
}

double Particle::getpBestValue()
{
	return Function::workOut(pBestLocation);
}

void Particle::UpdatePandV(double gBest)
{
	double rand1, rand2;
	rand1 = (rand() % 20 / 10.0 + rand() % 10 / 100.0 + rand() % 10 / 1000.0)-1;
	cout << "rand1=" << rand1 << endl;
	rand2 = (rand() % 20 / 10.0 + rand() % 10 / 100.0 + rand() % 10 / 1000.0)-1;
	cout << "rand2=" << rand2 << endl;
	velocity = velocity + 2 * rand1*(pBestLocation - location) + 2 * rand2*(gBest - location);
	location = location + velocity;
}
