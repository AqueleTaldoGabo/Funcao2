#include <iostream>
using namespace std;

int num1;
void dobro(int);

int main(){
    int num2;

    cin >> num2 >> num1;
    dobro(num2);
    cout << num1;

    return 0;
}

void dobro(int num2){
    if(num2 > num1)
        num1*=2;
}