#include <iostream>
using namespace std;

class angka {
private:
    int* arr;
    int panjang;
public:
    angka(int); //construktor
    ~angka();   //destruktor
    void cetakData();
    void isiData();
};

