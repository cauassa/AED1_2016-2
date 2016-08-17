//Lista 1 - Revisão
//Questão 8 - Dada uma matriz real Amxn, verificar se existem elementos repetidos em A.

using namespace std;
#include <cstdlib>
#include <iostream>
#include <iomanip>
#define MAX 100

main(){
      
    int matriz[2][2], i, j, k, elementos[MAX], repetidos[MAX], cont1, cont2;

	cout << "Dada uma Matriz 2x2 entre com os valores de linhaXcoluna \n\n";	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			cout << "Insira ["<<i<<"]["<<j<<"]: ";
			cin >> matriz[i][j];
		}
	}

	cout << "\n\nMatriz digitada: \n" <<endl;	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			cout << matriz[i][j];
			cout << "\t";
			}
		cout << "\t" <<endl;
	}
	
	k=0;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			k++;
		}
	}
	
	cont1=0;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			elementos[cont1] = matriz[i][j];
			cont1++;
		}
	}
	
    cont2=0;
    for(i=0;i<k;i++){
		if(elementos[i] == elementos[i+1])//se tiver elementos iguais
            repetidos[i] = elementos[i];
            cont2++;
	}
	
    cout << "\nElementos repetidos: \n\n";
    for(i=0;i<cont2;i++){
      	cout <<repetidos[i]<<"\n";
    }
}
