#include <iostream>
#include <windows.h>

using namespace std;

int main() {
	int a = 0;
	int b = 2;
	int c = a + b;
	cout << "�ܺͣ�" << c << std::endl;

	c = c * 2;
	cout << "�ܺ͸ı䣺" << c << std::endl;
	

	int d = 2;
	
	d = d + c;
	cout << "�ܺ͵ڶ��θı䣺" << d << std::endl;
	d = pow(d, 2);
	cout << "�ܺ͵������޸ģ�" << d << std::endl;

	int mc = d - 8;
	cout << "�ܺ͵��Ĵ��޸ģ�" << mc << std::endl;

	int pp = mc + 5;
	int p_p = pp * 2;
	cout << "��˵��޸ģ�" << p_p << std::endl;

	int pp_t = p_p - 6;
	cout << "�����޸ģ�" << pp_t << std::endl;
	int t_pp = pp_t + 10;
	cout << "���͵��޸ģ�" << t_pp << std::endl;

	Sleep(2000);


	
}