#include <iostream>
#include <windows.h>

using namespace std;

int main() {
	int a = 0;
	int b = 2;
	int c = a + b;
	cout << "总和：" << c << std::endl;

	c = c * 2;
	cout << "总和改变：" << c << std::endl;
	

	int d = 2;
	
	d = d + c;
	cout << "总和第二次改变：" << d << std::endl;
	d = pow(d, 2);
	cout << "总和第三次修改：" << d << std::endl;

	int mc = d - 8;
	cout << "总和第四次修改：" << mc << std::endl;

	int pp = mc + 5;
	int p_p = pp * 2;
	cout << "求乘的修改：" << p_p << std::endl;

	int pp_t = p_p - 6;
	cout << "求差的修改：" << pp_t << std::endl;
	int t_pp = pp_t + 10;
	cout << "求差和的修改：" << t_pp << std::endl;

	Sleep(2000);


	
}