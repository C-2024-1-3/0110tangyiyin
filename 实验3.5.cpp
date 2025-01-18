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
    std::cout << "第一天猴子共摘了 " << peaches << " 个桃子。" << std::endl;
    return 0;
}