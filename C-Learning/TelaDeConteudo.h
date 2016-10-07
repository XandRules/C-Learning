#pragma once

namespace CLearning {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TelaDeConteudo
	/// </summary>
	public ref class TelaDeConteudo : public System::Windows::Forms::Form
	{
	public:
		TelaDeConteudo(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			Status = -1;
		}
		void setStatus(int);
		int getStatus(void);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TelaDeConteudo()
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
	private: System::Windows::Forms::Button^  bt_basico;

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Label^  lb_Menu;
			 int Status;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TelaDeConteudo::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->bt_basico = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->lb_Menu = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1214, 8);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(36, 30);
			this->button1->TabIndex = 1;
			this->button1->Text = L"X";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &TelaDeConteudo::button1_Click);
			// 
			// bt_basico
			// 
			this->bt_basico->BackColor = System::Drawing::Color::Transparent;
			this->bt_basico->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bt_basico->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->bt_basico->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_basico->Font = (gcnew System::Drawing::Font(L"Consolas", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bt_basico->ForeColor = System::Drawing::Color::Lime;
			this->bt_basico->Location = System::Drawing::Point(140, 255);
			this->bt_basico->Name = L"bt_basico";
			this->bt_basico->Size = System::Drawing::Size(252, 51);
			this->bt_basico->TabIndex = 2;
			this->bt_basico->Text = L"Basico";
			this->bt_basico->UseVisualStyleBackColor = false;
			this->bt_basico->Click += gcnew System::EventHandler(this, &TelaDeConteudo::bt_basico_Click);
			this->bt_basico->MouseLeave += gcnew System::EventHandler(this, &TelaDeConteudo::bt_basico_MouseLeave);
			this->bt_basico->MouseHover += gcnew System::EventHandler(this, &TelaDeConteudo::bt_basico_MouseHover);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Location = System::Drawing::Point(140, 335);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(252, 51);
			this->button3->TabIndex = 3;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Location = System::Drawing::Point(140, 490);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(252, 51);
			this->button4->TabIndex = 5;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Location = System::Drawing::Point(139, 411);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(252, 51);
			this->button5->TabIndex = 4;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Location = System::Drawing::Point(141, 647);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(252, 51);
			this->button6->TabIndex = 7;
			this->button6->Text = L"button6";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Transparent;
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Location = System::Drawing::Point(140, 568);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(252, 51);
			this->button7->TabIndex = 6;
			this->button7->Text = L"button7";
			this->button7->UseVisualStyleBackColor = false;
			// 
			// lb_Menu
			// 
			this->lb_Menu->AutoSize = true;
			this->lb_Menu->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_Menu->Location = System::Drawing::Point(538, 335);
			this->lb_Menu->Name = L"lb_Menu";
			this->lb_Menu->Size = System::Drawing::Size(0, 17);
			this->lb_Menu->TabIndex = 8;
			// 
			// TelaDeConteudo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1279, 935);
			this->Controls->Add(this->lb_Menu);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->bt_basico);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"TelaDeConteudo";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TelaDeConteudo";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Status = 0;
		this->Visible = false;
	}
	private: System::Void bt_basico_MouseHover(System::Object^  sender, System::EventArgs^  e) {
		lb_Menu->Text = "CLearning Basico Descricao do Basico";
	}
private: System::Void bt_basico_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	lb_Menu->Text = "";
}
private: System::Void bt_basico_Click(System::Object^  sender, System::EventArgs^  e) {
	Status = 2;
	this->Visible = false;
}
};
}
