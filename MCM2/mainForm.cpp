#include "mainForm.h"
#include "model.h"
#include <Windows.h>
#include <string>

using namespace System;
using namespace System::Windows::Forms;
using namespace MCM2;
[STAThreadAttribute]

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	MCM2::mainForm form;
	Application::Run(%form);
	return 0;
}

Model myModel;

System::Void mainForm::bCalculation_Click(System::Object^  sender, System::EventArgs^  e)
{
	myModel.initHeight(System::Convert::ToDouble(textHeight->Text));
	myModel.initSpeed(System::Convert::ToDouble(textSpeed->Text));
	myModel.mass(System::Convert::ToDouble(textMass->Text));
	myModel.radius(System::Convert::ToDouble(textRadius->Text));
	myModel.initTime(System::Convert::ToDouble(textInitTime->Text));
	myModel.finalTime(System::Convert::ToDouble(textFinalTime->Text));
	myModel.pointsNum(System::Convert::ToDouble(textPointsNum->Text));
	myModel.density(System::Convert::ToDouble(textDensity->Text));
	myModel.gravity(System::Convert::ToDouble(textGravity->Text));

	myModel.powArchimedes(System::Convert::ToBoolean(cbArchimedes->CheckState));
	myModel.powLiquid(System::Convert::ToBoolean(cbLiquidResistance->CheckState));
	myModel.powGas(System::Convert::ToBoolean(cbGasResistance->CheckState));

	myModel.Euler_Cromer(myModel.pointsNum(), myModel.initTime(), myModel.finalTime(), myModel.initHeight());

	if (rbTable->Checked)
	{
		tableForm^ fTable = gcnew tableForm;
		fTable->ShowDialog();
	}
	if (rbGraph->Checked)
	{
		graphForm^ gTable = gcnew graphForm;
		gTable->ShowDialog();
	}

}