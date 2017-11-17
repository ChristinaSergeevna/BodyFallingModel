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
std::vector<Model> models;

void mainForm::calc()
{
	myModel.initHeight(System::Convert::ToDouble(textHeight->Text));
	myModel.initSpeed(System::Convert::ToDouble(textSpeed->Text));
	myModel.mass(System::Convert::ToDouble(textMass->Text));
	myModel.radius(System::Convert::ToDouble(textRadius->Text));
	myModel.initTime(System::Convert::ToDouble(textInitTime->Text));
	myModel.finalTime(System::Convert::ToDouble(textFinalTime->Text));
	myModel.pointsNum(System::Convert::ToDouble(textPointsNum->Text));
	myModel.density(System::Convert::ToDouble(textDensity->Text));
	myModel.viscosity(System::Convert::ToDouble(textViscosity->Text));
	
	if (cbGraphType->SelectedItem == "Высота")
		myModel.graph('h');
	else if (cbGraphType->SelectedItem == "Скорость")
		myModel.graph('u');
	else 
		myModel.graph('a');

	if (cbGravity->Checked)
		myModel.gravity(9.81);
	else
		myModel.gravity(myModel.gravityAcceleration(System::Convert::ToDouble(textHeight->Text)));

	myModel.powArchimedes(System::Convert::ToInt32(cbArchimedes->Checked));
	myModel.powLiquid(System::Convert::ToInt32(cbLiquidResistance->Checked));
	myModel.powGas(System::Convert::ToInt32(cbGasResistance->Checked));

	myModel.Euler_Cromer(myModel.pointsNum(), myModel.initTime(), myModel.finalTime(), myModel.initHeight());
}

System::Void mainForm::bCalculation_Click(System::Object^  sender, System::EventArgs^  e)
{
	calc();

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

System::Void mainForm::bSave_Click(System::Object^  sender, System::EventArgs^  e)
{
	calc();
	models.push_back(myModel);
}