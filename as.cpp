#pragma once
#include "DB.h"

namespace $safeprojectname$ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->data = gcnew DB();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txt_nombre;
	private: System::Windows::Forms::TextBox^ txt_codigo;
	private: System::Windows::Forms::TextBox^ txt_carrera;
	private: System::Windows::Forms::Button^ btn_guardar;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ data_grid;


	private: DB^ data;
	protected:

	protected:



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txt_nombre = (gcnew System::Windows::Forms::TextBox());
			this->txt_codigo = (gcnew System::Windows::Forms::TextBox());
			this->txt_carrera = (gcnew System::Windows::Forms::TextBox());
			this->btn_guardar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->data_grid = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid))->BeginInit();
			this->SuspendLayout();
			// 
			// txt_nombre
			// 
			this->txt_nombre->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_nombre->Location = System::Drawing::Point(875, 81);
			this->txt_nombre->Multiline = true;
			this->txt_nombre->Name = L"txt_nombre";
			this->txt_nombre->Size = System::Drawing::Size(169, 36);
			this->txt_nombre->TabIndex = 0;
			// 
			// txt_codigo
			// 
			this->txt_codigo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_codigo->Location = System::Drawing::Point(875, 156);
			this->txt_codigo->Multiline = true;
			this->txt_codigo->Name = L"txt_codigo";
			this->txt_codigo->Size = System::Drawing::Size(169, 36);
			this->txt_codigo->TabIndex = 1;
			// 
			// txt_carrera
			// 
			this->txt_carrera->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_carrera->Location = System::Drawing::Point(875, 233);
			this->txt_carrera->Multiline = true;
			this->txt_carrera->Name = L"txt_carrera";
			this->txt_carrera->Size = System::Drawing::Size(169, 36);
			this->txt_carrera->TabIndex = 2;
			// 
			// btn_guardar
			// 
			this->btn_guardar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_guardar->Location = System::Drawing::Point(712, 348);
			this->btn_guardar->Name = L"btn_guardar";
			this->btn_guardar->Size = System::Drawing::Size(254, 49);
			this->btn_guardar->TabIndex = 3;
			this->btn_guardar->Text = L"Guardar";
			this->btn_guardar->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(708, 81);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 24);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Nombre";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(708, 168);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 24);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Codigo";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(676, 245);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(138, 24);
			this->label3->TabIndex = 6;
			this->label3->Text = L"# Asistencias";
			// 
			// data_grid
			// 
			this->data_grid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->data_grid->Location = System::Drawing::Point(12, 42);
			this->data_grid->Name = L"data_grid";
			this->data_grid->Size = System::Drawing::Size(446, 501);
			this->data_grid->TabIndex = 8;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->ClientSize = System::Drawing::Size(1204, 590);
			this->Controls->Add(this->data_grid);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_guardar);
			this->Controls->Add(this->txt_carrera);
			this->Controls->Add(this->txt_codigo);
			this->Controls->Add(this->txt_nombre);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Consulta();
	}

	public: void Consulta()
	{
		this->data->AbrirConexion();
		this->data_grid->DataSource = this->data->getData();
		this->data->CerrarConexion();
	}


	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
