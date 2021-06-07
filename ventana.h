#pragma once

namespace Examen3AndresEsteban {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ventana
	/// </summary>
	public ref class ventana : public System::Windows::Forms::Form
	{
	public:
		ventana(void)
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
		~ventana()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ gb_ordenes;

	protected:

	private: System::Windows::Forms::TextBox^ txt_preorden;

	private: System::Windows::Forms::TextBox^ txt_infijo;

	private: System::Windows::Forms::TextBox^ txt_posfijo;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_operacion;
	private: System::Windows::Forms::Button^ b_convertir;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txt_operacion = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->b_convertir = (gcnew System::Windows::Forms::Button());
			this->gb_ordenes = (gcnew System::Windows::Forms::GroupBox());
			this->txt_posfijo = (gcnew System::Windows::Forms::TextBox());
			this->txt_infijo = (gcnew System::Windows::Forms::TextBox());
			this->txt_preorden = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->gb_ordenes->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->gb_ordenes);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->txt_operacion);
			this->groupBox1->Location = System::Drawing::Point(33, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(809, 430);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			// 
			// txt_operacion
			// 
			this->txt_operacion->Location = System::Drawing::Point(190, 187);
			this->txt_operacion->Name = L"txt_operacion";
			this->txt_operacion->Size = System::Drawing::Size(328, 38);
			this->txt_operacion->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(163, 92);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(439, 32);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Ingrese la expresión matemática: ";
			// 
			// b_convertir
			// 
			this->b_convertir->Location = System::Drawing::Point(97, 476);
			this->b_convertir->Name = L"b_convertir";
			this->b_convertir->Size = System::Drawing::Size(149, 58);
			this->b_convertir->TabIndex = 1;
			this->b_convertir->Text = L"Convertir";
			this->b_convertir->UseVisualStyleBackColor = true;
			this->b_convertir->Click += gcnew System::EventHandler(this, &ventana::b_convertir_Click);
			// 
			// gb_ordenes
			// 
			this->gb_ordenes->Controls->Add(this->label4);
			this->gb_ordenes->Controls->Add(this->label3);
			this->gb_ordenes->Controls->Add(this->label2);
			this->gb_ordenes->Controls->Add(this->txt_preorden);
			this->gb_ordenes->Controls->Add(this->txt_infijo);
			this->gb_ordenes->Controls->Add(this->txt_posfijo);
			this->gb_ordenes->Location = System::Drawing::Point(-9, 16);
			this->gb_ordenes->Name = L"gb_ordenes";
			this->gb_ordenes->Size = System::Drawing::Size(818, 414);
			this->gb_ordenes->TabIndex = 2;
			this->gb_ordenes->TabStop = false;
			this->gb_ordenes->Text = L"groupBox2";
			this->gb_ordenes->Visible = false;
			// 
			// txt_posfijo
			// 
			this->txt_posfijo->Location = System::Drawing::Point(277, 127);
			this->txt_posfijo->Name = L"txt_posfijo";
			this->txt_posfijo->Size = System::Drawing::Size(302, 38);
			this->txt_posfijo->TabIndex = 0;
			// 
			// txt_infijo
			// 
			this->txt_infijo->Location = System::Drawing::Point(277, 215);
			this->txt_infijo->Name = L"txt_infijo";
			this->txt_infijo->Size = System::Drawing::Size(302, 38);
			this->txt_infijo->TabIndex = 1;
			this->txt_infijo->TextChanged += gcnew System::EventHandler(this, &ventana::textBox2_TextChanged);
			// 
			// txt_preorden
			// 
			this->txt_preorden->Location = System::Drawing::Point(277, 321);
			this->txt_preorden->Name = L"txt_preorden";
			this->txt_preorden->Size = System::Drawing::Size(302, 38);
			this->txt_preorden->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(199, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(125, 32);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Postfijo: ";
			this->label2->Click += gcnew System::EventHandler(this, &ventana::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(193, 174);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(84, 32);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Infijo:";
			this->label3->Click += gcnew System::EventHandler(this, &ventana::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(193, 286);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(146, 32);
			this->label4->TabIndex = 5;
			this->label4->Text = L"PreOrden:";
			// 
			// ventana
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1242, 875);
			this->Controls->Add(this->b_convertir);
			this->Controls->Add(this->groupBox1);
			this->Name = L"ventana";
			this->Text = L"ventana";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->gb_ordenes->ResumeLayout(false);
			this->gb_ordenes->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void b_convertir_Click(System::Object^ sender, System::EventArgs^ e) {
	 




	gb_ordenes->Visible = true;

}
};
}
