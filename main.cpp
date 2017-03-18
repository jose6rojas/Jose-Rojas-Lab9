// Laboratorio 9
// Jose Rojas - 11541234
// sabado, 18 de marzo de 2017

#include <iostream>
#include <vector>
#include <string>
#include "GodArc.h"
#include "BusterSword.h"
#include "Scythe.h"
#include "ShortSword.h"
#include "GodEater.h"
#include "Aragami.h"

using namespace std;

int main()
{
	vector<GodArc*> GodArcs;
	vector<GodEater*> GodEaters;
	vector<Aragami*> Aragamis;
	
	cout << "¡Bienvenido a la base Fenrir!" << endl;
	cout << "¿Con que va a trabajar el dia de hoy?" << endl;
	int op_1 = 0;
	while(op_1 != 5)
	{
		cout << "\nMENU PRINCIPAL" << endl;
		cout << "1. GodArcs\n2. GodEaters\n3. Aragamis\n4. Simulacion\n5. Salir" << endl;
		cout << "Escoja una opcion: ";
		cin >> op_1;
		if(op_1 == 1) // GodArcs
		{
			int op_GA = 0;
			while(op_GA != 4)
			{
				cout << "\nGODARCS" << endl;
				cout << "1. Agregar\n2. Modificar\n3. Eliminar\n4. Regresar al Menu Principal" << endl;
				cout << "Escoja una opcion: ";
				cin >> op_GA;
				if(op_GA == 1) // Agregar
				{
					int ataque;
					cout << "\nIngrese el nivel del ataque base: ";
					cin >> ataque;
					
					int e;
					cout << "\nElemento\n1. Divine\n2. Blaze\n3. Freeze" << endl;
					cout << "Escoja el elemento: ";
					cin >> e;
					
					int op_GA_1;
					cout << "\nAgregar\n¿Que tipo de GodArc desea agregar?" << endl;
					cout << "1. Buster Sword\n2. Scythe\n3. Short Sword" << endl;
					cout << "Escoja una opcion: ";
					cin >> op_GA_1;
					if(op_GA_1 == 1) // BusterSword
					{
						int nivelAtaqueCrush;
						cout << "\nIngrese el nivel del ataque crush: ";
						cin >> nivelAtaqueCrush;
						
						int poderExplosivo;
						cout << "\nIngrese el poder explosivo: ";
						cin >> poderExplosivo;
						
						BusterSword* BS = new BusterSword(nivelAtaqueCrush, poderExplosivo, ataque, e);
						GodArcs.push_back(BS);
						cout << "\nBuster Sword agregada correctamente" << endl;
					}
					else if(op_GA_1 == 2) // Scythe
					{
						int nivelSlash;
						cout << "\nIngrese el nivel de slash: ";
						cin >> nivelSlash;
						
						int poderCorteLargo;
						cout << "\nIngrese el poder de corte largo: ";
						cin >> poderCorteLargo;
						
						Scythe* S = new Scythe(nivelSlash, poderCorteLargo, ataque, e);
						GodArcs.push_back(S);
						cout << "\nScythe agregado correctamente" << endl;
					}
					else if(op_GA_1 == 3) // ShortSword
					{
						int nivelPierce;
						cout << "\nIngrese el nivel de pierce: ";
						cin >> nivelPierce;
						
						int poderSpeedCut;
						cout << "\nIngrese el poder de speed cut: ";
						cin >> poderSpeedCut;
						
						ShortSword* SS = new ShortSword(nivelPierce, poderSpeedCut, ataque, e);
						GodArcs.push_back(SS);
						cout << "\nShort Sword agregada correctamente" << endl;
					}
					else
						cout << "\nDebe escoger una opcion valida." << endl;
				}
				else if(op_GA == 2) // Modificar
				{
				}
				else if(op_GA == 3) // Eliminar
				{
				}
				else if(op_GA == 4) { } // Regresar al Menu Principal
				else
					cout << "\nDebe escoger una opcion valida." << endl;
			}
		}
		else if(op_1 == 2) // GodEaters
		{
			if(GodArcs.size() != 0)
			{
				int op_GE = 0;
				while(op_GE != 4)
				{
					cout << "\nGODEATERS" << endl;
					cout << "1. Agregar\n2. Modificar\n3. Eliminar\n4. Regresar al Menu Principal" << endl;
					cout << "Escoja una opcion: ";
					cin >> op_GE;
					if(op_GE == 1) // Agregar
					{
						string nombre;
						cout << "\nIngrese el nombre: ";
						cin >> nombre;
						
						int nivel;
						cout << "\nIngrese el nivel: ";
						cin >> nivel;
						
						GodEater* GE = new GodEater(nombre, nivel);
						
						int op_arma;
						cout << "\nGodArc (ARMA)" << endl;
						for(int i = 0; i < GodArcs.size(); i++)
						{
							cout << i << ". ";
							cout << "Elemento: " << GodArcs[i] -> getElemento() << ", ";
							cout << "Ataque: " << GodArcs[i] -> attack() << endl;
						}
						cout << "Escoja una arma: ";
						cin >> op_arma;
						if(op_arma < 0 || op_arma > GodArcs.size() - 1)
							cout << "\nDebe escoger una opcion valida." << endl;
						else
						{
							GE -> setArma(GodArcs[op_arma]);
							// cout << "\nGodArc agregada correctamente" << endl;
							GodEaters.push_back(GE);
							cout << "\nGodEater agregado correctamente" << endl;
						}
					}
					else if(op_GE == 2) // Modificar
					{
					}
					else if(op_GE == 3) // Eliminar
					{
					}
					else if(op_GE == 4) { } // Regresar al Menu Principal
					else
						cout << "\nDebe escoger una opcion valida." << endl;
				}
			}
			else
				cout << "\nDebe de haber por lo menos una GodArc para poder agregar GodEaters." << endl;
		}
		else if(op_1 == 3) // Aragamis
		{
			int op_A = 0;
			while(op_A != 4)
			{
				cout << "\nARAGAMIS" << endl;
				cout << "1. Agregar\n2. Modificar\n3. Eliminar\n4. Regresar al Menu Principal" << endl;
				cout << "Escoja una opcion: ";
				cin >> op_A;
				if(op_A == 1) // Agregar
				{
					string nombre;
					cout << "\nIngrese el nombre: ";
					cin >> nombre;
					
					int vida;
					cout << "\nIngrese la cantidad de vida: ";
					cin >> vida;
					
					int defensa;
					cout << "\nIngrese el nivel de defensa: ";
					cin >> defensa;
					
					int e;
                                        cout << "\nElemento\n1. Divine\n2. Blaze\n3. Freeze" << endl;
                                        cout << "Escoja el elemento: ";
                                        cin >> e;
					
					int ataque;
					cout << "\nIngrese el nivel de ataque: ";
					cin >> ataque;
					
					Aragami* A = new Aragami(nombre, vida, defensa, e, ataque);
					Aragamis.push_back(A);
					cout << "\nAragami agregado correctamente" << endl;
				}
				else if(op_A == 2) // Modificar
				{
				}
				else if(op_A == 3) // Eliminar
				{
				}
				else if(op_A == 4) { } // Regresar al Menu Principal
				else
					cout << "\nDebe escoger una opcion valida." << endl;
			}
		}
		else if(op_1 == 4) // Simulacion
		{
		}
		else if(op_1 == 5) { } // Salir
		else
			cout << "\nDebe escoger una opcion valida." << endl;
	}
	
	for(int i = 0; i < GodArcs.size(); i++)
		delete GodArcs[i];
	GodArcs.clear();
	for(int i = 0; i < GodEaters.size(); i++)
		delete GodEaters[i];
	GodEaters.clear();
	for(int i = 0; i < Aragamis.size(); i++)
		delete Aragamis[i];
	Aragamis.clear();
	
	return 0;
}




















