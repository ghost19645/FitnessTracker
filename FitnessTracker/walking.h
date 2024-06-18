#pragma once

namespace FitnessTracker {

	using namespace System;
	using namespace System::Xml;
	using namespace System::Windows::Forms;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class walking : public System::Windows::Forms::Form
	{
	public:
		walking(String^ filePath, System::Action<int>^ updateTotalWalkingTime) {
			InitializeComponent();
			this->filePath = filePath;
			this->updateTotalWalkingTime = updateTotalWalkingTime;

			timeWalkingTextBox->MaxLength = 3;
			distanceWalkingTextBox->MaxLength = 5;
		}

		walking(const walking% other)
		{
			this->filePath = other.filePath;
			this->updateTotalWalkingTime = other.updateTotalWalkingTime;
		}

		walking% operator=(const walking% other)
		{
			if (this != % other) {
				this->filePath = other.filePath;
				this->updateTotalWalkingTime = other.updateTotalWalkingTime;
			}
			return *this;
		}

		delegate void DataSavedEventHandler();
		event DataSavedEventHandler^ DataSaved;

	protected:
		~walking()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::String^ filePath;
		System::Action<int>^ updateTotalWalkingTime;
		System::Windows::Forms::Label^ mainTitle;
		System::Windows::Forms::TextBox^ timeWalkingTextBox;
		System::Windows::Forms::Label^ infoLabels;
		System::Windows::Forms::TextBox^ distanceWalkingTextBox;
		System::Windows::Forms::Button^ saveWalkingChanges;
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->mainTitle = (gcnew System::Windows::Forms::Label());
			this->timeWalkingTextBox = (gcnew System::Windows::Forms::TextBox());
			this->infoLabels = (gcnew System::Windows::Forms::Label());
			this->distanceWalkingTextBox = (gcnew System::Windows::Forms::TextBox());
			this->saveWalkingChanges = (gcnew System::Windows::Forms::Button());
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
			this->mainTitle->Size = System::Drawing::Size(106, 29);
			this->mainTitle->TabIndex = 3;
			this->mainTitle->Text = L"Walking";
			// 
			// timeWalkingTextBox
			// 
			this->timeWalkingTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->timeWalkingTextBox->Location = System::Drawing::Point(116, 89);
			this->timeWalkingTextBox->Name = L"timeWalkingTextBox";
			this->timeWalkingTextBox->Size = System::Drawing::Size(125, 18);
			this->timeWalkingTextBox->TabIndex = 46;
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
			this->infoLabels->Size = System::Drawing::Size(98, 64);
			this->infoLabels->TabIndex = 45;
			this->infoLabels->Text = L"Time (in min):\r\n\r\nDistance (in m):\r\n\r\n";
			// 
			// distanceWalkingTextBox
			// 
			this->distanceWalkingTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->distanceWalkingTextBox->Location = System::Drawing::Point(133, 119);
			this->distanceWalkingTextBox->Name = L"distanceWalkingTextBox";
			this->distanceWalkingTextBox->Size = System::Drawing::Size(108, 18);
			this->distanceWalkingTextBox->TabIndex = 47;
			// 
			// saveWalkingChanges
			// 
			this->saveWalkingChanges->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->saveWalkingChanges->Cursor = System::Windows::Forms::Cursors::Hand;
			this->saveWalkingChanges->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->saveWalkingChanges->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold));
			this->saveWalkingChanges->Location = System::Drawing::Point(77, 197);
			this->saveWalkingChanges->Name = L"saveWalkingChanges";
			this->saveWalkingChanges->Size = System::Drawing::Size(136, 32);
			this->saveWalkingChanges->TabIndex = 52;
			this->saveWalkingChanges->Text = L"SAVE CHANGES";
			this->saveWalkingChanges->UseVisualStyleBackColor = false;
			this->saveWalkingChanges->Click += gcnew System::EventHandler(this, &walking::saveWalkingChanges_Click);
			// 
			// walking
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->saveWalkingChanges);
			this->Controls->Add(this->distanceWalkingTextBox);
			this->Controls->Add(this->timeWalkingTextBox);
			this->Controls->Add(this->infoLabels);
			this->Controls->Add(this->mainTitle);
			this->Name = L"walking";
			this->Text = L"Fitness Tracker";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void saveWalkingChanges_Click(System::Object^ sender, System::EventArgs^ e) {

		int time;
		if (timeWalkingTextBox->Text->Length == 0 || !Int32::TryParse(timeWalkingTextBox->Text, time)) {
			MessageBox::Show("Please enter a valid integer for Time. Max 3 symbols.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		int distance;
		if (distanceWalkingTextBox->Text->Length == 0 || !Int32::TryParse(distanceWalkingTextBox->Text, distance)) {
			MessageBox::Show("Please enter a valid integer for Distance. Max 5 symbols.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		try {
			XmlDocument^ xmlDoc = gcnew XmlDocument();
			xmlDoc->Load(filePath);

			String^ currentDate = DateTime::Now.ToString("dd:MM:yyyy");

			XmlNode^ walkingNode = xmlDoc->SelectSingleNode("/TrainingProfile/Walking");
			if (walkingNode == nullptr) {
				walkingNode = xmlDoc->CreateElement("Walking");
				xmlDoc->DocumentElement->AppendChild(walkingNode);
			}

			XmlElement^ dateNode = dynamic_cast<XmlElement^>(walkingNode->SelectSingleNode("Date[@value='" + currentDate + "']"));
			if (dateNode == nullptr) {
				dateNode = xmlDoc->CreateElement("Date");
				dateNode->SetAttribute("value", currentDate);
				walkingNode->AppendChild(dateNode);
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

			MessageBox::Show("Walking data saved successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

			DataSaved();
		}

		catch (Exception^ ex) {
			MessageBox::Show("Error occurred while saving walking data: " + ex->Message, "Error", MessageBoxButtons::OK);
		}
	}
	};
}