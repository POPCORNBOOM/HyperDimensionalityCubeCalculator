// HDCC.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <iostream>
#include <cmath>
int JC(int x)
{
	int ret = 1;
	for (int i = x;i > 0;i--)
		ret *= i;
	return ret;
}

int P(int e,int i) {
	int ret = 1;
	ret = std::pow(e, i);
	return ret;
}

int C(int x, int y)
{
	int ret;
	ret = JC(x) / JC(x - y) / JC(y);
	return ret;
}

int main()
{
	std::cout << "-=+@###== Welcome to HDCC ==###@+=-\n";
	while (true) {
		int high, low;
		std::cout << "High:\n";
		std::cin >> high;
		std::cout << "Low:\n";
		std::cin >> low;
		int a = P(2,high - low);
		int b = C(high, high - low);
		//std::cout << a;
		//std::cout << b;


		int r = a*b;
		std::cout << "Count is:";
		std::cout << r;
		std::cout << "\n======================================\n";

	}
}



// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
