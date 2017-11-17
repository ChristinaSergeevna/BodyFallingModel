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
	String ^ BaseName = "table.xml";
	DataTable ^ dTable = gcnew DataTable();
	DataSet ^ dSet = gcnew DataSet();

	if (IO::File::Exists(BaseName) == false)
	{
		dgTable->Columns->Clear();
		dgTable->ColumnCount = 5 * models.size();

		for (int k = 0; k < models.size(); ++k)
		{
			dgTable->Columns[0 + 5 * k]->Name = "Шаг " + Convert::ToString(k);
			dgTable->Columns[1 + 5 * k]->Name = "Время " + Convert::ToString(k);
			dgTable->Columns[2 + 5 * k]->Name = "Высота " + Convert::ToString(k);
			dgTable->Columns[3 + 5 * k]->Name = "Скорость " + Convert::ToString(k);
			dgTable->Columns[4 + 5 * k]->Name = "Ускорение " + Convert::ToString(k);
		}

		dgTable->Rows->Add(myModel.pointsNum());

		for (int k = 0; k < models.size(); ++k)
		{
			for (int i = 0; i < myModel.pointsNum(); ++i)
				dgTable->Rows[i]->Cells[0 + 5 * k]->Value = i;

			for (int i = 0; i < myModel.pointsNum(); ++i)
				dgTable->Rows[i]->Cells[1 + 5 * k]->Value = models[k].result(i).first;

			for (int i = 0; i < myModel.pointsNum(); ++i)
				dgTable->Rows[i]->Cells[2 + 5 * k]->Value = models[k].result(i).second;

			for (int i = 0; i < myModel.pointsNum(); ++i)
				dgTable->Rows[i]->Cells[3 + 5 * k]->Value = models[k].velocity(i);

			for (int i = 0; i < myModel.pointsNum(); ++i)
				dgTable->Rows[i]->Cells[4 + 5 * k]->Value = models[k].acceleration(i);
		}
	}
	else
	{
		dSet->ReadXml(BaseName);
		String ^ StringXML = dSet->GetXml();
		dgTable->DataMember = "Название таблицы";
		dgTable->DataSource = dSet;
	}
	delete BaseName;
	delete dTable;
	delete dSet;
}