#pragma once

namespace Access {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
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
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::GroupBox^ actions;
	private: System::Windows::Forms::Button^ DeleteButton;

	private: System::Windows::Forms::Button^ InsertButton;
	private: System::Windows::Forms::Button^ UpdateButton;
	private: System::Windows::Forms::Button^ DowloadButton;
	private: System::Windows::Forms::DataGridView^ dataGridView1;




	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ оѕрограммеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выход»зѕрограммыToolStripMenuItem;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DataGridId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DataGridName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DataGridCost;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DataGridAmount;





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
			this->actions = (gcnew System::Windows::Forms::GroupBox());
			this->DeleteButton = (gcnew System::Windows::Forms::Button());
			this->InsertButton = (gcnew System::Windows::Forms::Button());
			this->UpdateButton = (gcnew System::Windows::Forms::Button());
			this->DowloadButton = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->DataGridId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DataGridName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DataGridCost = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DataGridAmount = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->оѕрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выход»зѕрограммыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->actions->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// actions
			// 
			this->actions->Controls->Add(this->DeleteButton);
			this->actions->Controls->Add(this->InsertButton);
			this->actions->Controls->Add(this->UpdateButton);
			this->actions->Controls->Add(this->DowloadButton);
			this->actions->Controls->Add(this->dataGridView1);
			this->actions->Location = System::Drawing::Point(39, 73);
			this->actions->Name = L"actions";
			this->actions->Size = System::Drawing::Size(710, 279);
			this->actions->TabIndex = 1;
			this->actions->TabStop = false;
			this->actions->Text = L"ƒействи€";
			// 
			// DeleteButton
			// 
			this->DeleteButton->Location = System::Drawing::Point(530, 185);
			this->DeleteButton->Name = L"DeleteButton";
			this->DeleteButton->Size = System::Drawing::Size(132, 44);
			this->DeleteButton->TabIndex = 4;
			this->DeleteButton->Text = L"”далить";
			this->DeleteButton->UseVisualStyleBackColor = true;
			this->DeleteButton->Click += gcnew System::EventHandler(this, &Main::DeleteButton_Click);
			// 
			// InsertButton
			// 
			this->InsertButton->Location = System::Drawing::Point(530, 85);
			this->InsertButton->Name = L"InsertButton";
			this->InsertButton->Size = System::Drawing::Size(132, 44);
			this->InsertButton->TabIndex = 3;
			this->InsertButton->Text = L"¬ставить";
			this->InsertButton->UseVisualStyleBackColor = true;
			this->InsertButton->Click += gcnew System::EventHandler(this, &Main::InsertButton_Click);
			// 
			// UpdateButton
			// 
			this->UpdateButton->Location = System::Drawing::Point(530, 135);
			this->UpdateButton->Name = L"UpdateButton";
			this->UpdateButton->Size = System::Drawing::Size(132, 44);
			this->UpdateButton->TabIndex = 2;
			this->UpdateButton->Text = L"»зменить";
			this->UpdateButton->UseVisualStyleBackColor = true;
			this->UpdateButton->Click += gcnew System::EventHandler(this, &Main::UpdateButton_Click);
			// 
			// DowloadButton
			// 
			this->DowloadButton->Location = System::Drawing::Point(530, 35);
			this->DowloadButton->Name = L"DowloadButton";
			this->DowloadButton->Size = System::Drawing::Size(132, 44);
			this->DowloadButton->TabIndex = 1;
			this->DowloadButton->Text = L"«агрузить";
			this->DowloadButton->UseVisualStyleBackColor = true;
			this->DowloadButton->Click += gcnew System::EventHandler(this, &Main::DowloadButton_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->DataGridId,
					this->DataGridName, this->DataGridCost, this->DataGridAmount
			});
			this->dataGridView1->Location = System::Drawing::Point(19, 19);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(443, 230);
			this->dataGridView1->TabIndex = 0;
			// 
			// DataGridId
			// 
			this->DataGridId->HeaderText = L"id";
			this->DataGridId->Name = L"DataGridId";
			// 
			// DataGridName
			// 
			this->DataGridName->HeaderText = L"Name";
			this->DataGridName->Name = L"DataGridName";
			// 
			// DataGridCost
			// 
			this->DataGridCost->HeaderText = L"Cost";
			this->DataGridCost->Name = L"DataGridCost";
			// 
			// DataGridAmount
			// 
			this->DataGridAmount->HeaderText = L"Amount";
			this->DataGridAmount->Name = L"DataGridAmount";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->оѕрограммеToolStripMenuItem,
					this->выход»зѕрограммыToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(843, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// оѕрограммеToolStripMenuItem
			// 
			this->оѕрограммеToolStripMenuItem->Name = L"оѕрограммеToolStripMenuItem";
			this->оѕрограммеToolStripMenuItem->Size = System::Drawing::Size(94, 20);
			this->оѕрограммеToolStripMenuItem->Text = L"ќ программе";
			this->оѕрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::оѕрограммеToolStripMenuItem_Click);
			// 
			// выход»зѕрограммыToolStripMenuItem
			// 
			this->выход»зѕрограммыToolStripMenuItem->Name = L"выход»зѕрограммыToolStripMenuItem";
			this->выход»зѕрограммыToolStripMenuItem->Size = System::Drawing::Size(138, 20);
			this->выход»зѕрограммыToolStripMenuItem->Text = L"¬ыход из программы";
			this->выход»зѕрограммыToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::выход»зѕрограммыToolStripMenuItem_Click);
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(843, 428);
			this->Controls->Add(this->actions);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"Main";
			this->Text = L"Main";
			this->actions->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

private: System::Void оѕрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void выход»зѕрограммыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void DowloadButton_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void UpdateButton_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void InsertButton_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void DeleteButton_Click(System::Object^ sender, System::EventArgs^ e);
};
}
