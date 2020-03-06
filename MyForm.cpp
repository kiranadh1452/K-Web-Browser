#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void main(array<String^>^ args) { // args vaneko pointer ho , pointer of array of strings}
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::MyForm form;
	Application::Run(% form);
}
