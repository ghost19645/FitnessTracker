#pragma once

namespace FitnessTracker {

	using namespace System;
	using namespace System::Xml;
	using namespace System::Windows::Forms;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class water : public System::Windows::Forms::Form
	{
	public:
		water(String^ filePath, System::Action<int>^ updateTotalWater) {
			InitializeComponent();
			this->filePath = filePath;
			this->updateTotalWater = updateTotalWater;

			drankWaterTextBox->MaxLength = 5;
		}

		water(const water% other)
		{
			this->filePath = other.filePath;
			this->updateTotalWater = other.updateTotalWater;
		}

		water% operator=(const water% other)
		{
			if (this != % other) {
				this->filePath = other.filePath;
				this->updateTotalWater = other.updateTotalWater;
			}
			return *this;
		}

		delegate void DataSavedEventHandler();
		event DataSavedEventHandler^ DataSaved;

	protected:
		~water()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::String^ filePath;
		System::Action<int>^ updateTotalWater;
		System::Windows::Forms::Label^ mainTitle;
		System::Windows::Forms::TextBox^ drankWaterTextBox;
		System::Windows::Forms::Label^ infoLabels;
		System::Windows::Forms::Button^ saveWaterChanges;
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->mainTitle = (gcnew System::Windows::Forms::Label());
			this->drankWaterTextBox = (gcnew System::Windows::Forms::TextBox());
			this->infoLabels = (gcnew System::Windows::Forms::Label());
			this->saveWaterChanges = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// mainTitle
			// 
			this->mainTitle->AutoSize = true;
			this->mainTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mainTitle->ForeColor = System::Drawing::Color::White;
			this->mainTitle->Location = System::Drawing::Point(72, 9);
			this->mainTitle->Name = L"mainTitle";
			this->mainTitle->Size = System::Drawing::Size(153, 29);
			this->mainTitle->TabIndex = 3;
			this->mainTitle->Text = L"Water drank";
			// 
			// drankWaterTextBox
			// 
			this->drankWaterTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->drankWaterTextBox->Location = System::Drawing::Point(148, 89);
			this->drankWaterTextBox->Name = L"drankWaterTextBox";
			this->drankWaterTextBox->Size = System::Drawing::Size(114, 18);
			this->drankWaterTextBox->TabIndex = 46;
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
			this->infoLabels->Size = System::Drawing::Size(113, 16);
			this->infoLabels->TabIndex = 45;
			this->infoLabels->Text = L"Water drank in ml:";
			// 
			// saveWaterChanges
			// 
			this->saveWaterChanges->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->saveWaterChanges->Cursor = System::Windows::Forms::Cursors::Hand;
			this->saveWaterChanges->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->saveWaterChanges->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold));
			this->saveWaterChanges->Location = System::Drawing::Point(77, 197);
			this->saveWaterChanges->Name = L"saveWaterChanges";
			this->saveWaterChanges->Size = System::Drawing::Size(136, 32);
			this->saveWaterChanges->TabIndex = 52;
			this->saveWaterChanges->Text = L"SAVE CHANGES";
			this->saveWaterChanges->UseVisualStyleBackColor = false;
			this->saveWaterChanges->Click += gcnew System::EventHandler(this, &water::saveWaterChanges_Click);
			// 
			// water
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->ClientSize = System::Drawing::Size(293, 261);
			this->Controls->Add(this->saveWaterChanges);
			this->Controls->Add(this->drankWaterTextBox);
			this->Controls->Add(this->infoLabels);
			this->Controls->Add(this->mainTitle);
			this->Name = L"water";
			this->Text = L"Fitness Tracker";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

	private: System::Void saveWaterChanges_Click(System::Object^ sender, System::EventArgs^ e) {
		int amount;
		if (drankWaterTextBox->Text->Length == 0 || !Int32::TryParse(drankWaterTextBox->Text, amount)) {
			MessageBox::Show("Please enter a valid integer for Water. Max 4 symbols.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		try {
			XmlDocument^ xmlDoc = gcnew XmlDocument();
			xmlDoc->Load(filePath);

			String^ currentDate = DateTime::Now.ToString("dd:MM:yyyy");

			XmlNode^ waterNode = xmlDoc->SelectSingleNode("/TrainingProfile/Water");
			if (waterNode == nullptr) {
				waterNode = xmlDoc->CreateElement("Water");
				xmlDoc->DocumentElement->AppendChild(waterNode);
			}

			XmlElement^ dateNode = dynamic_cast<XmlElement^>(waterNode->SelectSingleNode("Date[@value='" + currentDate + "']"));
			if (dateNode == nullptr) {
				dateNode = xmlDoc->CreateElement("Date");
				dateNode->SetAttribute("value", currentDate);
				waterNode->AppendChild(dateNode);
			}

			XmlElement^ entryNode = xmlDoc->CreateElement("Entry");

			XmlElement^ waterElement = xmlDoc->CreateElement("Amount");
			waterElement->InnerText = amount.ToString();
			entryNode->AppendChild(waterElement);

			dateNode->AppendChild(entryNode);

			xmlDoc->Save(filePath);

			MessageBox::Show("Water data saved successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

			DataSaved();

			updateTotalWater(amount);
		}

		catch (Exception^ ex) {
			MessageBox::Show("Error occurred while saving water data: " + ex->Message, "Error", MessageBoxButtons::OK);
		}
	}
	};
}