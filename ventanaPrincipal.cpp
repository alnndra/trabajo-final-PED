#include "ventanaPrincipal.h"
using namespace System;
using namespace System::Windows::Forms;

void main(cli::array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Interfaz4::ventanaPrincipal form;
	Application::Run(%form);
}