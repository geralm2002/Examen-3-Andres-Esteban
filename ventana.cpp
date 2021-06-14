#include "ventana.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Globalization;


using namespace Examen3AndresEsteban; // se le puede cambiar el nombre a la clase


[STAThread]


int main(int argc, char* argv[]) {


	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Examen3AndresEsteban::ventana form; //Reemplazar MyForm por el nombre que se haya usado en Myform.h como "constructor"
	Application::Run(% form);

	return 0;
}

