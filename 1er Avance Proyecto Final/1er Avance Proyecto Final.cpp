#include <iostream>
#include <locale.h>
#include <string>

using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	int opcion, edad[99];
	int salir = 1;
	int i = 1;
	string nompac[99], nomtrat[99], desc[99];
	do {
		cout << "---[CITAS DENTALES]---" << endl;
		cout << "1.-AGENDAR CITA\n2.-MODIFICAR CITA\n3.-ELIMINAR CITA\n4.-LISTA DE CITAS VIGENTES\n5.-LIMPIAR PANTALLA\n6.-SALIR\n";
		cout << "\nIngrese su opción: ";
		cin >> opcion;
		switch (opcion) {
		case 1:
			do {
				cout << "\n-PACIENTE " << i << "-\n";
				cout << "Nombre del Paciente: ";
				cin.ignore();
				getline(cin, nompac[i]);
				cout << "Edad: ";
				cin >> edad[i];
				cout << "\n--[SU CITA HA SIDO AGENDADA]--\n";
				cout << "\n\n¿Desea agregar otro paciente?(Sí=1, No=2)\n";
				cin >> opcion;
				i++;
			} while (opcion == 1);
			break;
		case 2:

			break;
		case 3:

			break;
		case 4:

			break;
		case 5:
			system("cls");
			opcion = 0;
			break;
		case 6:
			exit(1);
			break;
		default:
			cout << "\n**ERROR, Ingrese una opción válida**\n";
		}
		if (opcion != 0) {
			cout << "\n¿Desea ir al menú?(Sí=1 No=2)\nOpción: ";
			cin >> salir;
		}
	} while (salir == 1);
}