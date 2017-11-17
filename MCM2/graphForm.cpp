#include "graphForm.h"
#include <Windows.h>
#include "model.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace MCM2;
using namespace Runtime::InteropServices;
using namespace System::Collections::Generic;
using namespace System::Drawing::Drawing2D;
using namespace System::Drawing;
using namespace System::Windows::Forms::DataVisualization::Charting;
[STAThreadAttribute]

int graphFormInit()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	MCM2::graphForm form;
	Application::Run(%form);
	return 0;
}

System::Void graphForm::graphForm_Load(System::Object^  sender, System::EventArgs^  e)
{
	for (int j = 0; j < models.size(); ++j)
	{
		Graphic->Series->Add("chart " + Convert::ToString(j));
		Graphic->Series[j]->ChartType = SeriesChartType::Line;
		//Graphic->Series[j]->MarkerStyle = MarkerStyle::Circle;
		Graphic->Series[j]->LegendText = "Эксперимент №" + Convert::ToString(j);
		Graphic->Series[j]->Color = j % 7 == 0 ? System::Drawing::Color::Green : j % 6 == 0 ? System::Drawing::Color::Blue : 
			j % 5 == 0 ? System::Drawing::Color::Aqua : j % 4 == 0 ? System::Drawing::Color::DarkBlue : 
			j % 3 == 0 ? System::Drawing::Color::Orange : j % 2 == 0 ? System::Drawing::Color::Yellow : System::Drawing::Color::Red;
		Graphic->Series[j]->BorderWidth = 2;
		for (int i = 0; i < models[j].pointsNum(); ++i)
			if (models[j].graph() == 'h')
				Graphic->Series[j]->Points->AddXY(models[j].result(i).first, models[j].result(i).second);
			else if (models[j].graph() == 'u')
				Graphic->Series[j]->Points->AddXY(models[j].result(i).first, models[j].velocity(i));
			else 
				Graphic->Series[j]->Points->AddXY(models[j].result(i).first, models[j].acceleration(i));
		Graphic->Series[j]->IsVisibleInLegend = true;
		clbModels->Items->Insert(j, "Эксперимент №" + Convert::ToString(j));
		clbModels->SetItemChecked(j, true);
	}
}

System::Void graphForm::clbModels_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
{
	for (int j = 0; j < models.size(); ++j)
		for (int i = 0; i < models[j].pointsNum(); ++i)
			Graphic->Series[i]->Points->Clear();

	//int ind = this->clbModels->SelectedIndex;
	//models.erase(models.begin() + ind);

	for (int j = 0; j < models.size(); ++j)
	{
		//if (this->clbModels->i)
		Graphic->Series->Add("chart " + Convert::ToString(j));
		Graphic->Series[j]->ChartType = SeriesChartType::Line;
		//Graphic->Series[j]->MarkerStyle = MarkerStyle::Circle;
		Graphic->Series[j]->LegendText = "Эксперимент №" + Convert::ToString(j);
		Graphic->Series[j]->Color = j % 7 == 0 ? System::Drawing::Color::Green : j % 6 == 0 ? System::Drawing::Color::Blue :
			j % 5 == 0 ? System::Drawing::Color::Aqua : j % 4 == 0 ? System::Drawing::Color::DarkBlue :
			j % 3 == 0 ? System::Drawing::Color::Orange : j % 2 == 0 ? System::Drawing::Color::Yellow : System::Drawing::Color::Red;
		Graphic->Series[j]->BorderWidth = 2;
		for (int i = 0; i < models[j].pointsNum(); ++i)
			if (models[j].graph() == 'h')
				Graphic->Series[j]->Points->AddXY(models[j].result(i).first, models[j].result(i).second);
			else if (models[j].graph() == 'u')
				Graphic->Series[j]->Points->AddXY(models[j].result(i).first, models[j].velocity(i));
			else
				Graphic->Series[j]->Points->AddXY(models[j].result(i).first, models[j].acceleration(i));
			Graphic->Series[j]->IsVisibleInLegend = true;
			clbModels->Items->Insert(j, "Эксперимент №" + Convert::ToString(j));
	}
}