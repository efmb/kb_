#include <iostream>

using namespace std;

int n1,n2; //Vari�veis Globais

int main(){
	
	///Operadores Matem�ticos: + - / * %=mod ()
	
	int n3,n4; //Vari�veis Locais
	int res0,res1,res2;
	
	n1=11;
	n2=3;
	n3=5;
	n4=2;
	
	res0=(n1+n2+n3+n4)-10; //n1+n2*n4 = 17 L�gica das prioridades de opera��es
	res1=n1/n2; //Retorna o Quociente da Divis�o
	res2=n1%n2; //Retorna o resto da Divis�o
	
	cout << "Soma de todas as variaveis: " << res0 << "\n\n";
	cout << "Divis: " << res1 << "\n\n";
	cout << "Resto: " << res2 << "\n\n";
	
	return 0;
}
