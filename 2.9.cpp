#include<iostream>
using namespace std;
int main() {
	int day = 0;
	float sum = 0;
	for (int apple = 2; apple <= 100; apple *= 2) {
		sum = sum + apple * 0.8;
		day++;
	}
	float average = sum / day;
	cout << "平均每天花费钱数：" <<average<< endl;
}