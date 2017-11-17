#pragma once
#include "model.h"

namespace MCM2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ tableForm
	/// </summary>
	public ref class tableForm : public System::Windows::Forms::Form
	{
	public:
		tableForm(void)
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
		~tableForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dgTable;
	private: String ^ BaseName;
	private: DataTable ^ dTable;
	private: DataSet ^ dSet;
	private: System::Windows::Forms::Label^  lInfo;

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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dgTable = (gcnew System::Windows::Forms::DataGridView());
			this->lInfo = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgTable))->BeginInit();
			this->SuspendLayout();
			// 
			// dgTable
			// 
			this->dgTable->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->dgTable->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dgTable->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Sunken;
			this->dgTable->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Sunken;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::Gainsboro;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::DarkSlateGray;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgTable->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dgTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::WhiteSmoke;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::DarkSlateGray;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dgTable->DefaultCellStyle = dataGridViewCellStyle2;
			this->dgTable->GridColor = System::Drawing::Color::DarkSlateGray;
			this->dgTable->Location = System::Drawing::Point(0, 1);
			this->dgTable->Name = L"dgTable";
			this->dgTable->RowHeadersVisible = false;
			this->dgTable->RowTemplate->Height = 28;
			this->dgTable->Size = System::Drawing::Size(866, 542);
			this->dgTable->TabIndex = 0;
			// 
			// lInfo
			// 
			this->lInfo->Location = System::Drawing::Point(872, 1);
			this->lInfo->Name = L"lInfo";
			this->lInfo->Size = System::Drawing::Size(270, 542);
			this->lInfo->TabIndex = 1;
			// 
			// tableForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1143, 544);
			this->Controls->Add(this->lInfo);
			this->Controls->Add(this->dgTable);
			this->MinimumSize = System::Drawing::Size(900, 600);
			this->Name = L"tableForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"tableForm";
			this->Load += gcnew System::EventHandler(this, &tableForm::tableForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgTable))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void tableForm_Load(System::Object^  sender, System::EventArgs^  e);
	};
}
