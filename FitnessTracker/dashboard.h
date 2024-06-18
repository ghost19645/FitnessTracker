#include "walking.h"
#include "running.h"
#include "cycling.h"
#include "water.h"

#pragma once

namespace FitnessTracker {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for dashboard
	/// </summary>
	public ref class dashboard : public System::Windows::Forms::Form {

	public:
		dashboard(void)
		{
			InitializeComponent();
			
			weightTextBox->MaxLength = 3;
			heightTextBox->MaxLength = 3;
			waterTextBox->MaxLength = 4;
			goalTextBox->MaxLength = 4;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~dashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	protected:

	private:

		int totalWalkingTime = 0;
		int totalRunningTime = 0;
		int totalCyclingTime = 0;
		int totalWater = 0;


		System::Windows::Forms::Label^ mainTitle;
		System::Windows::Forms::Button^ uploadProfile;
		System::Windows::Forms::PictureBox^ pictureBox1;
		System::Windows::Forms::PictureBox^ pictureBox2;
		System::Windows::Forms::PictureBox^ pictureBox3;
        System::Windows::Forms::Button^ walkingButton;
		System::String^ currentFilePath;
		System::Windows::Forms::Button^ runningButton;
		System::Windows::Forms::Button^ cyclingButton;
		System::Windows::Forms::Button^ waterButton;
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::Label^ label2;
		System::Windows::Forms::Label^ label3;
		System::Windows::Forms::Label^ infoLabels;
		System::Windows::Forms::Label^ label4;
		System::Windows::Forms::Label^ label5;
		System::Windows::Forms::TextBox^ nameTextBox;
		System::Windows::Forms::Label^ label6;
		System::Windows::Forms::TextBox^ genderTextBox;
		System::Windows::Forms::TextBox^ heightTextBox;
		System::Windows::Forms::TextBox^ weightTextBox;
		System::Windows::Forms::TextBox^ waterTextBox;
		System::Windows::Forms::Button^ saveChanges;
		System::Windows::Forms::Label^ label7;
	    System::Windows::Forms::Label^ todayActivityLabel;
		System::Windows::Forms::Label^ goalLabel;
		System::Windows::Forms::TextBox^ goalTextBox;
		System::Windows::Forms::Label^ ml;
	    System::Windows::Forms::Label^ todayWaterLabel;
        System::Windows::Forms::Label^ waterLabel;
		System::Windows::Forms::Button^ refreshButton;
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->mainTitle = (gcnew System::Windows::Forms::Label());
			this->uploadProfile = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->walkingButton = (gcnew System::Windows::Forms::Button());
			this->runningButton = (gcnew System::Windows::Forms::Button());
			this->cyclingButton = (gcnew System::Windows::Forms::Button());
			this->waterButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->infoLabels = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->nameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->genderTextBox = (gcnew System::Windows::Forms::TextBox());
			this->heightTextBox = (gcnew System::Windows::Forms::TextBox());
			this->weightTextBox = (gcnew System::Windows::Forms::TextBox());
			this->waterTextBox = (gcnew System::Windows::Forms::TextBox());
			this->saveChanges = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->todayActivityLabel = (gcnew System::Windows::Forms::Label());
			this->goalLabel = (gcnew System::Windows::Forms::Label());
			this->goalTextBox = (gcnew System::Windows::Forms::TextBox());
			this->ml = (gcnew System::Windows::Forms::Label());
			this->todayWaterLabel = (gcnew System::Windows::Forms::Label());
			this->waterLabel = (gcnew System::Windows::Forms::Label());
			this->refreshButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// mainTitle
			// 
			this->mainTitle->AutoSize = true;
			this->mainTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mainTitle->ForeColor = System::Drawing::Color::White;
			this->mainTitle->Location = System::Drawing::Point(326, 28);
			this->mainTitle->Name = L"mainTitle";
			this->mainTitle->Size = System::Drawing::Size(140, 29);
			this->mainTitle->TabIndex = 2;
			this->mainTitle->Text = L"Dashboard";
			// 
			// uploadProfile
			// 
			this->uploadProfile->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->uploadProfile->Cursor = System::Windows::Forms::Cursors::Hand;
			this->uploadProfile->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->uploadProfile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold));
			this->uploadProfile->Location = System::Drawing::Point(31, 28);
			this->uploadProfile->Name = L"uploadProfile";
			this->uploadProfile->Size = System::Drawing::Size(210, 42);
			this->uploadProfile->TabIndex = 25;
			this->uploadProfile->Text = L"UPLOAD PROFILE";
			this->uploadProfile->UseVisualStyleBackColor = false;
			this->uploadProfile->Click += gcnew System::EventHandler(this, &dashboard::uploadProfileButton_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->pictureBox1->Location = System::Drawing::Point(31, 106);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(210, 200);
			this->pictureBox1->TabIndex = 26;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->pictureBox2->Location = System::Drawing::Point(287, 105);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(210, 200);
			this->pictureBox2->TabIndex = 27;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->pictureBox3->Location = System::Drawing::Point(541, 105);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(210, 200);
			this->pictureBox3->TabIndex = 28;
			this->pictureBox3->TabStop = false;
			// 
			// walkingButton
			// 
			this->walkingButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->walkingButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->walkingButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->walkingButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold));
			this->walkingButton->Location = System::Drawing::Point(31, 340);
			this->walkingButton->Name = L"walkingButton";
			this->walkingButton->Size = System::Drawing::Size(136, 42);
			this->walkingButton->TabIndex = 29;
			this->walkingButton->Text = L"Walking";
			this->walkingButton->UseVisualStyleBackColor = false;
			this->walkingButton->Click += gcnew System::EventHandler(this, &dashboard::walkingButton_Click);
			// 
			// runningButton
			// 
			this->runningButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->runningButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->runningButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->runningButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold));
			this->runningButton->Location = System::Drawing::Point(228, 340);
			this->runningButton->Name = L"runningButton";
			this->runningButton->Size = System::Drawing::Size(136, 42);
			this->runningButton->TabIndex = 30;
			this->runningButton->Text = L"Running";
			this->runningButton->UseVisualStyleBackColor = false;
			this->runningButton->Click += gcnew System::EventHandler(this, &dashboard::runningButton_Click);
			// 
			// cyclingButton
			// 
			this->cyclingButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->cyclingButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cyclingButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cyclingButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold));
			this->cyclingButton->Location = System::Drawing::Point(415, 340);
			this->cyclingButton->Name = L"cyclingButton";
			this->cyclingButton->Size = System::Drawing::Size(136, 42);
			this->cyclingButton->TabIndex = 31;
			this->cyclingButton->Text = L"Cycling";
			this->cyclingButton->UseVisualStyleBackColor = false;
			this->cyclingButton->Click += gcnew System::EventHandler(this, &dashboard::cyclingButton_Click);
			// 
			// waterButton
			// 
			this->waterButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->waterButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->waterButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->waterButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold));
			this->waterButton->Location = System::Drawing::Point(615, 340);
			this->waterButton->Name = L"waterButton";
			this->waterButton->Size = System::Drawing::Size(136, 42);
			this->waterButton->TabIndex = 32;
			this->waterButton->Text = L"Drink water";
			this->waterButton->UseVisualStyleBackColor = false;
			this->waterButton->Click += gcnew System::EventHandler(this, &dashboard::waterButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(39, 115);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(149, 16);
			this->label1->TabIndex = 33;
			this->label1->Text = L"Personal Information";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(295, 115);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(81, 16);
			this->label2->TabIndex = 34;
			this->label2->Text = L"My Activity";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(550, 115);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 16);
			this->label3->TabIndex = 35;
			this->label3->Text = L"Drink Water";
			// 
			// infoLabels
			// 
			this->infoLabels->AutoSize = true;
			this->infoLabels->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->infoLabels->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->infoLabels->ForeColor = System::Drawing::Color::White;
			this->infoLabels->Location = System::Drawing::Point(39, 144);
			this->infoLabels->Margin = System::Windows::Forms::Padding(5, 0, 3, 0);
			this->infoLabels->Name = L"infoLabels";
			this->infoLabels->Size = System::Drawing::Size(114, 112);
			this->infoLabels->TabIndex = 38;
			this->infoLabels->Text = L"• Name:\r\n• Gender:\r\n\r\n• Height:\r\n• Weight: \r\n• Amount of water:\r\n• Activity goal:"
				L"\r\n";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(304, 147);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(178, 32);
			this->label4->TabIndex = 41;
			this->label4->Text = L"Walking + Running + Cycling \r\ntime spent today:";
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(588, 147);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(118, 16);
			this->label5->TabIndex = 42;
			this->label5->Text = L"Drank water today:";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// nameTextBox
			// 
			this->nameTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameTextBox->Location = System::Drawing::Point(103, 140);
			this->nameTextBox->Name = L"nameTextBox";
			this->nameTextBox->ReadOnly = true;
			this->nameTextBox->Size = System::Drawing::Size(118, 18);
			this->nameTextBox->TabIndex = 43;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(132, 262);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 13);
			this->label6->TabIndex = 46;
			// 
			// genderTextBox
			// 
			this->genderTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->genderTextBox->Location = System::Drawing::Point(103, 161);
			this->genderTextBox->Name = L"genderTextBox";
			this->genderTextBox->ReadOnly = true;
			this->genderTextBox->Size = System::Drawing::Size(118, 18);
			this->genderTextBox->TabIndex = 47;
			// 
			// heightTextBox
			// 
			this->heightTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->heightTextBox->Location = System::Drawing::Point(103, 185);
			this->heightTextBox->Name = L"heightTextBox";
			this->heightTextBox->Size = System::Drawing::Size(118, 18);
			this->heightTextBox->TabIndex = 48;
			// 
			// weightTextBox
			// 
			this->weightTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->weightTextBox->Location = System::Drawing::Point(103, 206);
			this->weightTextBox->Name = L"weightTextBox";
			this->weightTextBox->Size = System::Drawing::Size(118, 18);
			this->weightTextBox->TabIndex = 49;
			// 
			// waterTextBox
			// 
			this->waterTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->waterTextBox->Location = System::Drawing::Point(152, 227);
			this->waterTextBox->Name = L"waterTextBox";
			this->waterTextBox->Size = System::Drawing::Size(69, 18);
			this->waterTextBox->TabIndex = 50;
			// 
			// saveChanges
			// 
			this->saveChanges->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->saveChanges->Cursor = System::Windows::Forms::Cursors::Hand;
			this->saveChanges->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->saveChanges->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold));
			this->saveChanges->Location = System::Drawing::Point(69, 272);
			this->saveChanges->Name = L"saveChanges";
			this->saveChanges->Size = System::Drawing::Size(136, 26);
			this->saveChanges->TabIndex = 51;
			this->saveChanges->Text = L"SAVES CHANGES";
			this->saveChanges->UseVisualStyleBackColor = false;
			this->saveChanges->Click += gcnew System::EventHandler(this, &dashboard::saveChanges_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->label7->Location = System::Drawing::Point(369, 206);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(49, 50);
			this->label7->TabIndex = 52;
			this->label7->Text = L"of\r\nmin";
			this->label7->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// todayActivityLabel
			// 
			this->todayActivityLabel->AutoSize = true;
			this->todayActivityLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->todayActivityLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->todayActivityLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->todayActivityLabel->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->todayActivityLabel->Location = System::Drawing::Point(326, 206);
			this->todayActivityLabel->Name = L"todayActivityLabel";
			this->todayActivityLabel->Size = System::Drawing::Size(25, 25);
			this->todayActivityLabel->TabIndex = 53;
			this->todayActivityLabel->Text = L"0";
			this->todayActivityLabel->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// goalLabel
			// 
			this->goalLabel->AutoSize = true;
			this->goalLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->goalLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->goalLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->goalLabel->Location = System::Drawing::Point(424, 206);
			this->goalLabel->Name = L"goalLabel";
			this->goalLabel->Size = System::Drawing::Size(25, 25);
			this->goalLabel->TabIndex = 54;
			this->goalLabel->Text = L"0";
			// 
			// goalTextBox
			// 
			this->goalTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->goalTextBox->Location = System::Drawing::Point(152, 248);
			this->goalTextBox->Name = L"goalTextBox";
			this->goalTextBox->Size = System::Drawing::Size(69, 18);
			this->goalTextBox->TabIndex = 55;
			// 
			// ml
			// 
			this->ml->AutoSize = true;
			this->ml->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->ml->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ml->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->ml->Location = System::Drawing::Point(633, 206);
			this->ml->Name = L"ml";
			this->ml->Size = System::Drawing::Size(36, 50);
			this->ml->TabIndex = 56;
			this->ml->Text = L"of\r\nml";
			this->ml->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// todayWaterLabel
			// 
			this->todayWaterLabel->AutoSize = true;
			this->todayWaterLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->todayWaterLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->todayWaterLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->todayWaterLabel->Location = System::Drawing::Point(577, 206);
			this->todayWaterLabel->Name = L"todayWaterLabel";
			this->todayWaterLabel->Size = System::Drawing::Size(25, 25);
			this->todayWaterLabel->TabIndex = 57;
			this->todayWaterLabel->Text = L"0";
			this->todayWaterLabel->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// waterLabel
			// 
			this->waterLabel->AutoSize = true;
			this->waterLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->waterLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->waterLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->waterLabel->Location = System::Drawing::Point(681, 206);
			this->waterLabel->Name = L"waterLabel";
			this->waterLabel->Size = System::Drawing::Size(25, 25);
			this->waterLabel->TabIndex = 58;
			this->waterLabel->Text = L"0";
			// 
			// refreshButton
			// 
			this->refreshButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->refreshButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->refreshButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->refreshButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold));
			this->refreshButton->Location = System::Drawing::Point(672, 28);
			this->refreshButton->Name = L"refreshButton";
			this->refreshButton->Size = System::Drawing::Size(79, 42);
			this->refreshButton->TabIndex = 59;
			this->refreshButton->Text = L"REFRESH";
			this->refreshButton->UseVisualStyleBackColor = false;
			this->refreshButton->Click += gcnew System::EventHandler(this, &dashboard::refreshButton_Click);
			// 
			// dashboard
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->ClientSize = System::Drawing::Size(784, 411);
			this->Controls->Add(this->refreshButton);
			this->Controls->Add(this->waterLabel);
			this->Controls->Add(this->todayWaterLabel);
			this->Controls->Add(this->ml);
			this->Controls->Add(this->goalTextBox);
			this->Controls->Add(this->goalLabel);
			this->Controls->Add(this->todayActivityLabel);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->saveChanges);
			this->Controls->Add(this->waterTextBox);
			this->Controls->Add(this->weightTextBox);
			this->Controls->Add(this->heightTextBox);
			this->Controls->Add(this->genderTextBox);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->nameTextBox);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->infoLabels);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->waterButton);
			this->Controls->Add(this->cyclingButton);
			this->Controls->Add(this->runningButton);
			this->Controls->Add(this->walkingButton);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->uploadProfile);
			this->Controls->Add(this->mainTitle);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"dashboard";
			this->Text = L"Fitness Tracker";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

	private: System::Void LoadProfileFromFile(String^ filePath) {
		try {
			System::Xml::XmlDocument^ xmlDoc = gcnew System::Xml::XmlDocument();
			xmlDoc->Load(filePath);

			DateTime currentDate = DateTime::Now;
			String^ todayDate = currentDate.ToString("dd:MM:yyyy");

			System::Xml::XmlNode^ profileInfoNode = xmlDoc->SelectSingleNode("/TrainingProfile/ProfileInfo");
			if (profileInfoNode != nullptr) {
				if (profileInfoNode->Attributes["Name"] != nullptr)
					nameTextBox->Text = profileInfoNode->Attributes["Name"]->Value;
				if (profileInfoNode->Attributes["Gender"] != nullptr)
					genderTextBox->Text = profileInfoNode->Attributes["Gender"]->Value;
				if (profileInfoNode->Attributes["Weight"] != nullptr)
					weightTextBox->Text = profileInfoNode->Attributes["Weight"]->Value;
				if (profileInfoNode->Attributes["Height"] != nullptr)
					heightTextBox->Text = profileInfoNode->Attributes["Height"]->Value;
				if (profileInfoNode->Attributes["Water"] != nullptr) {
					waterTextBox->Text = profileInfoNode->Attributes["Water"]->Value;
					waterLabel->Text = profileInfoNode->Attributes["Water"]->Value;
				}
				if (profileInfoNode->Attributes["Goal"] != nullptr) {
					goalTextBox->Text = profileInfoNode->Attributes["Goal"]->Value;
					goalLabel->Text = profileInfoNode->Attributes["Goal"]->Value;
				}
			}

			System::Xml::XmlNode^ todayWalkingNode = xmlDoc->SelectSingleNode("/TrainingProfile/Walking/Date[@value='" + todayDate + "']");
			int totalWalkingTimeToday = 0;
			if (todayWalkingNode != nullptr) {
				for each (System::Xml::XmlNode ^ entryNode in todayWalkingNode->SelectNodes("Entry")) {
					int time;
					if (Int32::TryParse(entryNode->SelectSingleNode("Time")->InnerText, time)) {
						totalWalkingTimeToday += time;
					}
				}
			}

			System::Xml::XmlNode^ todayRunningNode = xmlDoc->SelectSingleNode("/TrainingProfile/Running/Date[@value='" + todayDate + "']");
			int totalRunningTimeToday = 0;
			if (todayRunningNode != nullptr) {
				for each (System::Xml::XmlNode ^ entryNode in todayRunningNode->SelectNodes("Entry")) {
					int time;
					if (Int32::TryParse(entryNode->SelectSingleNode("Time")->InnerText, time)) {
						totalRunningTimeToday += time;
					}
				}
			}

			System::Xml::XmlNode^ todayCyclingNode = xmlDoc->SelectSingleNode("/TrainingProfile/Cycling/Date[@value='" + todayDate + "']");
			int totalCyclingTimeToday = 0;
			if (todayCyclingNode != nullptr) {
				for each (System::Xml::XmlNode ^ entryNode in todayCyclingNode->SelectNodes("Entry")) {
					int time;
					if (Int32::TryParse(entryNode->SelectSingleNode("Time")->InnerText, time)) {
						totalCyclingTimeToday += time;
					}
				}
			}

			int totalActivityToday = totalWalkingTimeToday + totalRunningTimeToday + totalCyclingTimeToday;

			todayActivityLabel->Text = totalActivityToday.ToString();


			System::Xml::XmlNode^ todayWaterNode = xmlDoc->SelectSingleNode("/TrainingProfile/Water/Date[@value='" + todayDate + "']");
			int totalWaterToday = 0;
			if (todayWaterNode != nullptr) {
				for each (System::Xml::XmlNode ^ entryNode in todayWaterNode->SelectNodes("Entry")) {
					int amount;
					if (Int32::TryParse(entryNode->SelectSingleNode("Amount")->InnerText, amount)) {
						totalWaterToday += amount;
					}
				}
			}

			todayWaterLabel->Text = totalWaterToday.ToString();

		}
		catch (Exception^ ex) {
			MessageBox::Show("Error occurred while loading profile: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

private:
	System::Void saveChanges_Click(System::Object^ sender, System::EventArgs^ e) {
		if (currentFilePath == nullptr) {
			MessageBox::Show("No file loaded to save changes.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
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

		try {
			System::Xml::XmlDocument^ xmlDoc = gcnew System::Xml::XmlDocument();
			xmlDoc->Load(currentFilePath);

			System::Xml::XmlNode^ profileInfoNode = xmlDoc->SelectSingleNode("/TrainingProfile/ProfileInfo");
			if (profileInfoNode != nullptr) {
				if (profileInfoNode->Attributes["Name"] != nullptr)
					profileInfoNode->Attributes["Name"]->Value = nameTextBox->Text;
				if (profileInfoNode->Attributes["Gender"] != nullptr)
					profileInfoNode->Attributes["Gender"]->Value = genderTextBox->Text;
				if (profileInfoNode->Attributes["Weight"] != nullptr)
					profileInfoNode->Attributes["Weight"]->Value = weightTextBox->Text;
				if (profileInfoNode->Attributes["Height"] != nullptr)
					profileInfoNode->Attributes["Height"]->Value = heightTextBox->Text;
				if (profileInfoNode->Attributes["Water"] != nullptr)
					profileInfoNode->Attributes["Water"]->Value = waterTextBox->Text;
				if (profileInfoNode->Attributes["Goal"] != nullptr)
					profileInfoNode->Attributes["Goal"]->Value = goalTextBox->Text;

				xmlDoc->Save(currentFilePath);
				MessageBox::Show("Profile saved successfully!\n\nTo display updated information, please, click on 'REFRESH' button.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error occurred while saving profile: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}


	private: System::Void walkingButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (currentFilePath != nullptr) {
			walking^ walkingForm = gcnew walking(currentFilePath, gcnew Action<int>(this, &dashboard::UpdateTotalWalkingTime));
			walkingForm->DataSaved += gcnew walking::DataSavedEventHandler(this, &dashboard::OnDataSaved);
			walkingForm->ShowDialog();
		}
		else {
			MessageBox::Show("Please upload a profile first.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void OnDataSaved() {
		LoadProfileFromFile(currentFilePath);
	}

	private: System::Void uploadProfileButton_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
		openFileDialog->InitialDirectory = Environment::GetFolderPath(Environment::SpecialFolder::DesktopDirectory);
		openFileDialog->Filter = "XML Files (*.xml)|*.xml";
		openFileDialog->FilterIndex = 1;
		openFileDialog->RestoreDirectory = true;

		if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			currentFilePath = openFileDialog->FileName;
			LoadProfileFromFile(currentFilePath);
		}
	}

	private: System::Void UpdateTotalWalkingTime(int timeAdded) {
		totalWalkingTime += timeAdded;
		todayActivityLabel->Text = (totalWalkingTime + totalRunningTime + totalCyclingTime).ToString();
	}

	private: System::Void runningButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (currentFilePath != nullptr) {
			running^ runningForm = gcnew running(currentFilePath, gcnew Action<int>(this, &dashboard::UpdateTotalRunningTime));
			runningForm->DataSaved += gcnew running::DataSavedEventHandler(this, &dashboard::OnDataSaved);
			runningForm->ShowDialog();
		}
		else {
			MessageBox::Show("Please upload a profile first.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void UpdateTotalRunningTime(int timeAdded) {
		totalRunningTime += timeAdded;
		todayActivityLabel->Text = (totalWalkingTime + totalRunningTime + totalCyclingTime).ToString();
	}

	private: System::Void cyclingButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (currentFilePath != nullptr) {
			cycling^ cyclingForm = gcnew cycling(currentFilePath, gcnew Action<int>(this, &dashboard::UpdateTotalCyclingTime));
			cyclingForm->DataSaved += gcnew cycling::DataSavedEventHandler(this, &dashboard::OnDataSaved);
			cyclingForm->ShowDialog();
		}
		else {
			MessageBox::Show("Please upload a profile first.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void UpdateTotalCyclingTime(int timeAdded) {
		totalCyclingTime += timeAdded;
		todayActivityLabel->Text = (totalWalkingTime + totalRunningTime + totalCyclingTime).ToString();
	}

	private: System::Void waterButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (currentFilePath != nullptr) {
			water^ waterForm = gcnew water(currentFilePath, gcnew Action<int>(this, &dashboard::UpdateTotalWater));
			waterForm->DataSaved += gcnew water::DataSavedEventHandler(this, &dashboard::OnDataSaved);
			waterForm->ShowDialog();
		}
		else {
			MessageBox::Show("Please upload a profile first.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void UpdateTotalWater(int amountAdded) {
		totalWater += amountAdded;
		todayWaterLabel->Text = totalWater.ToString();
	}

	private: System::Void refreshButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (currentFilePath != nullptr) {
			LoadProfileFromFile(currentFilePath);
		}
		else {
			MessageBox::Show("Please upload a profile first.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
};
}