#include "Controle.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

int main(array<String^>^ args)
{
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault;

	Controle	controle;
	controle.controlarExecucao();

	return 0;
}