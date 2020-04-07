#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{

    /**< Primer Ejercicio*/
    int edad, telefono;
    string hobbie, direccion, nombre;

    cout<<"Nombre: ";
    getline(cin,nombre);

    cout<< "Direccion: ";
    getline(cin,direccion);

    cout<<"Hobbie: ";
    getline(cin,hobbie);

    cout <<"Edad: ";
    cin >>edad;

    cout << "Telefono: ";
    cin >>telefono;

    cout<<"\nNombre: "<<nombre<<"\nEdad: "<<edad<<"\nTelefono: "<<telefono<<"\nDireccion: "<<direccion<<"\nHobbie: "<<hobbie;

    /**< 2do Ejercicio */

    float a, b;
    float raiz, suma, resta, multiplicacion, division;
    cout<<"\nDigite numero a: ";
    cin>>a;
    cout<<"\nDigite numero b: ";
    cin>>b;
    suma = a+b;
    resta = a-b;
    multiplicacion = a*b;
    division = a/b;

    cout<< "\nLa suma es: "<<suma;
    cout<< "\nLa resta de a-b es: "<<resta;
    cout<< "\nLa multiplicacion es: "<<multiplicacion;
    cout<< "\nLa division es: "<< division;
    cout<< "\nLa raiz cuadrada de a es: "<<sqrt(a);
    cout<< "\nLa raiz cuadrada de b es: "<<sqrt(b);

    /**< Tercer Ejercicio */

    float lado, radio;

    cout<< "\nIngresa un lado del cuadrado: ";
    cin>>lado;
    cout<< "\nEl area del cuadrado es: "<<pow(lado,2);

    cout<<"\nInserte el radio del circulo: ";
    cin>> radio;
    cout<< "\nEl area del circulo es: "<< 3.14*(pow(radio,2));

    // Hallar Area del triangulo por sus lados //
    float a,b,c, semiperimetro, area;
    cout<< "\nLado a: "<<endl;
    cin>>a;
    cout<< "\nLado b: "<<endl;
    cin>>b;
    cout<< "\nLado c: "<<endl;
    cin>>c;
    semiperimetro= (a+b+c)*1/2;
    area = sqrt((semiperimetro*(semiperimetro - a))*(semiperimetro-b)*(semiperimetro-c)),
    cout<<"\nEl area del triangulo es: "<< area<<endl;

    //Hallara el area del triangulo por base y altura //

    float base, altura, areatri;

    cout<< "\nBase: ";
    cin>>base;
    cout<< "\nAltura: ";
    cin>>altura;

    areatri=(base * altura)*1/2;

    cout<<"\nEl area del triangulo es: "<<areatri;
    return 0;
}
