#pragma once
#include "login.h"

namespace Interfaz4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ventanaPrincipal
	/// </summary>
	public ref class ventanaPrincipal : public System::Windows::Forms::Form
	{
	public:
		ventanaPrincipal(void)
		{
			InitializeComponent();
			
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ventanaPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Ib1;
	private: System::Windows::Forms::TextBox^ tbUsuario;
	private: System::Windows::Forms::Button^ bLimpiar;














	private: System::Windows::Forms::Button^ bIngresar;


	private: System::Windows::Forms::Label^ User;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbContrasena;



	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Button^ Registrate;

	private: System::Windows::Forms::Label^ Pregunta1;
	private: System::Windows::Forms::GroupBox^ groupBox1;


	protected:

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Ib1 = (gcnew System::Windows::Forms::Label());
			this->tbUsuario = (gcnew System::Windows::Forms::TextBox());
			this->bLimpiar = (gcnew System::Windows::Forms::Button());
			this->bIngresar = (gcnew System::Windows::Forms::Button());
			this->User = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbContrasena = (gcnew System::Windows::Forms::TextBox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->Registrate = (gcnew System::Windows::Forms::Button());
			this->Pregunta1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->SuspendLayout();
			// 
			// Ib1
			// 
			this->Ib1->AutoSize = true;
			this->Ib1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ib1->Location = System::Drawing::Point(187, 28);
			this->Ib1->Name = L"Ib1";
			this->Ib1->Size = System::Drawing::Size(285, 24);
			this->Ib1->TabIndex = 0;
			this->Ib1->Text = L"Policlínico San Vicente de Paul";
			// 
			// tbUsuario
			// 
			this->tbUsuario->Location = System::Drawing::Point(124, 71);
			this->tbUsuario->Name = L"tbUsuario";
			this->tbUsuario->Size = System::Drawing::Size(181, 20);
			this->tbUsuario->TabIndex = 1;
			this->tbUsuario->TextChanged += gcnew System::EventHandler(this, &ventanaPrincipal::textBox1_TextChanged);
			// 
			// bLimpiar
			// 
			this->bLimpiar->AccessibleName = L"bLimpiar";
			this->bLimpiar->Location = System::Drawing::Point(103, 151);
			this->bLimpiar->Name = L"bLimpiar";
			this->bLimpiar->Size = System::Drawing::Size(75, 23);
			this->bLimpiar->TabIndex = 2;
			this->bLimpiar->Text = L"Limpiar";
			this->bLimpiar->UseVisualStyleBackColor = true;
			this->bLimpiar->Click += gcnew System::EventHandler(this, &ventanaPrincipal::button1_Click);
			// 
			// bIngresar
			// 
			this->bIngresar->Location = System::Drawing::Point(216, 151);
			this->bIngresar->Name = L"bIngresar";
			this->bIngresar->Size = System::Drawing::Size(75, 23);
			this->bIngresar->TabIndex = 5;
			this->bIngresar->Text = L"Ingresar";
			this->bIngresar->UseVisualStyleBackColor = true;
			this->bIngresar->Click += gcnew System::EventHandler(this, &ventanaPrincipal::bVerificar_Click);
			// 
			// User
			// 
			this->User->AutoSize = true;
			this->User->Location = System::Drawing::Point(62, 74);
			this->User->Name = L"User";
			this->User->Size = System::Drawing::Size(46, 13);
			this->User->TabIndex = 7;
			this->User->Text = L"Usuario:";
			this->User->Click += gcnew System::EventHandler(this, &ventanaPrincipal::label2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(51, 110);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Contraseña: ";
			// 
			// tbContrasena
			// 
			this->tbContrasena->Location = System::Drawing::Point(124, 107);
			this->tbContrasena->Name = L"tbContrasena";
			this->tbContrasena->Size = System::Drawing::Size(181, 20);
			this->tbContrasena->TabIndex = 9;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(436, 127);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(0, 13);
			this->linkLabel1->TabIndex = 10;
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &ventanaPrincipal::linkLabel1_LinkClicked);
			// 
			// Registrate
			// 
			this->Registrate->Location = System::Drawing::Point(517, 151);
			this->Registrate->Name = L"Registrate";
			this->Registrate->Size = System::Drawing::Size(75, 23);
			this->Registrate->TabIndex = 11;
			this->Registrate->Text = L"Registrate";
			this->Registrate->UseVisualStyleBackColor = true;
			// 
			// Pregunta1
			// 
			this->Pregunta1->AutoSize = true;
			this->Pregunta1->Location = System::Drawing::Point(367, 156);
			this->Pregunta1->Name = L"Pregunta1";
			this->Pregunta1->Size = System::Drawing::Size(125, 13);
			this->Pregunta1->TabIndex = 12;
			this->Pregunta1->Text = L"¿Aún no esta registrado\?";
			// 
			// groupBox1
			// 
			this->groupBox1->Location = System::Drawing::Point(26, 41);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(594, 201);
			this->groupBox1->TabIndex = 13;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ingrese los datos solicitados: ";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &ventanaPrincipal::groupBox1_Enter);
			// 
			// ventanaPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(641, 261);
			this->Controls->Add(this->Pregunta1);
			this->Controls->Add(this->Registrate);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->tbContrasena);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->User);
			this->Controls->Add(this->bIngresar);
			this->Controls->Add(this->bLimpiar);
			this->Controls->Add(this->tbUsuario);
			this->Controls->Add(this->Ib1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"ventanaPrincipal";
			this->Text = L"ventanaPrincipal";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    // Limpiar los campos de texto
    tbUsuario->Text = "";
    tbContrasena->Text = "";
}

	private: System::Void ingresarComoEnfermeroToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void ingresarComoMédicoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void medicoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void medicoToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void enfermeroToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void bVerificar_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ usuario = tbUsuario->Text;
	String^ contrasena = tbContrasena->Text;

	// Validar el usuario
	if (usuario=="Fab" && contrasena == "123") {
		// Usuario válido, abrir la ventana de login
		login^ log = gcnew login();
		log->Show();
	}
	else {
		// Usuario no válido, mostrar un mensaje de error o tomar otra acción
		MessageBox::Show("Usuario o contraseña incorrectos");
	}

}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
};
}
