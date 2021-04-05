#include <iostream>

using namespace std;
int main(){
	
	//TIPO NOME;
	//TIPO = VALOR;
	
	int vidas=0; //10, 25
	char letra='B'; //'b" Recebe somente um caracter (Vetor => char letras[20] => Recebe um texto com 20 caracteres)
	double decimal=2.4999999; //2.4999999
	float decimal2=2.5; //2.5
	bool vivo=true; //true=verdadeiro / false=falso
	string nome="Bruno"; //"Bruno" Recebe um texto
	
	cout << "Digite o numero de vidas:";
	cin >> vidas;
	cout << "Digite uma letra:";
	cin >> letra;
	cout << "Dinheiro:";
	cin >> decimal;
	cout << "Digite seu nome:";
	cin >> nome;
	
	cout <<"\n";
	
	cout << vidas << "\n";
	cout << letra << "\n";
	cout << decimal << "\n";
	cout << decimal2 << "\n";
	cout << vivo << "\n";
	cout << nome << "\n";	
	
	return 0;
	
}