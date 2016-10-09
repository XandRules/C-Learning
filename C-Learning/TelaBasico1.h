#pragma once

namespace CLearning {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TelaBasico1
	/// </summary>
	public ref class TelaBasico1 : public System::Windows::Forms::Form
	{
	public:
		TelaBasico1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			Status = -1;
			Correcao = -1;
		}
		void setStatus(int);
		int getStatus(void);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TelaBasico1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  tb_basico_1;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  bt_teste;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  bt_proximo;

			 int Status;
			 int Correcao;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TelaBasico1::typeid));
			this->tb_basico_1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->bt_teste = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->bt_proximo = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// tb_basico_1
			// 
			this->tb_basico_1->BackColor = System::Drawing::SystemColors::MenuBar;
			this->tb_basico_1->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_basico_1->ForeColor = System::Drawing::Color::Lime;
			this->tb_basico_1->Location = System::Drawing::Point(462, 108);
			this->tb_basico_1->Margin = System::Windows::Forms::Padding(4);
			this->tb_basico_1->MaxLength = 7;
			this->tb_basico_1->Multiline = true;
			this->tb_basico_1->Name = L"tb_basico_1";
			this->tb_basico_1->Size = System::Drawing::Size(74, 22);
			this->tb_basico_1->TabIndex = 0;
			this->tb_basico_1->TextChanged += gcnew System::EventHandler(this, &TelaBasico1::tb_basico_1_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1222, 1);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(48, 37);
			this->button1->TabIndex = 2;
			this->button1->Text = L"X";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &TelaBasico1::button1_Click);
			// 
			// bt_teste
			// 
			this->bt_teste->BackColor = System::Drawing::Color::Transparent;
			this->bt_teste->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bt_teste->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_teste->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bt_teste->ForeColor = System::Drawing::Color::Yellow;
			this->bt_teste->Location = System::Drawing::Point(344, 835);
			this->bt_teste->Name = L"bt_teste";
			this->bt_teste->Size = System::Drawing::Size(152, 36);
			this->bt_teste->TabIndex = 3;
			this->bt_teste->Text = L"Testar Solução";
			this->bt_teste->UseVisualStyleBackColor = false;
			this->bt_teste->Click += gcnew System::EventHandler(this, &TelaBasico1::bt_teste_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Yellow;
			this->button2->Location = System::Drawing::Point(515, 835);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(97, 36);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Reset";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &TelaBasico1::button2_Click);
			// 
			// bt_proximo
			// 
			this->bt_proximo->BackColor = System::Drawing::Color::Gray;
			this->bt_proximo->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bt_proximo->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Aqua;
			this->bt_proximo->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Aqua;
			this->bt_proximo->Font = (gcnew System::Drawing::Font(L"Cooper Black", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bt_proximo->ForeColor = System::Drawing::Color::Red;
			this->bt_proximo->Location = System::Drawing::Point(1091, 835);
			this->bt_proximo->Name = L"bt_proximo";
			this->bt_proximo->Size = System::Drawing::Size(132, 39);
			this->bt_proximo->TabIndex = 5;
			this->bt_proximo->Text = L"Proximo";
			this->bt_proximo->UseVisualStyleBackColor = false;
			this->bt_proximo->Click += gcnew System::EventHandler(this, &TelaBasico1::bt_proximo_Click);
			// 
			// TelaBasico1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1277, 935);
			this->Controls->Add(this->bt_proximo);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->bt_teste);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tb_basico_1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"TelaBasico1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"C-Learning(Basico)";
			this->Load += gcnew System::EventHandler(this, &TelaBasico1::TelaBasico1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void tb_basico_1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		if (tb_basico_1->Text == "stdio.h")
		{
			this->tb_basico_1->ForeColor = System::Drawing::Color::Lime;
	}
		else
		{
			this->tb_basico_1->ForeColor = System::Drawing::Color::Black;
		}
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Status = 0;
		this->Visible = false;
	}
	private: System::Void TelaBasico1_Load(System::Object^  sender, System::EventArgs^  e) {
		Status = 0;
		this->Visible = false;
	}
private: System::Void bt_teste_Click(System::Object^  sender, System::EventArgs^  e) {
	while (Correcao != 1)
	{
		if (tb_basico_1->Text != "stdio.h");
		{
			this->tb_basico_1->ForeColor = System::Drawing::Color::Red;
		}
		if (tb_basico_1->Text == "stdio.h") {
			this->tb_basico_1->ForeColor = System::Drawing::Color::Green;
			Correcao = 1;
			this->bt_proximo->BackColor = System::Drawing::Color::Lime;

		}
	}
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	tb_basico_1->Text = "";
	this->bt_proximo->BackColor = System::Drawing::Color::Gray;
	Correcao = 0;
}
private: System::Void bt_proximo_Click(System::Object^  sender, System::EventArgs^  e) {
	if (Correcao == 1)
	{
		Status = 7;
		this->Visible = false;
	}
}
};
}
