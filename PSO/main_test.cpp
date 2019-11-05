#include <iostream>
#include"FitnessFunction.h"
#include"PSO.h"



#include <time.h>				// time()
using std::cout;
using std::cin;
using std::endl;


int main()

{

	// 粒子群优化器参数：2为变量维度，true表示有搜索上下限

	PSOPara psopara(Dim, true);
	double uplimit;
	double lowlimit;
	int loopNum;
	int fxNUM = 1;
	psopara.particle_num_ = 50;		// 粒子个数
	cout << "输入上限" << endl;
	cin >> uplimit;
	cout << "输入下限" << endl;
	cin >> lowlimit;
	cout << "set f(x) num:" << endl;
	cin >> fxNUM;
	cout << "set loop time:" << endl;
	cin >> loopNum;
	psopara.max_iter_num_ = loopNum;	// 最大迭代次数
	for (int i = 0; i < Dim; i++)
	{
		psopara.dt_[i] = 1.0;			// 第i维度上的时间步长

		psopara.wstart_[i] = 0.9;		// 第i维度上的起始权重系数

		psopara.wend_[i] = 0.4;			// 第i维度上的终止权重系数

		psopara.C1_[i] = 1.49445;		// 第一维度上的加速度因子

		psopara.C2_[i] = 1.49445;		// 第二维度上的加速度因子

		// 如果有搜索上下限，则设置上下限

		psopara.lower_bound_[i] = lowlimit;	// 第一维度搜索下限

		psopara.upper_bound_[i] = uplimit;	// 第一维度搜索上限
	}





	std::srand((unsigned int)time(0));

	switch (fxNUM)
	{
	case 1: {
		PSOOptimizer psooptimizer(&psopara, FitnessFunction1);

		psooptimizer.InitialAllParticles();

		double fitness = psooptimizer.all_best_fitness_;

		double *result = new double[psooptimizer.max_iter_num_];
		for (int i = 0; i < psooptimizer.max_iter_num_; i++)

		{

			psooptimizer.UpdateAllParticles();

			result[i] = psooptimizer.all_best_fitness_;

			std::cout << "第" << i << "次结果：";

			std::cout << "x = " << psooptimizer.all_best_position_[0];

			std::cout << ", fitness = " << result[i] << std::endl;

		}
		system("pause");
		break;
	}
	case 2: {
		PSOOptimizer psooptimizer(&psopara, FitnessFunction2);

		psooptimizer.InitialAllParticles();

		double fitness = psooptimizer.all_best_fitness_;

		double *result = new double[psooptimizer.max_iter_num_];
		for (int i = 0; i < psooptimizer.max_iter_num_; i++)

		{

			psooptimizer.UpdateAllParticles();

			result[i] = psooptimizer.all_best_fitness_;

			std::cout << "第" << i << "次结果：";

			std::cout << "x = " << psooptimizer.all_best_position_[0];

			std::cout << ", fitness = " << result[i] << std::endl;

		}
		system("pause");
		break;
	}
	case 3: {
		PSOOptimizer psooptimizer(&psopara, FitnessFunction3);

		psooptimizer.InitialAllParticles();

		double fitness = psooptimizer.all_best_fitness_;

		double *result = new double[psooptimizer.max_iter_num_];
		for (int i = 0; i < psooptimizer.max_iter_num_; i++)

		{

			psooptimizer.UpdateAllParticles();

			result[i] = psooptimizer.all_best_fitness_;

			std::cout << "第" << i << "次结果：";

			std::cout << "x = " << psooptimizer.all_best_position_[0];

			std::cout << ", fitness = " << result[i] << std::endl;

		}
		system("pause");
		break;
	}
	case 4: {
		PSOOptimizer psooptimizer(&psopara, FitnessFunction4);

		psooptimizer.InitialAllParticles();

		double fitness = psooptimizer.all_best_fitness_;

		double *result = new double[psooptimizer.max_iter_num_];
		for (int i = 0; i < psooptimizer.max_iter_num_; i++)

		{

			psooptimizer.UpdateAllParticles();

			result[i] = psooptimizer.all_best_fitness_;

			std::cout << "第" << i << "次结果：";

			std::cout << "x = " << psooptimizer.all_best_position_[0];

			std::cout << ", fitness = " << result[i] << std::endl;

		}
		system("pause");
		break;
	}
	case 5: {
		PSOOptimizer psooptimizer(&psopara, FitnessFunction5);

		psooptimizer.InitialAllParticles();

		double fitness = psooptimizer.all_best_fitness_;

		double *result = new double[psooptimizer.max_iter_num_];
		for (int i = 0; i < psooptimizer.max_iter_num_; i++)

		{

			psooptimizer.UpdateAllParticles();

			result[i] = psooptimizer.all_best_fitness_;

			std::cout << "第" << i << "次结果：";

			std::cout << "x = " << psooptimizer.all_best_position_[0];

			std::cout << ", fitness = " << result[i] << std::endl;

		}
		system("pause");
		break;
	}
	case 6: {
		PSOOptimizer psooptimizer(&psopara, FitnessFunction6);

		psooptimizer.InitialAllParticles();

		double fitness = psooptimizer.all_best_fitness_;

		double *result = new double[psooptimizer.max_iter_num_];
		for (int i = 0; i < psooptimizer.max_iter_num_; i++)

		{

			psooptimizer.UpdateAllParticles();

			result[i] = psooptimizer.all_best_fitness_;

			std::cout << "第" << i << "次结果：";

			std::cout << "x = " << psooptimizer.all_best_position_[0];

			std::cout << ", fitness = " << result[i] << std::endl;

		}

		system("pause");
		break;
	}
	case 7: {
		PSOOptimizer psooptimizer(&psopara, FitnessFunction7);

		psooptimizer.InitialAllParticles();

		double fitness = psooptimizer.all_best_fitness_;

		double *result = new double[psooptimizer.max_iter_num_];
		for (int i = 0; i < psooptimizer.max_iter_num_; i++)

		{

			psooptimizer.UpdateAllParticles();

			result[i] = psooptimizer.all_best_fitness_;

			std::cout << "第" << i << "次结果：";

			std::cout << "x = " << psooptimizer.all_best_position_[0];

			std::cout << ", fitness = " << result[i] << std::endl;

		}
		system("pause");
		break;
	}
	case 8: {
		PSOOptimizer psooptimizer(&psopara, FitnessFunction8);

		psooptimizer.InitialAllParticles();

		double fitness = psooptimizer.all_best_fitness_;

		double *result = new double[psooptimizer.max_iter_num_];
		for (int i = 0; i < psooptimizer.max_iter_num_; i++)

		{

			psooptimizer.UpdateAllParticles();

			result[i] = psooptimizer.all_best_fitness_;

			std::cout << "第" << i << "次结果：";

			std::cout << "x = " << psooptimizer.all_best_position_[0];

			std::cout << ", fitness = " << result[i] << std::endl;

		}
		system("pause");
		break;
	}
	case 9: {
		PSOOptimizer psooptimizer(&psopara, FitnessFunction9);

		psooptimizer.InitialAllParticles();

		double fitness = psooptimizer.all_best_fitness_;

		double *result = new double[psooptimizer.max_iter_num_];
		for (int i = 0; i < psooptimizer.max_iter_num_; i++)

		{

			psooptimizer.UpdateAllParticles();

			result[i] = psooptimizer.all_best_fitness_;

			std::cout << "第" << i << "次结果：";

			std::cout << "x = " << psooptimizer.all_best_position_[0];

			std::cout << ", fitness = " << result[i] << std::endl;

		}
		system("pause");
		break;
	}
	case 10: {
		PSOOptimizer psooptimizer(&psopara, FitnessFunction10);

		psooptimizer.InitialAllParticles();

		double fitness = psooptimizer.all_best_fitness_;

		double *result = new double[psooptimizer.max_iter_num_];
		for (int i = 0; i < psooptimizer.max_iter_num_; i++)

		{

			psooptimizer.UpdateAllParticles();

			result[i] = psooptimizer.all_best_fitness_;

			std::cout << "第" << i << "次结果：";

			std::cout << "x = " << psooptimizer.all_best_position_[0];

			std::cout << ", fitness = " << result[i] << std::endl;

		}
		system("pause");
		break;
	}
	case 11: {
		PSOOptimizer psooptimizer(&psopara, FitnessFunction11);

		psooptimizer.InitialAllParticles();

		double fitness = psooptimizer.all_best_fitness_;

		double *result = new double[psooptimizer.max_iter_num_];
		for (int i = 0; i < psooptimizer.max_iter_num_; i++)

		{

			psooptimizer.UpdateAllParticles();

			result[i] = psooptimizer.all_best_fitness_;

			std::cout << "第" << i << "次结果：";

			std::cout << "x = " << psooptimizer.all_best_position_[0];

			std::cout << ", fitness = " << result[i] << std::endl;

		}
		system("pause");
		break;
	}
	case 12: {
		PSOOptimizer psooptimizer(&psopara, FitnessFunction12);

		psooptimizer.InitialAllParticles();

		double fitness = psooptimizer.all_best_fitness_;

		double *result = new double[psooptimizer.max_iter_num_];
		for (int i = 0; i < psooptimizer.max_iter_num_; i++)

		{

			psooptimizer.UpdateAllParticles();

			result[i] = psooptimizer.all_best_fitness_;

			std::cout << "第" << i << "次结果：";

			std::cout << "x = " << psooptimizer.all_best_position_[0];

			std::cout << ", fitness = " << result[i] << std::endl;

		}
		system("pause");
		break;
	}
	case 13: {
		PSOOptimizer psooptimizer(&psopara, FitnessFunction13);

		psooptimizer.InitialAllParticles();

		double fitness = psooptimizer.all_best_fitness_;

		double *result = new double[psooptimizer.max_iter_num_];
		for (int i = 0; i < psooptimizer.max_iter_num_; i++)

		{

			psooptimizer.UpdateAllParticles();

			result[i] = psooptimizer.all_best_fitness_;

			std::cout << "第" << i << "次结果：";

			std::cout << "x = " << psooptimizer.all_best_position_[0];

			std::cout << ", fitness = " << result[i] << std::endl;

		}
		system("pause");
		break;
	}
	default: {
		break;
	}
		
	}

	





}