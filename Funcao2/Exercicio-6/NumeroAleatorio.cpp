#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int GerarNumero(void);

int main(){
    srand(time(NULL));
    cout << "Acabei de gerar um numero aleatorio este sendo: " << GerarNumero() << endl;
    
    return 0;
}

int GerarNumero(void){
    return (rand()%100) + 1;
}