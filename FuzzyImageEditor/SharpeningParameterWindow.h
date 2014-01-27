#pragma once

namespace FuzzyImageEditor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

#ifdef _DEBUG
	using namespace System::IO;
#endif
	/// <summary>
	/// Summary for SharpeningParameterWindow
	/// </summary>
	public ref class SharpeningParameterWindow : public System::Windows::Forms::Form
	{
	public:
		SharpeningParameterWindow()
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
		~SharpeningParameterWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  btnOkay;
	private: System::Windows::Forms::Button^  btnCancel;
	private: System::Windows::Forms::Button^  buttonFilterToggle;
	private: System::Windows::Forms::Button^  buttonLeft;
	private: System::Windows::Forms::Button^  buttonRight;
	private: System::Windows::Forms::Button^  buttonDown;
	private: System::Windows::Forms::Button^  buttonUp;
	private: System::Windows::Forms::Timer^  scrollTimer;
	public: System::Windows::Forms::CheckBox^  chkBxBlue;
	private: 
	public: System::Windows::Forms::CheckBox^  chkBxGreen;
	public: System::Windows::Forms::CheckBox^  chkBxRed;
	private: System::Windows::Forms::Label^  label1;
	public: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	public: 
	private: System::ComponentModel::IContainer^  components;
	public: 
	protected: 

	protected: 

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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(SharpeningParameterWindow::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnOkay = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->buttonFilterToggle = (gcnew System::Windows::Forms::Button());
			this->buttonLeft = (gcnew System::Windows::Forms::Button());
			this->buttonRight = (gcnew System::Windows::Forms::Button());
			this->buttonDown = (gcnew System::Windows::Forms::Button());
			this->buttonUp = (gcnew System::Windows::Forms::Button());
			this->scrollTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->chkBxBlue = (gcnew System::Windows::Forms::CheckBox());
			this->chkBxGreen = (gcnew System::Windows::Forms::CheckBox());
			this->chkBxRed = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(10, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(250, 250);
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// btnOkay
			// 
			this->btnOkay->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->btnOkay->Location = System::Drawing::Point(36, 272);
			this->btnOkay->Name = L"btnOkay";
			this->btnOkay->Size = System::Drawing::Size(75, 23);
			this->btnOkay->TabIndex = 13;
			this->btnOkay->Text = L"Okay";
			this->btnOkay->UseVisualStyleBackColor = true;
			// 
			// btnCancel
			// 
			this->btnCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnCancel->Location = System::Drawing::Point(117, 272);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(75, 23);
			this->btnCancel->TabIndex = 14;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			// 
			// buttonFilterToggle
			// 
			this->buttonFilterToggle->Location = System::Drawing::Point(274, 272);
			this->buttonFilterToggle->Name = L"buttonFilterToggle";
			this->buttonFilterToggle->Size = System::Drawing::Size(89, 23);
			this->buttonFilterToggle->TabIndex = 25;
			this->buttonFilterToggle->Text = L"Without Filter";
			this->buttonFilterToggle->UseVisualStyleBackColor = true;
			this->buttonFilterToggle->Click += gcnew System::EventHandler(this, &SharpeningParameterWindow::buttonFilterToggle_Click_1);
			// 
			// buttonLeft
			// 
			this->buttonLeft->Location = System::Drawing::Point(267, 152);
			this->buttonLeft->Name = L"buttonLeft";
			this->buttonLeft->Size = System::Drawing::Size(46, 28);
			this->buttonLeft->TabIndex = 29;
			this->buttonLeft->Text = L"Left";
			this->buttonLeft->UseVisualStyleBackColor = true;
			this->buttonLeft->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &SharpeningParameterWindow::buttonMouseDown);
			this->buttonLeft->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &SharpeningParameterWindow::buttonMouseUp);
			// 
			// buttonRight
			// 
			this->buttonRight->Location = System::Drawing::Point(322, 152);
			this->buttonRight->Name = L"buttonRight";
			this->buttonRight->Size = System::Drawing::Size(41, 28);
			this->buttonRight->TabIndex = 28;
			this->buttonRight->Text = L"Right";
			this->buttonRight->UseVisualStyleBackColor = true;
			this->buttonRight->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &SharpeningParameterWindow::buttonMouseDown);
			this->buttonRight->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &SharpeningParameterWindow::buttonMouseUp);
			// 
			// buttonDown
			// 
			this->buttonDown->Location = System::Drawing::Point(292, 186);
			this->buttonDown->Name = L"buttonDown";
			this->buttonDown->Size = System::Drawing::Size(46, 28);
			this->buttonDown->TabIndex = 27;
			this->buttonDown->Text = L"Down";
			this->buttonDown->UseVisualStyleBackColor = true;
			this->buttonDown->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &SharpeningParameterWindow::buttonMouseDown);
			this->buttonDown->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &SharpeningParameterWindow::buttonMouseUp);
			// 
			// buttonUp
			// 
			this->buttonUp->Location = System::Drawing::Point(292, 118);
			this->buttonUp->Name = L"buttonUp";
			this->buttonUp->Size = System::Drawing::Size(46, 28);
			this->buttonUp->TabIndex = 26;
			this->buttonUp->Text = L"Up";
			this->buttonUp->UseVisualStyleBackColor = true;
			this->buttonUp->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &SharpeningParameterWindow::buttonMouseDown);
			this->buttonUp->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &SharpeningParameterWindow::buttonMouseUp);
			// 
			// scrollTimer
			// 
			this->scrollTimer->Interval = 50;
			// 
			// chkBxBlue
			// 
			this->chkBxBlue->AutoSize = true;
			this->chkBxBlue->Checked = true;
			this->chkBxBlue->CheckState = System::Windows::Forms::CheckState::Checked;
			this->chkBxBlue->Location = System::Drawing::Point(274, 74);
			this->chkBxBlue->Name = L"chkBxBlue";
			this->chkBxBlue->Size = System::Drawing::Size(47, 17);
			this->chkBxBlue->TabIndex = 33;
			this->chkBxBlue->Text = L"Blue";
			this->chkBxBlue->UseVisualStyleBackColor = true;
			// 
			// chkBxGreen
			// 
			this->chkBxGreen->AutoSize = true;
			this->chkBxGreen->Checked = true;
			this->chkBxGreen->CheckState = System::Windows::Forms::CheckState::Checked;
			this->chkBxGreen->Location = System::Drawing::Point(274, 51);
			this->chkBxGreen->Name = L"chkBxGreen";
			this->chkBxGreen->Size = System::Drawing::Size(55, 17);
			this->chkBxGreen->TabIndex = 32;
			this->chkBxGreen->Text = L"Green";
			this->chkBxGreen->UseVisualStyleBackColor = true;
			// 
			// chkBxRed
			// 
			this->chkBxRed->AutoSize = true;
			this->chkBxRed->Checked = true;
			this->chkBxRed->CheckState = System::Windows::Forms::CheckState::Checked;
			this->chkBxRed->Location = System::Drawing::Point(274, 28);
			this->chkBxRed->Name = L"chkBxRed";
			this->chkBxRed->Size = System::Drawing::Size(46, 17);
			this->chkBxRed->TabIndex = 31;
			this->chkBxRed->Text = L"Red";
			this->chkBxRed->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(272, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 13);
			this->label1->TabIndex = 30;
			this->label1->Text = L"Channels:";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(274, 245);
			this->radioButton1->Margin = System::Windows::Forms::Padding(2);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(89, 17);
			this->radioButton1->TabIndex = 34;
			this->radioButton1->Text = L"Mask Size 25";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->Click += gcnew System::EventHandler(this, &SharpeningParameterWindow::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Checked = true;
			this->radioButton2->Location = System::Drawing::Point(274, 219);
			this->radioButton2->Margin = System::Windows::Forms::Padding(2);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(83, 17);
			this->radioButton2->TabIndex = 35;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Mask Size 9";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->Click += gcnew System::EventHandler(this, &SharpeningParameterWindow::radioButton2_CheckedChanged);
			// 
			// SharpeningParameterWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(368, 307);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->chkBxBlue);
			this->Controls->Add(this->chkBxGreen);
			this->Controls->Add(this->chkBxRed);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonLeft);
			this->Controls->Add(this->buttonRight);
			this->Controls->Add(this->buttonDown);
			this->Controls->Add(this->buttonUp);
			this->Controls->Add(this->buttonFilterToggle);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOkay);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"SharpeningParameterWindow";
			this->Text = L"Sharpening Parameter Window";
			this->Load += gcnew System::EventHandler(this, &SharpeningParameterWindow::SharpeningParameterWindow_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

#ifdef _DEBUG
	public: StreamWriter^ dout;
#endif

	private: System::Drawing::Bitmap^ originalPicture;
	private: int x, y, dx, dy, op;
	private: bool applyFilter;

	private: System::Void updatePreview()
			 {
#ifdef _DEBUG
				 dout->WriteLine("PSA");
#endif
				 System::Drawing::Rectangle rect(x, y, pictureBox1->Width, pictureBox1->Height);
				 if(applyFilter)
				 {
#ifdef _DEBUG
					 dout->WriteLine("PSB");
#endif
					 if(radioButton1->Checked)
					 {
#ifdef _DEBUG
						 dout->WriteLine("PSC");
#endif
						 op = 2;
					 }
					 else
					 {
#ifdef _DEBUG
						 dout->WriteLine("PSD");
#endif
						 op = 1;
					 }
					 pictureBox1->Image = FuzzyFilters::Sharpening(originalPicture->Clone(rect, originalPicture->PixelFormat), chkBxRed->Checked, chkBxGreen->Checked, chkBxBlue->Checked, op);
#ifdef _DEBUG
					 dout->WriteLine("PSE");
#endif
				 }
				 else{
#ifdef _DEBUG
					 dout->WriteLine("PSF");
#endif
					 pictureBox1->Image = originalPicture->Clone(rect, originalPicture->PixelFormat);
				 }
#ifdef _DEBUG
				 dout->WriteLine("PSG");
#endif
			 }

	private: System::Void chkBxRed_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
#ifdef _DEBUG
				 dout->WriteLine("PSH");
#endif
				 updatePreview();
			 }
	private: System::Void chkBxGreen_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
#ifdef _DEBUG
				 dout->WriteLine("PSI");
#endif
				 updatePreview();
			 }
	private: System::Void chkBxBlue_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
#ifdef _DEBUG
				 dout->WriteLine("PSJ");
#endif
				 updatePreview();
			 }

	private: System::Void SharpeningParameterWindow_Load(System::Object^  sender, System::EventArgs^  e) {
#ifdef _DEBUG
				 dout->WriteLine("PSK");
#endif
				 x = y = 0;
				 //sensitivity = 40;
				 originalPicture = gcnew System::Drawing::Bitmap(this->pictureBox1->Image);
				 if(originalPicture->Width < this->pictureBox1->Width){
#ifdef _DEBUG
					 dout->WriteLine("PSL");
#endif
					 this->pictureBox1->Width = originalPicture->Width;
				 }
#ifdef _DEBUG
				 dout->WriteLine("PSM");
#endif
				 if(originalPicture->Height < this->pictureBox1->Height){
#ifdef _DEBUG
					 dout->WriteLine("PSN");
#endif
					 this->pictureBox1->Height = originalPicture->Height;
				 }

				 scrollTimer->Interval = 50;
				 scrollTimer->Tick += gcnew System::EventHandler(this, &SharpeningParameterWindow::scrollEvent);
				 applyFilter = true;
				 updatePreview();
#ifdef _DEBUG
				 dout->WriteLine("PSO");
#endif
			 }

	private: System::Void buttonMouseDown(System::Object^  sender, MouseEventArgs^  e) {
#ifdef _DEBUG
				 dout->WriteLine("PSP");
#endif
				 if(sender == buttonUp){
#ifdef _DEBUG
					 dout->WriteLine("PSQ");
#endif
					 dy = -1;
					 dx = 0;
				 }else if (sender == buttonDown){
#ifdef _DEBUG
					 dout->WriteLine("PSR");
#endif
					 dy = 1;
					 dx = 0;
				 }else if (sender == buttonLeft){
#ifdef _DEBUG
					 dout->WriteLine("PSS");
#endif
					 dy = 0;
					 dx = -1;
				 }else{
#ifdef _DEBUG
					 dout->WriteLine("PST");
#endif
					 dy = 0;
					 dx = 1;
				 }
				 scrollEvent(nullptr, nullptr); //Tick once immediately
				 scrollTimer->Enabled = true;   //Begin ticking continuously after
#ifdef _DEBUG
				 dout->WriteLine("PSU");
#endif
			 }

	private: System::Void buttonMouseUp(System::Object^ sender, MouseEventArgs^ e){
#ifdef _DEBUG
				 dout->WriteLine("PSV");
#endif
				 scrollTimer->Enabled = false;
				 updatePreview();
			 }


	private: System::Void scrollEvent(Object^ source, System::EventArgs^ e){
#ifdef _DEBUG
				 dout->WriteLine("PSW");
#endif
				 x += (int)(originalPicture->Width * .05 * dx);
				 y += (int)(originalPicture->Height * .05 * dy);
				 if (x < 0){
#ifdef _DEBUG
					 dout->WriteLine("PSX");
#endif
					 x = 0;
					 scrollTimer->Enabled = false;
				 }
#ifdef _DEBUG
				 dout->WriteLine("PSY");
#endif
				 if(y < 0){
#ifdef _DEBUG
					 dout->WriteLine("PSZ");
#endif
					 y = 0;
					 scrollTimer->Enabled = false;
				 }
#ifdef _DEBUG
				 dout->WriteLine("PSAA");
#endif
				 if(x + pictureBox1->Width > originalPicture->Width){
#ifdef _DEBUG
					 dout->WriteLine("PSAB");
#endif
					 x = originalPicture->Width - pictureBox1->Width;
					 scrollTimer->Enabled = false;
				 }
#ifdef _DEBUG
				 dout->WriteLine("PSAC");
#endif
				 if(y + pictureBox1->Height > originalPicture->Height){
#ifdef _DEBUG
					 dout->WriteLine("PSAD");
#endif
					 y = originalPicture->Height - pictureBox1->Height;
					 scrollTimer->Enabled = false;
				 }
				 scrollImage(); //Scrolling without the filter (reduces lag, when the scrolling stops the preview will be filtered)
#ifdef _DEBUG
				 dout->WriteLine("PSAE");
#endif
			 }
	private: System::Void scrollImage(){
#ifdef _DEBUG
				 dout->WriteLine("PSAF");
#endif
				 System::Drawing::Rectangle rect(x, y, pictureBox1->Width, pictureBox1->Height);
				 pictureBox1->Image = originalPicture->Clone(rect, originalPicture->PixelFormat);
			 }

	private: System::Void buttonFilterToggle_Click_1(System::Object^  sender, System::EventArgs^  e) {
#ifdef _DEBUG
				 dout->WriteLine("PSAG");
#endif
				 applyFilter = !applyFilter;
				 if(applyFilter){
#ifdef _DEBUG
					 dout->WriteLine("PSAH");
#endif
					 buttonFilterToggle->Text = "Without Filter";
				 }else{
#ifdef _DEBUG
					 dout->WriteLine("PSAI");
#endif
					 buttonFilterToggle->Text = "With Filter";
				 }
				 updatePreview();
#ifdef _DEBUG
				 dout->WriteLine("PSAJ");
#endif
			 }
	private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
#ifdef _DEBUG
				 dout->WriteLine("PSAK");
#endif
				 radioButton1->Checked = false;
				 radioButton2->Checked = true;
				 updatePreview();
			 }
	private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
#ifdef _DEBUG
				 dout->WriteLine("PSAL");
#endif
				 radioButton2->Checked = false;
				 radioButton1->Checked = true;
				 updatePreview();
			 }
	};
}
