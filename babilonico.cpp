
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

 int main( ) {
     int number=0;
     double xn;
     double xv;


     cout << "!!!Hola!!!.\n" << "Ingrese el número del que desea calcular la raíz cuadrada\n";
     cin >> number;
     cout << "!!!Hola!!!.\n" << "Ingrese el número de por el cual queire sacar la raíz cuadrada\n";
     cin >> xn;
     do{
        xv=xn;
        xn= 0.5 * (xv + (number / xv));
     }
      while(abs(xn-xv)>0.001);

     std::cout << "El  número es " << fixed<<setprecision(4)<<xn;


 }
