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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dgTable = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgTable))->BeginInit();
			this->SuspendLayout();
			// 
			// dgTable
			// 
			this->dgTable->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->dgTable->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dgTable->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Sunken;
			this->dgTable->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Sunken;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::Gainsboro;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::DarkSlateGray;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgTable->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dgTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::WhiteSmoke;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::DarkSlateGray;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dgTable->DefaultCellStyle = dataGridViewCellStyle4;
			this->dgTable->GridColor = System::Drawing::Color::DarkSlateGray;
			this->dgTable->Location = System::Drawing::Point(0, 42);
			this->dgTable->Name = L"dgTable";
			this->dgTable->RowHeadersVisible = false;
			this->dgTable->RowTemplate->Height = 28;
			this->dgTable->Size = System::Drawing::Size(880, 501);
			this->dgTable->TabIndex = 0;
			// 
			// tableForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(878, 544);
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
