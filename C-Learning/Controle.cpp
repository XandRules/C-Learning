#include "Controle.h"


Controle::Controle()
{

}

Controle::~Controle()
{
}

void Controle::controlarExecucao()
{
	CLearning::TelaInicial		telaInicial;
	CLearning::TelaDeConteudo	telaConteudo;
	CLearning::TelaBasico1		telaBasico1;

	int Opcao = -1;
	Opcao = gerenciarEscolha();
	while (Opcao != 0)
	{
		
		switch (Opcao)
		{
		case 0:
			break;
		case 1:
			telaConteudo.ShowDialog();
			Opcao = telaConteudo.getStatus();
			break;
			
		case 2:
			telaBasico1.ShowDialog();
			Opcao = telaBasico1.getStatus();
			break;

		default:
			break;
		}
		
	}

	
}

int Controle::gerenciarEscolha()
{
	int OpcaoDeEscolha;
	CLearning::TelaInicial		telaInicial;
	CLearning::TelaDeConteudo	telaConteudo;
	CLearning::TelaBasico1		telaBasico1;

	telaInicial.ShowDialog();
//--------------------------------------PRIMEIRA TELA---------------------------------
	while (telaInicial.getStatus() != 0)
	{
		OpcaoDeEscolha = telaInicial.getStatus();
		switch (OpcaoDeEscolha)
		{
		case 0: // Sair do Programa Fechar
			break;

		case 1: //Chama o Menu de Escolha(Segunda Tela do Programa)
			telaInicial.setStatus(-1);// Restaura o Status para uma possivel chamada
			return OpcaoDeEscolha;
			break;
//--------------------------------------SEGUNDA TELA--------------------------------------------------
			while (telaConteudo.getStatus() != 0)
			{
				OpcaoDeEscolha = telaConteudo.getStatus();// retorna o valor para o Controle

				switch (OpcaoDeEscolha)
				{
				case 0:
					telaConteudo.setStatus(-1);	// Restaura o Status para uma possivel chamada 			
					break;

				case 2:
					telaConteudo.setStatus(-1);
					return OpcaoDeEscolha;
					break;

				case 3:
					telaConteudo.setStatus(-1);
					return OpcaoDeEscolha;
					break;
//--------------------------------------TERCEIRA TELA-----------------------------------------------					
					while (telaBasico1.getStatus() != 0)
					{
						OpcaoDeEscolha = telaBasico1.getStatus();
						switch (OpcaoDeEscolha)
						{
						case 0:
							telaBasico1.setStatus(-1);	// Restaura o Status para uma possivel chamada 			
							break;
						}
					}
				}


				break;
			}
		}
	}
}
