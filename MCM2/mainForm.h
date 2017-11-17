#pragma once
#include <string>
#include "model.h"
#include "tableForm.h"
#include "graphForm.h"

namespace MCM2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для mainForm
	/// </summary>
	public ref class mainForm : public System::Windows::Forms::Form
	{
	public:
		mainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~mainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^  cbArchimedes;
	private: System::Windows::Forms::CheckBox^  cbLiquidResistance;

	private: System::Windows::Forms::CheckBox^  cbGasResistance;
	private: System::Windows::Forms::Label^  lHeight;
	private: System::Windows::Forms::Label^  lFinalTime;


	protected:

	protected:

	protected:












	private: System::Windows::Forms::Label^  lSpeed;
	private: System::Windows::Forms::Label^  lPointsNum;
	private: System::Windows::Forms::Label^  lRadius;
	private: System::Windows::Forms::Label^  lMass;





	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  lDensity;



	private: System::Windows::Forms::Label^  lInitTime;
	private: System::Windows::Forms::NumericUpDown^  textHeight;


	private: System::Windows::Forms::NumericUpDown^  textSpeed;

	private: System::Windows::Forms::NumericUpDown^  textInitTime;

	private: System::Windows::Forms::NumericUpDown^  textFinalTime;

	private: System::Windows::Forms::NumericUpDown^  textPointsNum;

	private: System::Windows::Forms::NumericUpDown^  textRadius;

	private: System::Windows::Forms::NumericUpDown^  textMass;

	private: System::Windows::Forms::NumericUpDown^  textDensity;



	private: System::Windows::Forms::Label^  lGraphType;

	private: System::Windows::Forms::ComboBox^  cbGraphType;


	private: System::Windows::Forms::RadioButton^  rbGraph;
	private: System::Windows::Forms::RadioButton^  rbTable;



	private: System::Windows::Forms::Button^  bCalculation;
	private: System::Windows::Forms::Button^  bSave;
	private: System::Windows::Forms::CheckBox^  cbGravity;
	private: System::Windows::Forms::Label^  lViscosity;

	private: System::Windows::Forms::NumericUpDown^  textViscosity;





	private:




	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(mainForm::typeid));
			this->cbArchimedes = (gcnew System::Windows::Forms::CheckBox());
			this->cbLiquidResistance = (gcnew System::Windows::Forms::CheckBox());
			this->cbGasResistance = (gcnew System::Windows::Forms::CheckBox());
			this->lHeight = (gcnew System::Windows::Forms::Label());
			this->lFinalTime = (gcnew System::Windows::Forms::Label());
			this->lSpeed = (gcnew System::Windows::Forms::Label());
			this->lPointsNum = (gcnew System::Windows::Forms::Label());
			this->lRadius = (gcnew System::Windows::Forms::Label());
			this->lMass = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->lDensity = (gcnew System::Windows::Forms::Label());
			this->lInitTime = (gcnew System::Windows::Forms::Label());
			this->textHeight = (gcnew System::Windows::Forms::NumericUpDown());
			this->textSpeed = (gcnew System::Windows::Forms::NumericUpDown());
			this->textInitTime = (gcnew System::Windows::Forms::NumericUpDown());
			this->textFinalTime = (gcnew System::Windows::Forms::NumericUpDown());
			this->textPointsNum = (gcnew System::Windows::Forms::NumericUpDown());
			this->textRadius = (gcnew System::Windows::Forms::NumericUpDown());
			this->textMass = (gcnew System::Windows::Forms::NumericUpDown());
			this->textDensity = (gcnew System::Windows::Forms::NumericUpDown());
			this->lGraphType = (gcnew System::Windows::Forms::Label());
			this->cbGraphType = (gcnew System::Windows::Forms::ComboBox());
			this->rbGraph = (gcnew System::Windows::Forms::RadioButton());
			this->rbTable = (gcnew System::Windows::Forms::RadioButton());
			this->bCalculation = (gcnew System::Windows::Forms::Button());
			this->bSave = (gcnew System::Windows::Forms::Button());
			this->cbGravity = (gcnew System::Windows::Forms::CheckBox());
			this->lViscosity = (gcnew System::Windows::Forms::Label());
			this->textViscosity = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textHeight))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textSpeed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textInitTime))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textFinalTime))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textPointsNum))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textRadius))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textMass))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textDensity))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textViscosity))->BeginInit();
			this->SuspendLayout();
			// 
			// cbArchimedes
			// 
			this->cbArchimedes->AutoSize = true;
			this->cbArchimedes->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cbArchimedes.BackgroundImage")));
			this->cbArchimedes->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->cbArchimedes->Location = System::Drawing::Point(457, 188);
			this->cbArchimedes->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->cbArchimedes->Name = L"cbArchimedes";
			this->cbArchimedes->Size = System::Drawing::Size(183, 31);
			this->cbArchimedes->TabIndex = 7;
			this->cbArchimedes->Text = L"Сила Архимеда";
			this->cbArchimedes->UseVisualStyleBackColor = true;
			// 
			// cbLiquidResistance
			// 
			this->cbLiquidResistance->AutoSize = true;
			this->cbLiquidResistance->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cbLiquidResistance.BackgroundImage")));
			this->cbLiquidResistance->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->cbLiquidResistance->Location = System::Drawing::Point(457, 231);
			this->cbLiquidResistance->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->cbLiquidResistance->Name = L"cbLiquidResistance";
			this->cbLiquidResistance->Size = System::Drawing::Size(331, 31);
			this->cbLiquidResistance->TabIndex = 8;
			this->cbLiquidResistance->Text = L"Сила сопротивления жидкости";
			this->cbLiquidResistance->UseVisualStyleBackColor = true;
			this->cbLiquidResistance->CheckedChanged += gcnew System::EventHandler(this, &mainForm::cbLiquidResistance_CheckedChanged);
			// 
			// cbGasResistance
			// 
			this->cbGasResistance->AutoSize = true;
			this->cbGasResistance->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cbGasResistance.BackgroundImage")));
			this->cbGasResistance->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->cbGasResistance->Location = System::Drawing::Point(457, 274);
			this->cbGasResistance->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->cbGasResistance->Name = L"cbGasResistance";
			this->cbGasResistance->Size = System::Drawing::Size(276, 31);
			this->cbGasResistance->TabIndex = 9;
			this->cbGasResistance->Text = L"Сила сопротивления газа";
			this->cbGasResistance->UseVisualStyleBackColor = true;
			this->cbGasResistance->CheckedChanged += gcnew System::EventHandler(this, &mainForm::cbGasResistance_ChangeUICues);
			// 
			// lHeight
			// 
			this->lHeight->AutoSize = true;
			this->lHeight->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->lHeight->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lHeight.Image")));
			this->lHeight->Location = System::Drawing::Point(163, 145);
			this->lHeight->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->lHeight->Name = L"lHeight";
			this->lHeight->Size = System::Drawing::Size(79, 27);
			this->lHeight->TabIndex = 11;
			this->lHeight->Text = L"Высота";
			this->lHeight->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lFinalTime
			// 
			this->lFinalTime->AutoSize = true;
			this->lFinalTime->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->lFinalTime->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lFinalTime.Image")));
			this->lFinalTime->Location = System::Drawing::Point(71, 292);
			this->lFinalTime->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->lFinalTime->Name = L"lFinalTime";
			this->lFinalTime->Size = System::Drawing::Size(171, 27);
			this->lFinalTime->TabIndex = 12;
			this->lFinalTime->Text = L"Конечное время";
			this->lFinalTime->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lSpeed
			// 
			this->lSpeed->AutoSize = true;
			this->lSpeed->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->lSpeed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lSpeed.Image")));
			this->lSpeed->Location = System::Drawing::Point(143, 196);
			this->lSpeed->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->lSpeed->Name = L"lSpeed";
			this->lSpeed->Size = System::Drawing::Size(99, 27);
			this->lSpeed->TabIndex = 13;
			this->lSpeed->Text = L"Скорость";
			this->lSpeed->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lPointsNum
			// 
			this->lPointsNum->AutoSize = true;
			this->lPointsNum->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->lPointsNum->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lPointsNum.Image")));
			this->lPointsNum->Location = System::Drawing::Point(60, 338);
			this->lPointsNum->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->lPointsNum->Name = L"lPointsNum";
			this->lPointsNum->Size = System::Drawing::Size(182, 27);
			this->lPointsNum->TabIndex = 14;
			this->lPointsNum->Text = L"Количество точек";
			this->lPointsNum->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lRadius
			// 
			this->lRadius->AutoSize = true;
			this->lRadius->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->lRadius->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lRadius.Image")));
			this->lRadius->Location = System::Drawing::Point(165, 382);
			this->lRadius->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->lRadius->Name = L"lRadius";
			this->lRadius->Size = System::Drawing::Size(77, 27);
			this->lRadius->TabIndex = 15;
			this->lRadius->Text = L"Радиус";
			this->lRadius->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lMass
			// 
			this->lMass->AutoSize = true;
			this->lMass->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->lMass->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lMass.Image")));
			this->lMass->Location = System::Drawing::Point(174, 428);
			this->lMass->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->lMass->Name = L"lMass";
			this->lMass->Size = System::Drawing::Size(68, 27);
			this->lMass->TabIndex = 16;
			this->lMass->Text = L"Масса";
			this->lMass->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::White;
			this->label8->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Book", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label8.Image")));
			this->label8->Location = System::Drawing::Point(-31, 0);
			this->label8->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(1001, 81);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Моделирование процесса падения тел";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lDensity
			// 
			this->lDensity->AutoSize = true;
			this->lDensity->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->lDensity->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lDensity.Image")));
			this->lDensity->Location = System::Drawing::Point(66, 472);
			this->lDensity->Name = L"lDensity";
			this->lDensity->Size = System::Drawing::Size(176, 27);
			this->lDensity->TabIndex = 19;
			this->lDensity->Text = L"Плотность среды";
			this->lDensity->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// lInitTime
			// 
			this->lInitTime->AutoSize = true;
			this->lInitTime->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->lInitTime->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lInitTime.Image")));
			this->lInitTime->Location = System::Drawing::Point(61, 245);
			this->lInitTime->Name = L"lInitTime";
			this->lInitTime->Size = System::Drawing::Size(181, 27);
			this->lInitTime->TabIndex = 21;
			this->lInitTime->Text = L"Начальное время";
			this->lInitTime->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textHeight
			// 
			this->textHeight->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textHeight->DecimalPlaces = 2;
			this->textHeight->Location = System::Drawing::Point(283, 146);
			this->textHeight->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
			this->textHeight->Name = L"textHeight";
			this->textHeight->Size = System::Drawing::Size(80, 30);
			this->textHeight->TabIndex = 22;
			this->textHeight->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			// 
			// textSpeed
			// 
			this->textSpeed->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textSpeed->DecimalPlaces = 2;
			this->textSpeed->Location = System::Drawing::Point(283, 197);
			this->textSpeed->Name = L"textSpeed";
			this->textSpeed->Size = System::Drawing::Size(80, 30);
			this->textSpeed->TabIndex = 23;
			this->textSpeed->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			// 
			// textInitTime
			// 
			this->textInitTime->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textInitTime->DecimalPlaces = 2;
			this->textInitTime->Location = System::Drawing::Point(283, 246);
			this->textInitTime->Name = L"textInitTime";
			this->textInitTime->Size = System::Drawing::Size(80, 30);
			this->textInitTime->TabIndex = 24;
			// 
			// textFinalTime
			// 
			this->textFinalTime->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textFinalTime->DecimalPlaces = 2;
			this->textFinalTime->Location = System::Drawing::Point(283, 292);
			this->textFinalTime->Name = L"textFinalTime";
			this->textFinalTime->Size = System::Drawing::Size(80, 30);
			this->textFinalTime->TabIndex = 25;
			this->textFinalTime->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 25, 0, 0, 0 });
			// 
			// textPointsNum
			// 
			this->textPointsNum->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textPointsNum->DecimalPlaces = 2;
			this->textPointsNum->Location = System::Drawing::Point(283, 338);
			this->textPointsNum->Name = L"textPointsNum";
			this->textPointsNum->Size = System::Drawing::Size(80, 30);
			this->textPointsNum->TabIndex = 26;
			this->textPointsNum->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 25, 0, 0, 0 });
			// 
			// textRadius
			// 
			this->textRadius->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textRadius->DecimalPlaces = 2;
			this->textRadius->Location = System::Drawing::Point(283, 382);
			this->textRadius->Name = L"textRadius";
			this->textRadius->Size = System::Drawing::Size(80, 30);
			this->textRadius->TabIndex = 27;
			this->textRadius->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			// 
			// textMass
			// 
			this->textMass->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textMass->DecimalPlaces = 2;
			this->textMass->Location = System::Drawing::Point(283, 429);
			this->textMass->Name = L"textMass";
			this->textMass->Size = System::Drawing::Size(80, 30);
			this->textMass->TabIndex = 28;
			this->textMass->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			// 
			// textDensity
			// 
			this->textDensity->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textDensity->DecimalPlaces = 2;
			this->textDensity->Location = System::Drawing::Point(283, 473);
			this->textDensity->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->textDensity->Name = L"textDensity";
			this->textDensity->Size = System::Drawing::Size(80, 30);
			this->textDensity->TabIndex = 29;
			this->textDensity->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// lGraphType
			// 
			this->lGraphType->AutoSize = true;
			this->lGraphType->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->lGraphType->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lGraphType.Image")));
			this->lGraphType->Location = System::Drawing::Point(461, 338);
			this->lGraphType->Name = L"lGraphType";
			this->lGraphType->Size = System::Drawing::Size(81, 27);
			this->lGraphType->TabIndex = 31;
			this->lGraphType->Text = L"График";
			// 
			// cbGraphType
			// 
			this->cbGraphType->BackColor = System::Drawing::SystemColors::HighlightText;
			this->cbGraphType->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbGraphType->FormattingEnabled = true;
			this->cbGraphType->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Высота", L"Скорость", L"Ускорение" });
			this->cbGraphType->Location = System::Drawing::Point(457, 382);
			this->cbGraphType->Name = L"cbGraphType";
			this->cbGraphType->Size = System::Drawing::Size(159, 35);
			this->cbGraphType->TabIndex = 32;
			this->cbGraphType->Text = L"Высота";
			// 
			// rbGraph
			// 
			this->rbGraph->AutoSize = true;
			this->rbGraph->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rbGraph.BackgroundImage")));
			this->rbGraph->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->rbGraph->Location = System::Drawing::Point(721, 378);
			this->rbGraph->Name = L"rbGraph";
			this->rbGraph->Size = System::Drawing::Size(106, 31);
			this->rbGraph->TabIndex = 33;
			this->rbGraph->TabStop = true;
			this->rbGraph->Text = L"График";
			this->rbGraph->UseVisualStyleBackColor = true;
			// 
			// rbTable
			// 
			this->rbTable->AutoSize = true;
			this->rbTable->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rbTable.BackgroundImage")));
			this->rbTable->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->rbTable->Location = System::Drawing::Point(721, 415);
			this->rbTable->Name = L"rbTable";
			this->rbTable->Size = System::Drawing::Size(115, 31);
			this->rbTable->TabIndex = 34;
			this->rbTable->TabStop = true;
			this->rbTable->Text = L"Таблица";
			this->rbTable->UseVisualStyleBackColor = true;
			// 
			// bCalculation
			// 
			this->bCalculation->BackColor = System::Drawing::Color::DarkSlateGray;
			this->bCalculation->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bCalculation->ForeColor = System::Drawing::Color::GhostWhite;
			this->bCalculation->Location = System::Drawing::Point(457, 492);
			this->bCalculation->Name = L"bCalculation";
			this->bCalculation->Size = System::Drawing::Size(159, 68);
			this->bCalculation->TabIndex = 35;
			this->bCalculation->Text = L"Рассчитать";
			this->bCalculation->UseVisualStyleBackColor = false;
			this->bCalculation->Click += gcnew System::EventHandler(this, &mainForm::bCalculation_Click);
			// 
			// bSave
			// 
			this->bSave->BackColor = System::Drawing::Color::DarkSlateGray;
			this->bSave->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bSave->ForeColor = System::Drawing::Color::GhostWhite;
			this->bSave->Location = System::Drawing::Point(702, 492);
			this->bSave->Name = L"bSave";
			this->bSave->Size = System::Drawing::Size(159, 68);
			this->bSave->TabIndex = 36;
			this->bSave->Text = L"Сохранить";
			this->bSave->UseVisualStyleBackColor = false;
			this->bSave->Click += gcnew System::EventHandler(this, &mainForm::bSave_Click);
			// 
			// cbGravity
			// 
			this->cbGravity->AutoSize = true;
			this->cbGravity->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cbGravity.BackgroundImage")));
			this->cbGravity->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->cbGravity->Location = System::Drawing::Point(457, 145);
			this->cbGravity->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->cbGravity->Name = L"cbGravity";
			this->cbGravity->Size = System::Drawing::Size(269, 31);
			this->cbGravity->TabIndex = 37;
			this->cbGravity->Text = L"Сила тяжести постоянна";
			this->cbGravity->UseVisualStyleBackColor = true;
			// 
			// lViscosity
			// 
			this->lViscosity->AutoSize = true;
			this->lViscosity->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->lViscosity->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lViscosity.Image")));
			this->lViscosity->Location = System::Drawing::Point(83, 516);
			this->lViscosity->Name = L"lViscosity";
			this->lViscosity->Size = System::Drawing::Size(159, 27);
			this->lViscosity->TabIndex = 38;
			this->lViscosity->Text = L"Вязкость среды";
			this->lViscosity->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// textViscosity
			// 
			this->textViscosity->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textViscosity->DecimalPlaces = 2;
			this->textViscosity->Location = System::Drawing::Point(283, 516);
			this->textViscosity->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->textViscosity->Name = L"textViscosity";
			this->textViscosity->Size = System::Drawing::Size(80, 30);
			this->textViscosity->TabIndex = 39;
			this->textViscosity->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
			// 
			// mainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(144, 144);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::GhostWhite;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(940, 617);
			this->Controls->Add(this->textViscosity);
			this->Controls->Add(this->lViscosity);
			this->Controls->Add(this->cbGravity);
			this->Controls->Add(this->bSave);
			this->Controls->Add(this->bCalculation);
			this->Controls->Add(this->rbTable);
			this->Controls->Add(this->rbGraph);
			this->Controls->Add(this->cbGraphType);
			this->Controls->Add(this->lGraphType);
			this->Controls->Add(this->textDensity);
			this->Controls->Add(this->textMass);
			this->Controls->Add(this->textRadius);
			this->Controls->Add(this->textPointsNum);
			this->Controls->Add(this->textFinalTime);
			this->Controls->Add(this->textInitTime);
			this->Controls->Add(this->textSpeed);
			this->Controls->Add(this->textHeight);
			this->Controls->Add(this->lInitTime);
			this->Controls->Add(this->lDensity);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->lMass);
			this->Controls->Add(this->lRadius);
			this->Controls->Add(this->lPointsNum);
			this->Controls->Add(this->lSpeed);
			this->Controls->Add(this->lFinalTime);
			this->Controls->Add(this->lHeight);
			this->Controls->Add(this->cbGasResistance);
			this->Controls->Add(this->cbLiquidResistance);
			this->Controls->Add(this->cbArchimedes);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Microsoft MHei", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->MinimumSize = System::Drawing::Size(900, 625);
			this->Name = L"mainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"МиКМ";
			this->TransparencyKey = System::Drawing::Color::DimGray;
			this->Load += gcnew System::EventHandler(this, &mainForm::mainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textHeight))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textSpeed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textInitTime))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textFinalTime))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textPointsNum))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textRadius))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textMass))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textDensity))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textViscosity))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void mainForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void bCalculation_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void bSave_Click(System::Object^  sender, System::EventArgs^  e);
private: void calc();
private: System::Void cbLiquidResistance_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
{
	if (cbLiquidResistance->Checked)
		cbGasResistance->Checked = false;
}
private: System::Void cbGasResistance_ChangeUICues(System::Object^  sender, System::EventArgs^  e)
{
	if (cbGasResistance->Checked)
		cbLiquidResistance->Checked = false;
}
};
}
