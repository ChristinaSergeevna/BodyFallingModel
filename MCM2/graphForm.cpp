#include "graphForm.h"
#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;
using namespace MCM2;
[STAThreadAttribute]

int graphFormInit()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	MCM2::graphForm form;
	Application::Run(%form);
	return 0;
}