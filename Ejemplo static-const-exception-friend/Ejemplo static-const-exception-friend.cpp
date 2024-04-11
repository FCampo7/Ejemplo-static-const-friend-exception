#include <iostream>
#include <string>
#include <exception>
#include "cLector.h"
#include "cBibliotecario.h"

using namespace std;

float dividir(float a, float b) {
	if (b == 0) {
		throw new exception("Error: No se puede dividir por 0.");
	}
	return a / b;
}

int main()
{
	float a, b;
	cout << "ingrese el valor de a: ";
	cin >> a;
	cout << "ingrese el valor de b: ";
	cin >> b;

	try {
		cout << dividir(a, b) << endl;
	}
	catch (const exception *e) {
		cout << e->what() << endl;
		delete e;
	}

    cLibrito* librito1 = new cLibrito();
    cLector* Lector1 = new cLector("Francisco", "44321603", "Cabrera", "2003-04-29", librito1);
    Lector1->imprimir();
    getchar();
    Lector1->leer_libro(10);
    cout << "Vas por la pagina nro:" << librito1->get_indice() << endl;
    if(Lector1->leer_libro(100))
        std::cout << "Felicidades terminaste el libro elegi uno nuevo : )" << std::endl;
    //librito1->imprimir();
    getchar();


    cLibrito librito2("Hary Postre", 600, 50, "Se lava la carita con agua y con jabon", "Almada", "Sunchales");
    cLector  Lector2("Sol", "42314015", "Insegura", "2001-24-06", &librito2);
    Lector2.imprimir();
    getchar();
    Lector2.leer_libro(40);
    cout << "Vas por la pagina nro:" << librito2.get_indice() << endl;
    Lector2.leer_libro(190);
    cout << "Vas por la pagina nro:" << librito2.get_indice() << endl;
    getchar();
    //librito2.imprimir();

    cout << Lector1->get_nombre() << " tiene " << Lector1->get_edad() << " años" << endl;
    getchar();

    cout << "Id lector 1: " << Lector1->get_id() << endl;
    cout << "Id lector 2: " << Lector2.get_id() << endl;

    cBibliotecario biblio("julio", "4352342", "Grondona", "1990-24-06", librito1);
    cout<<"indice: "<<biblio.get_indice() << endl;

    delete Lector1;
    delete librito1;

	return 0;
}