#pragma once
#include<cmath>
#define PI 3.14159265;
namespace Calculate {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtDisplay;
	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn3;
	protected:

	protected:



	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btn6;



	private: System::Windows::Forms::Button^ btn7;

	private: System::Windows::Forms::Button^ btn9;
	private: System::Windows::Forms::Button^ btn0;








	private: System::Windows::Forms::Label^ lblShowOperators;
	private: System::Windows::Forms::Button^ btnSumm;
	private: System::Windows::Forms::Button^ btnDiff;
	private: System::Windows::Forms::Button^ btnComposition;
	private: System::Windows::Forms::Button^ btnDivision;




	private: System::Windows::Forms::Button^ btnC;



	private: System::Windows::Forms::Button^ btn8;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ btnCE;
	private: System::Windows::Forms::Button^ btnBack;
	private: System::Windows::Forms::Button^ btnDot;
	private: System::Windows::Forms::Button^ btnNegPos;
	private: System::Windows::Forms::Button^ btnCos;
	private: System::Windows::Forms::Button^ btnSin;
	private: System::Windows::Forms::Button^ btnTan;
	private: System::Windows::Forms::Button^ btnCot;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btn_acos;
	private: System::Windows::Forms::Button^ btn_asin;
	private: System::Windows::Forms::Button^ btn_atan;
	private: System::Windows::Forms::Button^ btn_acot;
	private: System::Windows::Forms::Button^ button2;
















	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->lblShowOperators = (gcnew System::Windows::Forms::Label());
			this->btnSumm = (gcnew System::Windows::Forms::Button());
			this->btnDiff = (gcnew System::Windows::Forms::Button());
			this->btnComposition = (gcnew System::Windows::Forms::Button());
			this->btnDivision = (gcnew System::Windows::Forms::Button());
			this->btnC = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnCE = (gcnew System::Windows::Forms::Button());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->btnDot = (gcnew System::Windows::Forms::Button());
			this->btnNegPos = (gcnew System::Windows::Forms::Button());
			this->btnCos = (gcnew System::Windows::Forms::Button());
			this->btnSin = (gcnew System::Windows::Forms::Button());
			this->btnTan = (gcnew System::Windows::Forms::Button());
			this->btnCot = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_acos = (gcnew System::Windows::Forms::Button());
			this->btn_asin = (gcnew System::Windows::Forms::Button());
			this->btn_atan = (gcnew System::Windows::Forms::Button());
			this->btn_acot = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtDisplay
			// 
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Goudy Stout", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDisplay->Location = System::Drawing::Point(54, 43);
			this->txtDisplay->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->Size = System::Drawing::Size(294, 68);
			this->txtDisplay->TabIndex = 0;
			this->txtDisplay->Text = L"0";
			this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtDisplay->TextChanged += gcnew System::EventHandler(this, &MyForm::txtDisplay_TextChanged);
			// 
			// btn1
			// 
			this->btn1->BackColor = System::Drawing::Color::DimGray;
			this->btn1->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn1->Location = System::Drawing::Point(53, 361);
			this->btn1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(61, 73);
			this->btn1->TabIndex = 1;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = false;
			this->btn1->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			// 
			// btn2
			// 
			this->btn2->BackColor = System::Drawing::Color::DimGray;
			this->btn2->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn2->Location = System::Drawing::Point(134, 361);
			this->btn2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(61, 73);
			this->btn2->TabIndex = 2;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = false;
			this->btn2->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			// 
			// btn3
			// 
			this->btn3->BackColor = System::Drawing::Color::DimGray;
			this->btn3->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn3->Location = System::Drawing::Point(212, 361);
			this->btn3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(61, 73);
			this->btn3->TabIndex = 3;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = false;
			this->btn3->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			// 
			// btn4
			// 
			this->btn4->BackColor = System::Drawing::Color::DimGray;
			this->btn4->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn4->Location = System::Drawing::Point(53, 281);
			this->btn4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(61, 73);
			this->btn4->TabIndex = 4;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = false;
			this->btn4->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			// 
			// btn5
			// 
			this->btn5->BackColor = System::Drawing::Color::DimGray;
			this->btn5->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn5->Location = System::Drawing::Point(134, 281);
			this->btn5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(61, 73);
			this->btn5->TabIndex = 4;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = false;
			this->btn5->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			// 
			// btn6
			// 
			this->btn6->BackColor = System::Drawing::Color::DimGray;
			this->btn6->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn6->Location = System::Drawing::Point(212, 281);
			this->btn6->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(61, 73);
			this->btn6->TabIndex = 4;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = false;
			this->btn6->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			// 
			// btn7
			// 
			this->btn7->BackColor = System::Drawing::Color::DimGray;
			this->btn7->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn7->Location = System::Drawing::Point(53, 201);
			this->btn7->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(61, 73);
			this->btn7->TabIndex = 4;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = false;
			this->btn7->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			// 
			// btn9
			// 
			this->btn9->BackColor = System::Drawing::Color::DimGray;
			this->btn9->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn9->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn9->Location = System::Drawing::Point(212, 201);
			this->btn9->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(61, 73);
			this->btn9->TabIndex = 4;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = false;
			this->btn9->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			// 
			// btn0
			// 
			this->btn0->BackColor = System::Drawing::Color::DimGray;
			this->btn0->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn0->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn0->Location = System::Drawing::Point(53, 442);
			this->btn0->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(61, 73);
			this->btn0->TabIndex = 1;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = false;
			this->btn0->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			// 
			// lblShowOperators
			// 
			this->lblShowOperators->AutoSize = true;
			this->lblShowOperators->Location = System::Drawing::Point(64, 44);
			this->lblShowOperators->Name = L"lblShowOperators";
			this->lblShowOperators->Size = System::Drawing::Size(0, 21);
			this->lblShowOperators->TabIndex = 5;
			this->lblShowOperators->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// btnSumm
			// 
			this->btnSumm->BackColor = System::Drawing::Color::DimGray;
			this->btnSumm->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSumm->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnSumm->Location = System::Drawing::Point(287, 201);
			this->btnSumm->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btnSumm->Name = L"btnSumm";
			this->btnSumm->Size = System::Drawing::Size(61, 73);
			this->btnSumm->TabIndex = 3;
			this->btnSumm->Text = L"+";
			this->btnSumm->UseVisualStyleBackColor = false;
			this->btnSumm->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic);
			// 
			// btnDiff
			// 
			this->btnDiff->BackColor = System::Drawing::Color::DimGray;
			this->btnDiff->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDiff->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnDiff->Location = System::Drawing::Point(287, 282);
			this->btnDiff->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btnDiff->Name = L"btnDiff";
			this->btnDiff->Size = System::Drawing::Size(61, 73);
			this->btnDiff->TabIndex = 3;
			this->btnDiff->Text = L"-";
			this->btnDiff->UseVisualStyleBackColor = false;
			this->btnDiff->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic);
			// 
			// btnComposition
			// 
			this->btnComposition->BackColor = System::Drawing::Color::DimGray;
			this->btnComposition->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnComposition->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnComposition->Location = System::Drawing::Point(287, 363);
			this->btnComposition->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btnComposition->Name = L"btnComposition";
			this->btnComposition->Size = System::Drawing::Size(61, 73);
			this->btnComposition->TabIndex = 3;
			this->btnComposition->Text = L"*";
			this->btnComposition->UseVisualStyleBackColor = false;
			this->btnComposition->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic);
			// 
			// btnDivision
			// 
			this->btnDivision->BackColor = System::Drawing::Color::DimGray;
			this->btnDivision->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDivision->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnDivision->Location = System::Drawing::Point(287, 442);
			this->btnDivision->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btnDivision->Name = L"btnDivision";
			this->btnDivision->Size = System::Drawing::Size(61, 73);
			this->btnDivision->TabIndex = 3;
			this->btnDivision->Text = L"/";
			this->btnDivision->UseVisualStyleBackColor = false;
			this->btnDivision->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic);
			// 
			// btnC
			// 
			this->btnC->BackColor = System::Drawing::Color::Silver;
			this->btnC->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnC->Location = System::Drawing::Point(134, 122);
			this->btnC->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btnC->Name = L"btnC";
			this->btnC->Size = System::Drawing::Size(61, 71);
			this->btnC->TabIndex = 3;
			this->btnC->Text = L"C";
			this->btnC->UseVisualStyleBackColor = false;
			this->btnC->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// btn8
			// 
			this->btn8->BackColor = System::Drawing::Color::DimGray;
			this->btn8->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn8->Location = System::Drawing::Point(134, 201);
			this->btn8->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(61, 73);
			this->btn8->TabIndex = 4;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = false;
			this->btn8->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DimGray;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(212, 443);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(61, 72);
			this->button1->TabIndex = 7;
			this->button1->Text = L"=";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// btnCE
			// 
			this->btnCE->BackColor = System::Drawing::Color::Silver;
			this->btnCE->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnCE->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnCE->Location = System::Drawing::Point(53, 122);
			this->btnCE->Name = L"btnCE";
			this->btnCE->Size = System::Drawing::Size(61, 72);
			this->btnCE->TabIndex = 8;
			this->btnCE->Text = L"CE";
			this->btnCE->UseVisualStyleBackColor = false;
			this->btnCE->Click += gcnew System::EventHandler(this, &MyForm::btnCE_Click);
			// 
			// btnBack
			// 
			this->btnBack->BackColor = System::Drawing::Color::Silver;
			this->btnBack->Font = (gcnew System::Drawing::Font(L"Wingdings", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->btnBack->Location = System::Drawing::Point(212, 122);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(61, 71);
			this->btnBack->TabIndex = 9;
			this->btnBack->Text = L"";
			this->btnBack->UseVisualStyleBackColor = false;
			this->btnBack->Click += gcnew System::EventHandler(this, &MyForm::btnBack_Click);
			// 
			// btnDot
			// 
			this->btnDot->BackColor = System::Drawing::Color::DimGray;
			this->btnDot->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDot->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnDot->Location = System::Drawing::Point(134, 443);
			this->btnDot->Name = L"btnDot";
			this->btnDot->Size = System::Drawing::Size(61, 72);
			this->btnDot->TabIndex = 10;
			this->btnDot->Text = L".";
			this->btnDot->UseVisualStyleBackColor = false;
			this->btnDot->Click += gcnew System::EventHandler(this, &MyForm::btnDot_Click);
			// 
			// btnNegPos
			// 
			this->btnNegPos->BackColor = System::Drawing::Color::Silver;
			this->btnNegPos->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnNegPos->Location = System::Drawing::Point(287, 122);
			this->btnNegPos->Name = L"btnNegPos";
			this->btnNegPos->Size = System::Drawing::Size(61, 71);
			this->btnNegPos->TabIndex = 11;
			this->btnNegPos->Text = L"+/-";
			this->btnNegPos->UseVisualStyleBackColor = false;
			this->btnNegPos->Click += gcnew System::EventHandler(this, &MyForm::btnNegPos_Click);
			// 
			// btnCos
			// 
			this->btnCos->BackColor = System::Drawing::Color::Silver;
			this->btnCos->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnCos->Location = System::Drawing::Point(371, 123);
			this->btnCos->Name = L"btnCos";
			this->btnCos->Size = System::Drawing::Size(77, 71);
			this->btnCos->TabIndex = 12;
			this->btnCos->Text = L"cos";
			this->btnCos->UseVisualStyleBackColor = false;
			this->btnCos->Click += gcnew System::EventHandler(this, &MyForm::cos_click);
			// 
			// btnSin
			// 
			this->btnSin->BackColor = System::Drawing::Color::Silver;
			this->btnSin->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSin->Location = System::Drawing::Point(459, 123);
			this->btnSin->Name = L"btnSin";
			this->btnSin->Size = System::Drawing::Size(74, 71);
			this->btnSin->TabIndex = 13;
			this->btnSin->Text = L"sin";
			this->btnSin->UseVisualStyleBackColor = false;
			this->btnSin->Click += gcnew System::EventHandler(this, &MyForm::sin_click);
			// 
			// btnTan
			// 
			this->btnTan->BackColor = System::Drawing::Color::Silver;
			this->btnTan->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnTan->Location = System::Drawing::Point(371, 201);
			this->btnTan->Name = L"btnTan";
			this->btnTan->Size = System::Drawing::Size(77, 72);
			this->btnTan->TabIndex = 14;
			this->btnTan->Text = L"tan";
			this->btnTan->UseVisualStyleBackColor = false;
			this->btnTan->Click += gcnew System::EventHandler(this, &MyForm::tan_click);
			// 
			// btnCot
			// 
			this->btnCot->BackColor = System::Drawing::Color::Silver;
			this->btnCot->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnCot->Location = System::Drawing::Point(458, 201);
			this->btnCot->Name = L"btnCot";
			this->btnCot->Size = System::Drawing::Size(75, 72);
			this->btnCot->TabIndex = 15;
			this->btnCot->Text = L"cot";
			this->btnCot->UseVisualStyleBackColor = false;
			this->btnCot->Click += gcnew System::EventHandler(this, &MyForm::cot_click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Location = System::Drawing::Point(354, 81);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(197, 30);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Тригонометрия ";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_2);
			// 
			// btn_acos
			// 
			this->btn_acos->BackColor = System::Drawing::Color::Silver;
			this->btn_acos->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_acos->Location = System::Drawing::Point(371, 282);
			this->btn_acos->Name = L"btn_acos";
			this->btn_acos->Size = System::Drawing::Size(77, 73);
			this->btn_acos->TabIndex = 17;
			this->btn_acos->Text = L"acos";
			this->btn_acos->UseVisualStyleBackColor = false;
			this->btn_acos->Click += gcnew System::EventHandler(this, &MyForm::btn_acos_Click);
			// 
			// btn_asin
			// 
			this->btn_asin->BackColor = System::Drawing::Color::Silver;
			this->btn_asin->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_asin->Location = System::Drawing::Point(458, 283);
			this->btn_asin->Name = L"btn_asin";
			this->btn_asin->Size = System::Drawing::Size(75, 72);
			this->btn_asin->TabIndex = 18;
			this->btn_asin->Text = L"asin";
			this->btn_asin->UseVisualStyleBackColor = false;
			this->btn_asin->Click += gcnew System::EventHandler(this, &MyForm::btn_asin_Click);
			// 
			// btn_atan
			// 
			this->btn_atan->BackColor = System::Drawing::Color::Silver;
			this->btn_atan->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_atan->Location = System::Drawing::Point(371, 361);
			this->btn_atan->Name = L"btn_atan";
			this->btn_atan->Size = System::Drawing::Size(77, 73);
			this->btn_atan->TabIndex = 19;
			this->btn_atan->Text = L"atan";
			this->btn_atan->UseVisualStyleBackColor = false;
			this->btn_atan->Click += gcnew System::EventHandler(this, &MyForm::btn_atan_Click);
			// 
			// btn_acot
			// 
			this->btn_acot->BackColor = System::Drawing::Color::Silver;
			this->btn_acot->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_acot->Location = System::Drawing::Point(458, 363);
			this->btn_acot->Name = L"btn_acot";
			this->btn_acot->Size = System::Drawing::Size(75, 71);
			this->btn_acot->TabIndex = 20;
			this->btn_acot->Text = L"acot";
			this->btn_acot->UseVisualStyleBackColor = false;
			this->btn_acot->Click += gcnew System::EventHandler(this, &MyForm::btn_acot_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->Location = System::Drawing::Point(535, 481);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 34);
			this->button2->TabIndex = 21;
			this->button2->Text = L"Выход";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(663, 532);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->btn_acot);
			this->Controls->Add(this->btn_atan);
			this->Controls->Add(this->btn_asin);
			this->Controls->Add(this->btn_acos);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnCot);
			this->Controls->Add(this->btnTan);
			this->Controls->Add(this->btnSin);
			this->Controls->Add(this->btnCos);
			this->Controls->Add(this->btnNegPos);
			this->Controls->Add(this->btnDot);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->btnCE);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lblShowOperators);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btnC);
			this->Controls->Add(this->btnSumm);
			this->Controls->Add(this->btnDiff);
			this->Controls->Add(this->btnComposition);
			this->Controls->Add(this->btnDivision);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->txtDisplay);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Impact", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Калькулятор ";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double iFirstnum;
		double iSecondnum;
		double iResult;
		String^ iOperator;
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	//button C
	txtDisplay->Text = "0";
	lblShowOperators->Text = " ";
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	//button CE
	txtDisplay->Text = "0";
}


private: System::Void button_click(System::Object^ sender, System::EventArgs^ e) {
	Button^ Numbers = safe_cast<Button^> (sender);
	if (txtDisplay->Text == "0")
	{
		txtDisplay->Text = Numbers->Text;
	}
	else {
		txtDisplay->Text= txtDisplay->Text+ Numbers->Text;
	}

}
private: System::Void Arithmetic(System::Object^ sender, System::EventArgs^ e) {
	Button^ operators = safe_cast<Button^> (sender);
		iFirstnum = double::Parse(txtDisplay->Text);
	txtDisplay->Text = "";
	iOperator = operators->Text; 
	lblShowOperators -> Text = System::Convert::ToString(iFirstnum) + " " + iOperator;
}


private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	lblShowOperators ->Text = "";
	iSecondnum = Double::Parse(txtDisplay->Text);
	if (iOperator == "+")
	{
		iResult = iFirstnum + iSecondnum;
		txtDisplay->Text = System::Convert::ToString(iResult);
	}
	else if (iOperator == "-")
	{
		iResult = iFirstnum - iSecondnum;
		txtDisplay->Text = System::Convert::ToString(iResult);
	}
	else if (iOperator == "*")
	{
		iResult = iFirstnum * iSecondnum;
		txtDisplay->Text = System::Convert::ToString(iResult);
	}
	else if (iOperator == "/")
	{
		iResult = iFirstnum / iSecondnum;
		txtDisplay->Text = System::Convert::ToString(iResult);
	}

}
private: System::Void btnCE_Click(System::Object^ sender, System::EventArgs^ e) {
	txtDisplay->Text = "0";

}
private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtDisplay->Text->Length > 0)
	{
		txtDisplay->Text = txtDisplay->Text->Remove(txtDisplay->Text->Length - 1, 1);
	}
}
private: System::Void txtDisplay_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (txtDisplay->Text=="")
	{
		txtDisplay->Text = "0";
	}	
}
private: System::Void btnDot_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!txtDisplay->Text->Contains("."))
	{
		txtDisplay->Text = txtDisplay->Text + ".";
	}
}
private: System::Void btnNegPos_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtDisplay->Text->Contains("-"))
	{
		txtDisplay->Text = txtDisplay->Text->Remove(0, 1);
	}
	else
	{
		txtDisplay->Text = "-" + txtDisplay->Text;
	}
}
private: System::Void trigonomBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_2(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void cos_click(System::Object^ sender, System::EventArgs^ e) {
	//Косинус
	Single a, res = 0;
	Single A = Single::TryParse(txtDisplay->Text,
		System::Globalization::NumberStyles::Number,
		System::Globalization::NumberFormatInfo::CurrentInfo, a);
	res = cos(a * 3.14159265 / 180);
		txtDisplay->Text = System::Convert::ToString(res);

}
private: System::Void sin_click(System::Object^ sender, System::EventArgs^ e) {
	//Синус
	Single a, res = 0 ;
	Single A = Single::TryParse(txtDisplay->Text,
		System::Globalization::NumberStyles::Number,
		System::Globalization::NumberFormatInfo::CurrentInfo, a);
	res = sin(a * 3.14159265 / 180);
		txtDisplay->Text = System::Convert::ToString(res);
}
private: System::Void tan_click(System::Object^ sender, System::EventArgs^ e) {
	//Тангенс
	Single a, res = 0;
	Single A = Single::TryParse(txtDisplay->Text,
		System::Globalization::NumberStyles::Number,
		System::Globalization::NumberFormatInfo::CurrentInfo, a);
	res = tan(a * 3.14159265 / 180);
		txtDisplay->Text = System::Convert::ToString(res);
}
private: System::Void cot_click(System::Object^ sender, System::EventArgs^ e) {
	//Катангенс 
	Single a, res = 0;
	Single A = Single::TryParse(txtDisplay->Text,
		System::Globalization::NumberStyles::Number,
		System::Globalization::NumberFormatInfo::CurrentInfo, a);
	res = 1 / tan(a * 3.14159265 / 180);
	txtDisplay->Text = System::Convert::ToString(res);
}

private: System::Void btn_acos_Click(System::Object^ sender, System::EventArgs^ e) {
	//acos
	Single a, res = 0;
	Single A = Single::TryParse(txtDisplay->Text,
		System::Globalization::NumberStyles::Number,
		System::Globalization::NumberFormatInfo::CurrentInfo, a);
	res = acos(a)*180/ 3.14159265;
	txtDisplay->Text = System::Convert::ToString(res);
}
private: System::Void btn_asin_Click(System::Object^ sender, System::EventArgs^ e) {
	//asin
	Single a, res = 0;
	Single A = Single::TryParse(txtDisplay->Text,
		System::Globalization::NumberStyles::Number,
		System::Globalization::NumberFormatInfo::CurrentInfo, a);
	res = asin(a) * 180 / 3.14159265;
	txtDisplay->Text = System::Convert::ToString(res);

}
private: System::Void btn_atan_Click(System::Object^ sender, System::EventArgs^ e) {
	//atan
	Single a, res = 0;
	Single A = Single::TryParse(txtDisplay->Text,
		System::Globalization::NumberStyles::Number,
		System::Globalization::NumberFormatInfo::CurrentInfo, a);
	res = atan(a) * 180 / 3.14159265;
	txtDisplay->Text = System::Convert::ToString(res);
}
private: System::Void btn_acot_Click(System::Object^ sender, System::EventArgs^ e) {
	//acot
	Single a, res = 0;
	Single A = Single::TryParse(txtDisplay->Text,
		System::Globalization::NumberStyles::Number,
		System::Globalization::NumberFormatInfo::CurrentInfo, a);
	res = (atan(-a)+ 3.14159265/2)*180/ 3.14159265;
	txtDisplay->Text = System::Convert::ToString(res);
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}