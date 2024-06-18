#pragma once

namespace FitnessTracker {

	using namespace System;
	using namespace System::Xml;
	using namespace System::Windows::Forms;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class cycling : public System::Windows::Forms::Form
	{
	public:
		cycling(String^ filePath, System::Action<int>^ updateTotalCyclingTime) {
			InitializeComponent();
			this->filePath = filePath;
			this->updateTotalCyclingTime = updateTotalCyclingTime;

			timeCyclingTextBox->MaxLength = 3;
			distanceCyclingTextBox->MaxLength = 5;
		}

		cycling(const cycling% other)
		{
			this->filePath = other.filePath;
			this->updateTotalCyclingTime = other.updateTotalCyclingTime;
		}

		cycling% operator=(const cycling% other)
		{
			if (this != % other) {
				this->filePath = other.filePath;
				this->updateTotalCyclingTime = other.updateTotalCyclingTime;
			}
			return *this;
		}

		delegate void DataSavedEventHandler();
		event DataSavedEventHandler^ DataSaved;

	protected:
		~cycling()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::String^ filePath;
	private: System::Action<int>^ updateTotalCyclingTime;
	private: System::Windows::Forms::Label^ mainTitle;
	private: System::Windows::Forms::TextBox^ timeCyclingTextBox;
	private: System::Windows::Forms::Label^ infoLabels;
	private: System::Windows::Forms::TextBox^ distanceCyclingTextBox;
	private: System::Windows::Forms::Button^ saveCyclingChanges;
	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->mainTitle = (gcnew System::Windows::Forms::Label());
			   this->timeCyclingTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->infoLabels = (gcnew System::Windows::Forms::Label());
			   this->distanceCyclingTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->saveCyclingChanges = (gcnew System::Windows::Forms::Button());
			   this->SuspendLayout();
			   // 
			   // mainTitle
			   // 
			   this->mainTitle->AutoSize = true;
			   this->mainTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->mainTitle->ForeColor = System::Drawing::Color::White;
			   this->mainTitle->Location = System::Drawing::Point(93, 9);
			   this->mainTitle->Name = L"mainTitle";
			   this->mainTitle->Size = System::Drawing::Size(99, 29);
			   this->mainTitle->TabIndex = 3;
			   this->mainTitle->Text = L"Cycling";
			   // 
			   // timeCyclingTextBox
			   // 
			   this->timeCyclingTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->timeCyclingTextBox->Location = System::Drawing::Point(118, 89);
			   this->timeCyclingTextBox->Name = L"timeCyclingTextBox";
			   this->timeCyclingTextBox->Size = System::Drawing::Size(123, 18);
			   this->timeCyclingTextBox->TabIndex = 46;
			   // 
			   // infoLabels
			   // 
			   this->infoLabels->AutoSize = true;
			   this->infoLabels->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				   static_cast<System::Int32>(static_cast<System::Byte>(26)));
			   this->infoLabels->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->infoLabels->ForeColor = System::Drawing::Color::White;
			   this->infoLabels->Location = System::Drawing::Point(29, 89);
			   this->infoLabels->Margin = System::Windows::Forms::Padding(5, 0, 3, 0);
			   this->infoLabels->Name = L"infoLabels";
			   this->infoLabels->Size = System::Drawing::Size(98, 48);
			   this->infoLabels->TabIndex = 45;
			   this->infoLabels->Text = L"Time (in min):\r\n\r\nDistance (in m):\r\n";
			   // 
			   // distanceCyclingTextBox
			   // 
			   this->distanceCyclingTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->distanceCyclingTextBox->Location = System::Drawing::Point(133, 119);
			   this->distanceCyclingTextBox->Name = L"distanceCyclingTextBox";
			   this->distanceCyclingTextBox->Size = System::Drawing::Size(108, 18);
			   this->distanceCyclingTextBox->TabIndex = 47;
			   // 
			   // saveCyclingChanges
			   // 
			   this->saveCyclingChanges->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(66)));
			   this->saveCyclingChanges->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->saveCyclingChanges->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->saveCyclingChanges->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold));
			   this->saveCyclingChanges->Location = System::Drawing::Point(77, 197);
			   this->saveCyclingChanges->Name = L"saveCyclingChanges";
			   this->saveCyclingChanges->Size = System::Drawing::Size(136, 32);
			   this->saveCyclingChanges->TabIndex = 52;
			   this->saveCyclingChanges->Text = L"SAVE CHANGES";
			   this->saveCyclingChanges->UseVisualStyleBackColor = false;
			   this->saveCyclingChanges->Click += gcnew System::EventHandler(this, &cycling::saveCyclingChanges_Click);
			   // 
			   // cycling
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				   static_cast<System::Int32>(static_cast<System::Byte>(26)));
			   this->ClientSize = System::Drawing::Size(284, 261);
			   this->Controls->Add(this->saveCyclingChanges);
			   this->Controls->Add(this->distanceCyclingTextBox);
			   this->Controls->Add(this->timeCyclingTextBox);
			   this->Controls->Add(this->infoLabels);
			   this->Controls->Add(this->mainTitle);
			   this->Name = L"cycling";
			   this->Text = L"Fitness Tracker";
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }

#pragma endregion

	private: System::Void saveCyclingChanges_Click(System::Object^ sender, System::EventArgs^ e) {

		int time;
		if (timeCyclingTextBox->Text->Length == 0 || !Int32::TryParse(timeCyclingTextBox->Text, time)) {
			MessageBox::Show("Please enter a valid integer for Time. Max 3 symbols.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		int distance;
		if (distanceCyclingTextBox->Text->Length == 0 || !Int32::TryParse(distanceCyclingTextBox->Text, distance)) {
			MessageBox::Show("Please enter a valid integer for Distance. Max 5 symbols.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		try {
			XmlDocument^ xmlDoc = gcnew XmlDocument();
			xmlDoc->Load(filePath);

			String^ currentDate = DateTime::Now.ToString("dd:MM:yyyy");

			XmlNode^ cyclingNode = xmlDoc->SelectSingleNode("/TrainingProfile/Cycling");
			if (cyclingNode == nullptr) {
				cyclingNode = xmlDoc->CreateElement("Cycling");
				xmlDoc->DocumentElement->AppendChild(cyclingNode);
			}

			XmlElement^ dateNode = dynamic_cast<XmlElement^>(cyclingNode->SelectSingleNode("Date[@value='" + currentDate + "']"));
			if (dateNode == nullptr) {
				dateNode = xmlDoc->CreateElement("Date");
				dateNode->SetAttribute("value", currentDate);
				cyclingNode->AppendChild(dateNode);
			}

			XmlElement^ entryNode = xmlDoc->CreateElement("Entry");

			XmlElement^ timeElement = xmlDoc->CreateElement("Time");
			timeElement->InnerText = time.ToString();
			entryNode->AppendChild(timeElement);

			XmlElement^ distanceElement = xmlDoc->CreateElement("Distance");
			distanceElement->InnerText = distance.ToString();
			entryNode->AppendChild(distanceElement);

			dateNode->AppendChild(entryNode);

			xmlDoc->Save(filePath);

			MessageBox::Show("Cycling data saved successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

			DataSaved();
		}

		catch (Exception^ ex) {
			MessageBox::Show("Error occurred while saving cycling data: " + ex->Message, "Error", MessageBoxButtons::OK);
		}
	}
	};
}