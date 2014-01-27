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
	/// Summary for ContrastParameterWindow
	/// </summary>
	public ref class ContrastParameterWindow : public System::Windows::Forms::Form
	{
	public:
		ContrastParameterWindow(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ContrastParameterWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::PictureBox^  pictureBox1;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	public: System::Windows::Forms::CheckBox^  chkBxRed;
	public: System::Windows::Forms::CheckBox^  chkBxGreen;
	public: System::Windows::Forms::CheckBox^  chkBxBlue;
	private: System::Windows::Forms::Button^  btnOkay;
	private: System::Windows::Forms::Button^  btnCancel;
	private: System::Windows::Forms::Button^  buttonFilterToggle;
	private: System::Windows::Forms::Button^  buttonLeft;
	private: System::Windows::Forms::Button^  buttonRight;
	private: System::Windows::Forms::Button^  buttonDown;
	private: System::Windows::Forms::Button^  buttonUp;
	private: System::Windows::Forms::Timer^  scrollTimer;
	private: System::ComponentModel::IContainer^  components;

#ifdef _DEBUG
	public: StreamWriter^ dout;
#endif

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ContrastParameterWindow::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->chkBxRed = (gcnew System::Windows::Forms::CheckBox());
			this->chkBxGreen = (gcnew System::Windows::Forms::CheckBox());
			this->chkBxBlue = (gcnew System::Windows::Forms::CheckBox());
			this->btnOkay = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->buttonFilterToggle = (gcnew System::Windows::Forms::Button());
			this->buttonLeft = (gcnew System::Windows::Forms::Button());
			this->buttonRight = (gcnew System::Windows::Forms::Button());
			this->buttonDown = (gcnew System::Windows::Forms::Button());
			this->buttonUp = (gcnew System::Windows::Forms::Button());
			this->scrollTimer = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(250, 250);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(277, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Channels:";
			// 
			// chkBxRed
			// 
			this->chkBxRed->AutoSize = true;
			this->chkBxRed->Checked = true;
			this->chkBxRed->CheckState = System::Windows::Forms::CheckState::Checked;
			this->chkBxRed->Location = System::Drawing::Point(280, 28);
			this->chkBxRed->Name = L"chkBxRed";
			this->chkBxRed->Size = System::Drawing::Size(46, 17);
			this->chkBxRed->TabIndex = 2;
			this->chkBxRed->Text = L"Red";
			this->chkBxRed->UseVisualStyleBackColor = true;
			this->chkBxRed->CheckedChanged += gcnew System::EventHandler(this, &ContrastParameterWindow::chkBxRed_CheckedChanged);
			// 
			// chkBxGreen
			// 
			this->chkBxGreen->AutoSize = true;
			this->chkBxGreen->Checked = true;
			this->chkBxGreen->CheckState = System::Windows::Forms::CheckState::Checked;
			this->chkBxGreen->Location = System::Drawing::Point(280, 51);
			this->chkBxGreen->Name = L"chkBxGreen";
			this->chkBxGreen->Size = System::Drawing::Size(55, 17);
			this->chkBxGreen->TabIndex = 3;
			this->chkBxGreen->Text = L"Green";
			this->chkBxGreen->UseVisualStyleBackColor = true;
			this->chkBxGreen->CheckedChanged += gcnew System::EventHandler(this, &ContrastParameterWindow::chkBxGreen_CheckedChanged);
			// 
			// chkBxBlue
			// 
			this->chkBxBlue->AutoSize = true;
			this->chkBxBlue->Checked = true;
			this->chkBxBlue->CheckState = System::Windows::Forms::CheckState::Checked;
			this->chkBxBlue->Location = System::Drawing::Point(280, 74);
			this->chkBxBlue->Name = L"chkBxBlue";
			this->chkBxBlue->Size = System::Drawing::Size(47, 17);
			this->chkBxBlue->TabIndex = 4;
			this->chkBxBlue->Text = L"Blue";
			this->chkBxBlue->UseVisualStyleBackColor = true;
			this->chkBxBlue->CheckedChanged += gcnew System::EventHandler(this, &ContrastParameterWindow::chkBxBlue_CheckedChanged);
			// 
			// btnOkay
			// 
			this->btnOkay->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->btnOkay->Location = System::Drawing::Point(93, 272);
			this->btnOkay->Name = L"btnOkay";
			this->btnOkay->Size = System::Drawing::Size(75, 23);
			this->btnOkay->TabIndex = 5;
			this->btnOkay->Text = L"Okay";
			this->btnOkay->UseVisualStyleBackColor = true;
			// 
			// btnCancel
			// 
			this->btnCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnCancel->Location = System::Drawing::Point(174, 272);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(75, 23);
			this->btnCancel->TabIndex = 6;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			// 
			// buttonFilterToggle
			// 
			this->buttonFilterToggle->Location = System::Drawing::Point(276, 272);
			this->buttonFilterToggle->Name = L"buttonFilterToggle";
			this->buttonFilterToggle->Size = System::Drawing::Size(89, 23);
			this->buttonFilterToggle->TabIndex = 29;
			this->buttonFilterToggle->Text = L"Without Filter";
			this->buttonFilterToggle->UseVisualStyleBackColor = true;
			this->buttonFilterToggle->Click += gcnew System::EventHandler(this, &ContrastParameterWindow::buttonFilterToggle_Click);
			// 
			// buttonLeft
			// 
			this->buttonLeft->Location = System::Drawing::Point(269, 152);
			this->buttonLeft->Name = L"buttonLeft";
			this->buttonLeft->Size = System::Drawing::Size(46, 28);
			this->buttonLeft->TabIndex = 28;
			this->buttonLeft->Text = L"Left";
			this->buttonLeft->UseVisualStyleBackColor = true;
			this->buttonLeft->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ContrastParameterWindow::buttonMouseDown);
			this->buttonLeft->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &ContrastParameterWindow::buttonMouseUp);
			// 
			// buttonRight
			// 
			this->buttonRight->Location = System::Drawing::Point(324, 152);
			this->buttonRight->Name = L"buttonRight";
			this->buttonRight->Size = System::Drawing::Size(41, 28);
			this->buttonRight->TabIndex = 27;
			this->buttonRight->Text = L"Right";
			this->buttonRight->UseVisualStyleBackColor = true;
			this->buttonRight->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ContrastParameterWindow::buttonMouseDown);
			this->buttonRight->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &ContrastParameterWindow::buttonMouseUp);
			// 
			// buttonDown
			// 
			this->buttonDown->Location = System::Drawing::Point(294, 186);
			this->buttonDown->Name = L"buttonDown";
			this->buttonDown->Size = System::Drawing::Size(46, 28);
			this->buttonDown->TabIndex = 26;
			this->buttonDown->Text = L"Down";
			this->buttonDown->UseVisualStyleBackColor = true;
			this->buttonDown->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ContrastParameterWindow::buttonMouseDown);
			this->buttonDown->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &ContrastParameterWindow::buttonMouseUp);
			// 
			// buttonUp
			// 
			this->buttonUp->Location = System::Drawing::Point(294, 118);
			this->buttonUp->Name = L"buttonUp";
			this->buttonUp->Size = System::Drawing::Size(46, 28);
			this->buttonUp->TabIndex = 25;
			this->buttonUp->Text = L"Up";
			this->buttonUp->UseVisualStyleBackColor = true;
			this->buttonUp->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ContrastParameterWindow::buttonMouseDown);
			this->buttonUp->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &ContrastParameterWindow::buttonMouseUp);
			// 
			// scrollTimer
			// 
			this->scrollTimer->Interval = 50;
			// 
			// ContrastParameterWindow
			// 
			this->AcceptButton = this->btnOkay;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->btnCancel;
			this->ClientSize = System::Drawing::Size(377, 307);
			this->Controls->Add(this->buttonFilterToggle);
			this->Controls->Add(this->buttonLeft);
			this->Controls->Add(this->buttonRight);
			this->Controls->Add(this->buttonDown);
			this->Controls->Add(this->buttonUp);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOkay);
			this->Controls->Add(this->chkBxBlue);
			this->Controls->Add(this->chkBxGreen);
			this->Controls->Add(this->chkBxRed);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"ContrastParameterWindow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Contrast Parameter Window";
			this->Load += gcnew System::EventHandler(this, &ContrastParameterWindow::ContrastParameterWindow_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Drawing::Bitmap^ originalPicture;
	private: int x, y, dx, dy;
	private: bool applyFilter;

	private: System::Void updatePreview()
			 {
#ifdef _DEBUG
				 dout->WriteLine("PCA");
#endif
				 System::Drawing::Rectangle rect(x, y, pictureBox1->Width, pictureBox1->Height);
				 if(applyFilter){
#ifdef _DEBUG
					 dout->WriteLine("PCB");
#endif
					 pictureBox1->Image = FuzzyFilters::Contrast(originalPicture->Clone(rect,originalPicture->PixelFormat),chkBxRed->Checked,chkBxGreen->Checked, chkBxBlue->Checked);
				 }else{
#ifdef _DEBUG
					 dout->WriteLine("PCC");
#endif
					 pictureBox1->Image = originalPicture->Clone(rect, originalPicture->PixelFormat);
				 }
#ifdef _DEBUG
				 dout->WriteLine("PCD");
#endif
			 }

	private: System::Void chkBxRed_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
#ifdef _DEBUG
				 dout->WriteLine("PCE");
#endif
				 updatePreview();
			 }
	private: System::Void chkBxGreen_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
#ifdef _DEBUG
				 dout->WriteLine("PCF");
#endif
				 updatePreview();
			 }
	private: System::Void chkBxBlue_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
#ifdef _DEBUG
				 dout->WriteLine("PCG");
#endif
				 updatePreview();
			 }
	private: System::Void ContrastParameterWindow_Load(System::Object^  sender, System::EventArgs^  e) {
#ifdef _DEBUG
				 dout->WriteLine("PCH");
#endif
				 x = y = 0;
				 originalPicture = gcnew System::Drawing::Bitmap(this->pictureBox1->Image);
#ifdef _DEBUG
				 dout->WriteLine("PCI");
#endif
				 if(originalPicture->Width < this->pictureBox1->Width){
#ifdef _DEBUG
					 dout->WriteLine("PCJ");
#endif
					 this->pictureBox1->Width = originalPicture->Width;
				 }
#ifdef _DEBUG
				 dout->WriteLine("PCK");
#endif
				 if(originalPicture->Height < this->pictureBox1->Height){
#ifdef _DEBUG
					 dout->WriteLine("PCL");
#endif
					 this->pictureBox1->Height = originalPicture->Height;
				 }
				 scrollTimer->Interval = 50;
				 scrollTimer->Tick += gcnew System::EventHandler(this, &ContrastParameterWindow::scrollEvent);
				 applyFilter = true;
				 updatePreview();
#ifdef _DEBUG
				 dout->WriteLine("PCM");
#endif
			 }

	private: System::Void buttonDir_Click(System::Object^  sender, System::EventArgs^  e) {
#ifdef _DEBUG
				 dout->WriteLine("PCN");
#endif
				 if(sender == buttonUp){
#ifdef _DEBUG
					 dout->WriteLine("PCO");
#endif
					 dy = -1;
					 dx = 0;
				 }else if (sender == buttonDown){
#ifdef _DEBUG
					 dout->WriteLine("PCP");
#endif
					 dy = 1;
					 dx = 0;
				 }else if (sender == buttonLeft){
#ifdef _DEBUG
					 dout->WriteLine("PCQ");
#endif
					 dy = 0;
					 dx = -1;
				 }else{
#ifdef _DEBUG
					 dout->WriteLine("PCR");
#endif
					 dy = 0;
					 dx = 1;
				 }
				 scrollTimer->Enabled = true;
#ifdef _DEBUG
				 dout->WriteLine("PCS");
#endif
			 }

	private: System::Void buttonMouseDown(System::Object^  sender, MouseEventArgs^  e) {
#ifdef _DEBUG
				 dout->WriteLine("PCT");
#endif
				 if(sender == buttonUp){
#ifdef _DEBUG
					 dout->WriteLine("PCU");
#endif
					 dy = -1;
					 dx = 0;
				 }else if (sender == buttonDown){
#ifdef _DEBUG
					 dout->WriteLine("PCV");
#endif
					 dy = 1;
					 dx = 0;
				 }else if (sender == buttonLeft){
#ifdef _DEBUG
					 dout->WriteLine("PCW");
#endif
					 dy = 0;
					 dx = -1;
				 }else{
#ifdef _DEBUG
					 dout->WriteLine("PCX");
#endif
					 dy = 0;
					 dx = 1;
				 }
				 scrollEvent(nullptr, nullptr); //Tick once immediately
				 scrollTimer->Enabled = true;   //Begin ticking continuously after
#ifdef _DEBUG
				 dout->WriteLine("PCY");
#endif
			 }

	private: System::Void buttonMouseUp(System::Object^ sender, MouseEventArgs^ e){
#ifdef _DEBUG
				 dout->WriteLine("PCZ");
#endif
				 scrollTimer->Enabled = false;
				 updatePreview();
			 }

	private: System::Void scrollEvent(Object^ source, System::EventArgs^ e){
#ifdef _DEBUG
				 dout->WriteLine("PCAA");
#endif
				 x += (int)(originalPicture->Width * .05 * dx);
				 y += (int)(originalPicture->Height * .05 * dy);
				 if (x < 0){
#ifdef _DEBUG
					 dout->WriteLine("PCAB");
#endif
					 x = 0;
					 scrollTimer->Enabled = false;
				 }
#ifdef _DEBUG
				 dout->WriteLine("PCAC");
#endif
				 if(y < 0){
#ifdef _DEBUG
					 dout->WriteLine("PCAD");
#endif
					 y = 0;
					 scrollTimer->Enabled = false;
				 }
#ifdef _DEBUG
				 dout->WriteLine("PCAE");
#endif
				 if(x + pictureBox1->Width > originalPicture->Width){
#ifdef _DEBUG
					 dout->WriteLine("PCAF");
#endif
					 x = originalPicture->Width - pictureBox1->Width;
					 scrollTimer->Enabled = false;
				 }
#ifdef _DEBUG
				 dout->WriteLine("PCAG");
#endif
				 if(y + pictureBox1->Height > originalPicture->Height){
#ifdef _DEBUG
					 dout->WriteLine("PCAH");
#endif
					 y = originalPicture->Height - pictureBox1->Height;
					 scrollTimer->Enabled = false;
				 }
				 scrollImage(); //Scrolling without the filter (reduces lag, when the scrolling stops the preview will be filtered)
#ifdef _DEBUG
				 dout->WriteLine("PCAI");
#endif
			 }
	private: System::Void scrollImage(){
#ifdef _DEBUG
				 dout->WriteLine("PCAJ");
#endif
				 System::Drawing::Rectangle rect(x, y, pictureBox1->Width, pictureBox1->Height);
				 pictureBox1->Image = originalPicture->Clone(rect, originalPicture->PixelFormat);
			 }


	private: System::Void buttonFilterToggle_Click(System::Object^  sender, System::EventArgs^  e) {
#ifdef _DEBUG
				 dout->WriteLine("PCAK");
#endif
				 applyFilter = !applyFilter;
				 if(applyFilter){
#ifdef _DEBUG
					 dout->WriteLine("PCAL");
#endif
					 buttonFilterToggle->Text = "Without Filter";
				 }else{
#ifdef _DEBUG
					 dout->WriteLine("PCAM");
#endif
					 buttonFilterToggle->Text = "With Filter";
				 }
				 updatePreview();
#ifdef _DEBUG
				 dout->WriteLine("PCAN");
#endif
			 }
	};
}
