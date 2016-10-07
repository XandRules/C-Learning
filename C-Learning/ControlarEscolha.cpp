#include "ControlarEscolha.h"



ControlarEscolha::ControlarEscolha()
{
}

ControlarEscolha::~ControlarEscolha()
{
}

int ControlarEscolha::gerenciarEscolha()
{
	int OpcaoDeEscolha;

	CLearning::TelaInicial		telaInicial;
	CLearning::TelaDeConteudo	telaConteudo;
	telaInicial.ShowDialog();

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

			OpcaoDeEscolha = telaConteudo.getStatus(); // retorna o valor para o Controle
			switch (OpcaoDeEscolha)
			{
			case 0:				
					telaConteudo.setStatus(-1);	// Restaura o Status para uma possivel chamada 			
				break;

			case 2:
				telaConteudo.setStatus(-1);
				return OpcaoDeEscolha;
				break;
			}
			
			
			break;
		}
	}
	

	
}
