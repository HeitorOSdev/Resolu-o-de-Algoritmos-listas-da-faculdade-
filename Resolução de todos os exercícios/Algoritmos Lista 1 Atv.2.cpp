/* 

Calcule e escreva a quantidade de dinheiro gasta por um fumante a partir da leitura das 
informações número de anos que ele fuma, nº de cigarros fumados por dia e preço de uma 
carteira.

 */
 
 
 
 //entrada: anos que fuma, cigarros por dia, preço de uma CARTEIRA (R$)
  
 //processamento: anos*365*cigarros por dia = total de cigarros, total de cigarros/20 = total de carteiras, total de carteiras * preço = total gasto em todos esses anos.
 
 //saída: Total de dinheiro gasto em carteiras de cigarro em todos esses anos (em R$).
 

#include<iostream> 
using namespace std;
int main (){
 	
 	int anosF, cigarrosDia, totalDeCarteiras; // totalDeCarteiras --> Dá pra fazer no processamento, sem variável (bem como o total gasto dá pra fazer direto na saída)
 	float precoCarteira, totalGasto;
 	
 	cout<<"Fuma a quantos anos ?\n";
 	cin>> anosF;
 	cout<<"\nFuma quantos cigarros por dia ?\n";
 	cin>> cigarrosDia;
 	cout<<"\nQual o preco da certeira de cigarros ?\n";
	cin>> precoCarteira;
	
	totalDeCarteiras= (anosF*365*cigarrosDia)/20; //total de cigarros divididos/20 = total de carteiras
	totalGasto= totalDeCarteiras*precoCarteira;
	
	cout<<"O total gasto com cigarros em todos esses anos foi de R$ " << totalGasto ; //total gasto com carteiras de cigarro.
	
	
	
	cout<<"\n\n\n\nFim do Programa.\n";	
 	system ("pause");
 }
