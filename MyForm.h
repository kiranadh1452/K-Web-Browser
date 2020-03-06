#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ txtNavigate;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::WebBrowser^ webBrowser;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->txtNavigate = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->webBrowser = (gcnew System::Windows::Forms::WebBrowser());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(18, 19);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(32, 29);
			this->button1->TabIndex = 0;
			this->button1->Text = L"⇚";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(58, 19);
			this->button2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(32, 29);
			this->button2->TabIndex = 1;
			this->button2->Text = L"⇛";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(99, 19);
			this->button3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(32, 29);
			this->button3->TabIndex = 2;
			this->button3->Text = L"🔃";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(723, 19);
			this->button5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(99, 29);
			this->button5->TabIndex = 3;
			this->button5->Text = L"Go";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// txtNavigate
			// 
			this->txtNavigate->Location = System::Drawing::Point(198, 17);
			this->txtNavigate->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtNavigate->Name = L"txtNavigate";
			this->txtNavigate->Size = System::Drawing::Size(514, 26);
			this->txtNavigate->TabIndex = 4;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(140, 19);
			this->button4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(32, 29);
			this->button4->TabIndex = 5;
			this->button4->Text = L"H";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// webBrowser
			// 
			this->webBrowser->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->webBrowser->Location = System::Drawing::Point(26, 79);
			this->webBrowser->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->webBrowser->MinimumSize = System::Drawing::Size(30, 29);
			this->webBrowser->Name = L"webBrowser";
			this->webBrowser->Size = System::Drawing::Size(810, 450);
			this->webBrowser->TabIndex = 6;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(840, 543);
			this->Controls->Add(this->webBrowser);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->txtNavigate);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::Red;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"MyForm";
			this->Text = L"K WEB BROWSER";
			this->TransparencyKey = System::Drawing::Color::Black;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	webBrowser->GoBack();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	webBrowser->GoForward();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	webBrowser->Refresh();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	webBrowser->Navigate("www.youtube.com");
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	webBrowser->Navigate(txtNavigate->Text);
}
};
}
