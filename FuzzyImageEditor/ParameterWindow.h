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
	/// Summary for ParameterWindow
	/// </summary>
	public ref class ParameterWindow : public System::Windows::Forms::Form
	{
	public:
		ParameterWindow()
		{

			InitializeComponent();


		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ParameterWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnCancel;
	protected: 
	private: System::Windows::Forms::Button^  btnOkay;

	private: 



	public: System::Windows::Forms::PictureBox^  pictureBox1;
	private: 

	private: 
	public: 

	private: System::Windows::Forms::Button^  buttonLeft;
	public: 
	private: System::Windows::Forms::Button^  buttonRight;
	private: System::Windows::Forms::Button^  buttonDown;
	private: System::Windows::Forms::Button^  buttonUp;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Timer^  scrollTimer;
	private: System::Windows::Forms::Button^  buttonRefresh;
	private: System::Windows::Forms::Button^  buttonFilterToggle;


	private: System::ComponentModel::IContainer^  components;



#pragma region Windows Form Designer generated code
			 /// <summary>
			 /// Required method for Designer support - do not modify
			 /// the contents of this method with the code editor.
			 /// </summary>
			 void InitializeComponent(void)
			 {
				 this->components = (gcnew System::ComponentModel::Container());
				 System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ParameterWindow::typeid));
				 this->btnCancel = (gcnew System::Windows::Forms::Button());
				 this->btnOkay = (gcnew System::Windows::Forms::Button());
				 this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
				 this->buttonLeft = (gcnew System::Windows::Forms::Button());
				 this->buttonRight = (gcnew System::Windows::Forms::Button());
				 this->buttonDown = (gcnew System::Windows::Forms::Button());
				 this->buttonUp = (gcnew System::Windows::Forms::Button());
				 this->textBox1 = (gcnew System::Windows::Forms::TextBox());
				 this->scrollTimer = (gcnew System::Windows::Forms::Timer(this->components));
				 this->buttonRefresh = (gcnew System::Windows::Forms::Button());
				 this->buttonFilterToggle = (gcnew System::Windows::Forms::Button());
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
				 this->SuspendLayout();
				 // 
				 // btnCancel
				 // 
				 this->btnCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
				 this->btnCancel->Location = System::Drawing::Point(117, 272);
				 this->btnCancel->Name = L"btnCancel";
				 this->btnCancel->Size = System::Drawing::Size(75, 23);
				 this->btnCancel->TabIndex = 13;
				 this->btnCancel->Text = L"Cancel";
				 this->btnCancel->UseVisualStyleBackColor = true;
				 // 
				 // btnOkay
				 // 
				 this->btnOkay->DialogResult = System::Windows::Forms::DialogResult::OK;
				 this->btnOkay->Location = System::Drawing::Point(36, 272);
				 this->btnOkay->Name = L"btnOkay";
				 this->btnOkay->Size = System::Drawing::Size(75, 23);
				 this->btnOkay->TabIndex = 12;
				 this->btnOkay->Text = L"Okay";
				 this->btnOkay->UseVisualStyleBackColor = true;
				 // 
				 // pictureBox1
				 // 
				 this->pictureBox1->Location = System::Drawing::Point(10, 12);
				 this->pictureBox1->Name = L"pictureBox1";
				 this->pictureBox1->Size = System::Drawing::Size(250, 250);
				 this->pictureBox1->TabIndex = 7;
				 this->pictureBox1->TabStop = false;
				 // 
				 // buttonLeft
				 // 
				 this->buttonLeft->Location = System::Drawing::Point(267, 152);
				 this->buttonLeft->Name = L"buttonLeft";
				 this->buttonLeft->Size = System::Drawing::Size(46, 28);
				 this->buttonLeft->TabIndex = 21;
				 this->buttonLeft->Text = L"Left";
				 this->buttonLeft->UseVisualStyleBackColor = true;
				 this->buttonLeft->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ParameterWindow::buttonMouseDown);
				 this->buttonLeft->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &ParameterWindow::buttonMouseUp);
				 // 
				 // buttonRight
				 // 
				 this->buttonRight->Location = System::Drawing::Point(322, 152);
				 this->buttonRight->Name = L"buttonRight";
				 this->buttonRight->Size = System::Drawing::Size(41, 28);
				 this->buttonRight->TabIndex = 20;
				 this->buttonRight->Text = L"Right";
				 this->buttonRight->UseVisualStyleBackColor = true;
				 this->buttonRight->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ParameterWindow::buttonMouseDown);
				 this->buttonRight->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &ParameterWindow::buttonMouseUp);
				 // 
				 // buttonDown
				 // 
				 this->buttonDown->Location = System::Drawing::Point(292, 186);
				 this->buttonDown->Name = L"buttonDown";
				 this->buttonDown->Size = System::Drawing::Size(46, 28);
				 this->buttonDown->TabIndex = 19;
				 this->buttonDown->Text = L"Down";
				 this->buttonDown->UseVisualStyleBackColor = true;
				 this->buttonDown->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ParameterWindow::buttonMouseDown);
				 this->buttonDown->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &ParameterWindow::buttonMouseUp);
				 // 
				 // buttonUp
				 // 
				 this->buttonUp->Location = System::Drawing::Point(292, 118);
				 this->buttonUp->Name = L"buttonUp";
				 this->buttonUp->Size = System::Drawing::Size(46, 28);
				 this->buttonUp->TabIndex = 18;
				 this->buttonUp->Text = L"Up";
				 this->buttonUp->UseVisualStyleBackColor = true;
				 this->buttonUp->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ParameterWindow::buttonMouseDown);
				 this->buttonUp->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &ParameterWindow::buttonMouseUp);
				 // 
				 // textBox1
				 // 
				 this->textBox1->Location = System::Drawing::Point(267, 242);
				 this->textBox1->Name = L"textBox1";
				 this->textBox1->Size = System::Drawing::Size(33, 20);
				 this->textBox1->TabIndex = 22;
				 this->textBox1->Text = L"40";
				 this->textBox1->TextChanged += gcnew System::EventHandler(this, &ParameterWindow::textBox1_TextChanged);
				 // 
				 // scrollTimer
				 // 
				 this->scrollTimer->Interval = 50;
				 // 
				 // buttonRefresh
				 // 
				 this->buttonRefresh->Location = System::Drawing::Point(306, 242);
				 this->buttonRefresh->Name = L"buttonRefresh";
				 this->buttonRefresh->Size = System::Drawing::Size(57, 19);
				 this->buttonRefresh->TabIndex = 23;
				 this->buttonRefresh->Text = L"Refresh";
				 this->buttonRefresh->UseVisualStyleBackColor = true;
				 this->buttonRefresh->Click += gcnew System::EventHandler(this, &ParameterWindow::buttonRefresh_Click);
				 // 
				 // buttonFilterToggle
				 // 
				 this->buttonFilterToggle->Location = System::Drawing::Point(274, 272);
				 this->buttonFilterToggle->Name = L"buttonFilterToggle";
				 this->buttonFilterToggle->Size = System::Drawing::Size(89, 23);
				 this->buttonFilterToggle->TabIndex = 24;
				 this->buttonFilterToggle->Text = L"Without Filter";
				 this->buttonFilterToggle->UseVisualStyleBackColor = true;
				 this->buttonFilterToggle->Click += gcnew System::EventHandler(this, &ParameterWindow::buttonFilterToggle_Click);
				 // 
				 // ParameterWindow
				 // 
				 this->AcceptButton = this->btnOkay;
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->CancelButton = this->btnCancel;
				 this->ClientSize = System::Drawing::Size(368, 307);
				 this->Controls->Add(this->buttonFilterToggle);
				 this->Controls->Add(this->buttonRefresh);
				 this->Controls->Add(this->textBox1);
				 this->Controls->Add(this->buttonLeft);
				 this->Controls->Add(this->buttonRight);
				 this->Controls->Add(this->buttonDown);
				 this->Controls->Add(this->buttonUp);
				 this->Controls->Add(this->btnCancel);
				 this->Controls->Add(this->btnOkay);
				 this->Controls->Add(this->pictureBox1);
				 this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
				 this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
				 this->Name = L"ParameterWindow";
				 this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
				 this->Text = L"Edge Detection Parameter Window";
				 this->Load += gcnew System::EventHandler(this, &ParameterWindow::ParameterWindow_Load);
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
#pragma endregion
#ifdef _DEBUG
	public: StreamWriter^ dout;
#endif
	private: System::Drawing::Bitmap^ originalPicture;

	private: int x, y, dx, dy;
	private: bool applyFilter;
	public: int sensitivity;
	private: System::Void updatePreview()
			 {
#ifdef _DEBUG
				 dout->WriteLine("PEA");
#endif
				 System::Drawing::Rectangle rect(x, y, pictureBox1->Width, pictureBox1->Height);
				 if(applyFilter){
#ifdef _DEBUG
					 dout->WriteLine("PEB");
#endif
					 pictureBox1->Image = FuzzyFilters::EdgeDetection(originalPicture->Clone(rect, originalPicture->PixelFormat), sensitivity);
				 }else{
#ifdef _DEBUG
					 dout->WriteLine("PEC");
#endif
					 pictureBox1->Image = originalPicture->Clone(rect, originalPicture->PixelFormat);
				 }
#ifdef _DEBUG
				 dout->WriteLine("PED");
#endif
			 }

	private: System::Void chkBxRed_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
#ifdef _DEBUG
				 dout->WriteLine("PEE");
#endif
				 updatePreview();
			 }
	private: System::Void chkBxGreen_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
#ifdef _DEBUG
				 dout->WriteLine("PEF");
#endif
				 updatePreview();
			 }
	private: System::Void chkBxBlue_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
#ifdef _DEBUG
				 dout->WriteLine("PEG");
#endif
				 updatePreview();
			 }
	private: System::Void ParameterWindow_Load(System::Object^  sender, System::EventArgs^  e) {
#ifdef _DEBUG
				 dout->WriteLine("PEH");
#endif
				 x = y = 0;
				 sensitivity = 40;
				 originalPicture = gcnew System::Drawing::Bitmap(this->pictureBox1->Image);
				 if(originalPicture->Width < this->pictureBox1->Width){
#ifdef _DEBUG
					 dout->WriteLine("PEI");
#endif
					 this->pictureBox1->Width = originalPicture->Width;
				 }
#ifdef _DEBUG
				 dout->WriteLine("PEJ");
#endif
				 if(originalPicture->Height < this->pictureBox1->Height){
#ifdef _DEBUG
					 dout->WriteLine("PEK");
#endif
					 this->pictureBox1->Height = originalPicture->Height;
				 }
				 scrollTimer->Interval = 50;
				 scrollTimer->Tick += gcnew System::EventHandler(this, &ParameterWindow::scrollEvent);
				 applyFilter = true;
				 updatePreview();
#ifdef _DEBUG
				 dout->WriteLine("PEL");
#endif
			 }

	private: System::Void buttonMouseDown(System::Object^  sender, MouseEventArgs^  e) {
#ifdef _DEBUG
				 dout->WriteLine("PEM");
#endif
				 if(sender == buttonUp){
#ifdef _DEBUG
					 dout->WriteLine("PEN");
#endif
					 dy = -1;
					 dx = 0;
				 }else if (sender == buttonDown){
#ifdef _DEBUG
					 dout->WriteLine("PEO");
#endif
					 dy = 1;
					 dx = 0;
				 }else if (sender == buttonLeft){
#ifdef _DEBUG
					 dout->WriteLine("PEP");
#endif
					 dy = 0;
					 dx = -1;
				 }else{
#ifdef _DEBUG
					 dout->WriteLine("PEQ");
#endif
					 dy = 0;
					 dx = 1;
				 }
				 scrollEvent(nullptr, nullptr); //Tick once immediately
				 scrollTimer->Enabled = true;   //Begin ticking continuously after
#ifdef _DEBUG
				 dout->WriteLine("PER");
#endif
			 }

	private: System::Void buttonMouseUp(System::Object^ sender, MouseEventArgs^ e){
				 scrollTimer->Enabled = false;
				 updatePreview();
#ifdef _DEBUG
				 dout->WriteLine("PES");
#endif
			 }

	private: System::Void scrollEvent(Object^ source, System::EventArgs^ e){
#ifdef _DEBUG
				 dout->WriteLine("PET");
#endif
				 x += (int)(originalPicture->Width * .05 * dx);
				 y += (int)(originalPicture->Height * .05 * dy);
				 if (x < 0){
#ifdef _DEBUG
					 dout->WriteLine("PEU");
#endif
					 x = 0;
					 scrollTimer->Enabled = false;
				 }
#ifdef _DEBUG
				 dout->WriteLine("PEV");
#endif
				 if(y < 0){
#ifdef _DEBUG
					 dout->WriteLine("PEW");
#endif
					 y = 0;
					 scrollTimer->Enabled = false;
				 }
#ifdef _DEBUG
				 dout->WriteLine("PEX");
#endif
				 if(x + pictureBox1->Width > originalPicture->Width){
#ifdef _DEBUG
					 dout->WriteLine("PEY");
#endif
					 x = originalPicture->Width - pictureBox1->Width;
					 scrollTimer->Enabled = false;
				 }
#ifdef _DEBUG
				 dout->WriteLine("PEZ");
#endif
				 if(y + pictureBox1->Height > originalPicture->Height){
#ifdef _DEBUG
					 dout->WriteLine("PEAA");
#endif
					 y = originalPicture->Height - pictureBox1->Height;
					 scrollTimer->Enabled = false;
				 }

				 scrollImage(); //Scrolling without the filter (reduces lag, when the scrolling stops the preview will be filtered)
#ifdef _DEBUG
				 dout->WriteLine("PEAB");
#endif
			 }
	private: System::Void scrollImage(){
#ifdef _DEBUG
				 dout->WriteLine("PEAC");
#endif
				 System::Drawing::Rectangle rect(x, y, pictureBox1->Width, pictureBox1->Height);
				 pictureBox1->Image = originalPicture->Clone(rect, originalPicture->PixelFormat);
			 }

	private: System::Void buttonRefresh_Click(System::Object^  sender, System::EventArgs^  e) {
				 try{
#ifdef _DEBUG
					 dout->WriteLine("PEAD");
#endif
					 sensitivity = Convert::ToInt32(textBox1->Text);
				 }catch(FormatException^ /*e1*/){
#ifdef _DEBUG
					 dout->WriteLine("PEAE");
#endif
					 sensitivity = 40;
					 textBox1->Text = "40";
				 }catch (OverflowException^ /*e1*/){
#ifdef _DEBUG
					 dout->WriteLine("PEAF");
#endif
					 sensitivity = 40;
					 textBox1->Text = "40";
				 }

				 updatePreview();
#ifdef _DEBUG
				 dout->WriteLine("PEAG");
#endif
			 }

	private: System::Void buttonFilterToggle_Click(System::Object^ sender, System::EventArgs^ e){
				 applyFilter = !applyFilter;
#ifdef _DEBUG
				 dout->WriteLine("PEAH");
#endif
				 if(applyFilter){
#ifdef _DEBUG
					 dout->WriteLine("PEAI");
#endif
					 buttonFilterToggle->Text = "Without Filter";
				 }else{
#ifdef _DEBUG
					 dout->WriteLine("PEAJ");
#endif
					 buttonFilterToggle->Text = "With Filter";
				 }
				 updatePreview();
#ifdef _DEBUG
				 dout->WriteLine("PEAK");
#endif
			 }

	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 try{
#ifdef _DEBUG
					 dout->WriteLine("PEAL");
#endif
					 sensitivity = Convert::ToInt32(textBox1->Text);
				 }catch(FormatException^ /*e1*/){
#ifdef _DEBUG
					 dout->WriteLine("PEAM");
#endif
					 sensitivity = 40;
				 }catch (OverflowException^ /*e1*/){
#ifdef _DEBUG
					 dout->WriteLine("PEAN");
#endif
					 sensitivity = 40;
				 }
#ifdef _DEBUG
				 dout->WriteLine("PEAO");
#endif
			 }
	};
}
