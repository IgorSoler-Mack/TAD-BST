#include <iostream>
#include <conio.h>
#include <locale.h>

#include "No.h"
#include "ArvoreBST.h"


using namespace std;

void continuar(){
	cout << "\nPressione ENTER para continuar";
	getch();
	system("cls"); // Windows Only
}

void print_logo(){
	cout << "                        ...             ....                     "<< endl;
	cout << "                      =*rrr*+==:--:-.:+*rrrr*=                   "<< endl;
	cout << "                    .:%rrrrrrrr@rrrrr%rrrrrrr%=::.               "<< endl;
	cout << "                 -:+%%rrrrrrrrr%rrrrr*rrrrrrrrrrr%.              "<< endl;
	cout << "               -rrrrrrr%rrr%rrrrrrrrrrrrrr%rrrrrr%-              "<< endl;
	cout << "             .:*%rrrrrrrr +===========+ r*r%rrrrrrrr=            "<< endl;
	cout << "           .*rrrrrrrrrrrr |    TAD    | rrrrrrrrrrrr%*r:         "<< endl;
	cout << "           *rrrrrrrrrrrrr |     -     | rrr*rrrrrr%%rrrr**:      "<< endl;
	cout << "        -=+rrrrrrrrrrrrrr |    BST    | rr%rrrrrrr*%%*rrrr*      "<< endl;
	cout << "      :rrrrrrrrrrrrrrrrrr +===========+ *r%r**rrrrr%r*rrr%=      "<< endl;
	cout << "      %rrrrr%rrrrrrrrrrrrrrrr*rrrrrr%r*rrr%rrr%%rr@rrrrrrr%.     "<< endl;
	cout << "      %r*rr*r%rrrrrrrrrrrrrr%%@*::+%rrrrrrrrrrr**rrrr%r%*-       "<< endl;
	cout << "      -*%rrrrr%rr%rrrrrr*r*r@%%%:-*%%%rrrrrr*rrrrrrrr*==         "<< endl;
	cout << "       *rrrrr*rrrrrrrrrrr%. *%r%@%%%r@-.%%%rrrrrrrrrrr.          "<< endl;
	cout << "       =*rr%rrrrrrrrrr%%=+%=+@%r%%%r%% -%%%@%@rrrrrrr*.          "<< endl;
	cout << "         ..=rrrrrrr****+:+%%%%%rrrr%@*:@%%rrr%%%rr%:.            "<< endl;
	cout << "            .:===-        .r%@%%%rr%@@@*===+=-.-::-              "<< endl;
	cout << "                           -@%rr%%%%@@-                          "<< endl;
	cout << "                           -@%r%@@@@@+                           "<< endl;
	cout << "                           :@%r%@@@@@r                           "<< endl;
	cout << "                   :--   -.*@%rr%%%%@@.  .                       "<< endl;
	cout << "               -:=::*===*rr@%%r%rrrr@@r--=*=:=+*==-              "<< endl;
	cout << "               :=+::+r%@@%@%r%%%%%%%%%@@%%r*=::::=:-             "<< endl;
	cout << "                    .---.....-:+r%%@%++*****+:                   "<< endl;
	cout << "                                  .-.                            "<< endl << endl;
	cout << "            Arvore de Binaria de Busca com chaves int            "<< endl << endl;
	cout << " Por:                                                            "<< endl;
	cout << " Igor Soler Cavalcanti - 42013550                                "<< endl;
	cout << " Paloma de Sousa Bezerra - 32094264                              "<< endl;
	cout << " Rafael Miranda Ferreira - 42080932                              "<< endl;
	continuar();
}

int main()
{
	setlocale(LC_ALL,"");
	print_logo(); // Print primeira tela
	
	ArvoreBST arv;
	int opcao, x;
	
	do  // Loop do Menu
	{
		cout << "\n***********************************";
		cout << "\n\tMenu - Arvore BST\n";
		
		cout << "\nEntre com a opcao:";
		cout << "\n ----0: Sair do programa\n";	      // Implementado
		cout << "\n ----1: Inserir"; 			      // Implementado
		cout << "\n ----2: Excluir";           	      //
		cout << "\n ----3: Pesquisar";			      // Implementado
		cout << "\n ----4: Imprimir em ordem";	      // Implementado
		cout << "\n ----5: Qde de nos";			      // Implementado
		cout << "\n ----6: Altura";				      // Implementado
		cout << "\n ----7: Qde de folhas";		      // Implementado
		cout << "\n ----8: Valor max";			      // Implementado
		cout << "\n ----9: Valor min";			      // Implementado
		cout << "\n ---10: Imprimir Formatado"; 	  // Implementado
		cout << "\n ---11: Preencher aleatoriamente"; // Implementado
		cout << "\n ---12: Limpa a Arvore";           // Implementado

		cout << "\n***********************************";
		cout << "\n-> ";
		cin >> opcao;
		switch (opcao){
			case 1:
			{
				cout << "\n Informe o valor (int) -> ";
				cin >> x;
				cout << "\nAnterior:\n";
				arv.printArvore(arv.getRaiz());
				
				arv.inserir(x);
				
				cout << "\nNova:\n";
				arv.printArvore(arv.getRaiz());
				break;
			}
			case 2:
			{
				cout << "\n Informe a chave a remover (int) -> ";
				cin >> x;
				cout << "\nAnterior:\n";
				arv.printArvore(arv.getRaiz());
				cout << endl;
				
				arv.removerNo(x);
				
				cout << "\n\nNova:\n";
				arv.printArvore(arv.getRaiz());
				break;
			}
			case 3:
			{
				cout << "\n Informe o valor da chave (int) -> ";
				cin >> x;
				// No *ret = arv.Pesquisar(x,arv.getRaiz());
				No *ret = arv.PesquisarRec(arv.getRaiz(), x);
				if (ret == NULL)
				{
					cout << "\n Chave nao encontrada! \n";
				}
				else
				{
					cout << "\n Chave encontrada! \n";
				}
				break;
			}
			case 4:
			{
				cout << "Percorrendo em ordem...\n";
				arv.emOrdem(arv.getRaiz());
				break;
			}
			case 5:
			{
				cout << "Qde de nos: " << arv.contarNos(arv.getRaiz());
				break;
			}
			case 6:
			{
				cout << "Altura da Arvore: " << arv.altura(arv.getRaiz());
				break;
			}
			case 7:
			{
				cout << "Qde de folhas: " << arv.contarFolhas(arv.getRaiz());
				break;
			}
			case 8:
			{
				cout << "Valor max na arvore: " << arv.getMax();
				break;
			}
			case 9:
			{
				cout << "Valor min na arvore " << arv.getMin();
				break;
			}
			case 10:
			{
				cout << "\nLegenda:\n";
				cout << "R = Raiz\nD = Filho Direita\nE = Filho Esquerda\nF = Folha\n";
				cout << "\nImpressao:\n";
				arv.printArvore(arv.getRaiz());
				break;
			}
			case 11:
			{
				cout << "Informe a quantidade de elementos para inserir: ";
				cin >> x;
				arv.arvoreAleatoria(x);
				cout << "Arvore preenchida com " << x << " chaves aleatorias";
				break;
			}
			case 12:
			{
				cout << endl;
				
				arv.clear();
				
				cout << "\nTodos os no's foram deletados\n";
				cout << "A arvore agora esta' Vazia!\n";
				
				break;
			}
			default:
				if (opcao != 0)
					cout << "\n Opcao invalida! \n\n\n";
		} // fim switch
	
		if (opcao != 0){
			continuar();
		}
	
	} while (opcao != 0);

	return 0;
}
