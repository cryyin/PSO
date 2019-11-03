#pragma once
class Particle
{
public:
	Particle();
	Particle(double location,double velocity);
	~Particle();
	void setLocation(double location);
	void setVelocity(double velocity);
	void setpBest(double Value);
	double getLocation();
	double getVelocity();
	double getpBestLocation();
	double getpBestValue();
protected:
	double location;
	double velocity;
	double pBestLocation;
	double pBestValue;


};

