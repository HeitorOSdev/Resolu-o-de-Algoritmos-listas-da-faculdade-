/*	Leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa apenas em dias	*/

#include<iostream>
using namespace std;
int main (){
	
	int anos, meses, dias, total;
	
	cout<<"Sua idade atual: ";
	cin>>anos;
	cout<<"\nMeses ate o seu ultimo aniversario (nao conte com o mes atual): ";
	cin>>meses;
	cout<<"\nDias ate o primeiro dia do mes atual (se seu aniversario ja tiver acontecido nesse mes, digite a quantidade de dias ate o dia do seu aniversario): ";
	cin>>dias;
	
	total =	anos*365 + meses*30 + dias;
	
	cout<<"\n\n\tSua idade total eh de (aproximadamente) " << total << " dias.";
	cout<<"\n\n\nFim do Programa\n";
	
	system("pause");
}
