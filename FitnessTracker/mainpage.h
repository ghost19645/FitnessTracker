#include "dashboard.h"

#pragma once

namespace FitnessTracker {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for mainpage
	/// </summary>

	public ref class mainpage : public System::Windows::Forms::Form {
	public:
		mainpage(void)
		{
			InitializeComponent();

			nameTextBox->MaxLength = 15;
			genderComboBox->MaxLength = 6;
			weightTextBox->MaxLength = 3;
			heightTextBox->MaxLength = 3;
			waterTextBox->MaxLength = 4;
			goalTextBox->MaxLength = 4;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~mainpage()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ mainTitle;
	private: System::Windows::Forms::Label^ infoTitle;
	private: System::Windows::Forms::Label^ inputText1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ genderComboBox;
	private: System::Windows::Forms::TextBox^ nameTextBox;
	private: System::Windows::Forms::TextBox^ weightTextBox;
	private: System::Windows::Forms::TextBox^ heightTextBox;
	private: System::Windows::Forms::TextBox^ waterTextBox;
	private: System::Windows::Forms::TextBox^ goalTextBox;
	private: System::Windows::Forms::Button^ saveButton;
	private: System::Windows::Forms::Button^ dashboardButton;



	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->mainTitle = (gcnew System::Windows::Forms::Label());
			this->infoTitle = (gcnew System::Windows::Forms::Label());
			this->inputText1 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->genderComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->nameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->weightTextBox = (gcnew System::Windows::Forms::TextBox());
			this->heightTextBox = (gcnew System::Windows::Forms::TextBox());
			this->waterTextBox = (gcnew System::Windows::Forms::TextBox());
			this->goalTextBox = (gcnew System::Windows::Forms::TextBox());
			this->saveButton = (gcnew System::Windows::Forms::Button());
			this->dashboardButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// mainTitle
			// 
			this->mainTitle->AutoSize = true;
			this->mainTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mainTitle->ForeColor = System::Drawing::Color::White;
			this->mainTitle->Location = System::Drawing::Point(306, 26);
			this->mainTitle->Name = L"mainTitle";
			this->mainTitle->Size = System::Drawing::Size(177, 29);
			this->mainTitle->TabIndex = 0;
			this->mainTitle->Text = L"Personal Data";
			// 
			// infoTitle
			// 
			this->infoTitle->AutoSize = true;
			this->infoTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->infoTitle->ForeColor = System::Drawing::Color::White;
			this->infoTitle->Location = System::Drawing::Point(226, 55);
			this->infoTitle->Name = L"infoTitle";
			this->infoTitle->Size = System::Drawing::Size(334, 48);
			this->infoTitle->TabIndex = 1;
			this->infoTitle->Text = L"Before start, please, input required personal information\r\nor click on \"GO TO DAS"
				L"HBOARD\" button\r\n\r\n";
			this->infoTitle->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// inputText1
			// 
			this->inputText1->AutoSize = true;
			this->inputText1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inputText1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->inputText1->Location = System::Drawing::Point(237, 115);
			this->inputText1->Name = L"inputText1";
			this->inputText1->Size = System::Drawing::Size(81, 16);
			this->inputText1->TabIndex = 2;
			this->inputText1->Text = L"Your name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->label1->Location = System::Drawing::Point(479, 115);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 16);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Gender";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->label2->Location = System::Drawing::Point(226, 184);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(102, 16);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Weight (in kg)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->label3->Location = System::Drawing::Point(183, 251);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(181, 32);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Amount of water \r\nconsumed per day (in ml)\r\n";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->label4->Location = System::Drawing::Point(458, 184);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(102, 16);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Height (in cm)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->label5->Location = System::Drawing::Point(464, 251);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(96, 32);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Activity goal \r\n(in minutes)";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// genderComboBox
			// 
			this->genderComboBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->genderComboBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->genderComboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold));
			this->genderComboBox->FormattingEnabled = true;
			this->genderComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->genderComboBox->Location = System::Drawing::Point(433, 143);
			this->genderComboBox->Name = L"genderComboBox";
			this->genderComboBox->Size = System::Drawing::Size(150, 21);
			this->genderComboBox->TabIndex = 18;
			// 
			// nameTextBox
			// 
			this->nameTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->nameTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->nameTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold));
			this->nameTextBox->Location = System::Drawing::Point(200, 143);
			this->nameTextBox->Name = L"nameTextBox";
			this->nameTextBox->Size = System::Drawing::Size(150, 20);
			this->nameTextBox->TabIndex = 19;
			// 
			// weightTextBox
			// 
			this->weightTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->weightTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->weightTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold));
			this->weightTextBox->Location = System::Drawing::Point(200, 212);
			this->weightTextBox->Name = L"weightTextBox";
			this->weightTextBox->Size = System::Drawing::Size(150, 20);
			this->weightTextBox->TabIndex = 20;
			// 
			// heightTextBox
			// 
			this->heightTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->heightTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->heightTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->heightTextBox->Location = System::Drawing::Point(433, 212);
			this->heightTextBox->Name = L"heightTextBox";
			this->heightTextBox->Size = System::Drawing::Size(150, 20);
			this->heightTextBox->TabIndex = 21;
			// 
			// waterTextBox
			// 
			this->waterTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->waterTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->waterTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold));
			this->waterTextBox->Location = System::Drawing::Point(200, 298);
			this->waterTextBox->Name = L"waterTextBox";
			this->waterTextBox->Size = System::Drawing::Size(150, 20);
			this->waterTextBox->TabIndex = 22;
			// 
			// goalTextBox
			// 
			this->goalTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->goalTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->goalTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold));
			this->goalTextBox->Location = System::Drawing::Point(433, 298);
			this->goalTextBox->Name = L"goalTextBox";
			this->goalTextBox->Size = System::Drawing::Size(150, 20);
			this->goalTextBox->TabIndex = 23;
			// 
			// saveButton
			// 
			this->saveButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->saveButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->saveButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->saveButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold));
			this->saveButton->Location = System::Drawing::Point(684, 351);
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(76, 39);
			this->saveButton->TabIndex = 24;
			this->saveButton->Text = L"SAVE PROFILE";
			this->saveButton->UseVisualStyleBackColor = false;
			this->saveButton->Click += gcnew System::EventHandler(this, &mainpage::saveButton_Click_1);
			// 
			// dashboardButton
			// 
			this->dashboardButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->dashboardButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->dashboardButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->dashboardButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold));
			this->dashboardButton->Location = System::Drawing::Point(554, 351);
			this->dashboardButton->Name = L"dashboardButton";
			this->dashboardButton->Size = System::Drawing::Size(115, 39);
			this->dashboardButton->TabIndex = 25;
			this->dashboardButton->Text = L"GO TO DASHBOARD";
			this->dashboardButton->UseVisualStyleBackColor = false;
			this->dashboardButton->Click += gcnew System::EventHandler(this, &mainpage::dashboardButton_Click);
			// 
			// mainpage
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->ClientSize = System::Drawing::Size(784, 411);
			this->Controls->Add(this->dashboardButton);
			this->Controls->Add(this->saveButton);
			this->Controls->Add(this->goalTextBox);
			this->Controls->Add(this->waterTextBox);
			this->Controls->Add(this->heightTextBox);
			this->Controls->Add(this->weightTextBox);
			this->Controls->Add(this->nameTextBox);
			this->Controls->Add(this->genderComboBox);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->inputText1);
			this->Controls->Add(this->infoTitle);
			this->Controls->Add(this->mainTitle);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"mainpage";
			this->Text = L"Fitness Tracker";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

private:
	System::Void saveButton_Click_1(System::Object^ sender, System::EventArgs^ e) {
		System::Xml::XmlDocument^ xmlDoc = gcnew System::Xml::XmlDocument();
		System::Xml::XmlElement^ rootNode = xmlDoc->CreateElement("TrainingProfile");
		System::Xml::XmlElement^ infoNode = xmlDoc->CreateElement("ProfileInfo");

		if (nameTextBox->Text->Length == 0) {
			MessageBox::Show("Name cannot be empty.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (genderComboBox->Text->Length == 0) {
			MessageBox::Show("Gender cannot be empty.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		int weight;
		if (weightTextBox->Text->Length == 0 || !Int32::TryParse(weightTextBox->Text, weight)) {
			MessageBox::Show("Please enter a valid integer for Weight. Max 3 symbols.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		int height;
		if (heightTextBox->Text->Length == 0 || !Int32::TryParse(heightTextBox->Text, height)) {
			MessageBox::Show("Please enter a valid integer for Height. Max 3 symbols.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		int water;
		if (waterTextBox->Text->Length == 0 || !Int32::TryParse(waterTextBox->Text, water)) {
			MessageBox::Show("Please enter a valid integer for Water. Max 4 symbols.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		int goal;
		if (goalTextBox->Text->Length == 0 || !Int32::TryParse(goalTextBox->Text, goal)) {
			MessageBox::Show("Please enter a valid integer for Goal. Max 4 symbols.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		infoNode->SetAttribute("Name", nameTextBox->Text);
		infoNode->SetAttribute("Gender", genderComboBox->Text);
		infoNode->SetAttribute("Weight", weight.ToString());
		infoNode->SetAttribute("Height", height.ToString());
		infoNode->SetAttribute("Water", water.ToString());
		infoNode->SetAttribute("Goal", goal.ToString());

		rootNode->AppendChild(infoNode);
		xmlDoc->AppendChild(rootNode);

		try {
			String^ desktopPath = Environment::GetFolderPath(Environment::SpecialFolder::DesktopDirectory);
			String^ filePath = System::IO::Path::Combine(desktopPath, "profile.xml");
			xmlDoc->Save(filePath);
			MessageBox::Show("Profile saved successfully on your desktop.\n\nPlease, click on 'GO TO DASHBOARD' button to continue and upload profile.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error occurred while saving profile: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

private:
	System::Void dashboardButton_Click(System::Object^ sender, System::EventArgs^ e) {
		dashboard^ createdashboard = gcnew dashboard();
		createdashboard->Show();
	}
};
}
