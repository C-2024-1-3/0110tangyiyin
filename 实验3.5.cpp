#include <iostream>
int Peaches(int day) {
    if (day == 10) {
        return 1;
    }
    else {
        return (Peaches(day + 1) + 1) * 2;
    }
}
int main() {
    int peaches = Peaches(1);
    std::cout << "��һ����ӹ�ժ�� " << peaches << " �����ӡ�" << std::endl;
    return 0;
}