#include<iostream>
using namespace std;
int gcd(int a, int b) {
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}
int lcm(int a, int b) {
	return(a * b) / gcd(a, b);
}
int main() {
	int num1, num2;
	cout << "请输入两个整数：" << endl;
	cin >> num1 >> num2;
	int G = gcd(num1, num2);
	int L = lcm(num1, num2);
	cout << "最大公约数为：" << G << endl;
	cout << "最小公倍数为：" << L << endl;
	system("pause");
	return 0;
}