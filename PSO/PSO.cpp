// PSO.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include<ctime>
#include"Particle.h"
#include"Function.h"
#define Dim 10
#define Num 20
#define LoopNum 100
#define Accuracy 0.01
using namespace std;
double gBest = 1000.0;
double gBestTemp = 1000.0;
int main()
{
    std::cout << "你抽卡必蓝天白云\n"; 
	double v = 0.0;
	double x = 0.0;
	Particle particle[Num][Dim];
	
	srand((int)time(NULL));
	for (int j = 0; j < Num; j++)
	{
		for (int i = 0; i < Dim; i++)
		{
			v = (rand() % 200 + rand() % 10 / 10.0 + rand() % 10 / 100.0 + rand() % 10 / 1000.0 - 100) / 2;
			cout << "v=" << v << endl;
			x = rand() % 200 + rand() % 10 / 10.0 + rand() % 10 / 100.0 + rand() % 10 / 1000.0 - 100;
			cout << "x=" << x << endl;
			particle[j][i].setLocation(x);
			particle[j][i].setVelocity(v);
		}
	}
	
	for (int i = 0; i < LoopNum; i++)
	{
		double Value;
		int judge = 0;
		
		for (int j = 0; j < Dim; j++)
		{
			Value = Function::workOut(particle[j]);
			if (Value< Function::workOut(particle[j].getpBestLocation()))
			{
				particle[j].setpBest(particle[j].getLocation());
			}
			particle[j].UpdatePandV(gBest);
			
		}
		gBestTemp = Function::FindgBest(&particle[0]);
		if (Function::workOut(gBestTemp) < Function::workOut(gBest))
		{
			gBest = gBestTemp;
		}
		
		
		for (int k = 0; k < Dim; k++)
		{
			if ((Function::workOut(particle[k].getpBestLocation()) - Function::workOut(gBest)) < Accuracy) {
				judge++;
			}
		}
		if (judge==Dim)
		{
			break;
		}
		else
		{
			judge = 0;
		}
	}
	cout << "gBest:" << gBest << endl;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
