#include <iostream>

using namespace std;

int n1,n2; //Variáveis Globais

int main(){
	
	///Operadores Matemáticos: + - / * %=mod ()
	
	int n3,n4; //Variáveis Locais
	int res0,res1,res2;
	
	n1=11;
	n2=3;
	n3=5;
	n4=2;
	
	res0=(n1+n2+n3+n4)-10; //n1+n2*n4 = 17 Lógica das prioridades de operações
	res1=n1/n2; //Retorna o Quociente da Divisão
	res2=n1%n2; //Retorna o resto da Divisão
	
	cout << "Soma de todas as variaveis: " << res0 << "\n\n";
	cout << "Divis: " << res1 << "\n\n";
	cout << "Resto: " << res2 << "\n\n";
	
	return 0;
}
