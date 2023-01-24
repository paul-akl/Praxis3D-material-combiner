#pragma once

#include <stdlib.h>
#include <string.h>
#include <msclr\marshal_cppstd.h>
#include <string>
#include <thread>

#include "TextureLoader.h"

namespace CppCLRWinFormsProject {

	//using namespace System;
	//using namespace System::ComponentModel;
	//using namespace System::Collections;
	//using namespace System::Windows::Forms;
	//using namespace System::Data;
	//using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			m_textureLoader = new TextureLoader;
			InitializeComponent();
			this->Icon = gcnew System::Drawing::Icon(L"praxis_icon.ico");
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if(components)
			{
				delete components;
			}

			delete m_textureLoader;
		}

	private: System::Windows::Forms::MenuStrip ^m_menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem ^fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem ^openFileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem ^saveDirectoryToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator ^toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem ^exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem ^helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem ^sourceToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem ^licenseToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem ^aboutToolStripMenuItem;
	private: System::Windows::Forms::Label ^m_roughnessLabel;
	private: System::Windows::Forms::TextBox ^m_roughnessTextBox;
	private: System::Windows::Forms::TextBox ^m_metalnessTextBox;
	private: System::Windows::Forms::Label ^m_metalnessLabel;
	private: System::Windows::Forms::TextBox ^m_heightTextBox;
	private: System::Windows::Forms::Label ^m_heightLabel;
	private: System::Windows::Forms::TextBox ^m_aoTextBox;
	private: System::Windows::Forms::Label ^m_ambientOcclusionLabel;
	private: System::Windows::Forms::Label ^label1;
	private: System::Windows::Forms::CheckBox ^m_roughnessCheckBox;
	private: System::Windows::Forms::CheckBox ^m_metalnessCheckBox;
	private: System::Windows::Forms::CheckBox ^m_heightCheckBox;
	private: System::Windows::Forms::CheckBox ^m_aoCheckBox;
	private: System::Windows::Forms::Button ^m_roughnessBrowseButton;
	private: System::Windows::Forms::Button ^m_metalnessBrowseButton;
	private: System::Windows::Forms::Button ^m_heightBrowseButton;
	private: System::Windows::Forms::Button ^m_aoBrowseButton;
	private: System::Windows::Forms::Label ^label2;
	private: System::Windows::Forms::Button ^m_rmhaoBrowseButton;
	private: System::Windows::Forms::TextBox ^m_rmhaoTextBox;
	private: System::Windows::Forms::Label ^m_rmhaoLabel;
	private: System::Windows::Forms::StatusStrip ^m_statusStrip;
	private: System::Windows::Forms::ToolStripStatusLabel ^m_statusLabel1;
	private: System::Windows::Forms::Button ^m_combineButton;
	private: System::Windows::Forms::OpenFileDialog ^m_openFileDialog;
	private: System::Windows::Forms::SaveFileDialog ^m_saveFileDialog;
	private: System::Windows::Forms::ToolStripStatusLabel ^m_statusLabelState;
	private: System::Windows::Forms::ToolStripStatusLabel ^toolStripStatusLabel1;
	private: System::Windows::Forms::CheckBox ^m_aoInvertCheckBox;
	private: System::Windows::Forms::CheckBox ^m_heightInvertCheckBox;
	private: System::Windows::Forms::CheckBox ^m_metalnessInvertCheckBox;
	private: System::Windows::Forms::CheckBox ^m_roughnessInvertCheckBox;
	private: System::Windows::Forms::RadioButton ^m_radioButtonUseRGB;
	private: System::Windows::Forms::RadioButton ^m_radioButtonUseR;






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
			this->m_menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveDirectoryToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sourceToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->licenseToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->m_roughnessLabel = (gcnew System::Windows::Forms::Label());
			this->m_roughnessTextBox = (gcnew System::Windows::Forms::TextBox());
			this->m_metalnessTextBox = (gcnew System::Windows::Forms::TextBox());
			this->m_metalnessLabel = (gcnew System::Windows::Forms::Label());
			this->m_heightTextBox = (gcnew System::Windows::Forms::TextBox());
			this->m_heightLabel = (gcnew System::Windows::Forms::Label());
			this->m_aoTextBox = (gcnew System::Windows::Forms::TextBox());
			this->m_ambientOcclusionLabel = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->m_roughnessCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->m_metalnessCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->m_heightCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->m_aoCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->m_roughnessBrowseButton = (gcnew System::Windows::Forms::Button());
			this->m_metalnessBrowseButton = (gcnew System::Windows::Forms::Button());
			this->m_heightBrowseButton = (gcnew System::Windows::Forms::Button());
			this->m_aoBrowseButton = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->m_rmhaoBrowseButton = (gcnew System::Windows::Forms::Button());
			this->m_rmhaoTextBox = (gcnew System::Windows::Forms::TextBox());
			this->m_rmhaoLabel = (gcnew System::Windows::Forms::Label());
			this->m_statusStrip = (gcnew System::Windows::Forms::StatusStrip());
			this->m_statusLabelState = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->m_statusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->m_combineButton = (gcnew System::Windows::Forms::Button());
			this->m_openFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->m_saveFileDialog = (gcnew System::Windows::Forms::SaveFileDialog());
			this->m_aoInvertCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->m_heightInvertCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->m_metalnessInvertCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->m_roughnessInvertCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->m_radioButtonUseRGB = (gcnew System::Windows::Forms::RadioButton());
			this->m_radioButtonUseR = (gcnew System::Windows::Forms::RadioButton());
			this->m_menuStrip1->SuspendLayout();
			this->m_statusStrip->SuspendLayout();
			this->SuspendLayout();
			// 
			// m_menuStrip1
			// 
			this->m_menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem ^  >(3) {
				this->fileToolStripMenuItem,
					this->helpToolStripMenuItem, this->aboutToolStripMenuItem
			});
			this->m_menuStrip1->Location = System::Drawing::Point(0, 0);
			this->m_menuStrip1->Name = L"m_menuStrip1";
			this->m_menuStrip1->Size = System::Drawing::Size(731, 24);
			this->m_menuStrip1->TabIndex = 0;
			this->m_menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem ^  >(4) {
				this->openFileToolStripMenuItem,
					this->saveDirectoryToolStripMenuItem, this->toolStripSeparator1, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// openFileToolStripMenuItem
			// 
			this->openFileToolStripMenuItem->Name = L"openFileToolStripMenuItem";
			this->openFileToolStripMenuItem->Size = System::Drawing::Size(157, 22);
			this->openFileToolStripMenuItem->Text = L"Open file...";
			this->openFileToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::openFileToolStripMenuItem_Click);
			// 
			// saveDirectoryToolStripMenuItem
			// 
			this->saveDirectoryToolStripMenuItem->Name = L"saveDirectoryToolStripMenuItem";
			this->saveDirectoryToolStripMenuItem->Size = System::Drawing::Size(157, 22);
			this->saveDirectoryToolStripMenuItem->Text = L"Save directory...";
			this->saveDirectoryToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::saveDirectoryToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(154, 6);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(157, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem ^  >(2) {
				this->sourceToolStripMenuItem,
					this->licenseToolStripMenuItem
			});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// sourceToolStripMenuItem
			// 
			this->sourceToolStripMenuItem->Name = L"sourceToolStripMenuItem";
			this->sourceToolStripMenuItem->Size = System::Drawing::Size(113, 22);
			this->sourceToolStripMenuItem->Text = L"Source";
			this->sourceToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::sourceToolStripMenuItem_Click);
			// 
			// licenseToolStripMenuItem
			// 
			this->licenseToolStripMenuItem->Name = L"licenseToolStripMenuItem";
			this->licenseToolStripMenuItem->Size = System::Drawing::Size(113, 22);
			this->licenseToolStripMenuItem->Text = L"License";
			this->licenseToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::licenseToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::aboutToolStripMenuItem_Click);
			// 
			// m_roughnessLabel
			// 
			this->m_roughnessLabel->AutoSize = true;
			this->m_roughnessLabel->Location = System::Drawing::Point(43, 57);
			this->m_roughnessLabel->Name = L"m_roughnessLabel";
			this->m_roughnessLabel->Size = System::Drawing::Size(64, 13);
			this->m_roughnessLabel->TabIndex = 1;
			this->m_roughnessLabel->Text = L"Roughness:";
			this->m_roughnessLabel->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// m_roughnessTextBox
			// 
			this->m_roughnessTextBox->Location = System::Drawing::Point(110, 54);
			this->m_roughnessTextBox->Name = L"m_roughnessTextBox";
			this->m_roughnessTextBox->Size = System::Drawing::Size(439, 20);
			this->m_roughnessTextBox->TabIndex = 2;
			this->m_roughnessTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// m_metalnessTextBox
			// 
			this->m_metalnessTextBox->Location = System::Drawing::Point(110, 80);
			this->m_metalnessTextBox->Name = L"m_metalnessTextBox";
			this->m_metalnessTextBox->Size = System::Drawing::Size(439, 20);
			this->m_metalnessTextBox->TabIndex = 4;
			this->m_metalnessTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// m_metalnessLabel
			// 
			this->m_metalnessLabel->AutoSize = true;
			this->m_metalnessLabel->Location = System::Drawing::Point(49, 83);
			this->m_metalnessLabel->Name = L"m_metalnessLabel";
			this->m_metalnessLabel->Size = System::Drawing::Size(58, 13);
			this->m_metalnessLabel->TabIndex = 3;
			this->m_metalnessLabel->Text = L"Metalness:";
			// 
			// m_heightTextBox
			// 
			this->m_heightTextBox->Location = System::Drawing::Point(110, 106);
			this->m_heightTextBox->Name = L"m_heightTextBox";
			this->m_heightTextBox->Size = System::Drawing::Size(439, 20);
			this->m_heightTextBox->TabIndex = 6;
			this->m_heightTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// m_heightLabel
			// 
			this->m_heightLabel->AutoSize = true;
			this->m_heightLabel->Location = System::Drawing::Point(66, 109);
			this->m_heightLabel->Name = L"m_heightLabel";
			this->m_heightLabel->Size = System::Drawing::Size(41, 13);
			this->m_heightLabel->TabIndex = 5;
			this->m_heightLabel->Text = L"Height:";
			// 
			// m_aoTextBox
			// 
			this->m_aoTextBox->Location = System::Drawing::Point(110, 132);
			this->m_aoTextBox->Name = L"m_aoTextBox";
			this->m_aoTextBox->Size = System::Drawing::Size(439, 20);
			this->m_aoTextBox->TabIndex = 8;
			this->m_aoTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// m_ambientOcclusionLabel
			// 
			this->m_ambientOcclusionLabel->AutoSize = true;
			this->m_ambientOcclusionLabel->Location = System::Drawing::Point(11, 135);
			this->m_ambientOcclusionLabel->Name = L"m_ambientOcclusionLabel";
			this->m_ambientOcclusionLabel->Size = System::Drawing::Size(96, 13);
			this->m_ambientOcclusionLabel->TabIndex = 7;
			this->m_ambientOcclusionLabel->Text = L"Ambient occlusion:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(267, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(167, 17);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Input individual materials:";
			// 
			// m_roughnessCheckBox
			// 
			this->m_roughnessCheckBox->AutoSize = true;
			this->m_roughnessCheckBox->Location = System::Drawing::Point(669, 56);
			this->m_roughnessCheckBox->Name = L"m_roughnessCheckBox";
			this->m_roughnessCheckBox->Size = System::Drawing::Size(61, 17);
			this->m_roughnessCheckBox->TabIndex = 10;
			this->m_roughnessCheckBox->Text = L"unused";
			this->m_roughnessCheckBox->UseVisualStyleBackColor = true;
			this->m_roughnessCheckBox->CheckedChanged += gcnew System::EventHandler(this, &Form1::m_roughnessCheckBox_CheckedChanged);
			// 
			// m_metalnessCheckBox
			// 
			this->m_metalnessCheckBox->AutoSize = true;
			this->m_metalnessCheckBox->Location = System::Drawing::Point(669, 82);
			this->m_metalnessCheckBox->Name = L"m_metalnessCheckBox";
			this->m_metalnessCheckBox->Size = System::Drawing::Size(61, 17);
			this->m_metalnessCheckBox->TabIndex = 11;
			this->m_metalnessCheckBox->Text = L"unused";
			this->m_metalnessCheckBox->UseVisualStyleBackColor = true;
			this->m_metalnessCheckBox->CheckedChanged += gcnew System::EventHandler(this, &Form1::m_metalnessCheckBox_CheckedChanged);
			// 
			// m_heightCheckBox
			// 
			this->m_heightCheckBox->AutoSize = true;
			this->m_heightCheckBox->Location = System::Drawing::Point(669, 108);
			this->m_heightCheckBox->Name = L"m_heightCheckBox";
			this->m_heightCheckBox->Size = System::Drawing::Size(61, 17);
			this->m_heightCheckBox->TabIndex = 12;
			this->m_heightCheckBox->Text = L"unused";
			this->m_heightCheckBox->UseVisualStyleBackColor = true;
			this->m_heightCheckBox->CheckedChanged += gcnew System::EventHandler(this, &Form1::m_heightCheckBox_CheckedChanged);
			// 
			// m_aoCheckBox
			// 
			this->m_aoCheckBox->AutoSize = true;
			this->m_aoCheckBox->Location = System::Drawing::Point(669, 134);
			this->m_aoCheckBox->Name = L"m_aoCheckBox";
			this->m_aoCheckBox->Size = System::Drawing::Size(61, 17);
			this->m_aoCheckBox->TabIndex = 13;
			this->m_aoCheckBox->Text = L"unused";
			this->m_aoCheckBox->UseVisualStyleBackColor = true;
			this->m_aoCheckBox->CheckedChanged += gcnew System::EventHandler(this, &Form1::m_aoCheckBox_CheckedChanged);
			// 
			// m_roughnessBrowseButton
			// 
			this->m_roughnessBrowseButton->Location = System::Drawing::Point(555, 54);
			this->m_roughnessBrowseButton->Name = L"m_roughnessBrowseButton";
			this->m_roughnessBrowseButton->Size = System::Drawing::Size(50, 20);
			this->m_roughnessBrowseButton->TabIndex = 14;
			this->m_roughnessBrowseButton->Text = L"Browse";
			this->m_roughnessBrowseButton->UseVisualStyleBackColor = true;
			this->m_roughnessBrowseButton->Click += gcnew System::EventHandler(this, &Form1::m_roughnessBrowseButton_Click);
			// 
			// m_metalnessBrowseButton
			// 
			this->m_metalnessBrowseButton->Location = System::Drawing::Point(555, 80);
			this->m_metalnessBrowseButton->Name = L"m_metalnessBrowseButton";
			this->m_metalnessBrowseButton->Size = System::Drawing::Size(50, 20);
			this->m_metalnessBrowseButton->TabIndex = 15;
			this->m_metalnessBrowseButton->Text = L"Browse";
			this->m_metalnessBrowseButton->UseVisualStyleBackColor = true;
			this->m_metalnessBrowseButton->Click += gcnew System::EventHandler(this, &Form1::m_metalnessBrowseButton_Click);
			// 
			// m_heightBrowseButton
			// 
			this->m_heightBrowseButton->Location = System::Drawing::Point(555, 106);
			this->m_heightBrowseButton->Name = L"m_heightBrowseButton";
			this->m_heightBrowseButton->Size = System::Drawing::Size(50, 20);
			this->m_heightBrowseButton->TabIndex = 16;
			this->m_heightBrowseButton->Text = L"Browse";
			this->m_heightBrowseButton->UseVisualStyleBackColor = true;
			this->m_heightBrowseButton->Click += gcnew System::EventHandler(this, &Form1::m_heightBrowseButton_Click);
			// 
			// m_aoBrowseButton
			// 
			this->m_aoBrowseButton->Location = System::Drawing::Point(555, 132);
			this->m_aoBrowseButton->Name = L"m_aoBrowseButton";
			this->m_aoBrowseButton->Size = System::Drawing::Size(50, 20);
			this->m_aoBrowseButton->TabIndex = 17;
			this->m_aoBrowseButton->Text = L"Browse";
			this->m_aoBrowseButton->UseVisualStyleBackColor = true;
			this->m_aoBrowseButton->Click += gcnew System::EventHandler(this, &Form1::m_aoBrowseButton_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(239, 202);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(229, 17);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Output combined RMHAO material:";
			// 
			// m_rmhaoBrowseButton
			// 
			this->m_rmhaoBrowseButton->Location = System::Drawing::Point(555, 240);
			this->m_rmhaoBrowseButton->Name = L"m_rmhaoBrowseButton";
			this->m_rmhaoBrowseButton->Size = System::Drawing::Size(50, 20);
			this->m_rmhaoBrowseButton->TabIndex = 21;
			this->m_rmhaoBrowseButton->Text = L"Browse";
			this->m_rmhaoBrowseButton->UseVisualStyleBackColor = true;
			this->m_rmhaoBrowseButton->Click += gcnew System::EventHandler(this, &Form1::m_rmhaoBrowseButton_Click);
			// 
			// m_rmhaoTextBox
			// 
			this->m_rmhaoTextBox->Location = System::Drawing::Point(110, 240);
			this->m_rmhaoTextBox->Name = L"m_rmhaoTextBox";
			this->m_rmhaoTextBox->Size = System::Drawing::Size(439, 20);
			this->m_rmhaoTextBox->TabIndex = 20;
			this->m_rmhaoTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// m_rmhaoLabel
			// 
			this->m_rmhaoLabel->AutoSize = true;
			this->m_rmhaoLabel->Location = System::Drawing::Point(54, 243);
			this->m_rmhaoLabel->Name = L"m_rmhaoLabel";
			this->m_rmhaoLabel->Size = System::Drawing::Size(50, 13);
			this->m_rmhaoLabel->TabIndex = 19;
			this->m_rmhaoLabel->Text = L"RMHAO:";
			// 
			// m_statusStrip
			// 
			this->m_statusStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem ^  >(3) {
				this->m_statusLabelState,
					this->toolStripStatusLabel1, this->m_statusLabel1
			});
			this->m_statusStrip->Location = System::Drawing::Point(0, 323);
			this->m_statusStrip->Name = L"m_statusStrip";
			this->m_statusStrip->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->m_statusStrip->Size = System::Drawing::Size(731, 22);
			this->m_statusStrip->SizingGrip = false;
			this->m_statusStrip->TabIndex = 22;
			// 
			// m_statusLabelState
			// 
			this->m_statusLabelState->Margin = System::Windows::Forms::Padding(0, 3, 20, 2);
			this->m_statusLabelState->Name = L"m_statusLabelState";
			this->m_statusLabelState->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->m_statusLabelState->Size = System::Drawing::Size(43, 17);
			this->m_statusLabelState->Text = L"READY";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(518, 17);
			this->toolStripStatusLabel1->Spring = true;
			// 
			// m_statusLabel1
			// 
			this->m_statusLabel1->Name = L"m_statusLabel1";
			this->m_statusLabel1->Size = System::Drawing::Size(135, 17);
			this->m_statusLabel1->Text = L"Select all input materials";
			// 
			// m_combineButton
			// 
			this->m_combineButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->m_combineButton->Location = System::Drawing::Point(12, 280);
			this->m_combineButton->Name = L"m_combineButton";
			this->m_combineButton->Size = System::Drawing::Size(707, 40);
			this->m_combineButton->TabIndex = 23;
			this->m_combineButton->Text = L"Combine";
			this->m_combineButton->UseVisualStyleBackColor = true;
			this->m_combineButton->Click += gcnew System::EventHandler(this, &Form1::m_combineButton_Click);
			// 
			// m_openFileDialog
			// 
			this->m_openFileDialog->FileName = L"openFileDialog1";
			// 
			// m_aoInvertCheckBox
			// 
			this->m_aoInvertCheckBox->AutoSize = true;
			this->m_aoInvertCheckBox->Location = System::Drawing::Point(611, 134);
			this->m_aoInvertCheckBox->Name = L"m_aoInvertCheckBox";
			this->m_aoInvertCheckBox->Size = System::Drawing::Size(52, 17);
			this->m_aoInvertCheckBox->TabIndex = 27;
			this->m_aoInvertCheckBox->Text = L"invert";
			this->m_aoInvertCheckBox->UseVisualStyleBackColor = true;
			// 
			// m_heightInvertCheckBox
			// 
			this->m_heightInvertCheckBox->AutoSize = true;
			this->m_heightInvertCheckBox->Location = System::Drawing::Point(611, 108);
			this->m_heightInvertCheckBox->Name = L"m_heightInvertCheckBox";
			this->m_heightInvertCheckBox->Size = System::Drawing::Size(52, 17);
			this->m_heightInvertCheckBox->TabIndex = 26;
			this->m_heightInvertCheckBox->Text = L"invert";
			this->m_heightInvertCheckBox->UseVisualStyleBackColor = true;
			// 
			// m_metalnessInvertCheckBox
			// 
			this->m_metalnessInvertCheckBox->AutoSize = true;
			this->m_metalnessInvertCheckBox->Location = System::Drawing::Point(611, 82);
			this->m_metalnessInvertCheckBox->Name = L"m_metalnessInvertCheckBox";
			this->m_metalnessInvertCheckBox->Size = System::Drawing::Size(52, 17);
			this->m_metalnessInvertCheckBox->TabIndex = 25;
			this->m_metalnessInvertCheckBox->Text = L"invert";
			this->m_metalnessInvertCheckBox->UseVisualStyleBackColor = true;
			// 
			// m_roughnessInvertCheckBox
			// 
			this->m_roughnessInvertCheckBox->AutoSize = true;
			this->m_roughnessInvertCheckBox->Location = System::Drawing::Point(611, 56);
			this->m_roughnessInvertCheckBox->Name = L"m_roughnessInvertCheckBox";
			this->m_roughnessInvertCheckBox->Size = System::Drawing::Size(52, 17);
			this->m_roughnessInvertCheckBox->TabIndex = 24;
			this->m_roughnessInvertCheckBox->Text = L"invert";
			this->m_roughnessInvertCheckBox->UseVisualStyleBackColor = true;
			// 
			// m_radioButtonUseRGB
			// 
			this->m_radioButtonUseRGB->AutoSize = true;
			this->m_radioButtonUseRGB->Location = System::Drawing::Point(555, 181);
			this->m_radioButtonUseRGB->Name = L"m_radioButtonUseRGB";
			this->m_radioButtonUseRGB->Size = System::Drawing::Size(151, 17);
			this->m_radioButtonUseRGB->TabIndex = 28;
			this->m_radioButtonUseRGB->Text = L"use RGB channel average";
			this->m_radioButtonUseRGB->UseVisualStyleBackColor = true;
			// 
			// m_radioButtonUseR
			// 
			this->m_radioButtonUseR->AutoSize = true;
			this->m_radioButtonUseR->Checked = true;
			this->m_radioButtonUseR->Location = System::Drawing::Point(555, 157);
			this->m_radioButtonUseR->Name = L"m_radioButtonUseR";
			this->m_radioButtonUseR->Size = System::Drawing::Size(116, 17);
			this->m_radioButtonUseR->TabIndex = 29;
			this->m_radioButtonUseR->TabStop = true;
			this->m_radioButtonUseR->Text = L"use R channel only";
			this->m_radioButtonUseR->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(731, 345);
			this->Controls->Add(this->m_radioButtonUseR);
			this->Controls->Add(this->m_radioButtonUseRGB);
			this->Controls->Add(this->m_aoInvertCheckBox);
			this->Controls->Add(this->m_heightInvertCheckBox);
			this->Controls->Add(this->m_metalnessInvertCheckBox);
			this->Controls->Add(this->m_roughnessInvertCheckBox);
			this->Controls->Add(this->m_combineButton);
			this->Controls->Add(this->m_statusStrip);
			this->Controls->Add(this->m_rmhaoBrowseButton);
			this->Controls->Add(this->m_rmhaoTextBox);
			this->Controls->Add(this->m_rmhaoLabel);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->m_aoBrowseButton);
			this->Controls->Add(this->m_heightBrowseButton);
			this->Controls->Add(this->m_metalnessBrowseButton);
			this->Controls->Add(this->m_roughnessBrowseButton);
			this->Controls->Add(this->m_aoCheckBox);
			this->Controls->Add(this->m_heightCheckBox);
			this->Controls->Add(this->m_metalnessCheckBox);
			this->Controls->Add(this->m_roughnessCheckBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->m_aoTextBox);
			this->Controls->Add(this->m_ambientOcclusionLabel);
			this->Controls->Add(this->m_heightTextBox);
			this->Controls->Add(this->m_heightLabel);
			this->Controls->Add(this->m_metalnessTextBox);
			this->Controls->Add(this->m_metalnessLabel);
			this->Controls->Add(this->m_roughnessTextBox);
			this->Controls->Add(this->m_roughnessLabel);
			this->Controls->Add(this->m_menuStrip1);
			this->MainMenuStrip = this->m_menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Praxis3D material combiner";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->m_menuStrip1->ResumeLayout(false);
			this->m_menuStrip1->PerformLayout();
			this->m_statusStrip->ResumeLayout(false);
			this->m_statusStrip->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		TextureLoader *m_textureLoader;
#pragma endregion
		private: System::Void Form1_Load(System::Object ^sender, System::EventArgs ^e) { }
		private: System::Void label1_Click(System::Object ^sender, System::EventArgs ^e) { }
		private: System::Void m_roughnessCheckBox_CheckedChanged(System::Object ^sender, System::EventArgs ^e) 
		{
			if(m_roughnessCheckBox->Checked)
			{
				m_roughnessTextBox->Enabled = false;
				m_roughnessBrowseButton->Enabled = false;
				m_roughnessInvertCheckBox->Enabled = false;
			}
			else
			{
				m_roughnessTextBox->Enabled = true;
				m_roughnessBrowseButton->Enabled = true;
				m_roughnessInvertCheckBox->Enabled = true;
			}
		}
		private: System::Void m_metalnessCheckBox_CheckedChanged(System::Object ^sender, System::EventArgs ^e) 
		{
			if(m_metalnessCheckBox->Checked)
			{
				m_metalnessTextBox->Enabled = false;
				m_metalnessBrowseButton->Enabled = false;
				m_metalnessInvertCheckBox->Enabled = false;
			}
			else
			{
				m_metalnessTextBox->Enabled = true;
				m_metalnessBrowseButton->Enabled = true;
				m_metalnessInvertCheckBox->Enabled = true;
			}

		}
		private: System::Void m_heightCheckBox_CheckedChanged(System::Object ^sender, System::EventArgs ^e) 
		{
			if(m_heightCheckBox->Checked)
			{
				m_heightTextBox->Enabled = false;
				m_heightBrowseButton->Enabled = false;
				m_heightInvertCheckBox->Enabled = false;
			}
			else
			{
				m_heightTextBox->Enabled = true;
				m_heightBrowseButton->Enabled = true;
				m_heightInvertCheckBox->Enabled = true;
			}

		}
		private: System::Void m_aoCheckBox_CheckedChanged(System::Object ^sender, System::EventArgs ^e) 
		{
			if(m_aoCheckBox->Checked)
			{
				m_aoTextBox->Enabled = false;
				m_aoBrowseButton->Enabled = false;
				m_aoInvertCheckBox->Enabled = false;
			}
			else
			{
				m_aoTextBox->Enabled = true;
				m_aoBrowseButton->Enabled = true;
				m_aoInvertCheckBox->Enabled = true;
			}

		}
		private: System::Void m_roughnessBrowseButton_Click(System::Object ^sender, System::EventArgs ^e) 
		{
			if(m_openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				m_roughnessTextBox->Text = m_openFileDialog->FileName;
			}
		}
		private: System::Void m_metalnessBrowseButton_Click(System::Object ^sender, System::EventArgs ^e) 
		{
			if(m_openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				m_metalnessTextBox->Text = m_openFileDialog->FileName;
			}
		}
		private: System::Void m_heightBrowseButton_Click(System::Object ^sender, System::EventArgs ^e) 
		{
			if(m_openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				m_heightTextBox->Text = m_openFileDialog->FileName;
			}
		}
		private: System::Void m_aoBrowseButton_Click(System::Object ^sender, System::EventArgs ^e) 
		{
			if(m_openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				m_aoTextBox->Text = m_openFileDialog->FileName;
			}
		}
		private: System::Void m_rmhaoBrowseButton_Click(System::Object ^sender, System::EventArgs ^e) 
		{
			if(m_saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				m_rmhaoTextBox->Text = m_saveFileDialog->FileName;
			}
		}
		private: System::Void m_combineButton_Click(System::Object ^sender, System::EventArgs ^e) 
		{
			combine();
		}

		// Convert System::string to std::string (using marshaling)
		inline std::string toString(System::String ^p_managedString) { return msclr::interop::marshal_as<std::string>(p_managedString); }

		//Convert std::string to System::String
		inline System::String ^toString(const std::string &p_unmanagedString) { return gcnew System::String(p_unmanagedString.c_str()); }

		void combine()
		{
			// Declare the input materials
			TextureAndParams inputTextures[MaterialTypes::MaterialTypes_NumOfTypes];
			
			// Load the roughness map, if the filename for it is given
			if(!System::String::IsNullOrEmpty(m_roughnessTextBox->Text))
			{
				inputTextures[MaterialTypes::MaterialTypes_Roughness].m_texture = m_textureLoader->loadTexture(toString(m_roughnessTextBox->Text));

				// Set texture parameters if it was loaded successfully
				if(inputTextures[MaterialTypes::MaterialTypes_Roughness].m_texture != nullptr)
				{
					inputTextures[MaterialTypes::MaterialTypes_Roughness].m_texturePresent = true;
					inputTextures[MaterialTypes::MaterialTypes_Roughness].m_invert = m_roughnessInvertCheckBox->Checked;
				}
			}
			else
				if(!m_roughnessCheckBox->Checked)
				{
					m_statusLabel1->Text = "No roughness input material given";
					m_statusLabelState->Text = "FAILED";
				}

			// Load the metalness map, if the filename for it is given
			if(!System::String::IsNullOrEmpty(m_metalnessTextBox->Text))
			{
				inputTextures[MaterialTypes::MaterialTypes_Metalness].m_texture = m_textureLoader->loadTexture(toString(m_metalnessTextBox->Text));

				// Set texture parameters if it was loaded successfully
				if(inputTextures[MaterialTypes::MaterialTypes_Metalness].m_texture != nullptr)
				{
					inputTextures[MaterialTypes::MaterialTypes_Metalness].m_texturePresent = true;
					inputTextures[MaterialTypes::MaterialTypes_Metalness].m_invert = m_metalnessInvertCheckBox->Checked;
				}
			}
			else
				if(!m_metalnessCheckBox->Checked)
				{
					m_statusLabel1->Text = "No metalness input material given";
					m_statusLabelState->Text = "FAILED";
				}

			// Load the height map, if the filename for it is given
			if(!System::String::IsNullOrEmpty(m_heightTextBox->Text))
			{
				inputTextures[MaterialTypes::MaterialTypes_Height].m_texture = m_textureLoader->loadTexture(toString(m_heightTextBox->Text));

				// Set texture parameters if it was loaded successfully
				if(inputTextures[MaterialTypes::MaterialTypes_Height].m_texture != nullptr)
				{
					inputTextures[MaterialTypes::MaterialTypes_Height].m_texturePresent = true;
					inputTextures[MaterialTypes::MaterialTypes_Height].m_invert = m_heightInvertCheckBox->Checked;
				}
			}
			else
				if(!m_heightCheckBox->Checked)
				{
					m_statusLabel1->Text = "No height input material given";
					m_statusLabelState->Text = "FAILED";
				}

			// Load the ambient occlusion map, if the filename for it is given
			if(!System::String::IsNullOrEmpty(m_aoTextBox->Text))
			{
				inputTextures[MaterialTypes::MaterialTypes_AO].m_texture = m_textureLoader->loadTexture(toString(m_rmhaoTextBox->Text));

				// Set texture parameters if it was loaded successfully
				if(inputTextures[MaterialTypes::MaterialTypes_AO].m_texture != nullptr)
				{
					inputTextures[MaterialTypes::MaterialTypes_AO].m_texturePresent = true;
					inputTextures[MaterialTypes::MaterialTypes_AO].m_invert = m_aoInvertCheckBox->Checked;
				}
			}
			else
				if(!m_aoCheckBox->Checked)
				{
					m_statusLabel1->Text = "No ambient occlusion input material given";
					m_statusLabelState->Text = "FAILED";
				}

			// Combine and save the combined texture map, if the filename for it is given
			if(!System::String::IsNullOrEmpty(m_rmhaoTextBox->Text))
			{
				TextureErrorCodes combineError = m_textureLoader->combineAndSave(inputTextures, toString(m_rmhaoTextBox->Text), m_radioButtonUseRGB->Checked);

				// Display the status according to the returned error code
				switch(combineError)
				{
				case TextureErrorCodes_Success:
					m_statusLabel1->Text = "Texture combined successfully";
					m_statusLabelState->Text = "DONE";
					break;
				case TextureErrorCodes_Fail:
					m_statusLabel1->Text = "Texture combining failed";
					m_statusLabelState->Text = "FAILED";
					break;
				case TextureErrorCodes_SizeMismatch:
					m_statusLabel1->Text = "Input materials size mismatch";
					m_statusLabelState->Text = "FAILED";
					break;
				case TextureErrorCodes_NoTextures:
					m_statusLabel1->Text = "No valid input materials given";
					m_statusLabelState->Text = "FAILED";
					break;
				case TextureErrorCodes_FilenameEmpty:
					m_statusLabel1->Text = "No input materials given";
					m_statusLabelState->Text = "FAILED";
					break;
				case TextureErrorCodes_UnsupportedFormat:
					m_statusLabel1->Text = "Unsupported format of the output material given";
					m_statusLabelState->Text = "FAILED";
					break;
				case TextureErrorCodes_SaveFailed:
					m_statusLabel1->Text = "Saving combined texture to file failed";
					m_statusLabelState->Text = "FAILED";
					break;
				default:
					m_statusLabel1->Text = "FAILED: Unknown fault";
					m_statusLabelState->Text = "FAILED";
					break;
				}
			}
			else
			{
				m_statusLabel1->Text = "No output material filename given";
				m_statusLabelState->Text = "FAILED";
			}
		}


	private: System::Void aboutToolStripMenuItem_Click(System::Object ^sender, System::EventArgs ^e) 
	{
		System::Windows::Forms::MessageBox::Show("Praxis3D material combiner V1.0" + System::Environment::NewLine +
			"Combines multiple materials into a single RGBA texture, single property per channel." + System::Environment::NewLine +
			"Outputs RMHAO texture (RED: Roughness, GREEN: Metallness, Blue: Height, Alpha: Ambient occlusion)" + System::Environment::NewLine +
			System::Environment::NewLine +
			"External libraries used:" + System::Environment::NewLine +
			"FreeImage" + System::Environment::NewLine +
			"(see Help->License for more information)." + System::Environment::NewLine +
			System::Environment::NewLine +
			"Created by Paul Akulavicius." + System::Environment::NewLine +
			"pauldev.org" + System::Environment::NewLine +
			"2023-01",
			"About this application...");
	}
	private: System::Void licenseToolStripMenuItem_Click(System::Object ^sender, System::EventArgs ^e) 
	{
		// Declare mandatory variables
		STARTUPINFO si = { 0 };
		PROCESS_INFORMATION pi = { 0 };
		si.cb = sizeof(si);

		// Second argument of CreateProcess function must be writable memory
		LPWSTR command = L"c:\\windows\\system32\\notepad.exe license.txt";

		// Open the license.txt file with Notepad
		CreateProcess(L"c:\\windows\\system32\\notepad.exe",	// Name of program to execute
			command,											// Command line
			NULL,												// Process handle not inheritable
			NULL,												// Thread handle not inheritable
			FALSE,												// Set handle inheritance to FALSE
			0,													// No creation flags
			NULL,												// Use parent's environment block
			NULL,												// Use parent's starting directory 
			&si,												// Pointer to STARTUPINFO structure
			&pi);												// Pointer to PROCESS_INFORMATION structure
	}
	private: System::Void sourceToolStripMenuItem_Click(System::Object ^sender, System::EventArgs ^e) 
	{
		System::Diagnostics::Process::Start("https://bitbucket.org/Paul_ak/praxis3d-converter");
	}
	private: System::Void openFileToolStripMenuItem_Click(System::Object ^sender, System::EventArgs ^e) 
	{
		if(!System::String::IsNullOrEmpty(m_roughnessTextBox->Text))
		{
			m_roughnessBrowseButton_Click(sender, e);
		}

		if(!System::String::IsNullOrEmpty(m_metalnessTextBox->Text))
		{
			m_metalnessBrowseButton_Click(sender, e);
		}

		if(!System::String::IsNullOrEmpty(m_heightTextBox->Text))
		{
			m_heightBrowseButton_Click(sender, e);
		}

		if(!System::String::IsNullOrEmpty(m_aoTextBox->Text))
		{
			m_aoBrowseButton_Click(sender, e);
		}
	}
	private: System::Void saveDirectoryToolStripMenuItem_Click(System::Object ^sender, System::EventArgs ^e) 
	{
		m_rmhaoBrowseButton_Click(sender, e);
	}
	private: System::Void exitToolStripMenuItem_Click(System::Object ^sender, System::EventArgs ^e) 
	{
		System::Windows::Forms::Application::Exit();
	}
};
}
