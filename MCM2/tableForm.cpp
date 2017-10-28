#include <Windows.h>
#include "tableForm.h"
#include "model.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace MCM2;
[STAThreadAttribute]

int tableFormInit()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	MCM2::tableForm form;
	Application::Run(%form);
	return 0;
}

System::Void tableForm::tableForm_Load(System::Object^  sender, System::EventArgs^  e)
{
	BaseName = "table.xml";
	dTable = gcnew DataTable();
	dSet = gcnew DataSet();
	if (IO::File::Exists(BaseName) == false) {
		dgTable->DataSource = dTable;
		dTable->Columns->Add("Шаг");
		dTable->Columns->Add("Время");
		dTable->Columns->Add("Высота");
		dTable->Columns->Add("Скорость");
		dSet->Tables->Add(dTable);

		for (int i = 0; i <= myModel.pointsNum(); i++)
			dTable->Rows->Add(i, i * myModel.finalTime() / myModel.pointsNum(), 1, 1);
	}
	else {
		dSet->ReadXml(BaseName);
		String ^ StringXML = dSet->GetXml();
		dgTable->DataMember = "Название таблицы";
		dgTable->DataSource = dSet;
	}

}