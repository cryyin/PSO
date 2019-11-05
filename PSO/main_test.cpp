#include <iostream>
#include"FitnessFunction.h"
#include"PSO.h"



#include <time.h>				// time()
using std::cout;
using std::cin;
using std::endl;


int main()

{

	// ����Ⱥ�Ż���������2Ϊ����ά�ȣ�true��ʾ������������

	
	double uplimit;
	double lowlimit;
	int loopNum;
	int fxNUM = 1;
	PSOPara psopara(Dim, true);
	psopara.particle_num_ = 50;		// ���Ӹ���

	cout << "��������" << endl;     //����������
	cin >> uplimit;
	cout << "��������" << endl;     //����������
	cin >> lowlimit;
	cout << "set f(x) num:" << endl;     //ѡ���ĸ�����
	cin >> fxNUM;
	cout << "set loop time:" << endl;    //ѭ������
	cin >> loopNum;
	psopara.max_iter_num_ = loopNum;	// ����������
	if (fxNUM==14)//����ǵ�14������
	{
		PSOPara psopara1(2, true);
		psopara1.max_iter_num_ = loopNum;
		psopara1.particle_num_ = 50;
		for (int i = 0; i < 2; i++)
		{
			psopara1.dt_[i] = 1.0;			// ��iά���ϵ�ʱ�䲽��

			psopara1.wstart_[i] = 0.9;		// ��iά���ϵ���ʼȨ��ϵ��

			psopara1.wend_[i] = 0.4;			// ��iά���ϵ���ֹȨ��ϵ��

			psopara1.C1_[i] = 1.49445;		// ��һά���ϵļ��ٶ�����

			psopara1.C2_[i] = 1.49445;		// �ڶ�ά���ϵļ��ٶ�����

			// ��������������ޣ�������������

			psopara1.lower_bound_[i] = lowlimit;	// ��һά����������

			psopara1.upper_bound_[i] = uplimit;	// ��һά����������
		}
		PSOOptimizer psooptimizer(&psopara1, FitnessFunction14);

		psooptimizer.InitialAllParticles();

		double fitness = psooptimizer.all_best_fitness_;

		double *result = new double[psooptimizer.max_iter_num_];
		for (int i = 0; i < psooptimizer.max_iter_num_; i++)

		{

			psooptimizer.UpdateAllParticles();

			result[i] = psooptimizer.all_best_fitness_;

			std::cout << "��" << i << "�ν����";

			std::cout << "x = " << psooptimizer.all_best_position_[0];

			std::cout << ", fitness = " << result[i] << std::endl;

		}
		system("pause");
	}else if (fxNUM == 15)//ѡ���˵�15������
	{
		PSOPara psopara1(4, true);
		psopara1.max_iter_num_ = loopNum;
		psopara1.particle_num_ = 50;
		for (int i = 0; i < 4; i++)
		{
			psopara1.dt_[i] = 1.0;			// ��iά���ϵ�ʱ�䲽��

			psopara1.wstart_[i] = 0.9;		// ��iά���ϵ���ʼȨ��ϵ��

			psopara1.wend_[i] = 0.4;			// ��iά���ϵ���ֹȨ��ϵ��

			psopara1.C1_[i] = 1.49445;		// ��һά���ϵļ��ٶ�����

			psopara1.C2_[i] = 1.49445;		// �ڶ�ά���ϵļ��ٶ�����

			// ��������������ޣ�������������

			psopara1.lower_bound_[i] = lowlimit;	// ��һά����������

			psopara1.upper_bound_[i] = uplimit;	// ��һά����������
		}
		PSOOptimizer psooptimizer(&psopara1, FitnessFunction15);

		psooptimizer.InitialAllParticles();

		double fitness = psooptimizer.all_best_fitness_;

		double *result = new double[psooptimizer.max_iter_num_];
		for (int i = 0; i < psooptimizer.max_iter_num_; i++)

		{

			psooptimizer.UpdateAllParticles();

			result[i] = psooptimizer.all_best_fitness_;

			std::cout << "��" << i << "�ν����";

			std::cout << "x = " << psooptimizer.all_best_position_[0];

			std::cout << ", fitness = " << result[i] << std::endl;

		}
		system("pause");
	}

	for (int i = 0; i < Dim; i++)
	{
		psopara.dt_[i] = 1.0;			// ��iά���ϵ�ʱ�䲽��

		psopara.wstart_[i] = 0.9;		// ��iά���ϵ���ʼȨ��ϵ��

		psopara.wend_[i] = 0.4;			// ��iά���ϵ���ֹȨ��ϵ��

		psopara.C1_[i] = 1.49445;		// ��һά���ϵļ��ٶ�����

		psopara.C2_[i] = 1.49445;		// �ڶ�ά���ϵļ��ٶ�����

		// ��������������ޣ�������������

		psopara.lower_bound_[i] = lowlimit;	// ��һά����������

		psopara.upper_bound_[i] = uplimit;	// ��һά����������
	}





	std::srand((unsigned int)time(0));

	switch (fxNUM)//�ж�ѡ��ĺ���
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

			std::cout << "��" << i << "�ν����";

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

			std::cout << "��" << i << "�ν����";

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

			std::cout << "��" << i << "�ν����";

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

			std::cout << "��" << i << "�ν����";

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

			std::cout << "��" << i << "�ν����";

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

			std::cout << "��" << i << "�ν����";

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

			std::cout << "��" << i << "�ν����";

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

			std::cout << "��" << i << "�ν����";

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

			std::cout << "��" << i << "�ν����";

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

			std::cout << "��" << i << "�ν����";

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

			std::cout << "��" << i << "�ν����";

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

			std::cout << "��" << i << "�ν����";

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

			std::cout << "��" << i << "�ν����";

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