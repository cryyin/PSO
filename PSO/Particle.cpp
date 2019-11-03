#include "pch.h"
#include "Particle.h"


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
	if (Value < pBestValue)
	{
		pBestLocation = location;
	}
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
	return pBestValue;
}
