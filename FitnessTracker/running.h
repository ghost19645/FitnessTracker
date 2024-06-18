#pragma once

namespace FitnessTracker {

	using namespace System;
	using namespace System::Xml;
	using namespace System::Windows::Forms;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class running : public System::Windows::Forms::Form
	{
	public:
		running(String^ filePath, System::Action<int>^ updateTotalRunningTime) {
			InitializeComponent();
			this->filePath = filePath;
			this->updateTotalRunningTime = updateTotalRunningTime;

			timeRunningTextBox->MaxLength = 3;
			distanceRunningTextBox->MaxLength = 5;
		}

		running(const running% other)
		{
			this->filePath = other.filePath;
			this->updateTotalRunningTime = other.updateTotalRunningTime;
		}

		running% operator=(const running% other)
		{
			if (this != % other) {
				this->filePath = other.filePath;
				this->updateTotalRunningTime = other.updateTotalRunningTime;
			}
			return *this;
		}

		delegate void DataSavedEventHandler();
		event DataSavedEventHandler^ DataSaved;

	protected:
		~running()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::String^ filePath;
		System::Action<int>^ updateTotalRunningTime;
		System::Windows::Forms::Label^ mainTitle;
		System::Windows::Forms::TextBox^ timeRunningTextBox;
		System::Windows::Forms::Label^ infoLabels;
		System::Windows::Forms::TextBox^ distanceRunningTextBox;
		System::Windows::Forms::Button^ saveRunningChanges;
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->mainTitle = (gcnew System::Windows::Forms::Label());
			this->timeRunningTextBox = (gcnew System::Windows::Forms::TextBox());
			this->infoLabels = (gcnew System::Windows::Forms::Label());
			this->distanceRunningTextBox = (gcnew System::Windows::Forms::TextBox());
			this->saveRunningChanges = (gcnew System::Windows::Forms::Button());
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
			this->mainTitle->Size = System::Drawing::Size(109, 29);
			this->mainTitle->TabIndex = 3;
			this->mainTitle->Text = L"Running";
			// 
			// timeRunningTextBox
			// 
			this->timeRunningTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->timeRunningTextBox->Location = System::Drawing::Point(116, 89);
			this->timeRunningTextBox->Name = L"timeRunningTextBox";
			this->timeRunningTextBox->Size = System::Drawing::Size(125, 18);
			this->timeRunningTextBox->TabIndex = 46;
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
			// distanceRunningTextBox
			// 
			this->distanceRunningTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->distanceRunningTextBox->Location = System::Drawing::Point(133, 119);
			this->distanceRunningTextBox->Name = L"distanceRunningTextBox";
			this->distanceRunningTextBox->Size = System::Drawing::Size(108, 18);
			this->distanceRunningTextBox->TabIndex = 47;
			// 
			// saveRunningChanges
			// 
			this->saveRunningChanges->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->saveRunningChanges->Cursor = System::Windows::Forms::Cursors::Hand;
			this->saveRunningChanges->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->saveRunningChanges->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold));
			this->saveRunningChanges->Location = System::Drawing::Point(77, 197);
			this->saveRunningChanges->Name = L"saveRunningChanges";
			this->saveRunningChanges->Size = System::Drawing::Size(136, 32);
			this->saveRunningChanges->TabIndex = 52;
			this->saveRunningChanges->Text = L"SAVE CHANGES";
			this->saveRunningChanges->UseVisualStyleBackColor = false;
			this->saveRunningChanges->Click += gcnew System::EventHandler(this, &running::saveRunningChanges_Click);
			// 
			// running
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->saveRunningChanges);
			this->Controls->Add(this->distanceRunningTextBox);
			this->Controls->Add(this->timeRunningTextBox);
			this->Controls->Add(this->infoLabels);
			this->Controls->Add(this->mainTitle);
			this->Name = L"running";
			this->Text = L"Fitness Tracker";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

	private: System::Void saveRunningChanges_Click(System::Object^ sender, System::EventArgs^ e) {

		int time;
		if (timeRunningTextBox->Text->Length == 0 || !Int32::TryParse(timeRunningTextBox->Text, time)) {
			MessageBox::Show("Please enter a valid integer for Time. Max 3 symbols.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		int distance;
		if (distanceRunningTextBox->Text->Length == 0 || !Int32::TryParse(distanceRunningTextBox->Text, distance)) {
			MessageBox::Show("Please enter a valid integer for Distance. Max 5 symbols.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		try {
			XmlDocument^ xmlDoc = gcnew XmlDocument();
			xmlDoc->Load(filePath);

			String^ currentDate = DateTime::Now.ToString("dd:MM:yyyy");

			XmlNode^ runningNode = xmlDoc->SelectSingleNode("/TrainingProfile/Running");
			if (runningNode == nullptr) {
				runningNode = xmlDoc->CreateElement("Running");
				xmlDoc->DocumentElement->AppendChild(runningNode);
			}

			XmlElement^ dateNode = dynamic_cast<XmlElement^>(runningNode->SelectSingleNode("Date[@value='" + currentDate + "']"));
			if (dateNode == nullptr) {
				dateNode = xmlDoc->CreateElement("Date");
				dateNode->SetAttribute("value", currentDate);
				runningNode->AppendChild(dateNode);
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

			MessageBox::Show("Running data saved successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

			DataSaved();
		}

		catch (Exception^ ex) {
			MessageBox::Show("Error occurred while saving running data: " + ex->Message, "Error", MessageBoxButtons::OK);
		}
	}
	};
}