/*

Leia o valor de uma compra nas Lojas Sua Melhor Compra e mostre o valor das presta��es de 
acordo com a quantidade de parcelas desejada pelo usu�rio. A loja est� vendendo seus produtos 
a vista ou parcelado em at� 10 vezes sem juros.

*/

//N�O USAR SWITCH

//Entrada: valor de uma compra, escolha da quantidade de presta��es (sendo � vista ou parcelado em at� 10x s/juros )

//Processamento: Verifica��o de entrada da escolha, dividir o valor da compra pela escolha.

//Sa�da: Valor das presta��es (de acordo com o m�todo de pagamento e a quantidade de parcelas escolhida)

#include<iostream>
using namespace std;
int main (){
	
	int escolha;
	float valor;
	
	
	cout<<"Qual o valor da compra ?\n";
	cin>> valor;
	
	cout<<"\nEscolha a forma de pagamento (todas as opcoes sao s/juros): \n\n"
		<<"-----------------------"
		<<"\n1.A vista"
		<<"\n2.Parcelado em 2x"
		<<"\n3.Parcelado em 3x"
		<<"\n4.Parcelado em 4x"
		<<"\n5.Parcelado em 5x"
		<<"\n6.Parcelado em 6x"
		<<"\n7.Parcelado em 7x"
		<<"\n8.Parcelado em 8x"
		<<"\n9.Parcelado em 9x"
		<<"\n10.Parcelado em 10x\n"
		<<"-----------------------\n"
		<<"\nDigite a sua escolha: ";
	cin>> escolha;
	
	// Verifica��es/corre��o de entrada + processamento
	
	if((escolha<1)||(escolha>10)){
		
		cout<<"\n\nErro! Opcao inexistente...\n\n";		
	}else{
		
		if(escolha==1){
			
			cout<<"\nO valor total para pagamento a vista sera de R$ " << valor << "\n\n";
		}else{
		
			cout<<"\nO pagamento sera parcelado em "<< escolha << "x de R$ " << valor/escolha << "\n\n";
						
		}	
	}
	
	
	cout<<"Fim do Programa.\n";
	system("pause");
}
