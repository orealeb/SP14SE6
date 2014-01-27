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
	/// Summary for Zoom
	/// </summary>
	public ref class ZoomWindow : public System::Windows::Forms::Form
	{
	public:
		ZoomWindow(void)
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
		~ZoomWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  btnCancel;
	private: System::Windows::Forms::Button^  btnOkay;
	private: System::Windows::Forms::Button^  saveBtn;
	protected: 
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;

	
#ifdef _DEBUG
	private: StreamWriter ^ dout;

#endif


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
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnOkay = (gcnew System::Windows::Forms::Button());
			this->saveBtn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Default;
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(764, 460);
<<<<<<< .working
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
=======
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
>>>>>>> .merge-right.r5
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &ZoomWindow::pictureBox1_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnCancel->Location = System::Drawing::Point(364, 478);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(75, 23);
			this->btnCancel->TabIndex = 3;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &ZoomWindow::btnCancel_Click);
			// 
			// btnOkay
			// 
			this->btnOkay->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->btnOkay->Location = System::Drawing::Point(279, 478);
			this->btnOkay->Name = L"btnOkay";
			this->btnOkay->Size = System::Drawing::Size(75, 23);
			this->btnOkay->TabIndex = 2;
			this->btnOkay->Text = L"Okay";
			this->btnOkay->UseVisualStyleBackColor = true;
			this->btnOkay->Click += gcnew System::EventHandler(this, &ZoomWindow::btnOkay_Click);
			// 
			// saveBtn
			// 
			this->saveBtn->DialogResult = System::Windows::Forms::DialogResult::Yes;
			this->saveBtn->Location = System::Drawing::Point(445, 478);
			this->saveBtn->Name = L"saveBtn";
			this->saveBtn->Size = System::Drawing::Size(75, 23);
			this->saveBtn->TabIndex = 4;
			this->saveBtn->Text = L"Save";
			this->saveBtn->UseVisualStyleBackColor = true;
			this->saveBtn->Click += gcnew System::EventHandler(this, &ZoomWindow::saveBtn_Click);
			// 
			// ZoomWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(788, 513);
			this->Controls->Add(this->saveBtn);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOkay);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"ZoomWindow";
			this->ShowIcon = false;
			this->Text = L"Zoom in Window ";
			this->Load += gcnew System::EventHandler(this, &ZoomWindow::ZoomWindow_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	
		
private: System::Void saveBtn_Click(System::Object^  sender, System::EventArgs^  e) {

		
				 if(pictureBox1->Image != nullptr)
				 {

					 saveFileDialog1->FileName = " ";
					 saveFileDialog1->Filter = "Bitmap Image | *.bmp";
					 if(saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
					 {

						 pictureBox1->Image->Save(saveFileDialog1->FileName);
						// zoomedinPicture->->FileName = saveFileDialog1->FileName->Substring(saveFileDialog1->FileName->LastIndexOf("\\") + 1);
					 }
				 }

			 
		 }
private: System::Void ZoomWindow_Load(System::Object^  sender, System::EventArgs^  e) {



		 }
private: System::Void btnOkay_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
private: System::Void btnCancel_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
