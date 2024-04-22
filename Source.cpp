#include <iostream>

using namespace std;


//Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.


void ler_matriz(int** m, int l, int c) {
		for (int i = 0; i < l; i++){
			for (int j = 0; j < c; j++){
				cout << "informe os elementos da matriz: ";
				cin >> m[i][j];
			}
	}


}


void maiores(int** m, int l, int c) {
	int contador = 0;
	for (int i = 0; i < l; i++){
		for (int j = 0; j < c; j++){
			if (m[i][j] > 10)
				contador++;

}

}
	cout << "a matriz possui " << contador <<"maiores que 10";
}



int main() {
	const int l = 4;
	const int c = 4;

	// Alocando a matriz dinamicamente
	int** matriz = new int* [l];
	for (int i = 0; i < l; i++)
	{
		matriz[i] = new int[c];
	}

	ler_matriz(matriz, l, c);
	maiores(matriz, l, c);






}