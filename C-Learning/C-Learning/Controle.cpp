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
	CLearning::MenuBasico		menuBasico;

	int Opcao = -1;
	int OpcaoPrincipal = -1;

	while (OpcaoPrincipal != 0)
	{
		Opcao = gerenciarEscolha();
		OpcaoPrincipal = Opcao;
		while (Opcao != 0)
		{
			switch (Opcao)
			{
			case 0:
				break;
			case 1:
				telaConteudo.ShowDialog();//Tela de Conteudo de Seleção do Curso
				Opcao = telaConteudo.getStatus();//retorna opção para comparação do laço de repetição while.
				break;
//-------------------case 2 ao 5 corresponde menu de escolhas---------------------------
			case 2:
				menuBasico.ShowDialog();
				Opcao = menuBasico.getStatus();
				break;

			case 3:
				break;

			case 4:
				break;

			case 5:
				break;
//---------------------------------------------------------------------------------------
//-------------------menu Basico --------------------------------------------------------
			case 6:
				telaBasico1.ShowDialog();
				Opcao = telaBasico1.getStatus();
				break;

			case 7:
				break;

			case 8:
				break;

			case 9:
				break;
//--------------------------------------------------------------------------------------

			default:
				break;
			}
		}
	}

	
}

int Controle::gerenciarEscolha()
{
	int OpcaoDeEscolha;
	CLearning::TelaInicial		telaInicial;
	CLearning::TelaDeConteudo	telaConteudo;
	CLearning::TelaBasico1		telaBasico1;
	CLearning::MenuBasico		menuBasico;

	
//--------------------------------------PRIMEIRA TELA---------------------------------
	while (telaInicial.getStatus() != 0)
	{
		telaInicial.ShowDialog();
		OpcaoDeEscolha = telaInicial.getStatus();
		switch (OpcaoDeEscolha)
		{
		case 0: // Sair do Programa Fechar
			telaInicial.setStatus(0);
			return 0;
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

				case 4:
					telaConteudo.setStatus(-1);
					return OpcaoDeEscolha;
					break;

				case 5:
					telaConteudo.setStatus(-1);
					return OpcaoDeEscolha;
					break;

//--------------------------------------TERCEIRA TELA-----------------------------------------------					
					while (menuBasico.getStatus() != 0)
					{
						OpcaoDeEscolha = menuBasico.getStatus();
						switch (OpcaoDeEscolha)
						{
						case 0:
							menuBasico.setStatus(-1);	// Restaura o Status para uma possivel chamada 			
							break;

						case 6:
							menuBasico.setStatus(-1);
							return OpcaoDeEscolha;
							break;
//--------------------------------------------------------------------------------------------------
						}
					}
				}


				break;
			}
		}
	}
}
