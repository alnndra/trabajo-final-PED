#pragma once

#include "Enfermero.h"
#include "Medico.h"
#include "Registrarse.h"
#include <unordered_map>
#include <iostream>
#include <fstream>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <cliext\map>

namespace Interfaz4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::IO;
	using namespace msclr::interop;

	public ref class ventanaPrincipal : public System::Windows::Forms::Form
	{
	private:
		Dictionary<String^, String^>^ usuariosMedicos;
		Dictionary<String^, String^>^ usuariosEnfermeros;

	public:
		ventanaPrincipal(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			// Initialize the dictionaries
			usuariosMedicos = gcnew Dictionary<String^, String^>();
			usuariosEnfermeros = gcnew Dictionary<String^, String^>();

			// Load users from files
			CargarUsuarios("usuariosMedicos.txt", usuariosMedicos);
			CargarUsuarios("usuariosEnfermeros.txt", usuariosEnfermeros);
		}

	private:
		Dictionary<String^, String^>^ usuarios;

		System::Windows::Forms::Label^ Ib1;
		System::Windows::Forms::TextBox^ tbUsuario;
		System::Windows::Forms::Button^ bLimpiar;
		System::Windows::Forms::Button^ btn_enfermera;
		System::Windows::Forms::Label^ User;
		System::Windows::Forms::Label^ label2;
		System::Windows::Forms::TextBox^ tbContrasena;
		System::Windows::Forms::LinkLabel^ linkLabel1;
		System::Windows::Forms::Button^ Registrate;
		System::Windows::Forms::Label^ Pregunta1;
		System::Windows::Forms::GroupBox^ groupBox1;
		System::Windows::Forms::Button^ btn_medico;

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->Ib1 = (gcnew System::Windows::Forms::Label());
			this->tbUsuario = (gcnew System::Windows::Forms::TextBox());
			this->bLimpiar = (gcnew System::Windows::Forms::Button());
			this->btn_enfermera = (gcnew System::Windows::Forms::Button());
			this->User = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbContrasena = (gcnew System::Windows::Forms::TextBox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->Registrate = (gcnew System::Windows::Forms::Button());
			this->Pregunta1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btn_medico = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
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
			this->bLimpiar->Location = System::Drawing::Point(163, 191);
			this->bLimpiar->Name = L"bLimpiar";
			this->bLimpiar->Size = System::Drawing::Size(75, 23);
			this->bLimpiar->TabIndex = 2;
			this->bLimpiar->Text = L"Limpiar";
			this->bLimpiar->UseVisualStyleBackColor = true;
			this->bLimpiar->Click += gcnew System::EventHandler(this, &ventanaPrincipal::button1_Click);
			// 
			// btn_enfermera
			// 
			this->btn_enfermera->Location = System::Drawing::Point(244, 151);
			this->btn_enfermera->Name = L"btn_enfermera";
			this->btn_enfermera->Size = System::Drawing::Size(75, 23);
			this->btn_enfermera->TabIndex = 5;
			this->btn_enfermera->Text = L"Enfermera";
			this->btn_enfermera->UseVisualStyleBackColor = true;
			this->btn_enfermera->Click += gcnew System::EventHandler(this, &ventanaPrincipal::bVerificar_Enfermero);
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
			this->Registrate->Location = System::Drawing::Point(514, 151);
			this->Registrate->Name = L"Registrate";
			this->Registrate->Size = System::Drawing::Size(75, 23);
			this->Registrate->TabIndex = 11;
			this->Registrate->Text = L"Registrate";
			this->Registrate->UseVisualStyleBackColor = true;
			this->Registrate->Click += gcnew System::EventHandler(this, &ventanaPrincipal::Registrate_Click);
			// 
			// Pregunta1
			// 
			this->Pregunta1->AutoSize = true;
			this->Pregunta1->Location = System::Drawing::Point(364, 156);
			this->Pregunta1->Name = L"Pregunta1";
			this->Pregunta1->Size = System::Drawing::Size(125, 13);
			this->Pregunta1->TabIndex = 12;
			this->Pregunta1->Text = L"¿Aún no está registrado?";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add
			(this->btn_medico);
			this->groupBox1->Controls->Add(this->bLimpiar);
			this->groupBox1->Controls->Add(this->Pregunta1);
			this->groupBox1->Controls->Add(this->btn_enfermera);
			this->groupBox1->Controls->Add(this->Registrate);
			this->groupBox1->Controls->Add(this->tbUsuario);
			this->groupBox1->Controls->Add(this->User);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->tbContrasena);
			this->groupBox1->Location = System::Drawing::Point(72, 68);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(653, 220);
			this->groupBox1->TabIndex = 13;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Inicio de Sesion";
			// 
			// btn_medico
			// 
			this->btn_medico->Location = System::Drawing::Point(85, 151);
			this->btn_medico->Name = L"btn_medico";
			this->btn_medico->Size = System::Drawing::Size(75, 23);
			this->btn_medico->TabIndex = 13;
			this->btn_medico->Text = L"Médico";
			this->btn_medico->UseVisualStyleBackColor = true;
			this->btn_medico->Click += gcnew System::EventHandler(this, &ventanaPrincipal::bVerificar_Medico);
			// 
			// ventanaPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(753, 352);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->Ib1);
			this->Name = L"ventanaPrincipal";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &ventanaPrincipal::ventanaPrincipal_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		tbUsuario->Clear();
		tbContrasena->Clear();
	}
	private: System::Void Registrate_Click(System::Object^ sender, System::EventArgs^ e) {
		Registrarse^ registroForm = gcnew Registrarse();
		registroForm->ShowDialog();

		// Add user to appropriate dictionary and save to file
		String^ user = registroForm->getUsuario();
		String^ pass = registroForm->getContrasena();
		if (!String::IsNullOrEmpty(user) && !String::IsNullOrEmpty(pass))
		{
			if (registroForm->getEsMedico()) { // Cambiar aquí
				usuariosMedicos->Add(user, pass);
				GuardarUsuario("usuariosMedicos.txt", user, pass);
			}
			else if (registroForm->getEsEnfermero()) { // Cambiar aquí
				usuariosEnfermeros->Add(user, pass);
				GuardarUsuario("usuariosEnfermeros.txt", user, pass);
			}
		}
	}



	private: System::Void bVerificar_Medico(System::Object^ sender, System::EventArgs^ e) {
		String^ user = tbUsuario->Text;
		String^ pass = tbContrasena->Text;
		if (!String::IsNullOrEmpty(user) && !String::IsNullOrEmpty(pass) && usuariosMedicos->ContainsKey(user) && usuariosMedicos[user] == pass)
		{
			Medico^ form = gcnew Medico();
			form->Show();
		}
		else
		{
			MessageBox::Show("Usuario o contraseña incorrectos", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void bVerificar_Enfermero(System::Object^ sender, System::EventArgs^ e) {
		String^ user = tbUsuario->Text;
		String^ pass = tbContrasena->Text;
		if (!String::IsNullOrEmpty(user) && !String::IsNullOrEmpty(pass) && usuariosEnfermeros->ContainsKey(user) && usuariosEnfermeros[user] == pass)
		{
			Enfermero^ form = gcnew Enfermero();
			form->Show();
		}
		else
		{
			MessageBox::Show("Usuario o contraseña incorrectos", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	}
	private: System::Void ventanaPrincipal_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void CargarUsuarios(String^ archivo, Dictionary<String^, String^>^ usuarios) {
		if (File::Exists(archivo)) {
			StreamReader^ sr = gcnew StreamReader(archivo);
			String^ line;
			while ((line = sr->ReadLine()) != nullptr) {
				array<String^>^ parts = line->Split(',');
				if (parts->Length == 2) {
					usuarios->Add(parts[0], parts[1]);
				}
			}
			sr->Close();
		}
	}

		   void GuardarUsuario(String^ archivo, String^ usuario, String^ contrasena) {
			   StreamWriter^ sw = gcnew StreamWriter(archivo, true);
			   sw->WriteLine(usuario + "," + contrasena);
			   sw->Close();
		   }
	};
}

