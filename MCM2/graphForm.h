#pragma once

namespace MCM2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ graphForm
	/// </summary>
	public ref class graphForm : public System::Windows::Forms::Form
	{
	public:
		graphForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~graphForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  Graphic;
	private: System::Windows::Forms::Button^  bDeleteGraph;
	private: System::Windows::Forms::CheckedListBox^  clbModels;


	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->Graphic = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->bDeleteGraph = (gcnew System::Windows::Forms::Button());
			this->clbModels = (gcnew System::Windows::Forms::CheckedListBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Graphic))->BeginInit();
			this->SuspendLayout();
			// 
			// Graphic
			// 
			this->Graphic->BackColor = System::Drawing::Color::GhostWhite;
			this->Graphic->BackImageWrapMode = System::Windows::Forms::DataVisualization::Charting::ChartImageWrapMode::Scaled;
			this->Graphic->BorderlineColor = System::Drawing::Color::Black;
			chartArea1->CursorX->Interval = 0.0001;
			chartArea1->CursorY->Interval = 0.0001;
			chartArea1->Name = L"ChartArea1";
			this->Graphic->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->Graphic->Legends->Add(legend1);
			this->Graphic->Location = System::Drawing::Point(0, 0);
			this->Graphic->Name = L"Graphic";
			this->Graphic->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::SeaGreen;
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->Graphic->Series->Add(series1);
			this->Graphic->Size = System::Drawing::Size(891, 644);
			this->Graphic->TabIndex = 0;
			this->Graphic->Text = L"Chart";
			// 
			// bDeleteGraph
			// 
			this->bDeleteGraph->BackColor = System::Drawing::Color::DarkSlateGray;
			this->bDeleteGraph->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bDeleteGraph->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bDeleteGraph->ForeColor = System::Drawing::Color::GhostWhite;
			this->bDeleteGraph->Location = System::Drawing::Point(897, 570);
			this->bDeleteGraph->Name = L"bDeleteGraph";
			this->bDeleteGraph->Size = System::Drawing::Size(255, 74);
			this->bDeleteGraph->TabIndex = 36;
			this->bDeleteGraph->Text = L"”далить";
			this->bDeleteGraph->UseVisualStyleBackColor = false;
			this->bDeleteGraph->Click += gcnew System::EventHandler(this, &graphForm::bDeleteGraph_Click);
			// 
			// clbModels
			// 
			this->clbModels->BackColor = System::Drawing::Color::GhostWhite;
			this->clbModels->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->clbModels->Font = (gcnew System::Drawing::Font(L"Microsoft MHei", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->clbModels->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->clbModels->FormattingEnabled = true;
			this->clbModels->Location = System::Drawing::Point(886, 0);
			this->clbModels->Name = L"clbModels";
			this->clbModels->Size = System::Drawing::Size(266, 544);
			this->clbModels->TabIndex = 38;
			this->clbModels->SelectedIndexChanged += gcnew System::EventHandler(this, &graphForm::clbModels_SelectedIndexChanged);
			// 
			// graphForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(144, 144);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::GhostWhite;
			this->ClientSize = System::Drawing::Size(1148, 644);
			this->Controls->Add(this->clbModels);
			this->Controls->Add(this->bDeleteGraph);
			this->Controls->Add(this->Graphic);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximumSize = System::Drawing::Size(1170, 700);
			this->MinimumSize = System::Drawing::Size(1170, 700);
			this->Name = L"graphForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"graphForm";
			this->Load += gcnew System::EventHandler(this, &graphForm::graphForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Graphic))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void graphForm_Load(System::Object^  sender, System::EventArgs^  e);
	private: System::Void clbModels_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void bDeleteGraph_Click(System::Object^  sender, System::EventArgs^  e);
};
}
