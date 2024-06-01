/*
*
Resolver utilizando herencia, polimorfismo, listas/vectores y sobrecargando por lo menos dos operadores. Se aprecia el uso de friend,
static y constantes en casos donde corresponda. Al menos 2 tipos de constructores. 
A comerrrrrrr 
Fede organizó un asado para todos los alumnos de LP1!! 

Cada tanto se pasa una bandeja con una comida, que te dice cuántas calorías tiene y si es carne, por ejemplo: “Pechito de cerdo”,sí es carne (un bool) y tiene 2700 calorías.
Cada persona decide si quiere comer, en caso afirmativo registra lo que come. La decisión de comer o no depende de cómo elige la comida, que puede ser:
vegetariano: sólo come lo que no sea carne
dietético: come lo que aporte menos de 2000 calorías en total (sumado todos los platos)
alternado: acepta y rechaza alternativamente cada comida
vegano: come lo que no es carne y no tiene queso
ayudantes: comen todo lo que se cruce

Si el comensal elige servirse la comida, la agrega a su plato (lista de comidas).
Modelar las clases que considere necesarias y los métodos ElegirComida(...) y AgregarAlPlato(...). 
Punto 1) Pipón 
Queremos saber si un comensal está pipón, esto ocurre si alguna de las comidas que ingirió es pesada (aporta más de 1500 calorías).

Punto 2) ¡Qué bien la estoy pasando! 
Cada persona sabe su posición y qué elementos cerca tiene: sal, aceite, vinagre, aceto, oliva, cuchillo que corta bien, etc.

Queremos saber si un comensal la está pasando bien en el asado, esto ocurre en general si esa persona comió algo y
vegetariano: si está sentado entre otros vegetarianos
dietético: si NO tiene cerca el aceite
alternado: siempre está contento
vegano: si no tienen más de 3 elementos cerca
ayudantes: si comieron carne
*/

#include <iostream>
#include <vector>
#include "Alimento.h"
#include "Persona.h"
#include "Vegetariano.h"
#include "Vegano.h"
#include "Dietetico.h"
#include "Ayudante.h"
#include "Alternados.h"

using namespace std;

int main()
{
	vector<Alimento> va;

	va.push_back(Alimento());
	va.push_back(Alimento("Pechito", "Pecho de cerdo con queso", true, true, 600.0));
	va.push_back(Alimento("Lechuga", "Lechuga con queso", false, true, 100.0));
	va.push_back(Alimento("Flan", "Flan con dulce de leche", false, false, 1500));
	va.push_back(Alimento("Chori", "Choripan", true, false, 400));
	va.push_back(Alimento("Ensalada", "Ensalada mixta con tomate", false, false, 150.0));
	va.push_back(Alimento("Pizza", "Pizza de pepperoni", true, true, 300.0));
	va.push_back(Alimento("Taco", "Taco de pollo con salsa", true, false, 250.0));
	va.push_back(Alimento("Batido", "Batido de frutas con leche", false, true, 200.0));
	va.push_back(Alimento("Hamburguesa", "Hamburguesa de ternera con queso", true, true, 500.0));
	va.push_back(Alimento("Sopa", "Sopa de vegetales", false, false, 100.0));
	va.push_back(Alimento("Sandwich", "Sandwich de jamón y queso", true, true, 350.0));
	va.push_back(Alimento("Pasta", "Pasta al pesto", false, false, 400.0));
	va.push_back(Alimento("Helado", "Helado de vainilla", false, true, 250.0));
	va.push_back(Alimento("Burrito", "Burrito de carne y frijoles", true, false, 450.0));

	vector<Persona*> vp;
	vp.push_back(new Vegetariano("Fede", "Scapellato", "44000000"));
	vp.push_back(new Vegetariano("Ana", "Gonzalez", "45000001"));
	vp.push_back(new Vegetariano("Luis", "Martinez", "45000002"));
	vp.push_back(new Vegano("Clara", "Lopez", "45000003"));
	vp.push_back(new Ayudante("Fran", "Campo", "45000004"));
	vp.push_back(new Alternados("Elena", "Garcia", "45000005"));
	vp.push_back(new Dietetico("Pablo", "Rodriguez", "45000006"));
	vp.push_back(new Vegano("Laura", "Sanchez", "45000007"));
	vp.push_back(new Dietetico("Carlos", "Perez", "45000008"));
	vp.push_back(new Ayudante("Sol", "Segura", "45000009"));
	vp.push_back(new Alternados("Jorge", "Torres", "45000010"));

	vp[3]->agregarElemento("Taza");
	vp[3]->agregarElemento("Tenedor");
	vp[3]->agregarElemento("Aceite");

	vp[7]->agregarElemento("Taza");
	vp[7]->agregarElemento("Tenedor");

	vp[0]->agregarIzqDer(vp[10], vp[1]);
	vp[1]->agregarIzqDer(vp[0], vp[2]);
	vp[2]->agregarIzqDer(vp[1], vp[3]);

	vp[6]->agregarElemento("Aceite");

	vector<Persona*>::iterator it_p = vp.begin();
	vector<Alimento>::iterator it_a = va.begin();

	while (it_p != vp.end()) {
		while (it_a != va.end()) {
			(*it_p)->servirse((*it_a));
			it_a++;
		}
		it_a = va.begin();
		it_p++;
	}
	
	it_p = vp.begin();
	
	while (it_p != vp.end()) {
		cout << *(*it_p) << endl;
		cout << ((*it_p)->feliz() ? "Estoy Feliz! :D" : "Estoy triste :'(") << endl;
		cout << (*it_p)->Pipon() << endl;

		cout << "Alimentos Consumidos:" << endl;
		it_a = (*it_p)->getConsumido().begin();
		while (it_a != (*it_p)->getConsumido().end()) {
			cout << "\t" << (*it_a) << endl;
			it_a++;
		}
		it_p++;

		cout << "---" << endl << endl;

		system("pause");
	}

	for (unsigned i = 0; i < vp.size(); i++)
		delete vp[i];
}
