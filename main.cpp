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
					cout << "Ingrese el nivel del ataque base: ";
					cin >> ataque;
					
					int e;
					cout << "Elemento\n1. Divine\n2. Blaze\n3. Freeze" << endl;
					cout << "Escoja el elemento: ";
					cin >> e;
					
					int op_GA_1;
					cout << "¿Que tipo de GodArc desea agregar?" << endl;
					cout << "1. Buster Sword\n2. Scythe\n3. Short Sword" << endl;
					cout << "Escoja una opcion: ";
					cin >> op_GA_1;
					if(op_GA_1 == 1) // BusterSword
					{
						int nivelAtaqueCrush;
						cout << "Ingrese el nivel del ataque crush: ";
						cin >> nivelAtaqueCrush;
						
						int poderExplosivo;
						cout << "Ingrese el poder explosivo: ";
						cin >> poderExplosivo;
						
						BusterSword* BS = new BusterSword(nivelAtaqueCrush, poderExplosivo, ataque, e);
						GodArcs.push_back(BS);
						cout << "\nBuster Sword agregada correctamente" << endl;
					}
					else if(op_GA_1 == 2) // Scythe
					{
						int nivelSlash;
						cout << "Ingrese el nivel de slash: ";
						cin >> nivelSlash;
						
						int poderCorteLargo;
						cout << "Ingrese el poder de corte largo: ";
						cin >> poderCorteLargo;
						
						Scythe* S = new Scythe(nivelSlash, poderCorteLargo, ataque, e);
						GodArcs.push_back(S);
						cout << "\nScythe agregado correctamente" << endl;
					}
					else if(op_GA_1 == 3) // ShortSword
					{
						int nivelPierce;
						cout << "Ingrese el nivel de pierce: ";
						cin >> nivelPierce;
						
						int poderSpeedCut;
						cout << "Ingrese el poder de speed cut: ";
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
						cout << "Ingrese el nombre: ";
						cin >> nombre;
						
						int nivel;
						cout << "Ingrese el nivel: ";
						cin >> nivel;
						
						GodEater* GE = new GodEater(nombre, nivel);
						
						int op_arma;
						cout << "GodArc (ARMA)" << endl;
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
					cout << "Ingrese el nombre: ";
					cin >> nombre;
					
					int vida;
					cout << "Ingrese la cantidad de vida: ";
					cin >> vida;
					
					int defensa;
					cout << "Ingrese el nivel de defensa: ";
					cin >> defensa;
					
					int e;
                                        cout << "Elemento\n1. Divine\n2. Blaze\n3. Freeze" << endl;
                                        cout << "Escoja el elemento: ";
                                        cin >> e;
					
					int ataque;
					cout << "Ingrese el nivel de ataque: ";
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
			if(GodEaters.size() != 0 && Aragamis.size() != 0)
			{
				// GodEater
				int op_GE;
				cout << "GodEaters" << endl;
				for(int i = 0; i < GodEaters.size(); i++)
				{
					cout << i << ". ";
					cout << GodEaters[i] -> getNombre() << ", ";
					cout << "Ataque: " << GodEaters[i] -> getArma() -> attack() << endl;
				}
				cout << "Escoja un GodEater: ";
				cin >> op_GE;
				
				GodEater* GE;
				if(op_GE < 0 || op_GE > GodEaters.size() - 1)
				{
					cout << "\nDebe escoger una opcion valdia." << endl;
					break;
				}
				else
					GE = GodEaters[op_GE];
				
				// Aragami
				int op_A;
				cout << "Aragami" << endl;
				for(int i = 0; i < Aragamis.size(); i++)
				{
					cout << i << ". ";
					cout << Aragamis[i] -> getNombre() << ", ";
					cout << "Ataque: " << Aragamis[i] -> getAtaque() << endl;
				}
				cout << "Escoja un Aragami: ";
				cin >> op_A;
				
				Aragami* A;
				if(op_A < 0 || op_A > Aragamis.size() - 1)
				{
					cout << "\nDebe escoger una opcion valida." << endl;
					break;
				}
				else
					A = Aragamis[op_A];
				
				int ataque_A;
				ataque_A = A -> getAtaque();
				int defensa_A;
				defensa_A = A -> getDefensa();
				
				int ataque_GE;
				ataque_GE = GE -> getArma() -> attack();
				int defensa_GE;
				defensa_GE = GE -> getDefensa();
				
				// Simulacion
				bool a = false;
				int cont = 1;
				cout << "\nSIMULACION";
				while((GE -> getVida() > 0) && (A -> getVida() > 0))
				{
					if(defensa_GE > ataque_A)
					{
						cout << "\nLa defensa del GodEater es mayor al ataque del Aragami." << endl;
						a = true;
						break;
					}
					else if(defensa_A > ataque_GE)
					{
						cout << "\nLa defensa del Aragami es mayor al ataque del GodEater." << endl;
						a = true;
						break;
					}
					else
					{
						if(cont % 2 != 0) { // Aragami vs GodEater
							cout << "\nAragami vs GodEater" << endl;
							cout << "Vida Aragami: " << A -> getVida() << ", Vida GodEater: " << GE -> getVida() << endl;
							cout << "Ataque Aragami: " << ataque_A << endl;
							cout << "Defensa GodEater: " << defensa_GE << endl;
							cout << "Damage: " << ataque_A - defensa_GE << endl;
							GE -> setVida(GE -> getVida() - (ataque_A - defensa_GE));
						}
						else // GodEater vs Aragami
						{
							cout << "\nGodEater vs Aragami" << endl;
							cout << "Vida GodEater: " << GE -> getVida() << ", Vida Aragami: " << A -> getVida() << endl;
							cout << "Ataque GodEater: " << ataque_GE << endl;
							cout << "Defensa Aragami: " << defensa_A << endl;
							cout << "Damage: " << ataque_GE - defensa_A << endl;
							A -> setVida(A -> getVida() - (ataque_GE - defensa_A));
						}
					}
					cont++;
				}
				if(a == false)
				{
					if(GE -> getVida() > A -> getVida())
						cout << "\nGanador: GodEater " << GE -> getNombre() << endl;
					else
						cout << "\nGanador: Aragami " << A -> getNombre() << endl;
				}
			}
			else
				cout << "\nDebe de haber por lo menos 1 GodEater y 1 Aragami para poder iniciar una simulacion.\n";
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
