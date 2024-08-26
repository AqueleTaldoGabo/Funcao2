#include <iostream>
using namespace std;

void bom_dia();
int aleat();
int dobro(int);
void mostra_dobro(int);


int main(){
    int x, num=0;
    
    bom_dia();
    x = aleat();
    num+= dobro(x);
    if(dobro(x)>dobro(aleat()))
        mostra_dobro(x);
    
    return 0;
}

void bom_dia(){
    cout << "Ola, seja bem-vindo, apartir deste momento irei talvez te mostrar o dobro de um valor" << endl;
}

int aleat(){
    return rand()%10 + 1;
}

int dobro(int x){
    return x*2;
}

void mostra_dobro(int x){
    cout << "O dobro de um valor aleatório é " << x*2 << endl; 
}