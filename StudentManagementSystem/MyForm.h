#pragma once

namespace StudentManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
    using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
        MySqlConnection^ sqlConn = gcnew MySqlConnection();
        MySqlCommand^ sqlCmd = gcnew MySqlCommand();
        DataTable^ sqlDt = gcnew DataTable(); 
        MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter();
        MySqlDataReader^ sqlRd;
        DataSet^ DS = gcnew DataSet();
        

        String^ sqlQuery;

        String^ server = "localhost";
        String^ username = "root";
        String^ password = "Oladipo123*";
    private: System::Windows::Forms::DataGridView^ dataGridView1;
    private: System::Windows::Forms::TextBox^ txtStudentID;
    private: System::Windows::Forms::TextBox^ txtMobile;


    private: System::Windows::Forms::TextBox^ txtDOB;

    private: System::Windows::Forms::TextBox^ txtGender;

    private: System::Windows::Forms::TextBox^ txtAddress;

    private: System::Windows::Forms::TextBox^ txtSurname;

    private: System::Windows::Forms::TextBox^ txtFirstName;

    private: System::Windows::Forms::Panel^ panel3;
    private: System::Windows::Forms::TextBox^ tetxtgEmail;

    private: System::Windows::Forms::TextBox^ txtgMobile;

    private: System::Windows::Forms::TextBox^ txtgAddress;

    private: System::Windows::Forms::TextBox^ txtgSurname;

    private: System::Windows::Forms::TextBox^ txtgFirstName;

    private: System::Windows::Forms::TextBox^ txtGuidance;

    private: System::Windows::Forms::Label^ label41;
    private: System::Windows::Forms::Label^ label42;
    private: System::Windows::Forms::Label^ label43;
    private: System::Windows::Forms::Label^ label44;
    private: System::Windows::Forms::Label^ label45;
    private: System::Windows::Forms::Label^ label46;
    private: System::Windows::Forms::TextBox^ txtEmail;
    private: System::Windows::Forms::TextBox^ txtCourseTutor;
    private: System::Windows::Forms::TextBox^ txtProgramLeader;
    private: System::Windows::Forms::TextBox^ txtDeanofFaculty;
    private: System::Windows::Forms::TextBox^ txtFaculty;
    private: System::Windows::Forms::TextBox^ txtCourseCode;

           String^ database = "cppstudentdb";

	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TabPage^ tabPage2;

	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;






	private: System::Windows::Forms::Label^ label2;























































	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel4;

	private: System::Windows::Forms::Label^ lblDate;
	private: System::Windows::Forms::Label^ lblRanking;

	private: System::Windows::Forms::Label^ lblTotal;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;





private: System::Windows::Forms::ComboBox^ cboModule8;
private: System::Windows::Forms::TextBox^ txtScore8;




private: System::Windows::Forms::ComboBox^ cboModule7;
private: System::Windows::Forms::TextBox^ txtScore7;




private: System::Windows::Forms::ComboBox^ cboModule6;
private: System::Windows::Forms::TextBox^ txtScore6;


private: System::Windows::Forms::ComboBox^ cboModule5;
private: System::Windows::Forms::TextBox^ txtScore5;


private: System::Windows::Forms::ComboBox^ cboModule4;
private: System::Windows::Forms::TextBox^ txtScore4;


private: System::Windows::Forms::ComboBox^ cboModule3;
private: System::Windows::Forms::TextBox^ txtScore3;


private: System::Windows::Forms::ComboBox^ cboModule2;
private: System::Windows::Forms::TextBox^ txtScore2;


	private: System::Windows::Forms::ComboBox^ cboModule1;
	private: System::Windows::Forms::TextBox^ txtScore1;

	private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ lbl8;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::MonthCalendar^ monthCalendar2;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::NumericUpDown^ nudBa;

private: System::Windows::Forms::ComboBox^ cboScholarship;

private: System::Windows::Forms::ComboBox^ cboExchange;

private: System::Windows::Forms::ComboBox^ cboAccommodation;

private: System::Windows::Forms::ComboBox^ cboOverseaStudent;


private: System::Windows::Forms::ComboBox^ cboHomeStudent;
private: System::Windows::Forms::NumericUpDown^ nudPhD;



private: System::Windows::Forms::NumericUpDown^ nudMSc;

private: System::Windows::Forms::NumericUpDown^ nudMA;

private: System::Windows::Forms::NumericUpDown^ nudBSc;











private: System::Windows::Forms::ComboBox^ cboCourse;

private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::Label^ label33;






private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Label^ label38;












private: System::Windows::Forms::Button^ btnExit;

private: System::Windows::Forms::Button^ btnResult;

private: System::Windows::Forms::Button^ btnReset;

private: System::Windows::Forms::Button^ btnAdd;
private: System::Windows::Forms::Label^ label39;


private: System::Windows::Forms::Label^ label40;
































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
            this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
            this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->tetxtgEmail = (gcnew System::Windows::Forms::TextBox());
            this->txtgMobile = (gcnew System::Windows::Forms::TextBox());
            this->txtgAddress = (gcnew System::Windows::Forms::TextBox());
            this->txtgSurname = (gcnew System::Windows::Forms::TextBox());
            this->txtgFirstName = (gcnew System::Windows::Forms::TextBox());
            this->txtGuidance = (gcnew System::Windows::Forms::TextBox());
            this->label41 = (gcnew System::Windows::Forms::Label());
            this->label42 = (gcnew System::Windows::Forms::Label());
            this->label43 = (gcnew System::Windows::Forms::Label());
            this->label44 = (gcnew System::Windows::Forms::Label());
            this->label45 = (gcnew System::Windows::Forms::Label());
            this->label46 = (gcnew System::Windows::Forms::Label());
            this->panel12 = (gcnew System::Windows::Forms::Panel());
            this->btnExit = (gcnew System::Windows::Forms::Button());
            this->btnResult = (gcnew System::Windows::Forms::Button());
            this->btnReset = (gcnew System::Windows::Forms::Button());
            this->btnAdd = (gcnew System::Windows::Forms::Button());
            this->panel6 = (gcnew System::Windows::Forms::Panel());
            this->nudPhD = (gcnew System::Windows::Forms::NumericUpDown());
            this->nudMSc = (gcnew System::Windows::Forms::NumericUpDown());
            this->nudMA = (gcnew System::Windows::Forms::NumericUpDown());
            this->nudBSc = (gcnew System::Windows::Forms::NumericUpDown());
            this->nudBa = (gcnew System::Windows::Forms::NumericUpDown());
            this->label27 = (gcnew System::Windows::Forms::Label());
            this->label30 = (gcnew System::Windows::Forms::Label());
            this->label28 = (gcnew System::Windows::Forms::Label());
            this->label31 = (gcnew System::Windows::Forms::Label());
            this->label29 = (gcnew System::Windows::Forms::Label());
            this->panel11 = (gcnew System::Windows::Forms::Panel());
            this->panel4 = (gcnew System::Windows::Forms::Panel());
            this->lblDate = (gcnew System::Windows::Forms::Label());
            this->lblRanking = (gcnew System::Windows::Forms::Label());
            this->lblTotal = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->cboModule8 = (gcnew System::Windows::Forms::ComboBox());
            this->txtScore8 = (gcnew System::Windows::Forms::TextBox());
            this->cboModule7 = (gcnew System::Windows::Forms::ComboBox());
            this->txtScore7 = (gcnew System::Windows::Forms::TextBox());
            this->cboModule6 = (gcnew System::Windows::Forms::ComboBox());
            this->txtScore6 = (gcnew System::Windows::Forms::TextBox());
            this->cboModule5 = (gcnew System::Windows::Forms::ComboBox());
            this->txtScore5 = (gcnew System::Windows::Forms::TextBox());
            this->cboModule4 = (gcnew System::Windows::Forms::ComboBox());
            this->txtScore4 = (gcnew System::Windows::Forms::TextBox());
            this->cboModule3 = (gcnew System::Windows::Forms::ComboBox());
            this->txtScore3 = (gcnew System::Windows::Forms::TextBox());
            this->cboModule2 = (gcnew System::Windows::Forms::ComboBox());
            this->txtScore2 = (gcnew System::Windows::Forms::TextBox());
            this->cboModule1 = (gcnew System::Windows::Forms::ComboBox());
            this->txtScore1 = (gcnew System::Windows::Forms::TextBox());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->lbl8 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->monthCalendar2 = (gcnew System::Windows::Forms::MonthCalendar());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
            this->panel5 = (gcnew System::Windows::Forms::Panel());
            this->cboScholarship = (gcnew System::Windows::Forms::ComboBox());
            this->cboExchange = (gcnew System::Windows::Forms::ComboBox());
            this->cboAccommodation = (gcnew System::Windows::Forms::ComboBox());
            this->cboOverseaStudent = (gcnew System::Windows::Forms::ComboBox());
            this->cboHomeStudent = (gcnew System::Windows::Forms::ComboBox());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->label23 = (gcnew System::Windows::Forms::Label());
            this->label24 = (gcnew System::Windows::Forms::Label());
            this->label25 = (gcnew System::Windows::Forms::Label());
            this->label26 = (gcnew System::Windows::Forms::Label());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->txtCourseTutor = (gcnew System::Windows::Forms::TextBox());
            this->txtProgramLeader = (gcnew System::Windows::Forms::TextBox());
            this->txtDeanofFaculty = (gcnew System::Windows::Forms::TextBox());
            this->txtFaculty = (gcnew System::Windows::Forms::TextBox());
            this->txtCourseCode = (gcnew System::Windows::Forms::TextBox());
            this->label32 = (gcnew System::Windows::Forms::Label());
            this->cboCourse = (gcnew System::Windows::Forms::ComboBox());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->txtEmail = (gcnew System::Windows::Forms::TextBox());
            this->txtMobile = (gcnew System::Windows::Forms::TextBox());
            this->txtDOB = (gcnew System::Windows::Forms::TextBox());
            this->txtGender = (gcnew System::Windows::Forms::TextBox());
            this->txtAddress = (gcnew System::Windows::Forms::TextBox());
            this->txtSurname = (gcnew System::Windows::Forms::TextBox());
            this->txtFirstName = (gcnew System::Windows::Forms::TextBox());
            this->txtStudentID = (gcnew System::Windows::Forms::TextBox());
            this->label39 = (gcnew System::Windows::Forms::Label());
            this->label40 = (gcnew System::Windows::Forms::Label());
            this->label33 = (gcnew System::Windows::Forms::Label());
            this->label34 = (gcnew System::Windows::Forms::Label());
            this->label35 = (gcnew System::Windows::Forms::Label());
            this->label36 = (gcnew System::Windows::Forms::Label());
            this->label37 = (gcnew System::Windows::Forms::Label());
            this->label38 = (gcnew System::Windows::Forms::Label());
            this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->tabControl1->SuspendLayout();
            this->tabPage1->SuspendLayout();
            this->panel3->SuspendLayout();
            this->panel12->SuspendLayout();
            this->panel6->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudPhD))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudMSc))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudMA))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudBSc))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudBa))->BeginInit();
            this->panel11->SuspendLayout();
            this->panel4->SuspendLayout();
            this->panel5->SuspendLayout();
            this->panel2->SuspendLayout();
            this->panel1->SuspendLayout();
            this->tabPage2->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->SuspendLayout();
            // 
            // tabControl1
            // 
            this->tabControl1->Controls->Add(this->tabPage1);
            this->tabControl1->Controls->Add(this->tabPage2);
            this->tabControl1->Location = System::Drawing::Point(12, 3);
            this->tabControl1->Name = L"tabControl1";
            this->tabControl1->SelectedIndex = 0;
            this->tabControl1->Size = System::Drawing::Size(1500, 731);
            this->tabControl1->TabIndex = 0;
            // 
            // tabPage1
            // 
            this->tabPage1->BackColor = System::Drawing::Color::CadetBlue;
            this->tabPage1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->tabPage1->Controls->Add(this->panel3);
            this->tabPage1->Controls->Add(this->panel12);
            this->tabPage1->Controls->Add(this->panel6);
            this->tabPage1->Controls->Add(this->panel11);
            this->tabPage1->Controls->Add(this->panel5);
            this->tabPage1->Controls->Add(this->panel2);
            this->tabPage1->Controls->Add(this->panel1);
            this->tabPage1->Location = System::Drawing::Point(4, 25);
            this->tabPage1->Name = L"tabPage1";
            this->tabPage1->Padding = System::Windows::Forms::Padding(3);
            this->tabPage1->Size = System::Drawing::Size(1492, 702);
            this->tabPage1->TabIndex = 0;
            this->tabPage1->Text = L"University System";
            // 
            // panel3
            // 
            this->panel3->BackColor = System::Drawing::SystemColors::Control;
            this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->panel3->Controls->Add(this->tetxtgEmail);
            this->panel3->Controls->Add(this->txtgMobile);
            this->panel3->Controls->Add(this->txtgAddress);
            this->panel3->Controls->Add(this->txtgSurname);
            this->panel3->Controls->Add(this->txtgFirstName);
            this->panel3->Controls->Add(this->txtGuidance);
            this->panel3->Controls->Add(this->label41);
            this->panel3->Controls->Add(this->label42);
            this->panel3->Controls->Add(this->label43);
            this->panel3->Controls->Add(this->label44);
            this->panel3->Controls->Add(this->label45);
            this->panel3->Controls->Add(this->label46);
            this->panel3->Location = System::Drawing::Point(2, 365);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(523, 327);
            this->panel3->TabIndex = 0;
            this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
            // 
            // tetxtgEmail
            // 
            this->tetxtgEmail->Location = System::Drawing::Point(165, 250);
            this->tetxtgEmail->Name = L"tetxtgEmail";
            this->tetxtgEmail->Size = System::Drawing::Size(351, 22);
            this->tetxtgEmail->TabIndex = 51;
            // 
            // txtgMobile
            // 
            this->txtgMobile->Location = System::Drawing::Point(165, 212);
            this->txtgMobile->Name = L"txtgMobile";
            this->txtgMobile->Size = System::Drawing::Size(351, 22);
            this->txtgMobile->TabIndex = 50;
            // 
            // txtgAddress
            // 
            this->txtgAddress->Location = System::Drawing::Point(165, 169);
            this->txtgAddress->Name = L"txtgAddress";
            this->txtgAddress->Size = System::Drawing::Size(351, 22);
            this->txtgAddress->TabIndex = 49;
            // 
            // txtgSurname
            // 
            this->txtgSurname->Location = System::Drawing::Point(165, 129);
            this->txtgSurname->Name = L"txtgSurname";
            this->txtgSurname->Size = System::Drawing::Size(351, 22);
            this->txtgSurname->TabIndex = 48;
            // 
            // txtgFirstName
            // 
            this->txtgFirstName->Location = System::Drawing::Point(165, 84);
            this->txtgFirstName->Name = L"txtgFirstName";
            this->txtgFirstName->Size = System::Drawing::Size(351, 22);
            this->txtgFirstName->TabIndex = 47;
            // 
            // txtGuidance
            // 
            this->txtGuidance->Location = System::Drawing::Point(165, 43);
            this->txtGuidance->Name = L"txtGuidance";
            this->txtGuidance->Size = System::Drawing::Size(351, 22);
            this->txtGuidance->TabIndex = 46;
            // 
            // label41
            // 
            this->label41->AutoSize = true;
            this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label41->Location = System::Drawing::Point(16, 241);
            this->label41->Name = L"label41";
            this->label41->Size = System::Drawing::Size(87, 32);
            this->label41->TabIndex = 45;
            this->label41->Text = L"Email";
            // 
            // label42
            // 
            this->label42->AutoSize = true;
            this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label42->Location = System::Drawing::Point(16, 203);
            this->label42->Name = L"label42";
            this->label42->Size = System::Drawing::Size(100, 32);
            this->label42->TabIndex = 38;
            this->label42->Text = L"Mobile";
            // 
            // label43
            // 
            this->label43->AutoSize = true;
            this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label43->Location = System::Drawing::Point(16, 160);
            this->label43->Name = L"label43";
            this->label43->Size = System::Drawing::Size(119, 32);
            this->label43->TabIndex = 37;
            this->label43->Text = L"Address";
            // 
            // label44
            // 
            this->label44->AutoSize = true;
            this->label44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label44->Location = System::Drawing::Point(16, 120);
            this->label44->Name = L"label44";
            this->label44->Size = System::Drawing::Size(130, 32);
            this->label44->TabIndex = 36;
            this->label44->Text = L"Surname";
            // 
            // label45
            // 
            this->label45->AutoSize = true;
            this->label45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label45->Location = System::Drawing::Point(16, 84);
            this->label45->Name = L"label45";
            this->label45->Size = System::Drawing::Size(145, 32);
            this->label45->TabIndex = 35;
            this->label45->Text = L"FirstName";
            // 
            // label46
            // 
            this->label46->AutoSize = true;
            this->label46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label46->Location = System::Drawing::Point(16, 44);
            this->label46->Name = L"label46";
            this->label46->Size = System::Drawing::Size(138, 32);
            this->label46->TabIndex = 34;
            this->label46->Text = L"Guidance";
            // 
            // panel12
            // 
            this->panel12->BackColor = System::Drawing::SystemColors::Control;
            this->panel12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->panel12->Controls->Add(this->btnExit);
            this->panel12->Controls->Add(this->btnResult);
            this->panel12->Controls->Add(this->btnReset);
            this->panel12->Controls->Add(this->btnAdd);
            this->panel12->Location = System::Drawing::Point(531, 580);
            this->panel12->Name = L"panel12";
            this->panel12->Size = System::Drawing::Size(674, 112);
            this->panel12->TabIndex = 0;
            this->panel12->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
            // 
            // btnExit
            // 
            this->btnExit->Location = System::Drawing::Point(520, 26);
            this->btnExit->Name = L"btnExit";
            this->btnExit->Size = System::Drawing::Size(147, 67);
            this->btnExit->TabIndex = 3;
            this->btnExit->Text = L"Exit";
            this->btnExit->UseVisualStyleBackColor = true;
            this->btnExit->Click += gcnew System::EventHandler(this, &MyForm::btnExit_Click);
            // 
            // btnResult
            // 
            this->btnResult->Location = System::Drawing::Point(363, 25);
            this->btnResult->Name = L"btnResult";
            this->btnResult->Size = System::Drawing::Size(147, 67);
            this->btnResult->TabIndex = 2;
            this->btnResult->Text = L"Result";
            this->btnResult->UseVisualStyleBackColor = true;
            this->btnResult->Click += gcnew System::EventHandler(this, &MyForm::btnResult_Click);
            // 
            // btnReset
            // 
            this->btnReset->Location = System::Drawing::Point(202, 26);
            this->btnReset->Name = L"btnReset";
            this->btnReset->Size = System::Drawing::Size(147, 67);
            this->btnReset->TabIndex = 1;
            this->btnReset->Text = L"Reset";
            this->btnReset->UseVisualStyleBackColor = true;
            this->btnReset->Click += gcnew System::EventHandler(this, &MyForm::btnReset_Click);
            // 
            // btnAdd
            // 
            this->btnAdd->Location = System::Drawing::Point(40, 25);
            this->btnAdd->Name = L"btnAdd";
            this->btnAdd->Size = System::Drawing::Size(147, 67);
            this->btnAdd->TabIndex = 0;
            this->btnAdd->Text = L"Add";
            this->btnAdd->UseVisualStyleBackColor = true;
            this->btnAdd->Click += gcnew System::EventHandler(this, &MyForm::btnAdd_Click);
            // 
            // panel6
            // 
            this->panel6->BackColor = System::Drawing::SystemColors::Control;
            this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->panel6->Controls->Add(this->nudPhD);
            this->panel6->Controls->Add(this->nudMSc);
            this->panel6->Controls->Add(this->nudMA);
            this->panel6->Controls->Add(this->nudBSc);
            this->panel6->Controls->Add(this->nudBa);
            this->panel6->Controls->Add(this->label27);
            this->panel6->Controls->Add(this->label30);
            this->panel6->Controls->Add(this->label28);
            this->panel6->Controls->Add(this->label31);
            this->panel6->Controls->Add(this->label29);
            this->panel6->Location = System::Drawing::Point(871, 252);
            this->panel6->Name = L"panel6";
            this->panel6->Size = System::Drawing::Size(334, 322);
            this->panel6->TabIndex = 0;
            this->panel6->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
            // 
            // nudPhD
            // 
            this->nudPhD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->nudPhD->Location = System::Drawing::Point(191, 263);
            this->nudPhD->Name = L"nudPhD";
            this->nudPhD->Size = System::Drawing::Size(120, 38);
            this->nudPhD->TabIndex = 19;
            this->nudPhD->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // nudMSc
            // 
            this->nudMSc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->nudMSc->Location = System::Drawing::Point(191, 201);
            this->nudMSc->Name = L"nudMSc";
            this->nudMSc->Size = System::Drawing::Size(120, 38);
            this->nudMSc->TabIndex = 18;
            this->nudMSc->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // nudMA
            // 
            this->nudMA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->nudMA->Location = System::Drawing::Point(191, 140);
            this->nudMA->Name = L"nudMA";
            this->nudMA->Size = System::Drawing::Size(120, 38);
            this->nudMA->TabIndex = 17;
            this->nudMA->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // nudBSc
            // 
            this->nudBSc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->nudBSc->Location = System::Drawing::Point(191, 81);
            this->nudBSc->Name = L"nudBSc";
            this->nudBSc->Size = System::Drawing::Size(120, 38);
            this->nudBSc->TabIndex = 16;
            this->nudBSc->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // nudBa
            // 
            this->nudBa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->nudBa->Location = System::Drawing::Point(191, 24);
            this->nudBa->Name = L"nudBa";
            this->nudBa->Size = System::Drawing::Size(120, 38);
            this->nudBa->TabIndex = 15;
            this->nudBa->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // label27
            // 
            this->label27->AutoSize = true;
            this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label27->Location = System::Drawing::Point(18, 270);
            this->label27->Name = L"label27";
            this->label27->Size = System::Drawing::Size(50, 25);
            this->label27->TabIndex = 14;
            this->label27->Text = L"PhD";
            // 
            // label30
            // 
            this->label30->AutoSize = true;
            this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label30->Location = System::Drawing::Point(18, 94);
            this->label30->Name = L"label30";
            this->label30->Size = System::Drawing::Size(49, 25);
            this->label30->TabIndex = 11;
            this->label30->Text = L"BSc";
            // 
            // label28
            // 
            this->label28->AutoSize = true;
            this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label28->Location = System::Drawing::Point(18, 214);
            this->label28->Name = L"label28";
            this->label28->Size = System::Drawing::Size(53, 25);
            this->label28->TabIndex = 13;
            this->label28->Text = L"MSc";
            // 
            // label31
            // 
            this->label31->AutoSize = true;
            this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label31->Location = System::Drawing::Point(18, 32);
            this->label31->Name = L"label31";
            this->label31->Size = System::Drawing::Size(39, 25);
            this->label31->TabIndex = 10;
            this->label31->Text = L"BA";
            // 
            // label29
            // 
            this->label29->AutoSize = true;
            this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label29->Location = System::Drawing::Point(18, 148);
            this->label29->Name = L"label29";
            this->label29->Size = System::Drawing::Size(43, 25);
            this->label29->TabIndex = 12;
            this->label29->Text = L"MA";
            // 
            // panel11
            // 
            this->panel11->BackColor = System::Drawing::SystemColors::Control;
            this->panel11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->panel11->Controls->Add(this->panel4);
            this->panel11->Controls->Add(this->label4);
            this->panel11->Controls->Add(this->label2);
            this->panel11->Controls->Add(this->label1);
            this->panel11->Controls->Add(this->monthCalendar1);
            this->panel11->Location = System::Drawing::Point(1211, 2);
            this->panel11->Name = L"panel11";
            this->panel11->Size = System::Drawing::Size(273, 692);
            this->panel11->TabIndex = 0;
            this->panel11->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
            // 
            // panel4
            // 
            this->panel4->BackColor = System::Drawing::SystemColors::Control;
            this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->panel4->Controls->Add(this->lblDate);
            this->panel4->Controls->Add(this->lblRanking);
            this->panel4->Controls->Add(this->lblTotal);
            this->panel4->Controls->Add(this->label9);
            this->panel4->Controls->Add(this->label8);
            this->panel4->Controls->Add(this->label7);
            this->panel4->Controls->Add(this->cboModule8);
            this->panel4->Controls->Add(this->txtScore8);
            this->panel4->Controls->Add(this->cboModule7);
            this->panel4->Controls->Add(this->txtScore7);
            this->panel4->Controls->Add(this->cboModule6);
            this->panel4->Controls->Add(this->txtScore6);
            this->panel4->Controls->Add(this->cboModule5);
            this->panel4->Controls->Add(this->txtScore5);
            this->panel4->Controls->Add(this->cboModule4);
            this->panel4->Controls->Add(this->txtScore4);
            this->panel4->Controls->Add(this->cboModule3);
            this->panel4->Controls->Add(this->txtScore3);
            this->panel4->Controls->Add(this->cboModule2);
            this->panel4->Controls->Add(this->txtScore2);
            this->panel4->Controls->Add(this->cboModule1);
            this->panel4->Controls->Add(this->txtScore1);
            this->panel4->Controls->Add(this->label13);
            this->panel4->Controls->Add(this->lbl8);
            this->panel4->Controls->Add(this->label3);
            this->panel4->Controls->Add(this->label15);
            this->panel4->Controls->Add(this->label12);
            this->panel4->Controls->Add(this->label14);
            this->panel4->Controls->Add(this->label11);
            this->panel4->Controls->Add(this->label10);
            this->panel4->Controls->Add(this->label5);
            this->panel4->Controls->Add(this->label6);
            this->panel4->Controls->Add(this->monthCalendar2);
            this->panel4->Location = System::Drawing::Point(-2, -2);
            this->panel4->Name = L"panel4";
            this->panel4->Size = System::Drawing::Size(271, 690);
            this->panel4->TabIndex = 4;
            this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel4_Paint);
            // 
            // lblDate
            // 
            this->lblDate->AutoSize = true;
            this->lblDate->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->lblDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblDate->Location = System::Drawing::Point(131, 659);
            this->lblDate->Name = L"lblDate";
            this->lblDate->Size = System::Drawing::Size(74, 27);
            this->lblDate->TabIndex = 14;
            this->lblDate->Text = L"            ";
            this->lblDate->Click += gcnew System::EventHandler(this, &MyForm::lblDate_Click);
            // 
            // lblRanking
            // 
            this->lblRanking->AutoSize = true;
            this->lblRanking->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->lblRanking->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblRanking->Location = System::Drawing::Point(131, 626);
            this->lblRanking->Name = L"lblRanking";
            this->lblRanking->Size = System::Drawing::Size(93, 31);
            this->lblRanking->TabIndex = 13;
            this->lblRanking->Text = L"             ";
            // 
            // lblTotal
            // 
            this->lblTotal->AutoSize = true;
            this->lblTotal->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->lblTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblTotal->Location = System::Drawing::Point(131, 589);
            this->lblTotal->Name = L"lblTotal";
            this->lblTotal->Size = System::Drawing::Size(87, 31);
            this->lblTotal->TabIndex = 12;
            this->lblTotal->Text = L"            ";
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label9->Location = System::Drawing::Point(8, 663);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(45, 20);
            this->label9->TabIndex = 11;
            this->label9->Text = L"Date";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label8->Location = System::Drawing::Point(7, 633);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(69, 20);
            this->label8->TabIndex = 10;
            this->label8->Text = L"Ranking";
            this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click_1);
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->Location = System::Drawing::Point(7, 600);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(46, 20);
            this->label7->TabIndex = 9;
            this->label7->Text = L"Total";
            // 
            // cboModule8
            // 
            this->cboModule8->FormattingEnabled = true;
            this->cboModule8->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
                L"", L"Visual C++ Programming", L"Visual C# Programming",
                    L"Visual Basic Programming"
            });
            this->cboModule8->Location = System::Drawing::Point(37, 562);
            this->cboModule8->Name = L"cboModule8";
            this->cboModule8->Size = System::Drawing::Size(142, 24);
            this->cboModule8->TabIndex = 8;
            this->cboModule8->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModule8_SelectedIndexChanged);
            // 
            // txtScore8
            // 
            this->txtScore8->Enabled = false;
            this->txtScore8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtScore8->Location = System::Drawing::Point(185, 556);
            this->txtScore8->Name = L"txtScore8";
            this->txtScore8->Size = System::Drawing::Size(71, 34);
            this->txtScore8->TabIndex = 7;
            this->txtScore8->Text = L"0";
            this->txtScore8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->txtScore8->MouseLeave += gcnew System::EventHandler(this, &MyForm::MLeaves);
            // 
            // cboModule7
            // 
            this->cboModule7->FormattingEnabled = true;
            this->cboModule7->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
                L"", L"Visual C++ Programming", L"Visual C# Programming",
                    L"Visual Basic Programming"
            });
            this->cboModule7->Location = System::Drawing::Point(37, 513);
            this->cboModule7->Name = L"cboModule7";
            this->cboModule7->Size = System::Drawing::Size(142, 24);
            this->cboModule7->TabIndex = 8;
            this->cboModule7->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModule7_SelectedIndexChanged);
            // 
            // txtScore7
            // 
            this->txtScore7->Enabled = false;
            this->txtScore7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtScore7->Location = System::Drawing::Point(185, 507);
            this->txtScore7->Name = L"txtScore7";
            this->txtScore7->Size = System::Drawing::Size(71, 34);
            this->txtScore7->TabIndex = 7;
            this->txtScore7->Text = L"0";
            this->txtScore7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->txtScore7->MouseLeave += gcnew System::EventHandler(this, &MyForm::MLeaves);
            // 
            // cboModule6
            // 
            this->cboModule6->FormattingEnabled = true;
            this->cboModule6->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
                L"", L"Visual C++ Programming", L"Visual C# Programming",
                    L"Visual Basic Programming"
            });
            this->cboModule6->Location = System::Drawing::Point(37, 468);
            this->cboModule6->Name = L"cboModule6";
            this->cboModule6->Size = System::Drawing::Size(142, 24);
            this->cboModule6->TabIndex = 8;
            this->cboModule6->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModule6_SelectedIndexChanged);
            // 
            // txtScore6
            // 
            this->txtScore6->Enabled = false;
            this->txtScore6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtScore6->Location = System::Drawing::Point(185, 462);
            this->txtScore6->Name = L"txtScore6";
            this->txtScore6->Size = System::Drawing::Size(71, 34);
            this->txtScore6->TabIndex = 7;
            this->txtScore6->Text = L"0";
            this->txtScore6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->txtScore6->MouseLeave += gcnew System::EventHandler(this, &MyForm::MLeaves);
            // 
            // cboModule5
            // 
            this->cboModule5->FormattingEnabled = true;
            this->cboModule5->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
                L"", L"Visual C++ Programming", L"Visual C# Programming",
                    L"Visual Basic Programming"
            });
            this->cboModule5->Location = System::Drawing::Point(37, 420);
            this->cboModule5->Name = L"cboModule5";
            this->cboModule5->Size = System::Drawing::Size(142, 24);
            this->cboModule5->TabIndex = 8;
            this->cboModule5->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModule5_SelectedIndexChanged);
            // 
            // txtScore5
            // 
            this->txtScore5->Enabled = false;
            this->txtScore5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtScore5->Location = System::Drawing::Point(185, 414);
            this->txtScore5->Name = L"txtScore5";
            this->txtScore5->Size = System::Drawing::Size(71, 34);
            this->txtScore5->TabIndex = 7;
            this->txtScore5->Text = L"0";
            this->txtScore5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->txtScore5->MouseLeave += gcnew System::EventHandler(this, &MyForm::MLeaves);
            // 
            // cboModule4
            // 
            this->cboModule4->FormattingEnabled = true;
            this->cboModule4->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
                L"", L"Visual C++ Programming", L"Visual C# Programming",
                    L"Visual Basic Programming"
            });
            this->cboModule4->Location = System::Drawing::Point(37, 371);
            this->cboModule4->Name = L"cboModule4";
            this->cboModule4->Size = System::Drawing::Size(142, 24);
            this->cboModule4->TabIndex = 8;
            this->cboModule4->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModule4_SelectedIndexChanged);
            // 
            // txtScore4
            // 
            this->txtScore4->Enabled = false;
            this->txtScore4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtScore4->Location = System::Drawing::Point(185, 365);
            this->txtScore4->Name = L"txtScore4";
            this->txtScore4->Size = System::Drawing::Size(71, 34);
            this->txtScore4->TabIndex = 7;
            this->txtScore4->Text = L"0";
            this->txtScore4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->txtScore4->MouseLeave += gcnew System::EventHandler(this, &MyForm::MLeaves);
            // 
            // cboModule3
            // 
            this->cboModule3->FormattingEnabled = true;
            this->cboModule3->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
                L"", L"Visual C++ Programming", L"Visual C# Programming",
                    L"Visual Basic Programming"
            });
            this->cboModule3->Location = System::Drawing::Point(37, 317);
            this->cboModule3->Name = L"cboModule3";
            this->cboModule3->Size = System::Drawing::Size(142, 24);
            this->cboModule3->TabIndex = 8;
            this->cboModule3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModule3_SelectedIndexChanged);
            // 
            // txtScore3
            // 
            this->txtScore3->Enabled = false;
            this->txtScore3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtScore3->Location = System::Drawing::Point(185, 311);
            this->txtScore3->Name = L"txtScore3";
            this->txtScore3->Size = System::Drawing::Size(71, 34);
            this->txtScore3->TabIndex = 7;
            this->txtScore3->Text = L"0";
            this->txtScore3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->txtScore3->MouseLeave += gcnew System::EventHandler(this, &MyForm::MLeaves);
            // 
            // cboModule2
            // 
            this->cboModule2->FormattingEnabled = true;
            this->cboModule2->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
                L"", L"Visual C++ Programming", L"Visual C# Programming",
                    L"Visual Basic Programming"
            });
            this->cboModule2->Location = System::Drawing::Point(37, 269);
            this->cboModule2->Name = L"cboModule2";
            this->cboModule2->Size = System::Drawing::Size(142, 24);
            this->cboModule2->TabIndex = 8;
            this->cboModule2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModule2_SelectedIndexChanged);
            // 
            // txtScore2
            // 
            this->txtScore2->Enabled = false;
            this->txtScore2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtScore2->Location = System::Drawing::Point(185, 263);
            this->txtScore2->Name = L"txtScore2";
            this->txtScore2->Size = System::Drawing::Size(71, 34);
            this->txtScore2->TabIndex = 7;
            this->txtScore2->Text = L"0";
            this->txtScore2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->txtScore2->MouseLeave += gcnew System::EventHandler(this, &MyForm::MLeaves);
            // 
            // cboModule1
            // 
            this->cboModule1->FormattingEnabled = true;
            this->cboModule1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
                L"", L"Visual C++ Programming", L"Visual C# Programming",
                    L"Visual Basic Programming"
            });
            this->cboModule1->Location = System::Drawing::Point(37, 220);
            this->cboModule1->Name = L"cboModule1";
            this->cboModule1->Size = System::Drawing::Size(142, 24);
            this->cboModule1->TabIndex = 8;
            this->cboModule1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModule1_SelectedIndexChanged);
            // 
            // txtScore1
            // 
            this->txtScore1->Enabled = false;
            this->txtScore1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtScore1->Location = System::Drawing::Point(185, 214);
            this->txtScore1->Name = L"txtScore1";
            this->txtScore1->Size = System::Drawing::Size(71, 34);
            this->txtScore1->TabIndex = 7;
            this->txtScore1->Text = L"0";
            this->txtScore1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->txtScore1->MouseLeave += gcnew System::EventHandler(this, &MyForm::MLeaves);
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label13->Location = System::Drawing::Point(10, 462);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(35, 38);
            this->label13->TabIndex = 3;
            this->label13->Text = L"6";
            // 
            // lbl8
            // 
            this->lbl8->AutoSize = true;
            this->lbl8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lbl8->Location = System::Drawing::Point(10, 556);
            this->lbl8->Name = L"lbl8";
            this->lbl8->Size = System::Drawing::Size(35, 38);
            this->lbl8->TabIndex = 2;
            this->lbl8->Text = L"8";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(10, 311);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(35, 38);
            this->label3->TabIndex = 3;
            this->label3->Text = L"3";
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label15->Location = System::Drawing::Point(10, 540);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(0, 38);
            this->label15->TabIndex = 2;
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label12->Location = System::Drawing::Point(10, 414);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(35, 38);
            this->label12->TabIndex = 2;
            this->label12->Text = L"5";
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label14->Location = System::Drawing::Point(10, 507);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(35, 38);
            this->label14->TabIndex = 1;
            this->label14->Text = L"7";
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label11->Location = System::Drawing::Point(10, 398);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(0, 38);
            this->label11->TabIndex = 2;
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label10->Location = System::Drawing::Point(10, 365);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(35, 38);
            this->label10->TabIndex = 1;
            this->label10->Text = L"4";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->Location = System::Drawing::Point(10, 263);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(35, 38);
            this->label5->TabIndex = 2;
            this->label5->Text = L"2";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->Location = System::Drawing::Point(10, 214);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(35, 38);
            this->label6->TabIndex = 1;
            this->label6->Text = L"1";
            // 
            // monthCalendar2
            // 
            this->monthCalendar2->Location = System::Drawing::Point(4, 4);
            this->monthCalendar2->Name = L"monthCalendar2";
            this->monthCalendar2->TabIndex = 0;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->Location = System::Drawing::Point(18, 317);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(35, 38);
            this->label4->TabIndex = 3;
            this->label4->Text = L"1";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(18, 269);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(35, 38);
            this->label2->TabIndex = 2;
            this->label2->Text = L"1";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(18, 220);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(35, 38);
            this->label1->TabIndex = 1;
            this->label1->Text = L"1";
            this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
            // 
            // monthCalendar1
            // 
            this->monthCalendar1->Location = System::Drawing::Point(4, 4);
            this->monthCalendar1->Name = L"monthCalendar1";
            this->monthCalendar1->TabIndex = 0;
            // 
            // panel5
            // 
            this->panel5->BackColor = System::Drawing::SystemColors::Control;
            this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->panel5->Controls->Add(this->cboScholarship);
            this->panel5->Controls->Add(this->cboExchange);
            this->panel5->Controls->Add(this->cboAccommodation);
            this->panel5->Controls->Add(this->cboOverseaStudent);
            this->panel5->Controls->Add(this->cboHomeStudent);
            this->panel5->Controls->Add(this->label22);
            this->panel5->Controls->Add(this->label23);
            this->panel5->Controls->Add(this->label24);
            this->panel5->Controls->Add(this->label25);
            this->panel5->Controls->Add(this->label26);
            this->panel5->Location = System::Drawing::Point(531, 252);
            this->panel5->Name = L"panel5";
            this->panel5->Size = System::Drawing::Size(334, 322);
            this->panel5->TabIndex = 0;
            this->panel5->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
            // 
            // cboScholarship
            // 
            this->cboScholarship->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cboScholarship->FormattingEnabled = true;
            this->cboScholarship->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"No ", L"Yes" });
            this->cboScholarship->Location = System::Drawing::Point(185, 267);
            this->cboScholarship->Name = L"cboScholarship";
            this->cboScholarship->Size = System::Drawing::Size(142, 33);
            this->cboScholarship->TabIndex = 14;
            this->cboScholarship->Text = L"No ";
            // 
            // cboExchange
            // 
            this->cboExchange->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cboExchange->FormattingEnabled = true;
            this->cboExchange->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"No ", L"Yes" });
            this->cboExchange->Location = System::Drawing::Point(185, 211);
            this->cboExchange->Name = L"cboExchange";
            this->cboExchange->Size = System::Drawing::Size(142, 33);
            this->cboExchange->TabIndex = 13;
            this->cboExchange->Text = L"No ";
            // 
            // cboAccommodation
            // 
            this->cboAccommodation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cboAccommodation->FormattingEnabled = true;
            this->cboAccommodation->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"No ", L"Yes" });
            this->cboAccommodation->Location = System::Drawing::Point(185, 145);
            this->cboAccommodation->Name = L"cboAccommodation";
            this->cboAccommodation->Size = System::Drawing::Size(142, 33);
            this->cboAccommodation->TabIndex = 12;
            this->cboAccommodation->Text = L"No ";
            // 
            // cboOverseaStudent
            // 
            this->cboOverseaStudent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cboOverseaStudent->FormattingEnabled = true;
            this->cboOverseaStudent->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"No ", L"Yes" });
            this->cboOverseaStudent->Location = System::Drawing::Point(185, 86);
            this->cboOverseaStudent->Name = L"cboOverseaStudent";
            this->cboOverseaStudent->Size = System::Drawing::Size(142, 33);
            this->cboOverseaStudent->TabIndex = 11;
            this->cboOverseaStudent->Text = L"No ";
            // 
            // cboHomeStudent
            // 
            this->cboHomeStudent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cboHomeStudent->FormattingEnabled = true;
            this->cboHomeStudent->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"No ", L"Yes" });
            this->cboHomeStudent->Location = System::Drawing::Point(185, 21);
            this->cboHomeStudent->Name = L"cboHomeStudent";
            this->cboHomeStudent->Size = System::Drawing::Size(142, 33);
            this->cboHomeStudent->TabIndex = 10;
            this->cboHomeStudent->Text = L"No ";
            // 
            // label22
            // 
            this->label22->AutoSize = true;
            this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label22->Location = System::Drawing::Point(12, 270);
            this->label22->Name = L"label22";
            this->label22->Size = System::Drawing::Size(115, 25);
            this->label22->TabIndex = 9;
            this->label22->Text = L"Scholarship";
            // 
            // label23
            // 
            this->label23->AutoSize = true;
            this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label23->Location = System::Drawing::Point(12, 211);
            this->label23->Name = L"label23";
            this->label23->Size = System::Drawing::Size(100, 25);
            this->label23->TabIndex = 8;
            this->label23->Text = L"Exchange";
            this->label23->Click += gcnew System::EventHandler(this, &MyForm::label23_Click);
            // 
            // label24
            // 
            this->label24->AutoSize = true;
            this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label24->Location = System::Drawing::Point(12, 148);
            this->label24->Name = L"label24";
            this->label24->Size = System::Drawing::Size(153, 25);
            this->label24->TabIndex = 7;
            this->label24->Text = L"Accommodation";
            // 
            // label25
            // 
            this->label25->AutoSize = true;
            this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label25->Location = System::Drawing::Point(12, 89);
            this->label25->Name = L"label25";
            this->label25->Size = System::Drawing::Size(160, 25);
            this->label25->TabIndex = 6;
            this->label25->Text = L"Oversea Student";
            // 
            // label26
            // 
            this->label26->AutoSize = true;
            this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label26->Location = System::Drawing::Point(12, 32);
            this->label26->Name = L"label26";
            this->label26->Size = System::Drawing::Size(137, 25);
            this->label26->TabIndex = 5;
            this->label26->Text = L"Home Student";
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::SystemColors::Control;
            this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->panel2->Controls->Add(this->txtCourseTutor);
            this->panel2->Controls->Add(this->txtProgramLeader);
            this->panel2->Controls->Add(this->txtDeanofFaculty);
            this->panel2->Controls->Add(this->txtFaculty);
            this->panel2->Controls->Add(this->txtCourseCode);
            this->panel2->Controls->Add(this->label32);
            this->panel2->Controls->Add(this->cboCourse);
            this->panel2->Controls->Add(this->label21);
            this->panel2->Controls->Add(this->label19);
            this->panel2->Controls->Add(this->label20);
            this->panel2->Controls->Add(this->label18);
            this->panel2->Controls->Add(this->label16);
            this->panel2->Location = System::Drawing::Point(531, 2);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(674, 244);
            this->panel2->TabIndex = 0;
            this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
            // 
            // txtCourseTutor
            // 
            this->txtCourseTutor->Location = System::Drawing::Point(239, 210);
            this->txtCourseTutor->Name = L"txtCourseTutor";
            this->txtCourseTutor->Size = System::Drawing::Size(406, 22);
            this->txtCourseTutor->TabIndex = 51;
            // 
            // txtProgramLeader
            // 
            this->txtProgramLeader->Location = System::Drawing::Point(239, 173);
            this->txtProgramLeader->Name = L"txtProgramLeader";
            this->txtProgramLeader->Size = System::Drawing::Size(406, 22);
            this->txtProgramLeader->TabIndex = 50;
            // 
            // txtDeanofFaculty
            // 
            this->txtDeanofFaculty->Location = System::Drawing::Point(239, 129);
            this->txtDeanofFaculty->Name = L"txtDeanofFaculty";
            this->txtDeanofFaculty->Size = System::Drawing::Size(406, 22);
            this->txtDeanofFaculty->TabIndex = 49;
            // 
            // txtFaculty
            // 
            this->txtFaculty->Location = System::Drawing::Point(239, 90);
            this->txtFaculty->Name = L"txtFaculty";
            this->txtFaculty->Size = System::Drawing::Size(406, 22);
            this->txtFaculty->TabIndex = 48;
            // 
            // txtCourseCode
            // 
            this->txtCourseCode->Location = System::Drawing::Point(239, 52);
            this->txtCourseCode->Name = L"txtCourseCode";
            this->txtCourseCode->Size = System::Drawing::Size(406, 22);
            this->txtCourseCode->TabIndex = 47;
            // 
            // label32
            // 
            this->label32->AutoSize = true;
            this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label32->Location = System::Drawing::Point(21, 201);
            this->label32->Name = L"label32";
            this->label32->Size = System::Drawing::Size(179, 32);
            this->label32->TabIndex = 21;
            this->label32->Text = L"Course Tutor";
            // 
            // cboCourse
            // 
            this->cboCourse->FormattingEnabled = true;
            this->cboCourse->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
                L"Select a Course", L"Accounting (ACC, AFA)", L"Aerospace (AER)",
                    L"American Sign Langugage (ASL)"
            });
            this->cboCourse->Location = System::Drawing::Point(239, 4);
            this->cboCourse->Name = L"cboCourse";
            this->cboCourse->Size = System::Drawing::Size(406, 24);
            this->cboCourse->TabIndex = 15;
            this->cboCourse->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox6_SelectedIndexChanged);
            // 
            // label21
            // 
            this->label21->AutoSize = true;
            this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label21->Location = System::Drawing::Point(21, 163);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(219, 32);
            this->label21->TabIndex = 4;
            this->label21->Text = L"Program Leader";
            // 
            // label19
            // 
            this->label19->AutoSize = true;
            this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label19->Location = System::Drawing::Point(21, 120);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(213, 32);
            this->label19->TabIndex = 3;
            this->label19->Text = L"Dean of Faculty";
            // 
            // label20
            // 
            this->label20->AutoSize = true;
            this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label20->Location = System::Drawing::Point(21, 80);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(107, 32);
            this->label20->TabIndex = 2;
            this->label20->Text = L"Faculty";
            // 
            // label18
            // 
            this->label18->AutoSize = true;
            this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label18->Location = System::Drawing::Point(21, 44);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(181, 32);
            this->label18->TabIndex = 1;
            this->label18->Text = L"Course Code";
            // 
            // label16
            // 
            this->label16->AutoSize = true;
            this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label16->Location = System::Drawing::Point(21, 4);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(106, 32);
            this->label16->TabIndex = 0;
            this->label16->Text = L"Course";
            this->label16->Click += gcnew System::EventHandler(this, &MyForm::label16_Click);
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::SystemColors::Control;
            this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->panel1->Controls->Add(this->txtEmail);
            this->panel1->Controls->Add(this->txtMobile);
            this->panel1->Controls->Add(this->txtDOB);
            this->panel1->Controls->Add(this->txtGender);
            this->panel1->Controls->Add(this->txtAddress);
            this->panel1->Controls->Add(this->txtSurname);
            this->panel1->Controls->Add(this->txtFirstName);
            this->panel1->Controls->Add(this->txtStudentID);
            this->panel1->Controls->Add(this->label39);
            this->panel1->Controls->Add(this->label40);
            this->panel1->Controls->Add(this->label33);
            this->panel1->Controls->Add(this->label34);
            this->panel1->Controls->Add(this->label35);
            this->panel1->Controls->Add(this->label36);
            this->panel1->Controls->Add(this->label37);
            this->panel1->Controls->Add(this->label38);
            this->panel1->Location = System::Drawing::Point(2, 2);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(523, 357);
            this->panel1->TabIndex = 0;
            this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
            // 
            // txtEmail
            // 
            this->txtEmail->Location = System::Drawing::Point(165, 317);
            this->txtEmail->Name = L"txtEmail";
            this->txtEmail->Size = System::Drawing::Size(351, 22);
            this->txtEmail->TabIndex = 46;
            // 
            // txtMobile
            // 
            this->txtMobile->Location = System::Drawing::Point(165, 282);
            this->txtMobile->Name = L"txtMobile";
            this->txtMobile->Size = System::Drawing::Size(351, 22);
            this->txtMobile->TabIndex = 45;
            // 
            // txtDOB
            // 
            this->txtDOB->Location = System::Drawing::Point(165, 220);
            this->txtDOB->Name = L"txtDOB";
            this->txtDOB->Size = System::Drawing::Size(351, 22);
            this->txtDOB->TabIndex = 44;
            // 
            // txtGender
            // 
            this->txtGender->Location = System::Drawing::Point(165, 182);
            this->txtGender->Name = L"txtGender";
            this->txtGender->Size = System::Drawing::Size(351, 22);
            this->txtGender->TabIndex = 43;
            // 
            // txtAddress
            // 
            this->txtAddress->Location = System::Drawing::Point(165, 139);
            this->txtAddress->Name = L"txtAddress";
            this->txtAddress->Size = System::Drawing::Size(351, 22);
            this->txtAddress->TabIndex = 42;
            // 
            // txtSurname
            // 
            this->txtSurname->Location = System::Drawing::Point(165, 99);
            this->txtSurname->Name = L"txtSurname";
            this->txtSurname->Size = System::Drawing::Size(351, 22);
            this->txtSurname->TabIndex = 41;
            // 
            // txtFirstName
            // 
            this->txtFirstName->Location = System::Drawing::Point(165, 54);
            this->txtFirstName->Name = L"txtFirstName";
            this->txtFirstName->Size = System::Drawing::Size(351, 22);
            this->txtFirstName->TabIndex = 39;
            // 
            // txtStudentID
            // 
            this->txtStudentID->Location = System::Drawing::Point(165, 13);
            this->txtStudentID->Name = L"txtStudentID";
            this->txtStudentID->Size = System::Drawing::Size(351, 22);
            this->txtStudentID->TabIndex = 38;
            this->txtStudentID->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
            // 
            // label39
            // 
            this->label39->AutoSize = true;
            this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label39->Location = System::Drawing::Point(3, 307);
            this->label39->Name = L"label39";
            this->label39->Size = System::Drawing::Size(87, 32);
            this->label39->TabIndex = 37;
            this->label39->Text = L"Email";
            // 
            // label40
            // 
            this->label40->AutoSize = true;
            this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label40->Location = System::Drawing::Point(3, 269);
            this->label40->Name = L"label40";
            this->label40->Size = System::Drawing::Size(100, 32);
            this->label40->TabIndex = 34;
            this->label40->Text = L"Mobile";
            // 
            // label33
            // 
            this->label33->AutoSize = true;
            this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label33->Location = System::Drawing::Point(3, 210);
            this->label33->Name = L"label33";
            this->label33->Size = System::Drawing::Size(76, 32);
            this->label33->TabIndex = 33;
            this->label33->Text = L"DOB";
            // 
            // label34
            // 
            this->label34->AutoSize = true;
            this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label34->Location = System::Drawing::Point(3, 172);
            this->label34->Name = L"label34";
            this->label34->Size = System::Drawing::Size(110, 32);
            this->label34->TabIndex = 26;
            this->label34->Text = L"Gender";
            // 
            // label35
            // 
            this->label35->AutoSize = true;
            this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label35->Location = System::Drawing::Point(3, 129);
            this->label35->Name = L"label35";
            this->label35->Size = System::Drawing::Size(119, 32);
            this->label35->TabIndex = 25;
            this->label35->Text = L"Address";
            // 
            // label36
            // 
            this->label36->AutoSize = true;
            this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label36->Location = System::Drawing::Point(3, 89);
            this->label36->Name = L"label36";
            this->label36->Size = System::Drawing::Size(130, 32);
            this->label36->TabIndex = 24;
            this->label36->Text = L"Surname";
            // 
            // label37
            // 
            this->label37->AutoSize = true;
            this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label37->Location = System::Drawing::Point(3, 53);
            this->label37->Name = L"label37";
            this->label37->Size = System::Drawing::Size(145, 32);
            this->label37->TabIndex = 23;
            this->label37->Text = L"FirstName";
            // 
            // label38
            // 
            this->label38->AutoSize = true;
            this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label38->Location = System::Drawing::Point(3, 13);
            this->label38->Name = L"label38";
            this->label38->Size = System::Drawing::Size(148, 32);
            this->label38->TabIndex = 22;
            this->label38->Text = L"Student ID";
            // 
            // tabPage2
            // 
            this->tabPage2->Controls->Add(this->dataGridView1);
            this->tabPage2->Location = System::Drawing::Point(4, 25);
            this->tabPage2->Name = L"tabPage2";
            this->tabPage2->Padding = System::Windows::Forms::Padding(3);
            this->tabPage2->Size = System::Drawing::Size(1492, 702);
            this->tabPage2->TabIndex = 1;
            this->tabPage2->Text = L"Student Database";
            this->tabPage2->UseVisualStyleBackColor = true;
            // 
            // dataGridView1
            // 
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Location = System::Drawing::Point(7, 4);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->RowHeadersWidth = 51;
            this->dataGridView1->RowTemplate->Height = 24;
            this->dataGridView1->Size = System::Drawing::Size(1486, 692);
            this->dataGridView1->TabIndex = 0;
            this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellClick);
            this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1558, 757);
            this->Controls->Add(this->tabControl1);
            this->Name = L"MyForm";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"MyForm";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            this->tabControl1->ResumeLayout(false);
            this->tabPage1->ResumeLayout(false);
            this->panel3->ResumeLayout(false);
            this->panel3->PerformLayout();
            this->panel12->ResumeLayout(false);
            this->panel6->ResumeLayout(false);
            this->panel6->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudPhD))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudMSc))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudMA))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudBSc))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudBa))->EndInit();
            this->panel11->ResumeLayout(false);
            this->panel11->PerformLayout();
            this->panel4->ResumeLayout(false);
            this->panel4->PerformLayout();
            this->panel5->ResumeLayout(false);
            this->panel5->PerformLayout();
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->tabPage2->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->ResumeLayout(false);

        }
#pragma endregion
        private: System::Void studentUpload()

        {
            sqlConn->ConnectionString = "server=" + server + ";" + "username= " + username + " ;" + " password= " + password + ";" + "database= " + database;
            sqlConn->Open();
            sqlCmd->Connection = sqlConn;
            sqlCmd->CommandText = "select * from cppstudentdb";


            sqlRd = sqlCmd->ExecuteReader();
            sqlDt->Load(sqlRd);
            sqlRd->Close();
            sqlConn->Close();
            dataGridView1->DataSource = sqlDt;

        }

             
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

    studentUpload();
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click_2(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label17_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lblDate_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label23_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox6_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    if (cboCourse->Text == "Select a Course")
    {
        txtCourseCode->Text = "";
        txtFaculty->Text = "";
        txtDeanofFaculty->Text = "";
        txtProgramLeader->Text = "";
        txtCourseCode->Text = "";


}
    else if (cboCourse->Text == "Accounting (ACC, AFA)")
    {
        txtCourseCode->Text = "ACC";
        txtFaculty->Text = "School of Business";
        txtDeanofFaculty->Text = "Prof. Ted Rogers";
        txtProgramLeader->Text = "Dr. Tims";
        txtCourseTutor->Text = "Dr. Strange";
        
    }
    else if (cboCourse->Text == "Aerospace (AER)")
    {
        txtCourseCode->Text = "AER";
        txtFaculty->Text = "Engineering";
        txtDeanofFaculty->Text = "Prof. Danny";
        txtProgramLeader->Text = "Dr. Cole";
        txtCourseTutor->Text = "Dr.Smith ";
    }
    else if (cboCourse->Text == "American Sign Langugage (ASL)")
    {
        txtCourseCode->Text = "ASL";
        txtFaculty->Text = "Liberal Studies";
        txtDeanofFaculty->Text = "Prof. Femi ";
        txtProgramLeader->Text = "Dr. Johnson";
        txtCourseTutor->Text = "Dr. Brown";
    }
}
private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
    sqlConn->ConnectionString = "server=" + server + ";" + "username= " + username + " ;" + " password= " + password + ";" + "database= " + database;
    

    try
    {
        sqlConn->Open();
        sqlQuery = "insert into cppstudentdb(StudentID, Firstname,Surname, Address, Gender, DOB, Mobile, Email, " + "Course, CourseCode, HomeStudent,OverseaStudent, Accommodation, Exchange, Scholarship, BA, BSc," "MA,MSC,PhD, Module1,Module2,Module3,Module4,Module5,Module6,Module7,Module8," + "Score1,Score2,Score3,Score4,Score5,Score6,Score7,Score8,TotalScore,Ranking,Date)" +
            "values('" + txtStudentID->Text + "','" + txtFirstName->Text + "','" + txtSurname->Text + "' , '" + txtAddress->Text + "','" + txtGender->Text + "','" + txtDOB->Text + "','" + txtMobile->Text + "','" + txtEmail->Text + "','" + cboCourse->Text + "','" + txtCourseCode->Text + "','" + cboHomeStudent->Text + "','" + cboOverseaStudent->Text + "','" + cboAccommodation->Text + "','" + cboExchange->Text + "','" + cboScholarship->Text + "','" +
            nudBa->Text + "','" + nudBSc->Text + "','" + nudMA->Text + "','" + nudMSc->Text + "','" + nudPhD->Text + "','" + cboModule1->Text + "','" + cboModule2->Text + "','" + cboModule3->Text + "','" + cboModule4->Text + "','" + cboModule5->Text + "','" +
            cboModule6->Text + "','" + cboModule7->Text + "','" + cboModule8->Text + "','" + txtScore1->Text + "','" + txtScore2->Text + "','" + txtScore3->Text + "','" + txtScore4->Text + "','" +
            txtScore5->Text + "','" + txtScore6->Text + "','" + txtScore7->Text + "','" + txtScore8->Text + "','" + lblTotal->Text + "','" + lblRanking->Text + "','" + lblDate->Text + "')";
    
        sqlCmd = gcnew MySqlCommand(sqlQuery, sqlConn);
        sqlRd = sqlCmd->ExecuteReader();
        sqlConn->Close();
    }
    catch (Exception^ ex)
    {
        MessageBox::Show(ex->Message);
    }
    finally
    {
        sqlConn->Close();
     }
    MessageBox::Show("Stuident Management System Updated");
    studentUpload();
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
    System::Windows::Forms::DialogResult iExit;

    // prompt user to exit client 
    iExit = MessageBox::Show("Confirm if you want to exit", "Student Management System", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
    if (iExit == System::Windows::Forms::DialogResult::Yes)
    {
        Application::Exit();
    }
}
private: System::Void cboModule1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    if (cboModule1->Text == "")
    {
        txtScore1->Text = "0";
        txtScore1->Enabled = false;
    }
    else
    {
        txtScore1->Enabled = true;
        txtScore1->Text = "";
        txtScore1->Focus();
    }
}
private: System::Void cboModule2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    if (cboModule2->Text == "")
    {
        txtScore2->Text = "0";
        txtScore2->Enabled = false;
    }
    else
    {
        txtScore2->Enabled = true;
        txtScore2->Text = "";
        txtScore2->Focus();
    }
}
private: System::Void cboModule3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    if (cboModule3->Text == "")
    {
        txtScore3->Text = "0";
        txtScore3->Enabled = false;
    }
    else
    {
        txtScore3->Enabled = true;
        txtScore3->Text = "";
        txtScore3->Focus();
    }
}
private: System::Void cboModule4_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    if (cboModule4->Text == "")
    {
        txtScore4->Text = "0";
        txtScore4->Enabled = false;
    }
    else
    {
        txtScore4->Enabled = true;
        txtScore4->Text = "";
        txtScore4->Focus();
    }
}
private: System::Void cboModule5_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    if (cboModule5->Text == "")
    {
        txtScore5->Text = "0";
        txtScore5->Enabled = false;
    }
    else
    {
        txtScore5->Enabled = true;
        txtScore5->Text = "";
        txtScore5->Focus();
    }
}
private: System::Void cboModule6_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    if (cboModule6->Text == "")
    {
        txtScore6->Text = "0";
        txtScore6->Enabled = false;
    }
    else
    {
        txtScore6->Enabled = true;
        txtScore6->Text = "";
        txtScore6->Focus();
    }
}
private: System::Void cboModule7_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    if (cboModule7->Text == "")
    {
        txtScore7->Text = "0";
        txtScore7->Enabled = false;
    }
    else
    {
        txtScore7->Enabled = true;
        txtScore7->Text = "";
        txtScore7->Focus();
    }
}
private: System::Void cboModule8_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    if (cboModule8->Text == "")
    {
        txtScore8->Text = "0";
        txtScore8->Enabled = false;
    }
    else
    {
        txtScore8->Enabled = true;
        txtScore8->Text = "";
        txtScore8->Focus();
    }
}
private: System::Void cboModule9_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
  
}
private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {
    txtStudentID->Text = String::Empty;
    txtFirstName->Text = "";
    txtSurname->Text = String::Empty;
    txtAddress->Text = "";
    txtGender->Text = "";
  txtDOB->Text = "";
    txtMobile->Text = "";
    txtEmail->Text = "";
    txtGuidance->Text = "";
    txtgFirstName->Text = "";
    txtgSurname->Text = String::Empty;
    txtgAddress->Text = "";
    txtgMobile->Text = "";
    tetxtgEmail->Text = "";
    cboCourse->Text = "Select a Source";
    cboModule1->Text = "";
    cboModule2->Text = "";
    cboModule3->Text = "";
    cboModule4->Text = "";
    cboModule5->Text = "";
    cboModule6->Text = "";
    cboModule7->Text = "";
    cboModule8->Text = "";
    

    cboHomeStudent->Text = "No";
    cboOverseaStudent->Text = "No";
    cboAccommodation->Text = "No";
    cboExchange->Text = "No";
    cboScholarship->Text = "No";

    txtScore1->Text = "";
    txtScore2->Text = "";
    txtScore3->Text = "";
    txtScore4->Text = "";
    txtScore5->Text = "";
    txtScore6->Text = "";
    txtScore7->Text = "";
    txtScore8->Text = "";

    nudBa->Text = "0";
    nudBSc->Text = "0";
    nudMA->Text = "0";
    nudMSc->Text = "0";
    nudPhD->Text = "0";
    

    lblTotal->Text = "";
    lblRanking->Text = "";
    lblDate->Text = "";



}


private: System::Void MLeaves(System::Object^ sender, System::EventArgs^ e) {
    TextBox^ c = safe_cast<TextBox^>(sender);

    if (c->Text == "")
    {
        c->Text = "0";
    }
   
}
private: System::Void btnResult_Click(System::Object^ sender, System::EventArgs^ e) {
    int  Unit[9];

    try
    {
        Unit[0] = Convert::ToInt32(txtScore1->Text);
        Unit[1] = Convert::ToInt32(txtScore2->Text);
        Unit[2] = Convert::ToInt32(txtScore3->Text);
        Unit[3] = Convert::ToInt32(txtScore4->Text);
        Unit[4] = Convert::ToInt32(txtScore5->Text);
        Unit[5] = Convert::ToInt32(txtScore6->Text);
        Unit[6] = Convert::ToInt32(txtScore7->Text);
        Unit[7] = Convert::ToInt32(txtScore8->Text);

        if (Unit[0] > 100)
        {
            txtScore1->Text = ("0");

        }
        if (Unit[1] > 100)
        {
            txtScore2->Text = ("0");

        }
        if (Unit[2] > 100)
        {
            txtScore3->Text = ("0");

        }
        if (Unit[3] > 100)
        {
            txtScore4->Text = ("0");

        }
        if (Unit[4] > 100)
        {
            txtScore5->Text = ("0");

        }
        if (Unit[5] > 100)
        {
            txtScore6->Text = ("0");

        }
        if (Unit[6] > 100)
        {
            txtScore7->Text = ("0");

        }
        if (Unit[7] > 100)
        {
            txtScore8->Text = ("0");

        }

        Unit[8] = (Unit[0] + Unit[1] + Unit[2] + Unit[3] + Unit[4] + Unit[5] + Unit[6] + Unit[7]);
        
        if (Unit[8] >= 700)
        {
            lblRanking->Text ="1st Class";

        }
        else if (Unit[8] >= 600)
        {
            lblRanking->Text ="2i Class Upper";

        }
        else if (Unit[8] >= 500)
        {
            lblRanking->Text ="2ii Class Lower";

        }
        else if (Unit[8] >= 400)
        {
            lblRanking->Text = "3rd Class Upper";

        }
        else if (Unit[8] >= 300)
        {
            lblRanking->Text = "CoHe";

        }
        else if (Unit[8] <300)
        {
            lblRanking->Text = "Fail";

        }
        lblDate->Text = monthCalendar1->SelectionStart.ToLongDateString();
        lblTotal->Text = Convert::ToString(Unit[8]);

    }

    catch (Exception^ ex)
    {
        MessageBox::Show(ex->Message);
        
    }
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
    try
    {

        txtStudentID->Text = dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString();
        txtFirstName->Text = dataGridView1->SelectedRows[0]->Cells[1]->Value->ToString();
        txtSurname->Text = dataGridView1->SelectedRows[0]->Cells[2]->Value->ToString();
        txtAddress->Text = dataGridView1->SelectedRows[0]->Cells[3]->Value->ToString();
        txtGender->Text = dataGridView1->SelectedRows[0]->Cells[4]->Value->ToString();
        txtDOB->Text = dataGridView1->SelectedRows[0]->Cells[5]->Value->ToString();
        txtMobile->Text = dataGridView1->SelectedRows[0]->Cells[6]->Value->ToString();
        txtEmail->Text = dataGridView1->SelectedRows[0]->Cells[7]->Value->ToString();

        cboCourse->Text = dataGridView1->SelectedRows[0]->Cells[8]->Value->ToString();
        txtCourseCode->Text = dataGridView1->SelectedRows[0]->Cells[9]->Value->ToString();

        cboHomeStudent->Text = dataGridView1->SelectedRows[0]->Cells[10]->Value->ToString();
        cboOverseaStudent->Text = dataGridView1->SelectedRows[0]->Cells[11]->Value->ToString();
        cboAccommodation->Text = dataGridView1->SelectedRows[0]->Cells[12]->Value->ToString();
        cboExchange->Text = dataGridView1->SelectedRows[0]->Cells[13]->Value->ToString();
        cboScholarship->Text = dataGridView1->SelectedRows[0]->Cells[14]->Value->ToString();

       nudBa->Text = dataGridView1->SelectedRows[0]->Cells[15]->Value->ToString();
       nudBSc->Text = dataGridView1->SelectedRows[0]->Cells[16]->Value->ToString();
       nudMA->Text = dataGridView1->SelectedRows[0]->Cells[17]->Value->ToString();
       nudMSc->Text = dataGridView1->SelectedRows[0]->Cells[18]->Value->ToString();
       nudPhD->Text = dataGridView1->SelectedRows[0]->Cells[19]->Value->ToString();

       cboModule1->Text = dataGridView1->SelectedRows[0]->Cells[20]->Value->ToString();
       cboModule2->Text = dataGridView1->SelectedRows[0]->Cells[21]->Value->ToString();
       cboModule3->Text = dataGridView1->SelectedRows[0]->Cells[22]->Value->ToString();
       cboModule4->Text = dataGridView1->SelectedRows[0]->Cells[23]->Value->ToString();
       cboModule5->Text = dataGridView1->SelectedRows[0]->Cells[24]->Value->ToString();
       cboModule6->Text = dataGridView1->SelectedRows[0]->Cells[25]->Value->ToString();
       cboModule7->Text = dataGridView1->SelectedRows[0]->Cells[26]->Value->ToString();
       cboModule8->Text = dataGridView1->SelectedRows[0]->Cells[27]->Value->ToString();

       txtScore1->Text = dataGridView1->SelectedRows[0]->Cells[28]->Value->ToString();
       txtScore2->Text = dataGridView1->SelectedRows[0]->Cells[29]->Value->ToString();
       txtScore3->Text = dataGridView1->SelectedRows[0]->Cells[30]->Value->ToString();
       txtScore4->Text = dataGridView1->SelectedRows[0]->Cells[31]->Value->ToString();
       txtScore5->Text = dataGridView1->SelectedRows[0]->Cells[32]->Value->ToString();
       txtScore6->Text = dataGridView1->SelectedRows[0]->Cells[33]->Value->ToString();
       txtScore7->Text = dataGridView1->SelectedRows[0]->Cells[34]->Value->ToString();
       txtScore8->Text = dataGridView1->SelectedRows[0]->Cells[35]->Value->ToString();


       lblTotal ->Text = dataGridView1->SelectedRows[0]->Cells[36]->Value->ToString();
     lblRanking->Text = dataGridView1->SelectedRows[0]->Cells[37]->Value->ToString();
       lblDate->Text = dataGridView1->SelectedRows[0]->Cells[38]->Value->ToString();


   }
    catch (Exception^ ex)
    {
        MessageBox::Show(ex->Message);
    }
}
};
}
