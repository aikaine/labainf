// labainf.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;
void Mean(double X, double Y, double& AMean, double& GMean) {
    AMean = (X + Y) / 2;
    GMean = sqrt(X * Y);
}

int main() {
    double A, B, C, D;
    double AMean1, GMean1, AMean2, GMean2, AMean3, GMean3;
    setlocale(LC_ALL, "RU");
    cout << "Введите значения для  A: ";
    cin >> A ;
    cout << "Введите значения для  B: ";
    cin >> B;
    cout << "Введите значения для  C: ";
    cin >> C ;
    cout << "Введите значения для  D: ";
    cin >> D;
    Mean(A, B, AMean1, GMean1);
    cout << "Средние для (A, B): AMean = " << AMean1 << ", GMean = " << GMean1 << endl;

   
    Mean(A, C, AMean2, GMean2);
    cout << "Средние для (A, C): AMean = " << AMean2 << ", GMean = " << GMean2 << endl;

    
    Mean(A, D, AMean3, GMean3);
    cout << "Средние для (A, D): AMean = " << AMean3 << ", GMean = " << GMean3 << endl;

    return 0;
}