#include <iostream>
#include <string>
#include <Windows.h>
#include <cstring>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

    setlocale(LC_ALL, "RUS");
    float weight;
    float tractionForce;
    float sec;
    cout << "Введите массу космического коробля: "; cin >> weight;
    cout << "Введите силу тяги: "; cin >> tractionForce;
    cout << "Введите на сколько секунд сила тяги: "; cin >> sec;

    float speedSec = tractionForce / weight;
    float distance = (0.5 * speedSec) * pow(sec, 2);

    cout << "Космолет будет находиться на расстоянии " << distance << " м. от первоначального положения.";

    return 0;
}