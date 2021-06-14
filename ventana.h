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
	private: System::Windows::Forms::GroupBox^ gb_inicio;
	protected:





	protected:








	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_operacion;
	private: System::Windows::Forms::Button^ b_convertir;





	private: System::Windows::Forms::RadioButton^ rb_preorden;
	private: System::Windows::Forms::RadioButton^ rb_infijo;
	private: System::Windows::Forms::RadioButton^ rb_postfijo;
	private: System::Windows::Forms::GroupBox^ gb_resultado;
	private: System::Windows::Forms::Button^ b_volver;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txt_Preorden;



	private: System::Windows::Forms::TextBox^ txt_Infijo;



	private: System::Windows::Forms::TextBox^ txt_Postfijo;




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
			this->gb_inicio = (gcnew System::Windows::Forms::GroupBox());
			this->gb_resultado = (gcnew System::Windows::Forms::GroupBox());
			this->b_volver = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txt_Preorden = (gcnew System::Windows::Forms::TextBox());
			this->txt_Infijo = (gcnew System::Windows::Forms::TextBox());
			this->txt_Postfijo = (gcnew System::Windows::Forms::TextBox());
			this->rb_preorden = (gcnew System::Windows::Forms::RadioButton());
			this->rb_infijo = (gcnew System::Windows::Forms::RadioButton());
			this->rb_postfijo = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->b_convertir = (gcnew System::Windows::Forms::Button());
			this->txt_operacion = (gcnew System::Windows::Forms::TextBox());
			this->gb_inicio->SuspendLayout();
			this->gb_resultado->SuspendLayout();
			this->SuspendLayout();
			//
			// gb_inicio
			//
			this->gb_inicio->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->gb_inicio->Controls->Add(this->gb_resultado);
			this->gb_inicio->Controls->Add(this->rb_preorden);
			this->gb_inicio->Controls->Add(this->rb_infijo);
			this->gb_inicio->Controls->Add(this->rb_postfijo);
			this->gb_inicio->Controls->Add(this->label1);
			this->gb_inicio->Controls->Add(this->b_convertir);
			this->gb_inicio->Controls->Add(this->txt_operacion);
			this->gb_inicio->Location = System::Drawing::Point(10, 1);
			this->gb_inicio->Margin = System::Windows::Forms::Padding(1);
			this->gb_inicio->Name = L"gb_inicio";
			this->gb_inicio->Padding = System::Windows::Forms::Padding(1);
			this->gb_inicio->Size = System::Drawing::Size(444, 355);
			this->gb_inicio->TabIndex = 0;
			this->gb_inicio->TabStop = false;
			this->gb_inicio->Text = L"Inicio";
			//
			// gb_resultado
			//
			this->gb_resultado->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->gb_resultado->Controls->Add(this->b_volver);
			this->gb_resultado->Controls->Add(this->label5);
			this->gb_resultado->Controls->Add(this->label6);
			this->gb_resultado->Controls->Add(this->label7);
			this->gb_resultado->Controls->Add(this->txt_Preorden);
			this->gb_resultado->Controls->Add(this->txt_Infijo);
			this->gb_resultado->Controls->Add(this->txt_Postfijo);
			this->gb_resultado->Location = System::Drawing::Point(2, 0);
			this->gb_resultado->Margin = System::Windows::Forms::Padding(1);
			this->gb_resultado->Name = L"gb_resultado";
			this->gb_resultado->Padding = System::Windows::Forms::Padding(1);
			this->gb_resultado->Size = System::Drawing::Size(440, 353);
			this->gb_resultado->TabIndex = 3;
			this->gb_resultado->TabStop = false;
			this->gb_resultado->Text = L"Resultado";
			this->gb_resultado->Visible = false;
			//
			// b_volver
			//
			this->b_volver->Location = System::Drawing::Point(111, 282);
			this->b_volver->Name = L"b_volver";
			this->b_volver->Size = System::Drawing::Size(193, 23);
			this->b_volver->TabIndex = 6;
			this->b_volver->Text = L"Volver al inicio";
			this->b_volver->UseVisualStyleBackColor = true;
			this->b_volver->Click += gcnew System::EventHandler(this, &ventana::b_volver_Click);
			//
			// label5
			//
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(20, 199);
			this->label5->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"PreOrden:";
			//
			// label6
			//
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(20, 121);
			this->label6->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(32, 13);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Infijo:";
			//
			// label7
			//
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(20, 49);
			this->label7->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(47, 13);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Postfijo: ";
			//
			// txt_Preorden
			//
			this->txt_Preorden->Location = System::Drawing::Point(89, 196);
			this->txt_Preorden->Margin = System::Windows::Forms::Padding(1);
			this->txt_Preorden->Name = L"txt_Preorden";
			this->txt_Preorden->Size = System::Drawing::Size(265, 20);
			this->txt_Preorden->TabIndex = 2;
			//
			// txt_Infijo
			//
			this->txt_Infijo->Location = System::Drawing::Point(89, 121);
			this->txt_Infijo->Margin = System::Windows::Forms::Padding(1);
			this->txt_Infijo->Name = L"txt_Infijo";
			this->txt_Infijo->Size = System::Drawing::Size(265, 20);
			this->txt_Infijo->TabIndex = 1;
			//
			// txt_Postfijo
			//
			this->txt_Postfijo->Location = System::Drawing::Point(89, 49);
			this->txt_Postfijo->Margin = System::Windows::Forms::Padding(1);
			this->txt_Postfijo->Name = L"txt_Postfijo";
			this->txt_Postfijo->Size = System::Drawing::Size(265, 20);
			this->txt_Postfijo->TabIndex = 0;
			//
			// rb_preorden
			//
			this->rb_preorden->AutoSize = true;
			this->rb_preorden->Location = System::Drawing::Point(288, 121);
			this->rb_preorden->Name = L"rb_preorden";
			this->rb_preorden->Size = System::Drawing::Size(68, 17);
			this->rb_preorden->TabIndex = 5;
			this->rb_preorden->TabStop = true;
			this->rb_preorden->Text = L"Preorden";
			this->rb_preorden->UseVisualStyleBackColor = true;
			//
			// rb_infijo
			//
			this->rb_infijo->AutoSize = true;
			this->rb_infijo->Location = System::Drawing::Point(288, 85);
			this->rb_infijo->Name = L"rb_infijo";
			this->rb_infijo->Size = System::Drawing::Size(47, 17);
			this->rb_infijo->TabIndex = 4;
			this->rb_infijo->TabStop = true;
			this->rb_infijo->Text = L"Infijo";
			this->rb_infijo->UseVisualStyleBackColor = true;
			//
			// rb_postfijo
			//
			this->rb_postfijo->AutoSize = true;
			this->rb_postfijo->Location = System::Drawing::Point(288, 49);
			this->rb_postfijo->Name = L"rb_postfijo";
			this->rb_postfijo->Size = System::Drawing::Size(59, 17);
			this->rb_postfijo->TabIndex = 3;
			this->rb_postfijo->TabStop = true;
			this->rb_postfijo->Text = L"Postfijo";
			this->rb_postfijo->UseVisualStyleBackColor = true;
			//
			// label1
			//
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 49);
			this->label1->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(164, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Ingrese la expresión matemática: ";
			//
			// b_convertir
			//
			this->b_convertir->Location = System::Drawing::Point(25, 158);
			this->b_convertir->Margin = System::Windows::Forms::Padding(1);
			this->b_convertir->Name = L"b_convertir";
			this->b_convertir->Size = System::Drawing::Size(113, 24);
			this->b_convertir->TabIndex = 1;
			this->b_convertir->Text = L"Convertir";
			this->b_convertir->UseVisualStyleBackColor = true;
			this->b_convertir->Click += gcnew System::EventHandler(this, &ventana::b_convertir_Click);
			//
			// txt_operacion
			//
			this->txt_operacion->Location = System::Drawing::Point(25, 82);
			this->txt_operacion->Margin = System::Windows::Forms::Padding(1);
			this->txt_operacion->Name = L"txt_operacion";
			this->txt_operacion->Size = System::Drawing::Size(126, 20);
			this->txt_operacion->TabIndex = 0;
			//
			// ventana
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(447, 350);
			this->Controls->Add(this->gb_inicio);
			this->Margin = System::Windows::Forms::Padding(1);
			this->Name = L"ventana";
			this->Text = L"ventana";
			this->gb_inicio->ResumeLayout(false);
			this->gb_inicio->PerformLayout();
			this->gb_resultado->ResumeLayout(false);
			this->gb_resultado->PerformLayout();
			this->ResumeLayout(false);



		}
#pragma endregion
	public:
		String^ exp_Infija;
		String^ exp_Postfija;
		String^ exp_Preorden;




	private: System::Void b_convertir_Click(System::Object^ sender, System::EventArgs^ e) {



		if (((rb_infijo->Checked != false) || (rb_postfijo->Checked != false) || (rb_preorden->Checked != false)) && txt_operacion->Text != "")
		{
			gb_resultado->Visible = true;
		}



		if (rb_infijo->Checked == true) {
			exp_Infija = txt_operacion->Text;
			txt_Infijo->Text = exp_Infija;
		}

		if (rb_postfijo->Checked == true) {
			exp_Postfija = txt_operacion->Text;
			txt_Postfijo->Text = exp_Postfija;
		}



		if (rb_preorden->Checked == true) {
			exp_Preorden = txt_operacion->Text;
			txt_Preorden->Text = exp_Preorden;
		}
	}
	private: System::Void b_volver_Click(System::Object^ sender, System::EventArgs^ e) {



		gb_resultado->Visible = false;
		gb_inicio->Visible = true;
		txt_operacion->Text = "";
		rb_infijo->Checked = false;
		rb_postfijo->Checked = false;
		rb_preorden->Checked = false;
		txt_Infijo->Text = "";
		txt_Postfijo->Text = "";
		txt_Preorden->Text = "";



	}
	};
}
