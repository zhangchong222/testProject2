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

	int cc = d - 4;
	cout << "�ܺ͵��Ĵ��޸ģ�" << cc << std::endl;

	Sleep(2000);


	
}