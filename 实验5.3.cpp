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
        cout << "�����������Ϊ: " << volume << endl;
    }
};
int main() {
    Cuboid cuboids[3];
    for (int i = 0; i < 3; i++) {
        double length, width, height;
        cout << "������� " << i + 1 << " ���������ĳ�: ";
        cin >> length;
        cout << "������� " << i + 1 << " ���������Ŀ�: ";
        cin >> width;
        cout << "������� " << i + 1 << " ���������ĸ�: ";
        cin >> height;
        cuboids[i].setDimensions(length, width, height);
    }
    for (int i = 0; i < 3; i++) {
        cuboids[i].displayVolume();
    }
    return 0;
}