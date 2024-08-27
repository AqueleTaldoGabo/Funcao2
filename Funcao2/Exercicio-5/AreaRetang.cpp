#include <iostream>
using namespace std;

double AreaRetangulo(double compriment, double largura);

int main(){
    double comp, larg, area;
    cin >> comp >> larg;

    area = AreaRetangulo(comp, larg);

    cout << "A area do retangulo eh: " << area << endl;

    return 0;
}

double AreaRetangulo(double compriment, double largura){
    return compriment*largura;
}