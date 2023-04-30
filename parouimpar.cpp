#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <ctime>
#include <locale.h>

using namespace std;

int main() {

	setlocale(LC_ALL, "Portuguese");
	    
	    //criando as variaveis
		int j1, PC;
		string choice;

	cout << "Escolha par ou impar: \n";
	cin >> choice; 

	while (choice != "par" && choice != "impar") {
		cout << "Inválido, por favor escolha par ou impar: \n";
		cin >> choice;	
	}

	cout << endl;
	cout << endl;

	cout << "Agora escolha um número de 1 a 5: \n";
	cin >> j1;

	while (j1 > 5) {

		cout << "inválido, por favor insira um número de 1 a 5: \n";
		cin >> j1;
	}

	cout << endl;
	cout << endl;

	srand(time(0));

		PC = rand() % 5 + 1;

	cout << "Agora a máquina irá jogar :D \n";
	
	cout << endl;
	cout << endl;

	cout << "Jogada da máquina: " << PC << endl;

	cout << endl;
	cout << endl;
	
   int aux = j1 + PC;

   if (aux % 2 == 0 && choice == "par") {
	   cout << "Jogador ganhou! \n";
   }
    if (aux % 2 == 1 && choice == "impar") {
	   cout << "Maquina ganhou! \n";
   }
   if (aux % 2 == 1 && choice == "impar") {
	   cout << "Jogador ganhou! \n";
   }
    if (aux % 2 == 1 && choice == "par") {
	   cout << "Maquina ganhou! \n";
   }

   cout << endl;
   cout << "     **  " << endl;
   cout << "    *__*  " << endl;
   cout << "  *|    |*  " << endl;
   cout << " (_|    |_) " << endl;
   cout << "    *  *   " << endl;
   cout << "     )(   " << endl;
   cout << "   _|__|_ " << endl;
   cout << " _|______|_ " << endl;
   cout << "|__________|" << endl;
   cout << endl;
   cout << endl;

}


