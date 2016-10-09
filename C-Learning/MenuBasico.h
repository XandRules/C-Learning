#pragma once

namespace CLearning {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MenuBasico
	/// </summary>
	public ref class MenuBasico : public System::Windows::Forms::Form
	{
	public:
		MenuBasico(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			Status = -1;
		}
		void setStatus(int);
		int getStatus();

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MenuBasico()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Button^  bt_include;
	private: System::Windows::Forms::Button^  bt_printf;
	private: System::Windows::Forms::Button^  bt_scanf;
	private: System::Windows::Forms::Button^  bt_operadores;
			 int Status;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuBasico::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->bt_include = (gcnew System::Windows::Forms::Button());
			this->bt_printf = (gcnew System::Windows::Forms::Button());
			this->bt_scanf = (gcnew System::Windows::Forms::Button());
			this->bt_operadores = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1223, 3);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(48, 37);
			this->button1->TabIndex = 1;
			this->button1->Text = L"X";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MenuBasico::button1_Click);
			// 
			// bt_include
			// 
			this->bt_include->BackColor = System::Drawing::Color::Transparent;
			this->bt_include->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bt_include->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_include->Location = System::Drawing::Point(525, 323);
			this->bt_include->Name = L"bt_include";
			this->bt_include->Size = System::Drawing::Size(251, 53);
			this->bt_include->TabIndex = 2;
			this->bt_include->UseVisualStyleBackColor = false;
			this->bt_include->Click += gcnew System::EventHandler(this, &MenuBasico::bt_include_Click);
			// 
			// bt_printf
			// 
			this->bt_printf->BackColor = System::Drawing::Color::Transparent;
			this->bt_printf->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bt_printf->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_printf->Location = System::Drawing::Point(526, 402);
			this->bt_printf->Name = L"bt_printf";
			this->bt_printf->Size = System::Drawing::Size(251, 53);
			this->bt_printf->TabIndex = 3;
			this->bt_printf->UseVisualStyleBackColor = false;
			// 
			// bt_scanf
			// 
			this->bt_scanf->BackColor = System::Drawing::Color::Transparent;
			this->bt_scanf->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bt_scanf->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_scanf->Location = System::Drawing::Point(525, 479);
			this->bt_scanf->Name = L"bt_scanf";
			this->bt_scanf->Size = System::Drawing::Size(251, 53);
			this->bt_scanf->TabIndex = 4;
			this->bt_scanf->UseVisualStyleBackColor = false;
			// 
			// bt_operadores
			// 
			this->bt_operadores->BackColor = System::Drawing::Color::Transparent;
			this->bt_operadores->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bt_operadores->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_operadores->Location = System::Drawing::Point(525, 558);
			this->bt_operadores->Name = L"bt_operadores";
			this->bt_operadores->Size = System::Drawing::Size(251, 53);
			this->bt_operadores->TabIndex = 5;
			this->bt_operadores->UseVisualStyleBackColor = false;
			// 
			// MenuBasico
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1277, 890);
			this->Controls->Add(this->bt_operadores);
			this->Controls->Add(this->bt_scanf);
			this->Controls->Add(this->bt_printf);
			this->Controls->Add(this->bt_include);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MenuBasico";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MenuBasico";
			this->Load += gcnew System::EventHandler(this, &MenuBasico::MenuBasico_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Status = 0;
		this->Visible = false;
	}
	private: System::Void MenuBasico_Load(System::Object^  sender, System::EventArgs^  e) {
		Status = 3;
		this->Visible = false;
	}
	private: System::Void bt_include_Click(System::Object^  sender, System::EventArgs^  e) {
		Status = 6;
		this->Visible = false;
	}
};
}
