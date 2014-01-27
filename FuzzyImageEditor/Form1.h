#pragma once
#include "SideBySideView.h"
#include "ContrastParameterWindow.h"
#include "InverseContrastParameterWindow.h"
#include "ParameterWindow.h"
#include "SharpeningParameterWindow.h"
#include "NoiseReductionParameterWindow.h"
#include "ZoomWindow.h"
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
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();

			this->WindowState = FormWindowState::Maximized;
			for(int i = 0; i < filtersToolStripMenuItem->DropDownItems->Count; i++)
				filtersToolStripMenuItem->DropDownItems[i]->Enabled = false;

#ifdef _DEBUG
			dout = gcnew StreamWriter("debugtrace.txt", false);
			dout->WriteLine("FA");
			dout->AutoFlush = true;
#endif
		}



	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveAsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  editToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^  filtersToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  contrastToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  sharpeningToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  noiseReductionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  edgeDetectionToolStripMenuItem;


	private: BitmapStack ^ stack;
	private: System::Windows::Forms::ToolStripMenuItem^  undoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  redoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  sideBySideToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  inverseContrastToolStripMenuItem;

	private: System::Windows::Forms::Button^  buttonSave;
	private: System::Windows::Forms::Button^  buttonUndo;
	private: System::Windows::Forms::Button^  buttonRedo;
	private: System::Windows::Forms::Button^  buttonContrast;
	private: System::Windows::Forms::Button^  buttonSharpening;
	private: System::Windows::Forms::Button^  buttonNoiseReduction;
	private: System::Windows::Forms::Button^  buttonEdgeDetection;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;
	private: System::Windows::Forms::Button^  buttonZoomIn;


#ifdef _DEBUG
	private: StreamWriter ^ dout;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->undoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->redoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->filtersToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contrastToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->inverseContrastToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sharpeningToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->noiseReductionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->edgeDetectionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sideBySideToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->buttonSave = (gcnew System::Windows::Forms::Button());
			this->buttonUndo = (gcnew System::Windows::Forms::Button());
			this->buttonRedo = (gcnew System::Windows::Forms::Button());
			this->buttonContrast = (gcnew System::Windows::Forms::Button());
			this->buttonSharpening = (gcnew System::Windows::Forms::Button());
			this->buttonNoiseReduction = (gcnew System::Windows::Forms::Button());
			this->buttonEdgeDetection = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->buttonZoomIn = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->fileToolStripMenuItem, 
				this->editToolStripMenuItem, this->filtersToolStripMenuItem, this->sideBySideToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(784, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->openToolStripMenuItem, 
				this->saveAsToolStripMenuItem, this->exitToolStripMenuItem});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"&File";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->openToolStripMenuItem->Text = L"&Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::openToolStripMenuItem_Click);
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->saveAsToolStripMenuItem->Text = L"&Save As";
			this->saveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::saveAsToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->undoToolStripMenuItem, 
				this->redoToolStripMenuItem});
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			this->editToolStripMenuItem->Text = L"&Edit";
			// 
			// undoToolStripMenuItem
			// 
			this->undoToolStripMenuItem->Enabled = false;
			this->undoToolStripMenuItem->Name = L"undoToolStripMenuItem";
			this->undoToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->undoToolStripMenuItem->Text = L"&Undo";
			this->undoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::undoToolStripMenuItem_Click);
			// 
			// redoToolStripMenuItem
			// 
			this->redoToolStripMenuItem->Enabled = false;
			this->redoToolStripMenuItem->Name = L"redoToolStripMenuItem";
			this->redoToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->redoToolStripMenuItem->Text = L"&Redo";
			this->redoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::redoToolStripMenuItem_Click);
			// 
			// filtersToolStripMenuItem
			// 
			this->filtersToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->contrastToolStripMenuItem, 
				this->inverseContrastToolStripMenuItem, this->sharpeningToolStripMenuItem, this->noiseReductionToolStripMenuItem, this->edgeDetectionToolStripMenuItem});
			this->filtersToolStripMenuItem->Name = L"filtersToolStripMenuItem";
			this->filtersToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->filtersToolStripMenuItem->Text = L"Filters";
			// 
			// contrastToolStripMenuItem
			// 
			this->contrastToolStripMenuItem->Name = L"contrastToolStripMenuItem";
			this->contrastToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->contrastToolStripMenuItem->Text = L"Contrast";
			this->contrastToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::contrastToolStripMenuItem_Click);
			// 
			// inverseContrastToolStripMenuItem
			// 
			this->inverseContrastToolStripMenuItem->Name = L"inverseContrastToolStripMenuItem";
			this->inverseContrastToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->inverseContrastToolStripMenuItem->Text = L"Inverse Contrast";
			this->inverseContrastToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::inverseContrastToolStripMenuItem_Click);
			// 
			// sharpeningToolStripMenuItem
			// 
			this->sharpeningToolStripMenuItem->Name = L"sharpeningToolStripMenuItem";
			this->sharpeningToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->sharpeningToolStripMenuItem->Text = L"Sharpening";
			this->sharpeningToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::sharpeningToolStripMenuItem_Click);
			// 
			// noiseReductionToolStripMenuItem
			// 
			this->noiseReductionToolStripMenuItem->Name = L"noiseReductionToolStripMenuItem";
			this->noiseReductionToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->noiseReductionToolStripMenuItem->Text = L"Noise Reduction";
			this->noiseReductionToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::noiseReductionToolStripMenuItem_Click);
			// 
			// edgeDetectionToolStripMenuItem
			// 
			this->edgeDetectionToolStripMenuItem->Name = L"edgeDetectionToolStripMenuItem";
			this->edgeDetectionToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->edgeDetectionToolStripMenuItem->Text = L"Edge Detection";
			this->edgeDetectionToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::edgeDetectionToolStripMenuItem_Click);
			// 
			// sideBySideToolStripMenuItem
			// 
			this->sideBySideToolStripMenuItem->Enabled = false;
			this->sideBySideToolStripMenuItem->Name = L"sideBySideToolStripMenuItem";
			this->sideBySideToolStripMenuItem->Size = System::Drawing::Size(76, 20);
			this->sideBySideToolStripMenuItem->Text = L"SideBySide";
			this->sideBySideToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::sideBySideToolStripMenuItem_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->Location = System::Drawing::Point(0, 24);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 1, 3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(784, 506);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::pictureBox1_Paint);
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::pictureBox1_MouseDown);
			this->pictureBox1->MouseLeave += gcnew System::EventHandler(this, &Form1::pictureBox1_MouseLeave);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::pictureBox1_MouseMove);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::pictureBox1_MouseUp);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// buttonSave
			// 
			this->buttonSave->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->buttonSave->Enabled = false;
			this->buttonSave->Location = System::Drawing::Point(12, 536);
			this->buttonSave->Name = L"buttonSave";
			this->buttonSave->Size = System::Drawing::Size(75, 23);
			this->buttonSave->TabIndex = 2;
			this->buttonSave->Text = L"Save As...";
			this->buttonSave->UseVisualStyleBackColor = true;
			this->buttonSave->Click += gcnew System::EventHandler(this, &Form1::saveAsToolStripMenuItem_Click);
			// 
			// buttonUndo
			// 
			this->buttonUndo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->buttonUndo->Enabled = false;
			this->buttonUndo->Location = System::Drawing::Point(93, 536);
			this->buttonUndo->Name = L"buttonUndo";
			this->buttonUndo->Size = System::Drawing::Size(55, 23);
			this->buttonUndo->TabIndex = 3;
			this->buttonUndo->Text = L"Undo";
			this->buttonUndo->UseVisualStyleBackColor = true;
			this->buttonUndo->Click += gcnew System::EventHandler(this, &Form1::undoToolStripMenuItem_Click);
			// 
			// buttonRedo
			// 
			this->buttonRedo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->buttonRedo->Enabled = false;
			this->buttonRedo->Location = System::Drawing::Point(154, 536);
			this->buttonRedo->Name = L"buttonRedo";
			this->buttonRedo->Size = System::Drawing::Size(53, 23);
			this->buttonRedo->TabIndex = 4;
			this->buttonRedo->Text = L"Redo";
			this->buttonRedo->UseVisualStyleBackColor = true;
			this->buttonRedo->Click += gcnew System::EventHandler(this, &Form1::redoToolStripMenuItem_Click);
			// 
			// buttonContrast
			// 
			this->buttonContrast->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->buttonContrast->Enabled = false;
			this->buttonContrast->Location = System::Drawing::Point(213, 536);
			this->buttonContrast->Name = L"buttonContrast";
			this->buttonContrast->Size = System::Drawing::Size(102, 23);
			this->buttonContrast->TabIndex = 5;
			this->buttonContrast->Text = L"Contrast";
			this->buttonContrast->UseVisualStyleBackColor = true;
			this->buttonContrast->Click += gcnew System::EventHandler(this, &Form1::contrastToolStripMenuItem_Click);
			// 
			// buttonSharpening
			// 
			this->buttonSharpening->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->buttonSharpening->Enabled = false;
			this->buttonSharpening->Location = System::Drawing::Point(321, 536);
			this->buttonSharpening->Name = L"buttonSharpening";
			this->buttonSharpening->Size = System::Drawing::Size(102, 23);
			this->buttonSharpening->TabIndex = 6;
			this->buttonSharpening->Text = L"Sharpening";
			this->buttonSharpening->UseVisualStyleBackColor = true;
			this->buttonSharpening->Click += gcnew System::EventHandler(this, &Form1::sharpeningToolStripMenuItem_Click);
			// 
			// buttonNoiseReduction
			// 
			this->buttonNoiseReduction->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->buttonNoiseReduction->Enabled = false;
			this->buttonNoiseReduction->Location = System::Drawing::Point(429, 536);
			this->buttonNoiseReduction->Name = L"buttonNoiseReduction";
			this->buttonNoiseReduction->Size = System::Drawing::Size(102, 23);
			this->buttonNoiseReduction->TabIndex = 7;
			this->buttonNoiseReduction->Text = L"Noise Reduction";
			this->buttonNoiseReduction->UseVisualStyleBackColor = true;
			this->buttonNoiseReduction->Click += gcnew System::EventHandler(this, &Form1::noiseReductionToolStripMenuItem_Click);
			// 
			// buttonEdgeDetection
			// 
			this->buttonEdgeDetection->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->buttonEdgeDetection->Enabled = false;
			this->buttonEdgeDetection->Location = System::Drawing::Point(537, 536);
			this->buttonEdgeDetection->Name = L"buttonEdgeDetection";
			this->buttonEdgeDetection->Size = System::Drawing::Size(102, 23);
			this->buttonEdgeDetection->TabIndex = 8;
			this->buttonEdgeDetection->Text = L"Edge Detection";
			this->buttonEdgeDetection->UseVisualStyleBackColor = true;
			this->buttonEdgeDetection->Click += gcnew System::EventHandler(this, &Form1::edgeDetectionToolStripMenuItem_Click);
			// 
			// buttonZoomIn
			// 
			this->buttonZoomIn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->buttonZoomIn->Enabled = false;
			this->buttonZoomIn->Location = System::Drawing::Point(645, 536);
			this->buttonZoomIn->Name = L"buttonZoomIn";
			this->buttonZoomIn->Size = System::Drawing::Size(102, 23);
			this->buttonZoomIn->TabIndex = 9;
			this->buttonZoomIn->Text = L"Zoom In";
			this->buttonZoomIn->UseVisualStyleBackColor = true;
			this->buttonZoomIn->Click += gcnew System::EventHandler(this, &Form1::buttonZoomIn_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 562);
			this->Controls->Add(this->buttonZoomIn);
			this->Controls->Add(this->buttonEdgeDetection);
			this->Controls->Add(this->buttonNoiseReduction);
			this->Controls->Add(this->buttonSharpening);
			this->Controls->Add(this->buttonContrast);
			this->Controls->Add(this->buttonRedo);
			this->Controls->Add(this->buttonUndo);
			this->Controls->Add(this->buttonSave);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Fuzzy Image Processor";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
#ifdef _DEBUG
				 dout->WriteLine("FAV");
				 dout->Close();
#endif
				 Application::Exit();				 
			 }
	private: System::Void openToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
#ifdef _DEBUG
				 dout->WriteLine("FA");
#endif

				 openFileDialog1->FileName = nullptr;


				 if(openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				 {
#ifdef _DEBUG
					 dout->WriteLine("FB");
#endif

					 //^ (Handle To Object) = managed pointer, gcnew = garbage collectable new allocation
					 stack = gcnew BitmapStack(openFileDialog1->FileName);

#ifdef _DEBUG
					 stack->dout = dout;
#endif

					 this->pictureBox1->Image = stack->Peek();

					 redoToolStripMenuItem->Enabled = false;
					 buttonRedo->Enabled = false;
					 undoToolStripMenuItem->Enabled = false;
					 buttonUndo->Enabled = false;
					 sideBySideToolStripMenuItem->Enabled = false;
					 if(SideBySide != nullptr){
#ifdef _DEBUG
						 dout->WriteLine("FC");
#endif
						 SideBySide->Close();
					 }
					 for(int i = 0; i < filtersToolStripMenuItem->DropDownItems->Count; i++)
						 filtersToolStripMenuItem->DropDownItems[i]->Enabled = true;
					 buttonContrast->Enabled = true;
					 buttonSharpening->Enabled = true;
					 buttonNoiseReduction->Enabled = true;
					 buttonEdgeDetection->Enabled = true;
					 buttonSave->Enabled = true;
					 buttonZoomIn->Enabled = true;


#ifdef _DEBUG
					 dout->WriteLine("FD");
#endif
				 }
			 }
	private: System::Void saveAsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
#ifdef _DEBUG
				 dout->WriteLine("FE");
#endif
				 if(stack != nullptr && stack->IsEmpty() == false)
				 {
#ifdef _DEBUG
					 dout->WriteLine("FF");
#endif
					 saveFileDialog1->FileName = stack->FileName;
					 saveFileDialog1->Filter = "Bitmap Image | *.bmp";
					 if(saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
					 {
#ifdef _DEBUG
						 dout->WriteLine("FG");
#endif
						 stack->Peek()->Save(saveFileDialog1->FileName);
						 stack->FileName = saveFileDialog1->FileName->Substring(saveFileDialog1->FileName->LastIndexOf("\\") + 1);
					 }
				 }
#ifdef _DEBUG
				 dout->WriteLine("FH");
#endif
			 }
	private: System::Void undoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
#ifdef _DEBUG
				 dout->WriteLine("FI");
#endif
				 if(stack->CurrentHasPrev())
				 {
#ifdef _DEBUG
					 dout->WriteLine("FJ");
#endif
					 stack->TraversePrev();
					 redoToolStripMenuItem->Enabled = true;
					 buttonRedo->Enabled = true;
					 this->pictureBox1->Image = stack->Peek();
				 }
#ifdef _DEBUG
				 dout->WriteLine("FK");
#endif
				 if(!stack->CurrentHasPrev())
				 {
#ifdef _DEBUG
					 dout->WriteLine("FL");
#endif
					 undoToolStripMenuItem->Enabled = false;
					 buttonUndo->Enabled = false;
					 sideBySideToolStripMenuItem->Enabled = false;
				 }
				 else
				 {
#ifdef _DEBUG
					 dout->WriteLine("FM");
#endif
					 undoToolStripMenuItem->Enabled = true;
					 buttonUndo->Enabled = true;
					 sideBySideToolStripMenuItem->Enabled = true;
				 }
#ifdef _DEBUG
				 dout->WriteLine("FN");
#endif
			 }
	private: System::Void redoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
#ifdef _DEBUG
				 dout->WriteLine("FO");
#endif
				 if(stack->CurrentHasNext())
				 {
#ifdef _DEBUG
					 dout->WriteLine("FP");
#endif
					 stack->TraverseNext();
					 undoToolStripMenuItem->Enabled = true;
					 buttonUndo->Enabled = true;
					 this->pictureBox1->Image = stack->Peek();
				 }
#ifdef _DEBUG
				 dout->WriteLine("FQ");
#endif
				 if(!stack->CurrentHasNext())
				 {
#ifdef _DEBUG
					 dout->WriteLine("FR");
#endif
					 sideBySideToolStripMenuItem->Enabled = true;
					 redoToolStripMenuItem->Enabled = false;
					 buttonRedo->Enabled = false;
				 }
				 else
				 {
#ifdef _DEBUG
					 dout->WriteLine("FS");
#endif
					 sideBySideToolStripMenuItem->Enabled = true;
					 redoToolStripMenuItem->Enabled = true;
					 buttonRedo->Enabled = true;
				 }
#ifdef _DEBUG
				 dout->WriteLine("FT");
#endif
			 }

	private: int min(int a, int b)
			 {
#ifdef _DEBUG
				 dout->WriteLine("FU");
#endif
				 return a>b? b : a;
			 }

	private: System::Void contrastToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 ContrastParameterWindow^ cpw = gcnew ContrastParameterWindow();
#ifdef _DEBUG
				 cpw->dout = dout;
#endif
				 cpw->pictureBox1->Image = stack->Peek();
#ifdef _DEBUG
				 dout->WriteLine("FV");
#endif
				 if(cpw->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				 {
#ifdef _DEBUG
					 dout->WriteLine("FW");
#endif
					 this->Cursor = Cursors::WaitCursor;
					 Bitmap ^ newBitMap = FuzzyFilters::Contrast(stack->Peek(),cpw->chkBxRed->Checked,cpw->chkBxGreen->Checked,cpw->chkBxBlue->Checked);

					 redoToolStripMenuItem->Enabled = false;
					 buttonRedo->Enabled = false;
					 undoToolStripMenuItem->Enabled = true;
					 buttonUndo->Enabled = true;
					 sideBySideToolStripMenuItem->Enabled = true;
					 stack->Push(newBitMap);
					 this->pictureBox1->Image = stack->Peek();
				 }
				 this->Cursor = Cursors::Default;
#ifdef _DEBUG
				 dout->WriteLine("FX");
#endif
			 }
	private: System::Void edgeDetectionToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 ParameterWindow pw;
				 pw.pictureBox1->Image = stack->Peek();
#ifdef _DEBUG
				 pw.dout = dout;
				 dout->WriteLine("FZ");
#endif
				 if(pw.ShowDialog() == System::Windows::Forms::DialogResult::OK)
				 {
#ifdef _DEBUG
					 dout->WriteLine("FAA");
#endif
					 this->Cursor = Cursors::WaitCursor;
					 stack->Push(FuzzyFilters::EdgeDetection(stack->Peek(), pw.sensitivity));
					 this->pictureBox1->Image = stack->Peek();
					 redoToolStripMenuItem->Enabled = false;
					 buttonRedo->Enabled = false;
					 sideBySideToolStripMenuItem->Enabled = true;
					 undoToolStripMenuItem->Enabled = true;
					 buttonUndo->Enabled = true;
					 this->Cursor = Cursors::Default;
				 }
#ifdef _DEBUG
				 dout->WriteLine("FAB");
#endif
			 }

	private: System::Void sharpeningToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 SharpeningParameterWindow SPW;
				 SPW.pictureBox1->Image = stack->Peek();
#ifdef _DEBUG
				 SPW.dout = dout;
				 dout->WriteLine("FAC");
#endif
				 if(SPW.ShowDialog() == System::Windows::Forms::DialogResult::OK)
				 {
#ifdef _DEBUG
					 dout->WriteLine("FAD");
#endif
					 this->Cursor = Cursors::WaitCursor;
					 stack->Push(FuzzyFilters::Sharpening(stack->Peek(),SPW.chkBxRed->Checked, SPW.chkBxGreen->Checked, SPW.chkBxBlue->Checked,SPW.radioButton1->Checked?2:1));
					 this->pictureBox1->Image = stack->Peek();
					 redoToolStripMenuItem -> Enabled = false;
					 buttonRedo->Enabled = false;
					 sideBySideToolStripMenuItem->Enabled = true;
					 undoToolStripMenuItem->Enabled = true;
					 buttonUndo->Enabled = true;
					 this->Cursor = Cursors::Default;
				 }
#ifdef _DEBUG
				 dout->WriteLine("FAE");
#endif			 
			 }
	private: System::Void inverseContrastToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 InverseContrastParameterWindow^ icpw = gcnew InverseContrastParameterWindow();
				 icpw->pictureBox1->Image = stack->Peek();
#ifdef _DEBUG
				 icpw->dout = dout;
				 dout->WriteLine("FAF");
#endif
				 if(icpw->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				 {
#ifdef _DEBUG
					 dout->WriteLine("FAG");
#endif
					 this->Cursor = Cursors::WaitCursor;
					 Bitmap ^ newBitMap = FuzzyFilters::InverseContrast(stack->Peek(),icpw->chkBxRed->Checked,icpw->chkBxGreen->Checked,icpw->chkBxBlue->Checked);

					 redoToolStripMenuItem->Enabled = false;
					 buttonRedo->Enabled = false;
					 undoToolStripMenuItem->Enabled = true;
					 buttonUndo->Enabled = true;
					 sideBySideToolStripMenuItem->Enabled = true;
					 stack->Push(newBitMap);
					 this->pictureBox1->Image = stack->Peek();
				 }
				 this->Cursor = Cursors::Default;
#ifdef _DEBUG
				 dout->WriteLine("FAH");
#endif
			 }
			 SideBySideView ^ SideBySide;
	private: System::Void sideBySideToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
#ifdef _DEBUG
				 dout->WriteLine("FAI");
#endif
				 if(SideBySide != nullptr)
					 SideBySide->Close();

				 SideBySide = gcnew SideBySideView();

				 SideBySide->pictureBox1->Image = stack->PeekBackwards();
#ifdef _DEBUG
				 dout->WriteLine("FAJ");
#endif
				 if(!SideBySide->Visible)
				 {
#ifdef _DEBUG
					 dout->WriteLine("FAK");
#endif
					 SideBySide->Show();
				 }
#ifdef _DEBUG
				 dout->WriteLine("FAL");
#endif
			 }

	private: System::Void noiseReductionToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
#ifdef _DEBUG
				 dout->WriteLine("FAM");
#endif
				 NoiseReductionParameterWindow^ nrpw = gcnew NoiseReductionParameterWindow();

				 nrpw->originalPicture = stack->Peek();
#ifdef _DEBUG
				 nrpw->dout = dout;
				 dout->WriteLine("FAN");
#endif
				 if(nrpw->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				 {
#ifdef _DEBUG
					 dout->WriteLine("FAO");
#endif
					 this->Cursor = Cursors::WaitCursor;

					 Bitmap ^ newBitMap;
#ifdef _DEBUG
					 dout->WriteLine("FAP");
#endif
					 if (nrpw->normalRadio->Checked){	
#ifdef _DEBUG
						 dout->WriteLine("FAQ");
#endif
						 newBitMap = FuzzyFilters::NoiseReduction(stack->Peek(),1,1);
					 }else if (nrpw->strongRadio->Checked){
#ifdef _DEBUG
						 dout->WriteLine("FAR");
#endif
						 newBitMap = FuzzyFilters::NoiseReduction(stack->Peek(),2,1);
					 }else{
#ifdef _DEBUG
						 dout->WriteLine("FAS");
#endif
						 newBitMap = FuzzyFilters::NoiseReduction(stack->Peek(),3,3);
					 }
					 redoToolStripMenuItem->Enabled = false;
					 buttonRedo->Enabled = false;
					 undoToolStripMenuItem->Enabled = true;
					 buttonUndo->Enabled = true;
					 sideBySideToolStripMenuItem->Enabled = true;
					 stack->Push(newBitMap);
					 this->pictureBox1->Image = stack->Peek();
#ifdef _DEBUG
					 dout->WriteLine("FAT");
#endif
				 }
				 this->Cursor = Cursors::Default;
#ifdef _DEBUG
				 dout->WriteLine("FAU");
#endif
			 }


			 ZoomWindow ^ zw;
	private: System::Void buttonZoomIn_Click(System::Object^  sender, System::EventArgs^  e) {

				 //get dimensions from a different function-Brendan
				 
				 //perform algorithm to get zoomed in image from the dimensions received-Alex
				 Bitmap ^ zoomedImage = FuzzyFilters::ZoomIn(stack->Peek(),startX,startY,curX,curY);
				 //CODE TO SHOW NEW ZOOMED IN IMAGE ON ZOOM WINDOW
				 	#ifdef _DEBUG
							dout->WriteLine("FAV");
					#endif
						 if(zw != nullptr)
							zw->Close();

						 zw = gcnew ZoomWindow();
						 zw->pictureBox1->Image =  zoomedImage; //or zoomed in image
					#ifdef _DEBUG
							dout->WriteLine("FAW");
					#endif
							if(!zw->Visible)
							 {
					#ifdef _DEBUG
							 dout->WriteLine("FAX");
					#endif
							zw->Show();
							 }
					#ifdef _DEBUG
							dout->WriteLine("FAY");
					#endif
				
			 }


			 bool clickDown;
			 int startX;
			 int startY;
			 int curX;
			 int curY;
			 Rectangle rectangle;
/*
* Fuction called when the picture box needs to be repainted because of the rectangle being drawn
* Primary Coder- Brendan Carney
*/
private: System::Void pictureBox1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 if (clickDown) {
				int x1 = startX;
				int x2 = curX;
				int y1 = startY;
				int y2 = curY;
				int temp = 0;
				if(startX < curX && startY < curY) ;
				else if(startX > curX && startY > curY){
					x1 = curX;
					x2 = startX;
					y1 = curY;
					y2 = startY;
				}
				else if(startX > curX && startY < curY){
					x1 = curX;
					x2 = startX;
				}
				else if(startX < curX && startY > curY){
					y1 = curY;
					y2 = startY;
				}
				 Rectangle * rectangle = new Rectangle(x1, y1, x2 - x1, y2 - y1);
				 Pen ^ pen = gcnew Pen(Color::Black);
				 e->Graphics->DrawRectangle(pen, *rectangle);
			 }
			
				
		 }

/*
*	On mouse down handler to start drawing rectangle
*/
private: System::Void pictureBox1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 // http://stackoverflow.com/questions/5031288/i-need-to-access-a-non-public-member-highlighted-item-of-a-combo-box
			 // Adopted from a c# solution of accessing a non-public member to get where the actual picture in the picturebox is located.
			 // There has to be a better way to do this.
			 rectangle = (Rectangle)pictureBox1->GetType()->GetProperty("ImageRectangle",System::Reflection::BindingFlags::NonPublic|System::Reflection::BindingFlags::Public|System::Reflection::BindingFlags::Instance)->GetValue(pictureBox1);
			 if (e->X >rectangle.Left && e->Y > rectangle.Top) {
				clickDown = true;
				startX = e->X;
				startY = e->Y;
			 }
		 }

/*
*	On mouse move handler to continue drawing rectangle
*/
private: System::Void pictureBox1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 if (clickDown) {
				//Graphics^ g = pictureBox1->CreateGraphics();  
				 curX = e->X;
				 curY = e->Y;
				 Invalidate(true);
				 Update();
				//g->DrawRectangle(pen, *rectangle);
				
			

			 }
		 }
private: System::Void pictureBox1_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 if (clickDown) ;
		 }
private: System::Void pictureBox1_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			  if (clickDown) {
				  startX = startX - rectangle.Left;
				  startY = startY - rectangle.Top;
				  curX = curX - rectangle.Left;
				  curY = curY - rectangle.Top;
				  double multiplier = (double)pictureBox1->Image->Width / (double)rectangle.Width;

				  startX = startX *multiplier;
				  startY = startY *multiplier;
				  curX = curX*multiplier;
				  curY = curY*multiplier;
			  }

			  clickDown = false;
		 }
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}



