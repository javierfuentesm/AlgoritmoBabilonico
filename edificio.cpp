
#include <iostream>
#include <math.h>


using namespace std;

int main() {
    double segundos;
    cout << "!!!Hola!!!.\n"
         << "Hola ¿Cúanto tiempo tardo en caer la pelota de TeNIS  desde el edificio ,recuerda dar el tiempo en segundos?\n";
    cin >> segundos;
    std::cout << "El  número es " << (pow(segundos, 2) * 9.81) / 2;
}
