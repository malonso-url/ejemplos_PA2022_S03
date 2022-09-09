#pragma once

namespace Lab3S2EjemploAhorcado {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for JuegoForm
	/// </summary>
	public ref class JuegoForm : public System::Windows::Forms::Form
	{
		System::String^ palabra;

		
	public:
		JuegoForm(String^ palabra)
		{
			InitializeComponent();
			this->setPalabra(palabra);
			CrearTextBoxParaLetras(palabra);

		}

		void setPalabra(String^ palabra) {
			this->palabra = palabra;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~JuegoForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pctureAhorado;
	protected:
	private: System::Windows::Forms::ImageList^ imgListAhorado;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtLetra;
	private: System::Windows::Forms::Button^ btnIntentar;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(JuegoForm::typeid));
			this->pctureAhorado = (gcnew System::Windows::Forms::PictureBox());
			this->imgListAhorado = (gcnew System::Windows::Forms::ImageList(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtLetra = (gcnew System::Windows::Forms::TextBox());
			this->btnIntentar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pctureAhorado))->BeginInit();
			this->SuspendLayout();
			// 
			// pctureAhorado
			// 
			this->pctureAhorado->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pctureAhorado.Image")));
			this->pctureAhorado->Location = System::Drawing::Point(32, 47);
			this->pctureAhorado->Name = L"pctureAhorado";
			this->pctureAhorado->Size = System::Drawing::Size(215, 396);
			this->pctureAhorado->TabIndex = 0;
			this->pctureAhorado->TabStop = false;
			// 
			// imgListAhorado
			// 
			this->imgListAhorado->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imgListAhorado.ImageStream")));
			this->imgListAhorado->TransparentColor = System::Drawing::Color::Transparent;
			this->imgListAhorado->Images->SetKeyName(0, L"empty.jpg");
			this->imgListAhorado->Images->SetKeyName(1, L"head.jpg");
			this->imgListAhorado->Images->SetKeyName(2, L"right_arm.jpg");
			this->imgListAhorado->Images->SetKeyName(3, L"left_arm.jpg");
			this->imgListAhorado->Images->SetKeyName(4, L"body.jpg");
			this->imgListAhorado->Images->SetKeyName(5, L"right_leg.jpg");
			this->imgListAhorado->Images->SetKeyName(6, L"left_leg.jpg");
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(343, 63);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Letra>";
			// 
			// txtLetra
			// 
			this->txtLetra->Location = System::Drawing::Point(414, 63);
			this->txtLetra->Name = L"txtLetra";
			this->txtLetra->Size = System::Drawing::Size(100, 22);
			this->txtLetra->TabIndex = 2;
			// 
			// btnIntentar
			// 
			this->btnIntentar->Location = System::Drawing::Point(540, 54);
			this->btnIntentar->Name = L"btnIntentar";
			this->btnIntentar->Size = System::Drawing::Size(75, 41);
			this->btnIntentar->TabIndex = 3;
			this->btnIntentar->Text = L"Intentar";
			this->btnIntentar->UseVisualStyleBackColor = true;
			// 
			// JuegoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(849, 487);
			this->Controls->Add(this->btnIntentar);
			this->Controls->Add(this->txtLetra);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pctureAhorado);
			this->Name = L"JuegoForm";
			this->Text = L"JuegoForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pctureAhorado))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


	private: void CrearTextBoxParaLetras(String^ _palabra) {

		for (int i = 0; i < _palabra->Length; i++) {

			System::Windows::Forms::TextBox^ txtLetra = (gcnew System::Windows::Forms::TextBox());
			txtLetra->Location = System::Drawing::Point(343, 100);
			txtLetra->Size = System::Drawing::Size(30, 22);
			this->Controls->Add(this->txtLetra);
		}
	}

#pragma endregion
	};
}
