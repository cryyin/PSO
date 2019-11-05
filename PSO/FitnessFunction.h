#pragma once

#include "PSO.h"

#include <math.h>

#define PI 3.1415926
#define Dim 10


double FitnessFunction1(Particle& particle);
double FitnessFunction2(Particle& particle);
double FitnessFunction3(Particle& particle);
double FitnessFunction4(Particle& particle);
double FitnessFunction5(Particle& particle);
double FitnessFunction6(Particle& particle);
double FitnessFunction7(Particle& particle);
double FitnessFunction8(Particle& particle);
double FitnessFunction9(Particle& particle);
double FitnessFunction10(Particle& particle);
double FitnessFunction11(Particle& particle);
double FitnessFunction12(Particle& particle);
double FitnessFunction13(Particle& particle);
double FitnessFunction14(Particle& particle);
double FitnessFunction15(Particle& particle);


double FitnessFunction1(Particle& particle)

{
	double fitness = 0.0;
	
	for (int i = 0; i < Dim; i++)
	{
		double x = particle.position_[i];
		fitness = fitness + x * x;
	}

	return fitness;

}

double FitnessFunction2(Particle& particle)

{
	double fitness = 0.0;
	double sum = 0.0;
	double product = 0.0;

	for (int i = 0; i < Dim; i++)
	{
		double x = particle.position_[i];
		sum = sum + fabs(x);
		product = product * fabs(x);
		fitness = sum + product;
	}

	return fitness;

}

double FitnessFunction3(Particle& particle)

{
	double fitness = 0.0;
	double sum1 = 0.0;

	for (int i = 2; i < Dim+1; i++)
	{
		double x = particle.position_[i-2];
		double x1 = particle.position_[i-1];
		sum1 = sum1+(x1 + x)*(x1 + x);
	}
	return sum1;

}

double FitnessFunction4(Particle& particle)

{
	double fitness = 0.0;
	double x[10];
	for (int i = 0; i < Dim; i++)
	{
		x[i] = fabs(particle.position_[i]);
	}
	fitness = x[0];
	for (int j = 0; j < Dim; j++)
	{
		if (x[j]>fitness)
		{
			fitness = x[j];
		}
	}
	return fitness;

}

double FitnessFunction5(Particle& particle)

{
	double fitness = 0.0;
	for (int i = 0; i < Dim-1; i++)
	{
		fitness = fitness + 100 * ((particle.position_[i + 1] - particle.position_[i] * particle.position_[i])*(particle.position_[i + 1] - particle.position_[i] * particle.position_[i])) + (particle.position_[i] - 1)*(particle.position_[i] - 1);
	}
	return fitness;

}

double FitnessFunction6(Particle& particle)

{
	double fitness = 0.0;
	for (int i = 0; i < Dim; i++)
	{
		fitness = fitness + (particle.position_[i] + 0.5)*(particle.position_[i] + 0.5);
	}
	return fitness;

}

double FitnessFunction7(Particle& particle)

{
	double fitness = 0.0;
	for (int i = 0; i < Dim; i++)
	{
		fitness = fitness + (i + 1)*(particle.position_[i] * particle.position_[i] * particle.position_[i] * particle.position_[i]) + rand() % 100 / 100;
	}
	return fitness;

}

double FitnessFunction8(Particle& particle)

{
	double fitness = 0.0;
	for (int i = 0; i < Dim; i++)
	{
		fitness = fitness + (0 - particle.position_[i] * sin(sqrt(fabs(particle.position_[i]))));
	}
	return fitness;

}

double FitnessFunction9(Particle& particle)

{
	double fitness = 0.0;
	for (int i = 0; i < Dim; i++)
	{
		fitness = fitness + (particle.position_[i] * particle.position_[i] - 10 * cos(2 * PI*particle.position_[i]) + 10);
	}
	return fitness;

}

double FitnessFunction10(Particle& particle)

{
	double fitness = 0.0;
	double sum1 = 0.0;
	double sum2 = 0.0;
	for (int i = 0; i < Dim; i++)
	{
		sum1 += particle.position_[i] * particle.position_[i];
		sum2 += cos(2 * PI*particle.position_[i]);
	}
	fitness = (-20)*exp((-0.2)*sqrt((1.0 / Dim)*sum1)) - exp((1.0 / Dim)*sum2) + 20 + exp(1);
	return fitness;

}

double FitnessFunction11(Particle& particle)

{
	double fitness = 0.0;
	double sum1 = 0.0;
	double sum2 = 1.0;
	for (int i = 0; i < Dim; i++)
	{
		sum1 += particle.position_[i] * particle.position_[i];
		sum2 = sum2 * cos(particle.position_[i] / sqrt(i + 1));
	}
	fitness = (1.0 / 4000.0)*sum1 - sum2 + 1.0;
	return fitness;

}

double FitnessFunction12(Particle& particle)

{
	double fitness = 0.0;
	double sum1 = 0.0;
	double sum2 = 0.0;
	for (int i = 0; i < Dim; i++)
	{
		
		if (particle.position_[i] > 10)
		{
			sum2 = sum2 + 100 * pow((particle.position_[i] - 10), 4);
		}
		else if (particle.position_[i] < 10 && particle.position_[i]>(-10))
		{
			sum2 = sum2;
		}
		else if (particle.position_[i] < (-10))
		{
			sum2 = sum2 + 100 * pow((-particle.position_[i] - 10), 4);
		}
		if (i<9)
		{
			sum1 += (particle.position_[i] - 1)*(particle.position_[i] - 1)*(1 + 10 * sin(PI*particle.position_[i + 1])*sin(PI*particle.position_[i + 1]));
		}

	}
	fitness = (PI / Dim)*(10 * sin(PI*particle.position_[0])*sin(PI*particle.position_[0]) + sum1 + (particle.position_[Dim-1] - 1)*(particle.position_[Dim-1] - 1))+sum2;
	
	
	return fitness;

}

double FitnessFunction13(Particle& particle)

{
	double fitness = 0.0;
	double sum1 = 0.0;
	double sum2 = 0.0;
	for (int i = 0; i < Dim; i++)
	{

		if (particle.position_[i] > 5)
		{
			sum2 = sum2 + 100 * pow((particle.position_[i] - 5), 4);
		}
		else if (particle.position_[i] < 5 && particle.position_[i]>(-5))
		{
			sum2 = sum2;
		}
		else if (particle.position_[i] < (-5))
		{
			sum2 = sum2 + 100 * pow((-particle.position_[i] - 5), 4);
		}
		sum1 += (particle.position_[i] - 1)*(particle.position_[i] - 1)*(1 + sin(3 * PI*particle.position_[i] + 1)*sin(3 * PI*particle.position_[i] + 1));
		

	}
	fitness = 0.1*(sin(3 * PI*particle.position_[0])*sin(3 * PI*particle.position_[0]) + sum1 + (particle.position_[Dim-1] - 1)*(particle.position_[Dim-1] - 1)*(1 + pow(sin(2 * PI*particle.position_[Dim-1]), 2))) + sum2;


	return fitness;

}