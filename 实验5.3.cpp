#include <iostream>
using namespace std;

class Cuboid {
private:
    double length;
    double width;
    double height;
public:
    void setDimensions(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
    }
    double calculateVolume() {
        return length * width * height;
    }
    void displayVolume() {
        double volume = calculateVolume();
        cout << "长方柱的体积为: " << volume << endl;
    }
};
int main() {
    Cuboid cuboids[3];
    for (int i = 0; i < 3; i++) {
        double length, width, height;
        cout << "请输入第 " << i + 1 << " 个长方柱的长: ";
        cin >> length;
        cout << "请输入第 " << i + 1 << " 个长方柱的宽: ";
        cin >> width;
        cout << "请输入第 " << i + 1 << " 个长方柱的高: ";
        cin >> height;
        cuboids[i].setDimensions(length, width, height);
    }
    for (int i = 0; i < 3; i++) {
        cuboids[i].displayVolume();
    }
    return 0;
}