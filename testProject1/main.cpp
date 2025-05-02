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

	int cc = d - 4;
	cout << "总和第四次修改：" << cc << std::endl;

	Sleep(2000);


	
}