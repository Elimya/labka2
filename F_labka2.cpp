#include "F_labka2.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace labka2;
[STAThread]
int main(array<System::String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew F_labka2());
	return 0;
}