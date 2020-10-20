#include <iostream>
#include <clocale> // setlocale
#include <cstdlib> // system
#include <string> // Textos em geral

using namespace std;


int main() {
	setlocale(LC_ALL, "Portuguese");

	int* p1;

	// Aloca memória
	p1 = new int;
	*p1 = 100;

	cout << "O valor é: " << *p1 << "\nQue está na posição de memória: " << p1 << "\nO valor apontado é :" << &p1 << endl;

	delete p1;

	system("pause");
	return 0;
}