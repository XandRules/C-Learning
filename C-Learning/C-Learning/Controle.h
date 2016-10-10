#ifndef ControleH
#define ControleH
//-----------------------------------------
using namespace System;
using namespace System::Windows::Forms;


#include "TelaInicial.h"
#include "TelaDeConteudo.h"
#include "ControlarEscolha.h"
#include "TelaBasico1.h"
#include "MenuBasico.h"

class Controle
{
private:
public:
	Controle();
	~Controle();

	void controlarExecucao();
	int gerenciarEscolha();
};
#endif
//-----------------------------------------