#pragma once
#include "JuegoForm.h"

namespace Lab3S2EjemploAhorcado {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StartForm
	/// </summary>
	public ref class StartForm : public System::Windows::Forms::Form
	{
	public:
		StartForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StartForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ txtPalabra;
	private: System::Windows::Forms::Button^ btnJugar;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtPalabra = (gcnew System::Windows::Forms::TextBox());
			this->btnJugar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(43, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(126, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ingrese la palabra:";
			// 
			// txtPalabra
			// 
			this->txtPalabra->Location = System::Drawing::Point(184, 41);
			this->txtPalabra->Name = L"txtPalabra";
			this->txtPalabra->Size = System::Drawing::Size(157, 22);
			this->txtPalabra->TabIndex = 1;
			// 
			// btnJugar
			// 
			this->btnJugar->Location = System::Drawing::Point(362, 35);
			this->btnJugar->Name = L"btnJugar";
			this->btnJugar->Size = System::Drawing::Size(106, 35);
			this->btnJugar->TabIndex = 2;
			this->btnJugar->Text = L"Jugar";
			this->btnJugar->UseVisualStyleBackColor = true;
			this->btnJugar->Click += gcnew System::EventHandler(this, &StartForm::btnJugar_Click);
			// 
			// StartForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(510, 152);
			this->Controls->Add(this->btnJugar);
			this->Controls->Add(this->txtPalabra);
			this->Controls->Add(this->label1);
			this->Name = L"StartForm";
			this->Text = L"StartForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnJugar_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!txtPalabra->Text->Trim()->Equals("")) {
			JuegoForm^ newJuego = gcnew JuegoForm( txtPalabra->Text );
			newJuego->ShowDialog();
		}
		else {
			MessageBox::Show("Debe ingresar una palabra", "Input incorrecto", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	};
}
