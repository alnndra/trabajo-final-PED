#pragma once


namespace Interfaz4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Medico
	/// </summary>
	public ref class Medico : public System::Windows::Forms::Form
	{
	public:
		Medico(void)
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
		~Medico()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(116, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(236, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Menu de personal medico";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(172, 84);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(127, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Crear historial médica";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(172, 128);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(127, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Buscar historial médico";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(158, 172);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(154, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Actualizar historial médico";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(172, 216);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(127, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Prescribir laboratorios";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(158, 260);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(154, 23);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Asignar recetas al paciente";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(172, 304);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(127, 23);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Traslado de pacientes";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(172, 345);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(127, 23);
			this->button7->TabIndex = 7;
			this->button7->Text = L"Salir";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Medico::btn_volver);
			// 
			// Medico
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(476, 436);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"Medico";
			this->Text = L"Medico";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Medico_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_volver(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
