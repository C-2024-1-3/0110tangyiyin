#include <iostream>
using namespace std;

class Student {
public:
    Student(int n, int s) : number(n), score(s) {}
    void show_value() {
        cout << "学号：" << number << " 成绩：" << score << endl;
    }
    int Number() { return number; }
    int Score() { return score; }
private:
    int number;
    int score;
};
void max(Student* arr) {
    int maxScore = arr[0].Score();
    int maxIndex = 0;
    for (int i = 1; i < 5; i++) {
        if (arr[i].Score() > maxScore) {
            maxScore = arr[i].Score();
            maxIndex = i;
        }
    }
    cout << "最高成绩者的学号为：" << arr[maxIndex].Number() << endl;
}
int main() {
    Student stu[5] = {
        Student(1, 80),
        Student(2, 90),
        Student(3, 70),
        Student(4, 85),
        Student(5, 95)
    };
    max(stu);
    return 0;
}