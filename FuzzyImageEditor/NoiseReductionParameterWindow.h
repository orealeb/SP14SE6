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
	/// Summary for NoiseReductionParameterWindow
	/// </summary>
	public ref class NoiseReductionParameterWindow : public System::Windows::Forms::Form
	{
	public:
		NoiseReductionParameterWindow(void)
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
		~NoiseReductionParameterWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  buttonFilterToggle;
	protected: 
	private: System::Windows::Forms::Button^  buttonLeft;
	private: System::Windows::Forms::Button^  buttonRight;
	private: System::Windows::Forms::Button^  buttonDown;
	private: System::Windows::Forms::Button^  buttonUp;
	private: System::Windows::Forms::Button^  btnCancel;
	private: System::Windows::Forms::Button^  btnOkay;

	private: 



	public: 
	public: System::Windows::Forms::PictureBox^  pictureBox1;
	private: 
	private: System::Windows::Forms::Timer^  scrollTimer;
	public: System::Windows::Forms::RadioButton^  normalRadio;
	public: System::Windows::Forms::RadioButton^  strongRadio;
	public: System::Windows::Forms::RadioButton^  exStrongRadio;



	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	public: 
	private: System::ComponentModel::IContainer^  components;

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
			this->buttonFilterToggle = (gcnew System::Windows::Forms::Button());
			this->buttonLeft = (gcnew System::Windows::Forms::Button());
			this->buttonRight = (gcnew System::Windows::Forms::Button());
			this->buttonDown = (gcnew System::Windows::Forms::Button());
			this->buttonUp = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnOkay = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->scrollTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->normalRadio = (gcnew System::Windows::Forms::RadioButton());
			this->strongRadio = (gcnew System::Windows::Forms::RadioButton());
			this->exStrongRadio = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonFilterToggle
			// 
			this->buttonFilterToggle->Location = System::Drawing::Point(276, 272);
			this->buttonFilterToggle->Name = L"buttonFilterToggle";
			this->buttonFilterToggle->Size = System::Drawing::Size(89, 23);
			this->buttonFilterToggle->TabIndex = 41;
			this->buttonFilterToggle->Text = L"With Filter";
			this->buttonFilterToggle->UseVisualStyleBackColor = true;
			this->buttonFilterToggle->Click += gcnew System::EventHandler(this, &NoiseReductionParameterWindow::buttonFilterToggle_Click);
			// 
			// buttonLeft
			// 
			this->buttonLeft->Location = System::Drawing::Point(269, 200);
			this->buttonLeft->Name = L"buttonLeft";
			this->buttonLeft->Size = System::Drawing::Size(46, 28);
			this->buttonLeft->TabIndex = 40;
			this->buttonLeft->Text = L"Left";
			this->buttonLeft->UseVisualStyleBackColor = true;
			this->buttonLeft->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &NoiseReductionParameterWindow::buttonMouseDown);
			this->buttonLeft->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &NoiseReductionParameterWindow::buttonMouseUp);
			// 
			// buttonRight
			// 
			this->buttonRight->Location = System::Drawing::Point(324, 200);
			this->buttonRight->Name = L"buttonRight";
			this->buttonRight->Size = System::Drawing::Size(41, 28);
			this->buttonRight->TabIndex = 39;
			this->buttonRight->Text = L"Right";
			this->buttonRight->UseVisualStyleBackColor = true;
			this->buttonRight->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &NoiseReductionParameterWindow::buttonMouseDown);
			this->buttonRight->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &NoiseReductionParameterWindow::buttonMouseUp);
			// 
			// buttonDown
			// 
			this->buttonDown->Location = System::Drawing::Point(294, 234);
			this->buttonDown->Name = L"buttonDown";
			this->buttonDown->Size = System::Drawing::Size(46, 28);
			this->buttonDown->TabIndex = 38;
			this->buttonDown->Text = L"Down";
			this->buttonDown->UseVisualStyleBackColor = true;
			this->buttonDown->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &NoiseReductionParameterWindow::buttonMouseDown);
			this->buttonDown->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &NoiseReductionParameterWindow::buttonMouseUp);
			// 
			// buttonUp
			// 
			this->buttonUp->Location = System::Drawing::Point(294, 166);
			this->buttonUp->Name = L"buttonUp";
			this->buttonUp->Size = System::Drawing::Size(46, 28);
			this->buttonUp->TabIndex = 37;
			this->buttonUp->Text = L"Up";
			this->buttonUp->UseVisualStyleBackColor = true;
			this->buttonUp->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &NoiseReductionParameterWindow::buttonMouseDown);
			this->buttonUp->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &NoiseReductionParameterWindow::buttonMouseUp);
			// 
			// btnCancel
			// 
			this->btnCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnCancel->Location = System::Drawing::Point(174, 272);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(75, 23);
			this->btnCancel->TabIndex = 36;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			// 
			// btnOkay
			// 
			this->btnOkay->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->btnOkay->Location = System::Drawing::Point(93, 272);
			this->btnOkay->Name = L"btnOkay";
			this->btnOkay->Size = System::Drawing::Size(75, 23);
			this->btnOkay->TabIndex = 35;
			this->btnOkay->Text = L"Okay";
			this->btnOkay->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(250, 250);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 30;
			this->pictureBox1->TabStop = false;
			// 
			// scrollTimer
			// 
			this->scrollTimer->Interval = 50;
			// 
			// normalRadio
			// 
			this->normalRadio->AutoSize = true;
			this->normalRadio->Checked = true;
			this->normalRadio->Location = System::Drawing::Point(282, 42);
			this->normalRadio->Name = L"normalRadio";
			this->normalRadio->Size = System::Drawing::Size(84, 17);
			this->normalRadio->TabIndex = 42;
			this->normalRadio->TabStop = true;
			this->normalRadio->Text = L"Normal (fast)";
			this->normalRadio->UseVisualStyleBackColor = true;
			this->normalRadio->CheckedChanged += gcnew System::EventHandler(this, &NoiseReductionParameterWindow::radioButton1_CheckedChanged);
			// 
			// strongRadio
			// 
			this->strongRadio->AutoSize = true;
			this->strongRadio->Location = System::Drawing::Point(282, 66);
			this->strongRadio->Name = L"strongRadio";
			this->strongRadio->Size = System::Drawing::Size(86, 17);
			this->strongRadio->TabIndex = 43;
			this->strongRadio->Text = L"Strong (slow)";
			this->strongRadio->UseVisualStyleBackColor = true;
			this->strongRadio->CheckedChanged += gcnew System::EventHandler(this, &NoiseReductionParameterWindow::radioButton2_CheckedChanged);
			// 
			// exStrongRadio
			// 
			this->exStrongRadio->AutoSize = true;
			this->exStrongRadio->Location = System::Drawing::Point(282, 89);
			this->exStrongRadio->Name = L"exStrongRadio";
			this->exStrongRadio->Size = System::Drawing::Size(89, 17);
			this->exStrongRadio->TabIndex = 44;
			this->exStrongRadio->Text = L"Extra Stength";
			this->exStrongRadio->UseVisualStyleBackColor = true;
			this->exStrongRadio->CheckedChanged += gcnew System::EventHandler(this, &NoiseReductionParameterWindow::radioButton3_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(268, 109);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 13);
			this->label1->TabIndex = 45;
			this->label1->Text = L"Warning: Very Slow";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(268, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 16);
			this->label2->TabIndex = 46;
			this->label2->Text = L"Filter Strength";
			// 
			// NoiseReductionParameterWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(377, 305);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->exStrongRadio);
			this->Controls->Add(this->strongRadio);
			this->Controls->Add(this->normalRadio);
			this->Controls->Add(this->buttonFilterToggle);
			this->Controls->Add(this->buttonLeft);
			this->Controls->Add(this->buttonRight);
			this->Controls->Add(this->buttonDown);
			this->Controls->Add(this->buttonUp);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOkay);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"NoiseReductionParameterWindow";
			this->Text = L"Noise Reduction Parameter Window";
			this->Load += gcnew System::EventHandler(this, &NoiseReductionParameterWindow::NoiseReductionParameterWindow_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: System::Drawing::Bitmap^ originalPicture;
	private: int x, y, dx, dy;
	private: bool applyFilter;


#ifdef _DEBUG
	public: StreamWriter^ dout;
#endif

	private: System::Void updatePreview()
			 {
#ifdef _DEBUG
				 dout->WriteLine("PIA");
#endif
				 System::Drawing::Rectangle rect(x, y,pictureBox1->Width, pictureBox1->Height);
				 if(applyFilter)
				 {
#ifdef _DEBUG
					 dout->WriteLine("PNB");
#endif
					 if (normalRadio->Checked)	{
#ifdef _DEBUG
						 dout->WriteLine("PNC");
#endif
						 pictureBox1->Image = FuzzyFilters::NoiseReduction(originalPicture->Clone(rect,originalPicture->PixelFormat),1,1);
					 }else if (strongRadio->Checked){
#ifdef _DEBUG
						 dout->WriteLine("PND");
#endif
						 pictureBox1->Image = FuzzyFilters::NoiseReduction(originalPicture->Clone(rect,originalPicture->PixelFormat),2,1);
					 }else{
#ifdef _DEBUG
						 dout->WriteLine("PNE");
#endif
						 pictureBox1->Image = FuzzyFilters::NoiseReduction(originalPicture->Clone(rect,originalPicture->PixelFormat),3,3);
					 }
				 }
				 else{
#ifdef _DEBUG
					 dout->WriteLine("PNF");
#endif
					 pictureBox1->Image = originalPicture->Clone(rect, originalPicture->PixelFormat);
				 }
#ifdef _DEBUG
				 dout->WriteLine("PNG");
#endif
			 }


	private: System::Void buttonMouseDown(System::Object^  sender, MouseEventArgs^  e) {
#ifdef _DEBUG
				 dout->WriteLine("PNH");
#endif
				 if(sender == buttonUp){
#ifdef _DEBUG
					 dout->WriteLine("PNI");
#endif
					 dy = -1;
					 dx = 0;
				 }else if (sender == buttonDown){
#ifdef _DEBUG
					 dout->WriteLine("PNJ");
#endif
					 dy = 1;
					 dx = 0;
				 }else if (sender == buttonLeft){
#ifdef _DEBUG
					 dout->WriteLine("PNK");
#endif
					 dy = 0;
					 dx = -1;
				 }else{
#ifdef _DEBUG
					 dout->WriteLine("PNL");
#endif
					 dy = 0;
					 dx = 1;
				 }
				 scrollEvent(nullptr, nullptr); //Tick once immediately
				 scrollTimer->Enabled = true;   //Begin ticking continuously after
#ifdef _DEBUG
				 dout->WriteLine("PNM");
#endif
			 }

	private: System::Void buttonMouseUp(System::Object^ sender, MouseEventArgs^ e){
#ifdef _DEBUG
				 dout->WriteLine("PNN");
#endif
				 scrollTimer->Enabled = false;
				 updatePreview();
			 }

	private: System::Void scrollEvent(Object^ source, System::EventArgs^ e){
#ifdef _DEBUG
				 dout->WriteLine("PNO");
#endif
				 x += (int)(originalPicture->Width * .05 * dx);
				 y += (int)(originalPicture->Height * .05 * dy);
				 if (x < 0){
#ifdef _DEBUG
					 dout->WriteLine("PNP");
#endif
					 x = 0;
					 scrollTimer->Enabled = false;
				 }
#ifdef _DEBUG
				 dout->WriteLine("PNQ");
#endif
				 if(y < 0){
#ifdef _DEBUG
					 dout->WriteLine("PNR");
#endif
					 y = 0;
					 scrollTimer->Enabled = false;
				 }
#ifdef _DEBUG
				 dout->WriteLine("PNS");
#endif
				 if(x + pictureBox1->Width > originalPicture->Width){
#ifdef _DEBUG
					 dout->WriteLine("PNT");
#endif
					 x = originalPicture->Width - pictureBox1->Width;
					 scrollTimer->Enabled = false;
				 }
#ifdef _DEBUG
				 dout->WriteLine("PNU");
#endif
				 if(y + pictureBox1->Height > originalPicture->Height){
#ifdef _DEBUG
					 dout->WriteLine("PNV");
#endif
					 y = originalPicture->Height - pictureBox1->Height;
					 scrollTimer->Enabled = false;
				 }
				 scrollImage(); //Scrolling without the filter (reduces lag, when the scrolling stops the preview will be filtered)
#ifdef _DEBUG
				 dout->WriteLine("PNW");
#endif

			 }
	private: System::Void scrollImage(){
#ifdef _DEBUG
				 dout->WriteLine("PNX");
#endif
				 System::Drawing::Rectangle rect(x, y, pictureBox1->Width, pictureBox1->Height);
				 pictureBox1->Image = originalPicture->Clone(rect, originalPicture->PixelFormat);
			 }


	private: System::Void buttonFilterToggle_Click(System::Object^  sender, System::EventArgs^  e) {
#ifdef _DEBUG
				 dout->WriteLine("PNY");
#endif
				 applyFilter = !applyFilter;
				 if(applyFilter){
#ifdef _DEBUG
					 dout->WriteLine("PNZ");
#endif
					 buttonFilterToggle->Text = "Without Filter";
				 }else{
#ifdef _DEBUG
					 dout->WriteLine("PNAA");
#endif
					 buttonFilterToggle->Text = "With Filter";
				 }
				 updatePreview();
#ifdef _DEBUG
				 dout->WriteLine("PNAB");
#endif
			 }

	private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
#ifdef _DEBUG
				 dout->WriteLine("PNAC");
#endif
				 updatePreview();
			 }
	private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
#ifdef _DEBUG
				 dout->WriteLine("PNAD");
#endif
				 updatePreview();
			 }
	private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
#ifdef _DEBUG
				 dout->WriteLine("PNAE");
#endif
				 updatePreview();
			 }

	private: System::Void NoiseReductionParameterWindow_Load(System::Object^  sender, System::EventArgs^  e) {
#ifdef _DEBUG
				 dout->WriteLine("PNAF");
#endif
				 x = y = 0;
				 //originalPicture = gcnew System::Drawing::Bitmap(this->pictureBox1->Image);
				 if(originalPicture->Width < this->pictureBox1->Width){
#ifdef _DEBUG
					 dout->WriteLine("PNAG");
#endif
					 this->pictureBox1->Width = originalPicture->Width;
				 }
				 if(originalPicture->Height < this->pictureBox1->Height){
#ifdef _DEBUG
					 dout->WriteLine("PNAH");
#endif
					 this->pictureBox1->Height = originalPicture->Height;
				 }
				 scrollTimer->Interval = 50;
				 scrollTimer->Tick += gcnew System::EventHandler(this, &NoiseReductionParameterWindow::scrollEvent);
				 applyFilter = false;
				 updatePreview();
#ifdef _DEBUG
				 dout->WriteLine("PNAI");
#endif
			 }

};
}
