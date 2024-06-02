#pragma once

namespace Interfaz4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Registrarse
	/// </summary>
	public ref class Registrarse : public System::Windows::Forms::Form
	{
	private:
		String^ usuario;
		String^ contrasena;
		bool esMedico; // Nuevo miembro para indicar si el usuario es médico
		bool esEnfermero; // Nuevo miembro para indicar si el usuario es enfermero
	public:
		Registrarse(void)
		{
			InitializeComponent();
			esMedico = false; // Inicialmente establecido en falso
			esEnfermero = false; // Inicialmente establecido en falso
		}

		// Métodos públicos existentes

		bool getEsMedico() {
			return esMedico;
		}

		bool getEsEnfermero() {
			return esEnfermero;
		}


	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Registrarse()
		{
			if (components)
			{
				delete components;
			}
		}

	private:

	private: System::Windows::Forms::TextBox^ txtb_regusuario;
	private: System::Windows::Forms::TextBox^ txtb_regpassword;
	private: System::Windows::Forms::Button^ btn_registrarmedico;
	private: System::Windows::Forms::Button^ btn_registrarenfermero;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->txtb_regusuario = (gcnew System::Windows::Forms::TextBox());
			this->txtb_regpassword = (gcnew System::Windows::Forms::TextBox());
			this->btn_registrarmedico = (gcnew System::Windows::Forms::Button());
			this->btn_registrarenfermero = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// txtb_regusuario
			// 
			this->txtb_regusuario->Location = System::Drawing::Point(110, 67);
			this->txtb_regusuario->Name = L"txtb_regusuario";
			this->txtb_regusuario->Size = System::Drawing::Size(100, 20);
			this->txtb_regusuario->TabIndex = 0;
			this->txtb_regusuario->TextChanged += gcnew System::EventHandler(this, &Registrarse::txtb_regusuario_TextChanged);
			// 
			// txtb_regpassword
			// 
			this->txtb_regpassword->Location = System::Drawing::Point(110, 112);
			this->txtb_regpassword->Name = L"txtb_regpassword";
			this->txtb_regpassword->Size = System::Drawing::Size(100, 20);
			this->txtb_regpassword->TabIndex = 1;
			this->txtb_regpassword->TextChanged += gcnew System::EventHandler(this, &Registrarse::txtb_regpassword_TextChanged);
			// 
			// btn_registrarmedico
			// 
			this->btn_registrarmedico->Location = System::Drawing::Point(58, 170);
			this->btn_registrarmedico->Name = L"btn_registrarmedico";
			this->btn_registrarmedico->Size = System::Drawing::Size(75, 23);
			this->btn_registrarmedico->TabIndex = 2;
			this->btn_registrarmedico->Text = L"Médico";
			this->btn_registrarmedico->UseVisualStyleBackColor = true;
			this->btn_registrarmedico->Click += gcnew System::EventHandler(this, &Registrarse::btn_registrarmedico_Click);
			// 
			// btn_registrarenfermero
			// 
			this->btn_registrarenfermero->Location = System::Drawing::Point(171, 170);
			this->btn_registrarenfermero->Name = L"btn_registrarenfermero";
			this->btn_registrarenfermero->Size = System::Drawing::Size(75, 23);
			this->btn_registrarenfermero->TabIndex = 3;
			this->btn_registrarenfermero->Text = L"Enfermero";
			this->btn_registrarenfermero->UseVisualStyleBackColor = true;
			this->btn_registrarenfermero->Click += gcnew System::EventHandler(this, &Registrarse::btn_registrarenfermero_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(30, 70);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Usuario:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(30, 115);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Contraseña:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(99, 25);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(111, 24);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Registrarse";
			// 
			// Registrarse
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(309, 250);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_registrarenfermero);
			this->Controls->Add(this->btn_registrarmedico);
			this->Controls->Add(this->txtb_regpassword);
			this->Controls->Add(this->txtb_regusuario);
			this->Name = L"Registrarse";
			this->Text = L"Registrarse";
			this->Load += gcnew System::EventHandler(this, &Registrarse::Registrarse_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btn_registrarmedico_Click(System::Object^ sender, System::EventArgs^ e) {
		usuario = txtb_regusuario->Text;
		contrasena = txtb_regpassword->Text;
		esMedico = true; // Establecer esMedico en true al hacer clic en el botón de médico
		this->Close();
	}
	private: System::Void btn_registrarenfermero_Click(System::Object^ sender, System::EventArgs^ e) {
		usuario = txtb_regusuario->Text;
		contrasena = txtb_regpassword->Text;
		esEnfermero = true; // Establecer esEnfermero en true al hacer clic en el botón de enfermero
		this->Close();
	}
	public: String^ getUsuario() {
		return usuario;
	}
	public: String^ getContrasena() {
		return contrasena;
	}
	private: System::Void txtb_regusuario_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void txtb_regpassword_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Registrarse_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
