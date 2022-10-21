#pragma once

namespace Gabinet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;


	/// <summary>
	/// Summary for Program
	/// </summary>
	public ref class Program : public System::Windows::Forms::Form
	{
	public:
		int id_uzytkownika;
	
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ txtPLogin;
	private: System::Windows::Forms::TextBox^ txtPNazwisko;
	private: System::Windows::Forms::TextBox^ txtPImie;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::CheckBox^ chbPPracownik;
	private: System::Windows::Forms::Button^ btnPSzukaj;
	private: System::Windows::Forms::TextBox^ txtPSzukaj;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridView^ dgUzytkownicy;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ btnHZmien;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtHNowe2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtHNowe1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtHStare;
	private: System::Windows::Forms::Button^ btnPUsun;

	private: System::Windows::Forms::Button^ btnPModyfikuj;

	private: System::Windows::Forms::Button^ btnPDodaj;
	private: System::Windows::Forms::GroupBox^ gbPGodziny;

	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ txtP6k;

	private: System::Windows::Forms::TextBox^ txtP6p;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ txtP5k;

	private: System::Windows::Forms::TextBox^ txtP5p;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ txtP4k;

	private: System::Windows::Forms::TextBox^ txtP4p;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ txtP3k;

	private: System::Windows::Forms::TextBox^ txtP3p;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtP2k;

	private: System::Windows::Forms::TextBox^ txtP2p;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtP1k;

	private: System::Windows::Forms::TextBox^ txtP1p;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::GroupBox^ gbUslugi;

	private: System::Windows::Forms::Button^ btnUUsun;
	private: System::Windows::Forms::Button^ btnUModyfikuj;
	private: System::Windows::Forms::Button^ btnUDodaj;
	private: System::Windows::Forms::TextBox^ txtUOpis;
	private: System::Windows::Forms::TextBox^ txtUCzas;
	private: System::Windows::Forms::TextBox^ txtUCena;
	private: System::Windows::Forms::TextBox^ txtUNazwa;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;

	private: System::Windows::Forms::DataGridView^ dgUslugi;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ txtUSzukaj;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::Button^ btnPUSzukaj;

	private: System::Windows::Forms::TextBox^ txtPUSzukaj;

	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::DataGridView^ dgPUUslugiNowe;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::DataGridView^ dgPUUslugi;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::DataGridView^ dgPUPracownik;
private: System::Windows::Forms::TextBox^ txtPUNazwisko;
private: System::Windows::Forms::TextBox^ txtPUImie;
private: System::Windows::Forms::TabPage^ tabPage5;
private: System::Windows::Forms::Button^ btnKUsun;
private: System::Windows::Forms::Button^ btnKModyfikuj;
private: System::Windows::Forms::Button^ btnKDodaj;
private: System::Windows::Forms::GroupBox^ gbKlienci;
private: System::Windows::Forms::TextBox^ txtKMiejscowosc;

private: System::Windows::Forms::Label^ label33;

private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::TextBox^ txtKNumer;

private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::TextBox^ txtKUlica;

private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::TextBox^ txtKTelefon;

private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::TextBox^ txtKEmail;

private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::TextBox^ txtKNazwisko;

private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::TextBox^ txtKImie;

private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::DataGridView^ dgKlienci;
private: System::Windows::Forms::Button^ btnKSzukaj;
private: System::Windows::Forms::TextBox^ txtKSzukaj;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::MaskedTextBox^ txtKKod;
private: System::Windows::Forms::TabPage^ tabPage6;
private: System::Windows::Forms::DataGridView^ dgRUslugi;
private: System::Windows::Forms::Button^ btnRSzukajU;
private: System::Windows::Forms::TextBox^ txtRSzukajU;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::TextBox^ txtRTerminW;

private: System::Windows::Forms::TextBox^ txtRUslugaW;
private: System::Windows::Forms::TextBox^ txtRKlientW;


private: System::Windows::Forms::DataGridView^ dgRPracownik;
private: System::Windows::Forms::Button^ btnRSzukajP;
private: System::Windows::Forms::TextBox^ txtRSzukajP;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
private: System::Windows::Forms::GroupBox^ gbRGodziny;

private: System::Windows::Forms::DataGridView^ dgRKlienci;
private: System::Windows::Forms::Button^ btnRSzukajK;
private: System::Windows::Forms::TextBox^ txtRSzukajK;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Button^ btnRModyfikuj;
private: System::Windows::Forms::Button^ btnRUsun;
private: System::Windows::Forms::Button^ btnRDodaj;
private: System::Windows::Forms::ToolStrip^ toolStrip1;
private: System::Windows::Forms::ToolStripButton^ toolStripButton1;
private: System::Windows::Forms::ToolStripButton^ toolStripButton2;
private: System::Windows::Forms::ToolStripButton^ toolStripButton3;
private: System::Windows::Forms::ToolStripButton^ toolStripButton4;
private: System::Windows::Forms::ToolStripButton^ toolStripButton5;
private: System::Windows::Forms::ToolStripButton^ toolStripButton6;





	public:
		String^ konfiguracja = L"datasource=localhost;port=3306;username=root;password=AAhh5%gX#;database=gabinet";
		Program(int uzytkownik)
		{
			InitializeComponent();
			id_uzytkownika = uzytkownik;
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Program()
		{
			if (components)
			{
				delete components;
			}
		}

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Program::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->btnRModyfikuj = (gcnew System::Windows::Forms::Button());
			this->btnRUsun = (gcnew System::Windows::Forms::Button());
			this->btnRDodaj = (gcnew System::Windows::Forms::Button());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->txtRTerminW = (gcnew System::Windows::Forms::TextBox());
			this->txtRUslugaW = (gcnew System::Windows::Forms::TextBox());
			this->txtRKlientW = (gcnew System::Windows::Forms::TextBox());
			this->dgRPracownik = (gcnew System::Windows::Forms::DataGridView());
			this->btnRSzukajP = (gcnew System::Windows::Forms::Button());
			this->txtRSzukajP = (gcnew System::Windows::Forms::TextBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->gbRGodziny = (gcnew System::Windows::Forms::GroupBox());
			this->dgRKlienci = (gcnew System::Windows::Forms::DataGridView());
			this->btnRSzukajK = (gcnew System::Windows::Forms::Button());
			this->txtRSzukajK = (gcnew System::Windows::Forms::TextBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->dgRUslugi = (gcnew System::Windows::Forms::DataGridView());
			this->btnRSzukajU = (gcnew System::Windows::Forms::Button());
			this->txtRSzukajU = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->btnKUsun = (gcnew System::Windows::Forms::Button());
			this->btnKModyfikuj = (gcnew System::Windows::Forms::Button());
			this->btnKDodaj = (gcnew System::Windows::Forms::Button());
			this->gbKlienci = (gcnew System::Windows::Forms::GroupBox());
			this->txtKKod = (gcnew System::Windows::Forms::MaskedTextBox());
			this->txtKMiejscowosc = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->txtKNumer = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->txtKUlica = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->txtKTelefon = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->txtKEmail = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->txtKNazwisko = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->txtKImie = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->dgKlienci = (gcnew System::Windows::Forms::DataGridView());
			this->btnKSzukaj = (gcnew System::Windows::Forms::Button());
			this->txtKSzukaj = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->gbPGodziny = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txtP6k = (gcnew System::Windows::Forms::TextBox());
			this->txtP6p = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txtP5k = (gcnew System::Windows::Forms::TextBox());
			this->txtP5p = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txtP4k = (gcnew System::Windows::Forms::TextBox());
			this->txtP4p = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txtP3k = (gcnew System::Windows::Forms::TextBox());
			this->txtP3p = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtP2k = (gcnew System::Windows::Forms::TextBox());
			this->txtP2p = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtP1k = (gcnew System::Windows::Forms::TextBox());
			this->txtP1p = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->btnPUsun = (gcnew System::Windows::Forms::Button());
			this->btnPModyfikuj = (gcnew System::Windows::Forms::Button());
			this->btnPDodaj = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->txtPLogin = (gcnew System::Windows::Forms::TextBox());
			this->txtPNazwisko = (gcnew System::Windows::Forms::TextBox());
			this->txtPImie = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->chbPPracownik = (gcnew System::Windows::Forms::CheckBox());
			this->btnPSzukaj = (gcnew System::Windows::Forms::Button());
			this->txtPSzukaj = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dgUzytkownicy = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->gbUslugi = (gcnew System::Windows::Forms::GroupBox());
			this->btnUUsun = (gcnew System::Windows::Forms::Button());
			this->btnUModyfikuj = (gcnew System::Windows::Forms::Button());
			this->btnUDodaj = (gcnew System::Windows::Forms::Button());
			this->txtUOpis = (gcnew System::Windows::Forms::TextBox());
			this->txtUCzas = (gcnew System::Windows::Forms::TextBox());
			this->txtUCena = (gcnew System::Windows::Forms::TextBox());
			this->txtUNazwa = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->dgUslugi = (gcnew System::Windows::Forms::DataGridView());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->txtUSzukaj = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->txtPUNazwisko = (gcnew System::Windows::Forms::TextBox());
			this->txtPUImie = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->dgPUUslugiNowe = (gcnew System::Windows::Forms::DataGridView());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->dgPUUslugi = (gcnew System::Windows::Forms::DataGridView());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->dgPUPracownik = (gcnew System::Windows::Forms::DataGridView());
			this->btnPUSzukaj = (gcnew System::Windows::Forms::Button());
			this->txtPUSzukaj = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnHZmien = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtHNowe2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtHNowe1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtHStare = (gcnew System::Windows::Forms::TextBox());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton4 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton5 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton6 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->tabControl1->SuspendLayout();
			this->tabPage6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgRPracownik))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgRKlienci))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgRUslugi))->BeginInit();
			this->tabPage5->SuspendLayout();
			this->gbKlienci->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgKlienci))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->gbPGodziny->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgUzytkownicy))->BeginInit();
			this->tabPage3->SuspendLayout();
			this->gbUslugi->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgUslugi))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgPUUslugiNowe))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgPUUslugi))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgPUPracownik))->BeginInit();
			this->tabPage1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Alignment = System::Windows::Forms::TabAlignment::Bottom;
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Location = System::Drawing::Point(11, 93);
			this->tabControl1->Multiline = true;
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1061, 601);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->btnRModyfikuj);
			this->tabPage6->Controls->Add(this->btnRUsun);
			this->tabPage6->Controls->Add(this->btnRDodaj);
			this->tabPage6->Controls->Add(this->label39);
			this->tabPage6->Controls->Add(this->label38);
			this->tabPage6->Controls->Add(this->label37);
			this->tabPage6->Controls->Add(this->txtRTerminW);
			this->tabPage6->Controls->Add(this->txtRUslugaW);
			this->tabPage6->Controls->Add(this->txtRKlientW);
			this->tabPage6->Controls->Add(this->dgRPracownik);
			this->tabPage6->Controls->Add(this->btnRSzukajP);
			this->tabPage6->Controls->Add(this->txtRSzukajP);
			this->tabPage6->Controls->Add(this->label36);
			this->tabPage6->Controls->Add(this->monthCalendar1);
			this->tabPage6->Controls->Add(this->gbRGodziny);
			this->tabPage6->Controls->Add(this->dgRKlienci);
			this->tabPage6->Controls->Add(this->btnRSzukajK);
			this->tabPage6->Controls->Add(this->txtRSzukajK);
			this->tabPage6->Controls->Add(this->label35);
			this->tabPage6->Controls->Add(this->dgRUslugi);
			this->tabPage6->Controls->Add(this->btnRSzukajU);
			this->tabPage6->Controls->Add(this->txtRSzukajU);
			this->tabPage6->Controls->Add(this->label34);
			this->tabPage6->Location = System::Drawing::Point(4, 4);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(1053, 570);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"Rezerwacje";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// btnRModyfikuj
			// 
			this->btnRModyfikuj->BackColor = System::Drawing::Color::MediumTurquoise;
			this->btnRModyfikuj->Enabled = false;
			this->btnRModyfikuj->FlatAppearance->BorderSize = 0;
			this->btnRModyfikuj->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRModyfikuj->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnRModyfikuj->ForeColor = System::Drawing::Color::White;
			this->btnRModyfikuj->Location = System::Drawing::Point(145, 452);
			this->btnRModyfikuj->Name = L"btnRModyfikuj";
			this->btnRModyfikuj->Size = System::Drawing::Size(144, 43);
			this->btnRModyfikuj->TabIndex = 21;
			this->btnRModyfikuj->Text = L"Modyfikuj";
			this->btnRModyfikuj->UseVisualStyleBackColor = false;
			this->btnRModyfikuj->Click += gcnew System::EventHandler(this, &Program::btnRModyfikuj_Click);
			// 
			// btnRUsun
			// 
			this->btnRUsun->BackColor = System::Drawing::Color::Crimson;
			this->btnRUsun->Enabled = false;
			this->btnRUsun->FlatAppearance->BorderSize = 0;
			this->btnRUsun->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRUsun->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnRUsun->ForeColor = System::Drawing::Color::White;
			this->btnRUsun->Location = System::Drawing::Point(49, 452);
			this->btnRUsun->Name = L"btnRUsun";
			this->btnRUsun->Size = System::Drawing::Size(79, 43);
			this->btnRUsun->TabIndex = 20;
			this->btnRUsun->Text = L"Usuñ";
			this->btnRUsun->UseVisualStyleBackColor = false;
			this->btnRUsun->Click += gcnew System::EventHandler(this, &Program::btnRUsun_Click);
			// 
			// btnRDodaj
			// 
			this->btnRDodaj->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->btnRDodaj->FlatAppearance->BorderSize = 0;
			this->btnRDodaj->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRDodaj->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnRDodaj->ForeColor = System::Drawing::Color::White;
			this->btnRDodaj->Location = System::Drawing::Point(49, 511);
			this->btnRDodaj->Name = L"btnRDodaj";
			this->btnRDodaj->Size = System::Drawing::Size(240, 43);
			this->btnRDodaj->TabIndex = 19;
			this->btnRDodaj->Text = L"Dodaj";
			this->btnRDodaj->UseVisualStyleBackColor = false;
			this->btnRDodaj->Click += gcnew System::EventHandler(this, &Program::btnRDodaj_Click);
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label39->Location = System::Drawing::Point(6, 357);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(67, 23);
			this->label39->TabIndex = 18;
			this->label39->Text = L"Termin:";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label38->Location = System::Drawing::Point(9, 289);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(67, 23);
			this->label38->TabIndex = 17;
			this->label38->Text = L"Usluga:";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label37->Location = System::Drawing::Point(9, 220);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(58, 23);
			this->label37->TabIndex = 16;
			this->label37->Text = L"Klient:";
			// 
			// txtRTerminW
			// 
			this->txtRTerminW->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtRTerminW->Location = System::Drawing::Point(9, 380);
			this->txtRTerminW->Name = L"txtRTerminW";
			this->txtRTerminW->Size = System::Drawing::Size(316, 29);
			this->txtRTerminW->TabIndex = 15;
			// 
			// txtRUslugaW
			// 
			this->txtRUslugaW->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtRUslugaW->Location = System::Drawing::Point(9, 312);
			this->txtRUslugaW->Name = L"txtRUslugaW";
			this->txtRUslugaW->Size = System::Drawing::Size(316, 29);
			this->txtRUslugaW->TabIndex = 14;
			// 
			// txtRKlientW
			// 
			this->txtRKlientW->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtRKlientW->Location = System::Drawing::Point(9, 243);
			this->txtRKlientW->Name = L"txtRKlientW";
			this->txtRKlientW->Size = System::Drawing::Size(316, 29);
			this->txtRKlientW->TabIndex = 1;
			// 
			// dgRPracownik
			// 
			this->dgRPracownik->AllowUserToAddRows = false;
			this->dgRPracownik->AllowUserToDeleteRows = false;
			this->dgRPracownik->AllowUserToOrderColumns = true;
			this->dgRPracownik->BackgroundColor = System::Drawing::Color::White;
			this->dgRPracownik->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgRPracownik->Location = System::Drawing::Point(538, 430);
			this->dgRPracownik->Name = L"dgRPracownik";
			this->dgRPracownik->ReadOnly = true;
			this->dgRPracownik->RowHeadersWidth = 51;
			this->dgRPracownik->RowTemplate->Height = 24;
			this->dgRPracownik->Size = System::Drawing::Size(509, 124);
			this->dgRPracownik->TabIndex = 13;
			this->dgRPracownik->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dgRPracownik_CellClick);
			// 
			// btnRSzukajP
			// 
			this->btnRSzukajP->BackColor = System::Drawing::Color::DarkOrange;
			this->btnRSzukajP->FlatAppearance->BorderSize = 0;
			this->btnRSzukajP->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRSzukajP->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnRSzukajP->ForeColor = System::Drawing::Color::White;
			this->btnRSzukajP->Location = System::Drawing::Point(782, 394);
			this->btnRSzukajP->Name = L"btnRSzukajP";
			this->btnRSzukajP->Size = System::Drawing::Size(86, 29);
			this->btnRSzukajP->TabIndex = 12;
			this->btnRSzukajP->Text = L"Szukaj";
			this->btnRSzukajP->UseVisualStyleBackColor = false;
			this->btnRSzukajP->Click += gcnew System::EventHandler(this, &Program::btnRSzukajP_Click);
			// 
			// txtRSzukajP
			// 
			this->txtRSzukajP->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtRSzukajP->Location = System::Drawing::Point(637, 396);
			this->txtRSzukajP->Name = L"txtRSzukajP";
			this->txtRSzukajP->Size = System::Drawing::Size(120, 29);
			this->txtRSzukajP->TabIndex = 11;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label36->Location = System::Drawing::Point(536, 399);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(96, 23);
			this->label36->TabIndex = 10;
			this->label36->Text = L"Pracownik:";
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Enabled = false;
			this->monthCalendar1->Location = System::Drawing::Point(0, 0);
			this->monthCalendar1->Margin = System::Windows::Forms::Padding(10, 12, 10, 12);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 9;
			this->monthCalendar1->DateSelected += gcnew System::Windows::Forms::DateRangeEventHandler(this, &Program::monthCalendar1_DateSelected);
			// 
			// gbRGodziny
			// 
			this->gbRGodziny->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->gbRGodziny->Location = System::Drawing::Point(338, 7);
			this->gbRGodziny->Name = L"gbRGodziny";
			this->gbRGodziny->Size = System::Drawing::Size(194, 547);
			this->gbRGodziny->TabIndex = 8;
			this->gbRGodziny->TabStop = false;
			this->gbRGodziny->Text = L"Godziny";
			// 
			// dgRKlienci
			// 
			this->dgRKlienci->AllowUserToAddRows = false;
			this->dgRKlienci->AllowUserToDeleteRows = false;
			this->dgRKlienci->AllowUserToOrderColumns = true;
			this->dgRKlienci->BackgroundColor = System::Drawing::Color::White;
			this->dgRKlienci->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgRKlienci->Location = System::Drawing::Point(538, 236);
			this->dgRKlienci->Name = L"dgRKlienci";
			this->dgRKlienci->ReadOnly = true;
			this->dgRKlienci->RowHeadersWidth = 51;
			this->dgRKlienci->RowTemplate->Height = 24;
			this->dgRKlienci->Size = System::Drawing::Size(509, 123);
			this->dgRKlienci->TabIndex = 7;
			this->dgRKlienci->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dgRKlienci_CellClick);
			// 
			// btnRSzukajK
			// 
			this->btnRSzukajK->BackColor = System::Drawing::Color::DarkOrange;
			this->btnRSzukajK->FlatAppearance->BorderSize = 0;
			this->btnRSzukajK->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRSzukajK->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnRSzukajK->ForeColor = System::Drawing::Color::White;
			this->btnRSzukajK->Location = System::Drawing::Point(782, 200);
			this->btnRSzukajK->Name = L"btnRSzukajK";
			this->btnRSzukajK->Size = System::Drawing::Size(86, 29);
			this->btnRSzukajK->TabIndex = 6;
			this->btnRSzukajK->Text = L"Szukaj";
			this->btnRSzukajK->UseVisualStyleBackColor = false;
			this->btnRSzukajK->Click += gcnew System::EventHandler(this, &Program::btnRSzukajK_Click);
			// 
			// txtRSzukajK
			// 
			this->txtRSzukajK->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtRSzukajK->Location = System::Drawing::Point(637, 203);
			this->txtRSzukajK->Name = L"txtRSzukajK";
			this->txtRSzukajK->Size = System::Drawing::Size(120, 29);
			this->txtRSzukajK->TabIndex = 5;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label35->Location = System::Drawing::Point(536, 205);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(58, 23);
			this->label35->TabIndex = 4;
			this->label35->Text = L"Klient:";
			// 
			// dgRUslugi
			// 
			this->dgRUslugi->AllowUserToAddRows = false;
			this->dgRUslugi->AllowUserToDeleteRows = false;
			this->dgRUslugi->AllowUserToOrderColumns = true;
			this->dgRUslugi->BackgroundColor = System::Drawing::Color::White;
			this->dgRUslugi->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgRUslugi->Location = System::Drawing::Point(538, 45);
			this->dgRUslugi->Name = L"dgRUslugi";
			this->dgRUslugi->ReadOnly = true;
			this->dgRUslugi->RowHeadersWidth = 51;
			this->dgRUslugi->RowTemplate->Height = 24;
			this->dgRUslugi->Size = System::Drawing::Size(509, 124);
			this->dgRUslugi->TabIndex = 3;
			this->dgRUslugi->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dgRUslugi_CellClick);
			// 
			// btnRSzukajU
			// 
			this->btnRSzukajU->BackColor = System::Drawing::Color::DarkOrange;
			this->btnRSzukajU->FlatAppearance->BorderSize = 0;
			this->btnRSzukajU->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRSzukajU->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnRSzukajU->ForeColor = System::Drawing::Color::White;
			this->btnRSzukajU->Location = System::Drawing::Point(782, 9);
			this->btnRSzukajU->Name = L"btnRSzukajU";
			this->btnRSzukajU->Size = System::Drawing::Size(86, 29);
			this->btnRSzukajU->TabIndex = 2;
			this->btnRSzukajU->Text = L"Szukaj";
			this->btnRSzukajU->UseVisualStyleBackColor = false;
			this->btnRSzukajU->Click += gcnew System::EventHandler(this, &Program::btnRSzukajU_Click);
			// 
			// txtRSzukajU
			// 
			this->txtRSzukajU->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtRSzukajU->Location = System::Drawing::Point(637, 11);
			this->txtRSzukajU->Name = L"txtRSzukajU";
			this->txtRSzukajU->Size = System::Drawing::Size(120, 29);
			this->txtRSzukajU->TabIndex = 1;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label34->Location = System::Drawing::Point(536, 15);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(68, 23);
			this->label34->TabIndex = 0;
			this->label34->Text = L"Us³uga:";
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->btnKUsun);
			this->tabPage5->Controls->Add(this->btnKModyfikuj);
			this->tabPage5->Controls->Add(this->btnKDodaj);
			this->tabPage5->Controls->Add(this->gbKlienci);
			this->tabPage5->Controls->Add(this->dgKlienci);
			this->tabPage5->Controls->Add(this->btnKSzukaj);
			this->tabPage5->Controls->Add(this->txtKSzukaj);
			this->tabPage5->Controls->Add(this->label25);
			this->tabPage5->Location = System::Drawing::Point(4, 4);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(1053, 570);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Klienci";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// btnKUsun
			// 
			this->btnKUsun->BackColor = System::Drawing::Color::Crimson;
			this->btnKUsun->FlatAppearance->BorderSize = 0;
			this->btnKUsun->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnKUsun->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnKUsun->ForeColor = System::Drawing::Color::White;
			this->btnKUsun->Location = System::Drawing::Point(305, 507);
			this->btnKUsun->Name = L"btnKUsun";
			this->btnKUsun->Size = System::Drawing::Size(132, 35);
			this->btnKUsun->TabIndex = 7;
			this->btnKUsun->Text = L"Usuñ";
			this->btnKUsun->UseVisualStyleBackColor = false;
			this->btnKUsun->Visible = false;
			this->btnKUsun->Click += gcnew System::EventHandler(this, &Program::btnKUsun_Click);
			// 
			// btnKModyfikuj
			// 
			this->btnKModyfikuj->BackColor = System::Drawing::Color::MediumTurquoise;
			this->btnKModyfikuj->FlatAppearance->BorderSize = 0;
			this->btnKModyfikuj->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnKModyfikuj->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnKModyfikuj->ForeColor = System::Drawing::Color::White;
			this->btnKModyfikuj->Location = System::Drawing::Point(453, 507);
			this->btnKModyfikuj->Name = L"btnKModyfikuj";
			this->btnKModyfikuj->Size = System::Drawing::Size(132, 35);
			this->btnKModyfikuj->TabIndex = 6;
			this->btnKModyfikuj->Text = L"Modyfikuj";
			this->btnKModyfikuj->UseVisualStyleBackColor = false;
			this->btnKModyfikuj->Visible = false;
			this->btnKModyfikuj->Click += gcnew System::EventHandler(this, &Program::btnKModyfikuj_Click);
			// 
			// btnKDodaj
			// 
			this->btnKDodaj->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->btnKDodaj->FlatAppearance->BorderSize = 0;
			this->btnKDodaj->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnKDodaj->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnKDodaj->ForeColor = System::Drawing::Color::White;
			this->btnKDodaj->Location = System::Drawing::Point(596, 507);
			this->btnKDodaj->Name = L"btnKDodaj";
			this->btnKDodaj->Size = System::Drawing::Size(132, 35);
			this->btnKDodaj->TabIndex = 5;
			this->btnKDodaj->Text = L"Dodaj";
			this->btnKDodaj->UseVisualStyleBackColor = false;
			this->btnKDodaj->Click += gcnew System::EventHandler(this, &Program::btnKDodaj_Click);
			// 
			// gbKlienci
			// 
			this->gbKlienci->Controls->Add(this->txtKKod);
			this->gbKlienci->Controls->Add(this->txtKMiejscowosc);
			this->gbKlienci->Controls->Add(this->label33);
			this->gbKlienci->Controls->Add(this->label32);
			this->gbKlienci->Controls->Add(this->txtKNumer);
			this->gbKlienci->Controls->Add(this->label31);
			this->gbKlienci->Controls->Add(this->txtKUlica);
			this->gbKlienci->Controls->Add(this->label30);
			this->gbKlienci->Controls->Add(this->txtKTelefon);
			this->gbKlienci->Controls->Add(this->label29);
			this->gbKlienci->Controls->Add(this->txtKEmail);
			this->gbKlienci->Controls->Add(this->label28);
			this->gbKlienci->Controls->Add(this->txtKNazwisko);
			this->gbKlienci->Controls->Add(this->label27);
			this->gbKlienci->Controls->Add(this->txtKImie);
			this->gbKlienci->Controls->Add(this->label26);
			this->gbKlienci->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->gbKlienci->Location = System::Drawing::Point(9, 263);
			this->gbKlienci->Name = L"gbKlienci";
			this->gbKlienci->Size = System::Drawing::Size(1014, 213);
			this->gbKlienci->TabIndex = 4;
			this->gbKlienci->TabStop = false;
			this->gbKlienci->Text = L"Edycja danych klienta";
			// 
			// txtKKod
			// 
			this->txtKKod->Location = System::Drawing::Point(694, 116);
			this->txtKKod->Mask = L"00-999";
			this->txtKKod->Name = L"txtKKod";
			this->txtKKod->Size = System::Drawing::Size(57, 29);
			this->txtKKod->TabIndex = 16;
			// 
			// txtKMiejscowosc
			// 
			this->txtKMiejscowosc->Location = System::Drawing::Point(671, 159);
			this->txtKMiejscowosc->Name = L"txtKMiejscowosc";
			this->txtKMiejscowosc->Size = System::Drawing::Size(100, 29);
			this->txtKMiejscowosc->TabIndex = 15;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(549, 162);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(115, 23);
			this->label33->TabIndex = 14;
			this->label33->Text = L"Miejscowoœæ:";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(549, 119);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(124, 23);
			this->label32->TabIndex = 12;
			this->label32->Text = L"Kod pocztowy:";
			// 
			// txtKNumer
			// 
			this->txtKNumer->Location = System::Drawing::Point(694, 71);
			this->txtKNumer->Name = L"txtKNumer";
			this->txtKNumer->Size = System::Drawing::Size(57, 29);
			this->txtKNumer->TabIndex = 11;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(549, 74);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(68, 23);
			this->label31->TabIndex = 10;
			this->label31->Text = L"Numer:";
			// 
			// txtKUlica
			// 
			this->txtKUlica->Location = System::Drawing::Point(671, 26);
			this->txtKUlica->Name = L"txtKUlica";
			this->txtKUlica->Size = System::Drawing::Size(100, 29);
			this->txtKUlica->TabIndex = 9;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(549, 29);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(52, 23);
			this->label30->TabIndex = 8;
			this->label30->Text = L"Ulica:";
			// 
			// txtKTelefon
			// 
			this->txtKTelefon->Location = System::Drawing::Point(340, 159);
			this->txtKTelefon->Name = L"txtKTelefon";
			this->txtKTelefon->Size = System::Drawing::Size(100, 29);
			this->txtKTelefon->TabIndex = 7;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(236, 163);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(70, 23);
			this->label29->TabIndex = 6;
			this->label29->Text = L"Telefon:";
			// 
			// txtKEmail
			// 
			this->txtKEmail->Location = System::Drawing::Point(340, 116);
			this->txtKEmail->Name = L"txtKEmail";
			this->txtKEmail->Size = System::Drawing::Size(100, 29);
			this->txtKEmail->TabIndex = 5;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(236, 120);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(56, 23);
			this->label28->TabIndex = 4;
			this->label28->Text = L"Email:";
			// 
			// txtKNazwisko
			// 
			this->txtKNazwisko->Location = System::Drawing::Point(340, 71);
			this->txtKNazwisko->Name = L"txtKNazwisko";
			this->txtKNazwisko->Size = System::Drawing::Size(100, 29);
			this->txtKNazwisko->TabIndex = 3;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(236, 75);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(88, 23);
			this->label27->TabIndex = 2;
			this->label27->Text = L"Nazwisko:";
			// 
			// txtKImie
			// 
			this->txtKImie->Location = System::Drawing::Point(340, 26);
			this->txtKImie->Name = L"txtKImie";
			this->txtKImie->Size = System::Drawing::Size(100, 29);
			this->txtKImie->TabIndex = 1;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(236, 30);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(49, 23);
			this->label26->TabIndex = 0;
			this->label26->Text = L"Imiê:";
			// 
			// dgKlienci
			// 
			this->dgKlienci->AllowUserToAddRows = false;
			this->dgKlienci->AllowUserToDeleteRows = false;
			this->dgKlienci->AllowUserToOrderColumns = true;
			this->dgKlienci->BackgroundColor = System::Drawing::Color::White;
			this->dgKlienci->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgKlienci->Location = System::Drawing::Point(9, 50);
			this->dgKlienci->Name = L"dgKlienci";
			this->dgKlienci->ReadOnly = true;
			this->dgKlienci->RowHeadersWidth = 51;
			this->dgKlienci->RowTemplate->Height = 24;
			this->dgKlienci->Size = System::Drawing::Size(1029, 207);
			this->dgKlienci->TabIndex = 3;
			this->dgKlienci->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dgKlienci_CellClick);
			// 
			// btnKSzukaj
			// 
			this->btnKSzukaj->BackColor = System::Drawing::Color::DarkOrange;
			this->btnKSzukaj->FlatAppearance->BorderSize = 0;
			this->btnKSzukaj->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnKSzukaj->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnKSzukaj->ForeColor = System::Drawing::Color::White;
			this->btnKSzukaj->Location = System::Drawing::Point(250, 9);
			this->btnKSzukaj->Name = L"btnKSzukaj";
			this->btnKSzukaj->Size = System::Drawing::Size(77, 31);
			this->btnKSzukaj->TabIndex = 2;
			this->btnKSzukaj->Text = L"Szukaj";
			this->btnKSzukaj->UseVisualStyleBackColor = false;
			this->btnKSzukaj->Click += gcnew System::EventHandler(this, &Program::btnKSzukaj_Click);
			// 
			// txtKSzukaj
			// 
			this->txtKSzukaj->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtKSzukaj->Location = System::Drawing::Point(92, 10);
			this->txtKSzukaj->Name = L"txtKSzukaj";
			this->txtKSzukaj->Size = System::Drawing::Size(138, 29);
			this->txtKSzukaj->TabIndex = 1;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label25->Location = System::Drawing::Point(17, 13);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(58, 23);
			this->label25->TabIndex = 0;
			this->label25->Text = L"Klient:";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->gbPGodziny);
			this->tabPage2->Controls->Add(this->btnPUsun);
			this->tabPage2->Controls->Add(this->btnPModyfikuj);
			this->tabPage2->Controls->Add(this->btnPDodaj);
			this->tabPage2->Controls->Add(this->groupBox2);
			this->tabPage2->Controls->Add(this->btnPSzukaj);
			this->tabPage2->Controls->Add(this->txtPSzukaj);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->dgUzytkownicy);
			this->tabPage2->Location = System::Drawing::Point(4, 4);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1053, 570);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Pracownicy";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// gbPGodziny
			// 
			this->gbPGodziny->Controls->Add(this->groupBox4);
			this->gbPGodziny->Controls->Add(this->txtP6k);
			this->gbPGodziny->Controls->Add(this->txtP6p);
			this->gbPGodziny->Controls->Add(this->label13);
			this->gbPGodziny->Controls->Add(this->txtP5k);
			this->gbPGodziny->Controls->Add(this->txtP5p);
			this->gbPGodziny->Controls->Add(this->label12);
			this->gbPGodziny->Controls->Add(this->txtP4k);
			this->gbPGodziny->Controls->Add(this->txtP4p);
			this->gbPGodziny->Controls->Add(this->label11);
			this->gbPGodziny->Controls->Add(this->txtP3k);
			this->gbPGodziny->Controls->Add(this->txtP3p);
			this->gbPGodziny->Controls->Add(this->label10);
			this->gbPGodziny->Controls->Add(this->txtP2k);
			this->gbPGodziny->Controls->Add(this->txtP2p);
			this->gbPGodziny->Controls->Add(this->label9);
			this->gbPGodziny->Controls->Add(this->txtP1k);
			this->gbPGodziny->Controls->Add(this->txtP1p);
			this->gbPGodziny->Controls->Add(this->label8);
			this->gbPGodziny->Location = System::Drawing::Point(13, 242);
			this->gbPGodziny->Name = L"gbPGodziny";
			this->gbPGodziny->Size = System::Drawing::Size(449, 251);
			this->gbPGodziny->TabIndex = 8;
			this->gbPGodziny->TabStop = false;
			this->gbPGodziny->Text = L"Godziny pracy";
			this->gbPGodziny->Visible = false;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->button4);
			this->groupBox4->Controls->Add(this->button3);
			this->groupBox4->Controls->Add(this->button2);
			this->groupBox4->Controls->Add(this->button1);
			this->groupBox4->Location = System::Drawing::Point(291, 36);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(129, 200);
			this->groupBox4->TabIndex = 18;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Szablony";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Turquoise;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(26, 154);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 34);
			this->button4->TabIndex = 3;
			this->button4->Text = L"10-18";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Program::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Turquoise;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(26, 111);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 36);
			this->button3->TabIndex = 2;
			this->button3->Text = L"9-17";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Program::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Turquoise;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(26, 69);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 36);
			this->button2->TabIndex = 1;
			this->button2->Text = L"8-16";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Program::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Turquoise;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(26, 28);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 34);
			this->button1->TabIndex = 0;
			this->button1->Text = L"7-15";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Program::button1_Click);
			// 
			// txtP6k
			// 
			this->txtP6k->Location = System::Drawing::Point(206, 199);
			this->txtP6k->Name = L"txtP6k";
			this->txtP6k->Size = System::Drawing::Size(70, 26);
			this->txtP6k->TabIndex = 17;
			// 
			// txtP6p
			// 
			this->txtP6p->Location = System::Drawing::Point(116, 199);
			this->txtP6p->Name = L"txtP6p";
			this->txtP6p->Size = System::Drawing::Size(72, 26);
			this->txtP6p->TabIndex = 16;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(15, 203);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(51, 18);
			this->label13->TabIndex = 15;
			this->label13->Text = L"Sobota";
			// 
			// txtP5k
			// 
			this->txtP5k->Location = System::Drawing::Point(206, 168);
			this->txtP5k->Name = L"txtP5k";
			this->txtP5k->Size = System::Drawing::Size(70, 26);
			this->txtP5k->TabIndex = 14;
			// 
			// txtP5p
			// 
			this->txtP5p->Location = System::Drawing::Point(116, 168);
			this->txtP5p->Name = L"txtP5p";
			this->txtP5p->Size = System::Drawing::Size(72, 26);
			this->txtP5p->TabIndex = 13;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(15, 171);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(47, 18);
			this->label12->TabIndex = 12;
			this->label12->Text = L"Pi¹tek";
			// 
			// txtP4k
			// 
			this->txtP4k->Location = System::Drawing::Point(206, 136);
			this->txtP4k->Name = L"txtP4k";
			this->txtP4k->Size = System::Drawing::Size(70, 26);
			this->txtP4k->TabIndex = 11;
			// 
			// txtP4p
			// 
			this->txtP4p->Location = System::Drawing::Point(116, 136);
			this->txtP4p->Name = L"txtP4p";
			this->txtP4p->Size = System::Drawing::Size(72, 26);
			this->txtP4p->TabIndex = 10;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(15, 139);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(65, 18);
			this->label11->TabIndex = 9;
			this->label11->Text = L"Czwartek";
			// 
			// txtP3k
			// 
			this->txtP3k->Location = System::Drawing::Point(206, 105);
			this->txtP3k->Name = L"txtP3k";
			this->txtP3k->Size = System::Drawing::Size(70, 26);
			this->txtP3k->TabIndex = 8;
			// 
			// txtP3p
			// 
			this->txtP3p->Location = System::Drawing::Point(116, 105);
			this->txtP3p->Name = L"txtP3p";
			this->txtP3p->Size = System::Drawing::Size(72, 26);
			this->txtP3p->TabIndex = 7;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(15, 108);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(43, 18);
			this->label10->TabIndex = 6;
			this->label10->Text = L"Œroda";
			// 
			// txtP2k
			// 
			this->txtP2k->Location = System::Drawing::Point(206, 73);
			this->txtP2k->Name = L"txtP2k";
			this->txtP2k->Size = System::Drawing::Size(70, 26);
			this->txtP2k->TabIndex = 5;
			// 
			// txtP2p
			// 
			this->txtP2p->Location = System::Drawing::Point(116, 73);
			this->txtP2p->Name = L"txtP2p";
			this->txtP2p->Size = System::Drawing::Size(72, 26);
			this->txtP2p->TabIndex = 4;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(15, 77);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(54, 18);
			this->label9->TabIndex = 3;
			this->label9->Text = L"Wtorek";
			// 
			// txtP1k
			// 
			this->txtP1k->Location = System::Drawing::Point(206, 42);
			this->txtP1k->Name = L"txtP1k";
			this->txtP1k->Size = System::Drawing::Size(70, 26);
			this->txtP1k->TabIndex = 2;
			// 
			// txtP1p
			// 
			this->txtP1p->Location = System::Drawing::Point(116, 42);
			this->txtP1p->Name = L"txtP1p";
			this->txtP1p->Size = System::Drawing::Size(72, 26);
			this->txtP1p->TabIndex = 1;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(15, 45);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(88, 18);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Poniedzia³ek";
			// 
			// btnPUsun
			// 
			this->btnPUsun->BackColor = System::Drawing::Color::Crimson;
			this->btnPUsun->Enabled = false;
			this->btnPUsun->FlatAppearance->BorderSize = 0;
			this->btnPUsun->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPUsun->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnPUsun->ForeColor = System::Drawing::Color::White;
			this->btnPUsun->Location = System::Drawing::Point(44, 512);
			this->btnPUsun->Name = L"btnPUsun";
			this->btnPUsun->Size = System::Drawing::Size(87, 34);
			this->btnPUsun->TabIndex = 7;
			this->btnPUsun->Text = L"Usuñ";
			this->btnPUsun->UseVisualStyleBackColor = false;
			this->btnPUsun->Click += gcnew System::EventHandler(this, &Program::btnPUsun_Click);
			// 
			// btnPModyfikuj
			// 
			this->btnPModyfikuj->BackColor = System::Drawing::Color::MediumTurquoise;
			this->btnPModyfikuj->Enabled = false;
			this->btnPModyfikuj->FlatAppearance->BorderSize = 0;
			this->btnPModyfikuj->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPModyfikuj->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnPModyfikuj->ForeColor = System::Drawing::Color::White;
			this->btnPModyfikuj->Location = System::Drawing::Point(167, 512);
			this->btnPModyfikuj->Name = L"btnPModyfikuj";
			this->btnPModyfikuj->Size = System::Drawing::Size(103, 34);
			this->btnPModyfikuj->TabIndex = 6;
			this->btnPModyfikuj->Text = L"Modyfikuj";
			this->btnPModyfikuj->UseVisualStyleBackColor = false;
			this->btnPModyfikuj->Click += gcnew System::EventHandler(this, &Program::btnPModyfikuj_Click);
			// 
			// btnPDodaj
			// 
			this->btnPDodaj->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->btnPDodaj->FlatAppearance->BorderSize = 0;
			this->btnPDodaj->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPDodaj->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnPDodaj->ForeColor = System::Drawing::Color::White;
			this->btnPDodaj->Location = System::Drawing::Point(304, 512);
			this->btnPDodaj->Name = L"btnPDodaj";
			this->btnPDodaj->Size = System::Drawing::Size(100, 34);
			this->btnPDodaj->TabIndex = 5;
			this->btnPDodaj->Text = L"Dodaj";
			this->btnPDodaj->UseVisualStyleBackColor = false;
			this->btnPDodaj->Click += gcnew System::EventHandler(this, &Program::btnPDodaj_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->txtPLogin);
			this->groupBox2->Controls->Add(this->txtPNazwisko);
			this->groupBox2->Controls->Add(this->txtPImie);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->chbPPracownik);
			this->groupBox2->Location = System::Drawing::Point(13, 67);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(449, 169);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Edycja danych u¿ytkownika";
			// 
			// txtPLogin
			// 
			this->txtPLogin->Location = System::Drawing::Point(144, 113);
			this->txtPLogin->Name = L"txtPLogin";
			this->txtPLogin->Size = System::Drawing::Size(100, 26);
			this->txtPLogin->TabIndex = 6;
			// 
			// txtPNazwisko
			// 
			this->txtPNazwisko->Location = System::Drawing::Point(144, 81);
			this->txtPNazwisko->Name = L"txtPNazwisko";
			this->txtPNazwisko->Size = System::Drawing::Size(100, 26);
			this->txtPNazwisko->TabIndex = 5;
			// 
			// txtPImie
			// 
			this->txtPImie->Location = System::Drawing::Point(144, 49);
			this->txtPImie->Name = L"txtPImie";
			this->txtPImie->Size = System::Drawing::Size(100, 26);
			this->txtPImie->TabIndex = 4;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(22, 116);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(45, 18);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Login:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(22, 84);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(70, 18);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Nazwisko:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(22, 53);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(39, 18);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Imiê:";
			// 
			// chbPPracownik
			// 
			this->chbPPracownik->AutoSize = true;
			this->chbPPracownik->Location = System::Drawing::Point(324, 80);
			this->chbPPracownik->Name = L"chbPPracownik";
			this->chbPPracownik->Size = System::Drawing::Size(94, 22);
			this->chbPPracownik->TabIndex = 0;
			this->chbPPracownik->Text = L"Pracownik";
			this->chbPPracownik->UseVisualStyleBackColor = true;
			this->chbPPracownik->CheckedChanged += gcnew System::EventHandler(this, &Program::chbPPracownik_CheckedChanged);
			// 
			// btnPSzukaj
			// 
			this->btnPSzukaj->BackColor = System::Drawing::Color::DarkOrange;
			this->btnPSzukaj->FlatAppearance->BorderSize = 0;
			this->btnPSzukaj->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPSzukaj->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnPSzukaj->ForeColor = System::Drawing::Color::White;
			this->btnPSzukaj->Location = System::Drawing::Point(337, 18);
			this->btnPSzukaj->Name = L"btnPSzukaj";
			this->btnPSzukaj->Size = System::Drawing::Size(96, 31);
			this->btnPSzukaj->TabIndex = 3;
			this->btnPSzukaj->Text = L"Szukaj";
			this->btnPSzukaj->UseVisualStyleBackColor = false;
			this->btnPSzukaj->Click += gcnew System::EventHandler(this, &Program::btnPSzukaj_Click);
			// 
			// txtPSzukaj
			// 
			this->txtPSzukaj->Location = System::Drawing::Point(107, 21);
			this->txtPSzukaj->Name = L"txtPSzukaj";
			this->txtPSzukaj->Size = System::Drawing::Size(193, 26);
			this->txtPSzukaj->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 25);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(76, 18);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Pracownik:";
			// 
			// dgUzytkownicy
			// 
			this->dgUzytkownicy->AllowUserToAddRows = false;
			this->dgUzytkownicy->AllowUserToDeleteRows = false;
			this->dgUzytkownicy->AllowUserToOrderColumns = true;
			this->dgUzytkownicy->BackgroundColor = System::Drawing::Color::White;
			this->dgUzytkownicy->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgUzytkownicy->Location = System::Drawing::Point(475, 7);
			this->dgUzytkownicy->Name = L"dgUzytkownicy";
			this->dgUzytkownicy->ReadOnly = true;
			this->dgUzytkownicy->RowHeadersWidth = 51;
			this->dgUzytkownicy->RowTemplate->Height = 24;
			this->dgUzytkownicy->Size = System::Drawing::Size(574, 559);
			this->dgUzytkownicy->TabIndex = 0;
			this->dgUzytkownicy->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dgUzytkownicy_CellClick);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->gbUslugi);
			this->tabPage3->Controls->Add(this->dgUslugi);
			this->tabPage3->Controls->Add(this->button5);
			this->tabPage3->Controls->Add(this->txtUSzukaj);
			this->tabPage3->Controls->Add(this->label14);
			this->tabPage3->Location = System::Drawing::Point(4, 4);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1053, 570);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Us³ugi";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// gbUslugi
			// 
			this->gbUslugi->Controls->Add(this->btnUUsun);
			this->gbUslugi->Controls->Add(this->btnUModyfikuj);
			this->gbUslugi->Controls->Add(this->btnUDodaj);
			this->gbUslugi->Controls->Add(this->txtUOpis);
			this->gbUslugi->Controls->Add(this->txtUCzas);
			this->gbUslugi->Controls->Add(this->txtUCena);
			this->gbUslugi->Controls->Add(this->txtUNazwa);
			this->gbUslugi->Controls->Add(this->label18);
			this->gbUslugi->Controls->Add(this->label17);
			this->gbUslugi->Controls->Add(this->label16);
			this->gbUslugi->Controls->Add(this->label15);
			this->gbUslugi->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->gbUslugi->Location = System::Drawing::Point(6, 83);
			this->gbUslugi->Name = L"gbUslugi";
			this->gbUslugi->Size = System::Drawing::Size(502, 448);
			this->gbUslugi->TabIndex = 4;
			this->gbUslugi->TabStop = false;
			this->gbUslugi->Text = L"Zabiegi";
			// 
			// btnUUsun
			// 
			this->btnUUsun->BackColor = System::Drawing::Color::Crimson;
			this->btnUUsun->Enabled = false;
			this->btnUUsun->FlatAppearance->BorderSize = 0;
			this->btnUUsun->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUUsun->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnUUsun->ForeColor = System::Drawing::Color::White;
			this->btnUUsun->Location = System::Drawing::Point(26, 394);
			this->btnUUsun->Name = L"btnUUsun";
			this->btnUUsun->Size = System::Drawing::Size(99, 33);
			this->btnUUsun->TabIndex = 11;
			this->btnUUsun->Text = L"Usuñ";
			this->btnUUsun->UseVisualStyleBackColor = false;
			this->btnUUsun->Click += gcnew System::EventHandler(this, &Program::btnUUsun_Click);
			// 
			// btnUModyfikuj
			// 
			this->btnUModyfikuj->BackColor = System::Drawing::Color::MediumTurquoise;
			this->btnUModyfikuj->Enabled = false;
			this->btnUModyfikuj->FlatAppearance->BorderSize = 0;
			this->btnUModyfikuj->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUModyfikuj->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnUModyfikuj->ForeColor = System::Drawing::Color::White;
			this->btnUModyfikuj->Location = System::Drawing::Point(193, 394);
			this->btnUModyfikuj->Name = L"btnUModyfikuj";
			this->btnUModyfikuj->Size = System::Drawing::Size(99, 33);
			this->btnUModyfikuj->TabIndex = 10;
			this->btnUModyfikuj->Text = L"Modyfikuj";
			this->btnUModyfikuj->UseVisualStyleBackColor = false;
			this->btnUModyfikuj->Click += gcnew System::EventHandler(this, &Program::btnUModyfikuj_Click);
			// 
			// btnUDodaj
			// 
			this->btnUDodaj->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->btnUDodaj->FlatAppearance->BorderSize = 0;
			this->btnUDodaj->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUDodaj->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnUDodaj->ForeColor = System::Drawing::Color::White;
			this->btnUDodaj->Location = System::Drawing::Point(364, 394);
			this->btnUDodaj->Name = L"btnUDodaj";
			this->btnUDodaj->Size = System::Drawing::Size(99, 33);
			this->btnUDodaj->TabIndex = 9;
			this->btnUDodaj->Text = L"Dodaj";
			this->btnUDodaj->UseVisualStyleBackColor = false;
			this->btnUDodaj->Click += gcnew System::EventHandler(this, &Program::btnUDodaj_Click);
			// 
			// txtUOpis
			// 
			this->txtUOpis->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtUOpis->Location = System::Drawing::Point(26, 161);
			this->txtUOpis->Multiline = true;
			this->txtUOpis->Name = L"txtUOpis";
			this->txtUOpis->Size = System::Drawing::Size(438, 213);
			this->txtUOpis->TabIndex = 8;
			// 
			// txtUCzas
			// 
			this->txtUCzas->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtUCzas->Location = System::Drawing::Point(127, 96);
			this->txtUCzas->Name = L"txtUCzas";
			this->txtUCzas->Size = System::Drawing::Size(113, 29);
			this->txtUCzas->TabIndex = 7;
			// 
			// txtUCena
			// 
			this->txtUCena->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtUCena->Location = System::Drawing::Point(127, 65);
			this->txtUCena->Name = L"txtUCena";
			this->txtUCena->Size = System::Drawing::Size(113, 29);
			this->txtUCena->TabIndex = 6;
			// 
			// txtUNazwa
			// 
			this->txtUNazwa->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtUNazwa->Location = System::Drawing::Point(127, 35);
			this->txtUNazwa->Name = L"txtUNazwa";
			this->txtUNazwa->Size = System::Drawing::Size(216, 29);
			this->txtUNazwa->TabIndex = 5;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label18->Location = System::Drawing::Point(23, 132);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(50, 23);
			this->label18->TabIndex = 4;
			this->label18->Text = L"Opis:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label17->Location = System::Drawing::Point(23, 98);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(50, 23);
			this->label17->TabIndex = 3;
			this->label17->Text = L"Czas:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label16->Location = System::Drawing::Point(23, 67);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(53, 23);
			this->label16->TabIndex = 2;
			this->label16->Text = L"Cena:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label15->Location = System::Drawing::Point(23, 38);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(67, 23);
			this->label15->TabIndex = 1;
			this->label15->Text = L"Nazwa:";
			// 
			// dgUslugi
			// 
			this->dgUslugi->AllowUserToAddRows = false;
			this->dgUslugi->AllowUserToDeleteRows = false;
			this->dgUslugi->AllowUserToOrderColumns = true;
			this->dgUslugi->BackgroundColor = System::Drawing::Color::White;
			this->dgUslugi->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgUslugi->Location = System::Drawing::Point(553, 7);
			this->dgUslugi->Name = L"dgUslugi";
			this->dgUslugi->ReadOnly = true;
			this->dgUslugi->RowHeadersWidth = 51;
			this->dgUslugi->RowTemplate->Height = 24;
			this->dgUslugi->Size = System::Drawing::Size(448, 524);
			this->dgUslugi->TabIndex = 3;
			this->dgUslugi->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dgUslugi_CellClick);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::DarkOrange;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(371, 23);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(99, 30);
			this->button5->TabIndex = 2;
			this->button5->Text = L"Szukaj";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Program::button5_Click);
			// 
			// txtUSzukaj
			// 
			this->txtUSzukaj->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtUSzukaj->Location = System::Drawing::Point(100, 25);
			this->txtUSzukaj->Name = L"txtUSzukaj";
			this->txtUSzukaj->Size = System::Drawing::Size(249, 29);
			this->txtUSzukaj->TabIndex = 1;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label14->Location = System::Drawing::Point(29, 27);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(65, 23);
			this->label14->TabIndex = 0;
			this->label14->Text = L"Zabieg:";
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->txtPUNazwisko);
			this->tabPage4->Controls->Add(this->txtPUImie);
			this->tabPage4->Controls->Add(this->label24);
			this->tabPage4->Controls->Add(this->label23);
			this->tabPage4->Controls->Add(this->label22);
			this->tabPage4->Controls->Add(this->dgPUUslugiNowe);
			this->tabPage4->Controls->Add(this->label21);
			this->tabPage4->Controls->Add(this->dgPUUslugi);
			this->tabPage4->Controls->Add(this->label20);
			this->tabPage4->Controls->Add(this->dgPUPracownik);
			this->tabPage4->Controls->Add(this->btnPUSzukaj);
			this->tabPage4->Controls->Add(this->txtPUSzukaj);
			this->tabPage4->Controls->Add(this->label19);
			this->tabPage4->Location = System::Drawing::Point(4, 4);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(1053, 570);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Pracownik-Us³ugi";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// txtPUNazwisko
			// 
			this->txtPUNazwisko->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtPUNazwisko->Location = System::Drawing::Point(140, 155);
			this->txtPUNazwisko->Name = L"txtPUNazwisko";
			this->txtPUNazwisko->Size = System::Drawing::Size(148, 29);
			this->txtPUNazwisko->TabIndex = 12;
			// 
			// txtPUImie
			// 
			this->txtPUImie->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtPUImie->Location = System::Drawing::Point(140, 125);
			this->txtPUImie->Name = L"txtPUImie";
			this->txtPUImie->Size = System::Drawing::Size(148, 29);
			this->txtPUImie->TabIndex = 11;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label24->Location = System::Drawing::Point(38, 157);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(88, 23);
			this->label24->TabIndex = 10;
			this->label24->Text = L"Nazwisko:";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label23->Location = System::Drawing::Point(38, 127);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(49, 23);
			this->label23->TabIndex = 9;
			this->label23->Text = L"Imiê:";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label22->Location = System::Drawing::Point(15, 229);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(384, 23);
			this->label22->TabIndex = 8;
			this->label22->Text = L"Kliknij na us³ugê aby przypisaæ j¹ do pracownika:";
			// 
			// dgPUUslugiNowe
			// 
			this->dgPUUslugiNowe->AllowUserToAddRows = false;
			this->dgPUUslugiNowe->AllowUserToDeleteRows = false;
			this->dgPUUslugiNowe->AllowUserToOrderColumns = true;
			this->dgPUUslugiNowe->BackgroundColor = System::Drawing::Color::White;
			this->dgPUUslugiNowe->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgPUUslugiNowe->Location = System::Drawing::Point(18, 255);
			this->dgPUUslugiNowe->Name = L"dgPUUslugiNowe";
			this->dgPUUslugiNowe->ReadOnly = true;
			this->dgPUUslugiNowe->RowHeadersWidth = 51;
			this->dgPUUslugiNowe->RowTemplate->Height = 24;
			this->dgPUUslugiNowe->Size = System::Drawing::Size(389, 302);
			this->dgPUUslugiNowe->TabIndex = 7;
			this->dgPUUslugiNowe->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dgPUUslugiNowe_CellClick);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label21->Location = System::Drawing::Point(441, 287);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(313, 23);
			this->label21->TabIndex = 6;
			this->label21->Text = L"Wykonywane us³ugi (kliknij by usun¹æ):";
			// 
			// dgPUUslugi
			// 
			this->dgPUUslugi->AllowUserToAddRows = false;
			this->dgPUUslugi->AllowUserToDeleteRows = false;
			this->dgPUUslugi->AllowUserToOrderColumns = true;
			this->dgPUUslugi->BackgroundColor = System::Drawing::Color::White;
			this->dgPUUslugi->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgPUUslugi->Location = System::Drawing::Point(444, 313);
			this->dgPUUslugi->Name = L"dgPUUslugi";
			this->dgPUUslugi->ReadOnly = true;
			this->dgPUUslugi->RowHeadersWidth = 51;
			this->dgPUUslugi->RowTemplate->Height = 24;
			this->dgPUUslugi->Size = System::Drawing::Size(604, 244);
			this->dgPUUslugi->TabIndex = 5;
			this->dgPUUslugi->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dgPUUslugi_CellClick);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label20->Location = System::Drawing::Point(441, 13);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(104, 23);
			this->label20->TabIndex = 4;
			this->label20->Text = L"Pracownicy:";
			// 
			// dgPUPracownik
			// 
			this->dgPUPracownik->AllowUserToAddRows = false;
			this->dgPUPracownik->AllowUserToDeleteRows = false;
			this->dgPUPracownik->AllowUserToOrderColumns = true;
			this->dgPUPracownik->BackgroundColor = System::Drawing::Color::White;
			this->dgPUPracownik->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgPUPracownik->Location = System::Drawing::Point(444, 36);
			this->dgPUPracownik->Name = L"dgPUPracownik";
			this->dgPUPracownik->ReadOnly = true;
			this->dgPUPracownik->RowHeadersWidth = 51;
			this->dgPUPracownik->RowTemplate->Height = 24;
			this->dgPUPracownik->Size = System::Drawing::Size(604, 233);
			this->dgPUPracownik->TabIndex = 3;
			this->dgPUPracownik->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dgPUPracownik_CellClick);
			// 
			// btnPUSzukaj
			// 
			this->btnPUSzukaj->BackColor = System::Drawing::Color::DarkOrange;
			this->btnPUSzukaj->FlatAppearance->BorderSize = 0;
			this->btnPUSzukaj->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPUSzukaj->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnPUSzukaj->ForeColor = System::Drawing::Color::White;
			this->btnPUSzukaj->Location = System::Drawing::Point(325, 39);
			this->btnPUSzukaj->Name = L"btnPUSzukaj";
			this->btnPUSzukaj->Size = System::Drawing::Size(82, 31);
			this->btnPUSzukaj->TabIndex = 2;
			this->btnPUSzukaj->Text = L"Szukaj";
			this->btnPUSzukaj->UseVisualStyleBackColor = false;
			this->btnPUSzukaj->Click += gcnew System::EventHandler(this, &Program::btnPUSzukaj_Click);
			// 
			// txtPUSzukaj
			// 
			this->txtPUSzukaj->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtPUSzukaj->Location = System::Drawing::Point(140, 40);
			this->txtPUSzukaj->Name = L"txtPUSzukaj";
			this->txtPUSzukaj->Size = System::Drawing::Size(148, 29);
			this->txtPUSzukaj->TabIndex = 1;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label19->Location = System::Drawing::Point(38, 43);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(96, 23);
			this->label19->TabIndex = 0;
			this->label19->Text = L"Pracownik:";
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1053, 570);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Zmiana has³a";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btnHZmien);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->txtHNowe2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->txtHNowe1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->txtHStare);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->groupBox1->Location = System::Drawing::Point(343, 20);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(307, 257);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Zmiana has³a";
			// 
			// btnHZmien
			// 
			this->btnHZmien->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->btnHZmien->Enabled = false;
			this->btnHZmien->FlatAppearance->BorderSize = 0;
			this->btnHZmien->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnHZmien->ForeColor = System::Drawing::Color::White;
			this->btnHZmien->Location = System::Drawing::Point(108, 180);
			this->btnHZmien->Name = L"btnHZmien";
			this->btnHZmien->Size = System::Drawing::Size(87, 30);
			this->btnHZmien->TabIndex = 6;
			this->btnHZmien->Text = L"Zmieñ";
			this->btnHZmien->UseVisualStyleBackColor = false;
			this->btnHZmien->Click += gcnew System::EventHandler(this, &Program::btnHZmien_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(29, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(101, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Stare has³o:";
			// 
			// txtHNowe2
			// 
			this->txtHNowe2->Location = System::Drawing::Point(169, 127);
			this->txtHNowe2->Name = L"txtHNowe2";
			this->txtHNowe2->Size = System::Drawing::Size(114, 29);
			this->txtHNowe2->TabIndex = 5;
			this->txtHNowe2->TextChanged += gcnew System::EventHandler(this, &Program::txtHNowe2_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(29, 100);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(106, 23);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nowe has³o:";
			// 
			// txtHNowe1
			// 
			this->txtHNowe1->Location = System::Drawing::Point(169, 97);
			this->txtHNowe1->Name = L"txtHNowe1";
			this->txtHNowe1->Size = System::Drawing::Size(114, 29);
			this->txtHNowe1->TabIndex = 4;
			this->txtHNowe1->TextChanged += gcnew System::EventHandler(this, &Program::txtHNowe1_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(29, 131);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(126, 23);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Powtórz has³o:";
			// 
			// txtHStare
			// 
			this->txtHStare->Location = System::Drawing::Point(169, 42);
			this->txtHStare->Name = L"txtHStare";
			this->txtHStare->Size = System::Drawing::Size(114, 29);
			this->txtHStare->TabIndex = 3;
			this->txtHStare->TextChanged += gcnew System::EventHandler(this, &Program::txtHStare_TextChanged);
			// 
			// toolStrip1
			// 
			this->toolStrip1->BackColor = System::Drawing::Color::LightSeaGreen;
			this->toolStrip1->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->toolStrip1->GripStyle = System::Windows::Forms::ToolStripGripStyle::Hidden;
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(50, 50);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->toolStripButton4,
					this->toolStripButton2, this->toolStripButton3, this->toolStripButton5, this->toolStripButton6, this->toolStripButton1
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->MinimumSize = System::Drawing::Size(0, 85);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1083, 85);
			this->toolStrip1->TabIndex = 1;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripButton4
			// 
			this->toolStripButton4->ForeColor = System::Drawing::Color::White;
			this->toolStripButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton4.Image")));
			this->toolStripButton4->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton4->Margin = System::Windows::Forms::Padding(20, 1, 0, 2);
			this->toolStripButton4->Name = L"toolStripButton4";
			this->toolStripButton4->Size = System::Drawing::Size(106, 82);
			this->toolStripButton4->Text = L"Rezerwacje";
			this->toolStripButton4->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->toolStripButton4->Click += gcnew System::EventHandler(this, &Program::toolStripButton4_Click);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->toolStripButton2->ForeColor = System::Drawing::Color::White;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Margin = System::Windows::Forms::Padding(20, 1, 0, 2);
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(67, 82);
			this->toolStripButton2->Text = L"Klienci";
			this->toolStripButton2->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &Program::toolStripButton2_Click);
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->toolStripButton3->ForeColor = System::Drawing::Color::White;
			this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton3.Image")));
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Margin = System::Windows::Forms::Padding(20, 1, 0, 2);
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(104, 82);
			this->toolStripButton3->Text = L"Pracownicy";
			this->toolStripButton3->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->toolStripButton3->Click += gcnew System::EventHandler(this, &Program::toolStripButton3_Click);
			// 
			// toolStripButton5
			// 
			this->toolStripButton5->ForeColor = System::Drawing::Color::White;
			this->toolStripButton5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton5.Image")));
			this->toolStripButton5->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton5->Margin = System::Windows::Forms::Padding(20, 1, 0, 2);
			this->toolStripButton5->Name = L"toolStripButton5";
			this->toolStripButton5->Size = System::Drawing::Size(63, 82);
			this->toolStripButton5->Text = L"Us³ugi";
			this->toolStripButton5->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->toolStripButton5->Click += gcnew System::EventHandler(this, &Program::toolStripButton5_Click);
			// 
			// toolStripButton6
			// 
			this->toolStripButton6->ForeColor = System::Drawing::Color::White;
			this->toolStripButton6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton6.Image")));
			this->toolStripButton6->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton6->Margin = System::Windows::Forms::Padding(20, 1, 0, 2);
			this->toolStripButton6->Name = L"toolStripButton6";
			this->toolStripButton6->Size = System::Drawing::Size(57, 82);
			this->toolStripButton6->Text = L"Praca";
			this->toolStripButton6->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->toolStripButton6->Click += gcnew System::EventHandler(this, &Program::toolStripButton6_Click);
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->toolStripButton1->ForeColor = System::Drawing::Color::White;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Margin = System::Windows::Forms::Padding(20, 1, 0, 2);
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(103, 82);
			this->toolStripButton1->Text = L"Ustawienia";
			this->toolStripButton1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &Program::toolStripButton1_Click);
			// 
			// Program
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSeaGreen;
			this->ClientSize = System::Drawing::Size(1083, 706);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->tabControl1);
			this->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Program";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"System rezerwacji";
			this->Load += gcnew System::EventHandler(this, &Program::Program_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgRPracownik))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgRKlienci))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgRUslugi))->EndInit();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->gbKlienci->ResumeLayout(false);
			this->gbKlienci->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgKlienci))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->gbPGodziny->ResumeLayout(false);
			this->gbPGodziny->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgUzytkownicy))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->gbUslugi->ResumeLayout(false);
			this->gbUslugi->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgUslugi))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgPUUslugiNowe))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgPUUslugi))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgPUPracownik))->EndInit();
			this->tabPage1->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	// deklaracja zmiennych
		int id_rekordu; // wybranie rekordu, na którym pracujê - zmienna dla wszystkich siatek
		int pracownik_typ;
		int id_usluga; // wybranie uslugi
		int id_klient; // wybranie klienta
		int id_pracownik; // wybranie pracownika
		int id_wizyty; // wybranie wizyty
		String^ data_w; // wybranie daty
		String^ godzina_w; // wybranie godziny
		String^ klient = "";
		String^ usluga = "";

	private: System::Void Program_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: void btnHZmien_pokaz() {
		// sprawdzenie wype³nienia pól formularza zmiany has³¹
		if (txtHStare->Text != "" && txtHNowe1->Text != "" && txtHNowe1->Text == txtHNowe2->Text) {
			btnHZmien->Enabled = true;
		}
		else {
			btnHZmien->Enabled = false;
		}
	}

	private: System::Void txtHStare_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		btnHZmien_pokaz();


	}
	private: System::Void txtHNowe1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		btnHZmien_pokaz();

	}

	private: System::Void txtHNowe2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		btnHZmien_pokaz();

	}
	private: System::Void btnHZmien_Click(System::Object^ sender, System::EventArgs^ e) {
		// zmiana has³a
		MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
		MySqlCommand^ zapytanie = gcnew MySqlCommand("UPDATE uzytkownik SET haslo = '" + txtHNowe1->Text + "' WHERE uzytkownik_id = " + id_uzytkownika + " AND haslo = '" + txtHStare->Text +"';", laczBaze);
		try {
			laczBaze->Open();
			if (zapytanie->ExecuteNonQuery()) {
				MessageBox::Show("Zmieni³em has³o");
			}
			else {
				MessageBox::Show("Podane has³o jest niepoprawne");
			}
			laczBaze->Close();
		}
		catch(Exception^ komunikat){
			MessageBox::Show(komunikat->Message);
		}
	}
private: Void pokaz_siatke() {
	MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
	MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT uzytkownik_id, imie, nazwisko, uzytkownik_nazwa AS login, pracownik FROM uzytkownik ORDER BY nazwisko;", laczBaze);
	try {
		MySqlDataAdapter^ moja = gcnew MySqlDataAdapter();
		moja->SelectCommand = zapytanie;
		DataTable^ tabela = gcnew DataTable();
		moja->Fill(tabela);

		BindingSource^ zrodlo = gcnew BindingSource();
		zrodlo->DataSource = tabela;
		dgUzytkownicy->DataSource = zrodlo;
		laczBaze->Close();
	}
	catch (Exception^ komunikat) {
		MessageBox::Show(komunikat->Message);
	}
}

private: void szukaj_pracownikow(System::Windows::Forms::TextBox^ pole, System::Windows::Forms::DataGridView^ siatka) {
	MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
	MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT uzytkownik_id, imie, nazwisko, uzytkownik_nazwa AS login, pracownik FROM uzytkownik WHERE CONCAT(imie, ' ', nazwisko, uzytkownik_nazwa) LIKE '%" + pole->Text + "%' ORDER BY nazwisko;", laczBaze);
	try {
		MySqlDataAdapter^ moja = gcnew MySqlDataAdapter();
		moja->SelectCommand = zapytanie;
		DataTable^ tabela = gcnew DataTable();
		moja->Fill(tabela);

		BindingSource^ zrodlo = gcnew BindingSource();
		zrodlo->DataSource = tabela;
		siatka->DataSource = zrodlo;
		laczBaze->Close();
	}
	catch (Exception^ komunikat) {
		MessageBox::Show(komunikat->Message);
	}
}

private: System::Void btnPSzukaj_Click(System::Object^ sender, System::EventArgs^ e) {
	szukaj_pracownikow(txtPSzukaj, dgUzytkownicy);
	dgUzytkownicy->Columns[0]->Visible = false;
}
private: System::Void dgUzytkownicy_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (e->RowIndex >= 0) {
		id_rekordu = Convert::ToInt32(dgUzytkownicy->Rows[e->RowIndex]->Cells[0]->Value);
		txtPImie->Text = dgUzytkownicy->Rows[e->RowIndex]->Cells["imie"]->Value->ToString();
		txtPNazwisko->Text = dgUzytkownicy->Rows[e->RowIndex]->Cells["nazwisko"]->Value->ToString();
		txtPLogin->Text = dgUzytkownicy->Rows[e->RowIndex]->Cells["login"]->Value->ToString();
		chbPPracownik->Checked = Convert::ToBoolean(dgUzytkownicy->Rows[e->RowIndex]->Cells["pracownik"]->Value);
	
		btnPModyfikuj->Enabled = true;
		btnPUsun->Enabled = true;

		if (chbPPracownik->Checked) {
			MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
			MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT * FROM godziny WHERE uzytkownik_id="+id_rekordu+";", laczBaze);
			MySqlDataReader^ dane;
			try {
				laczBaze->Open();
				dane = zapytanie->ExecuteReader();
				while (dane->Read()) {
					txtP1p->Text = dane->GetString("pn_od");
					txtP1k->Text = dane->GetString("pn_do");
					txtP2p->Text = dane->GetString("wt_od");
					txtP2k->Text = dane->GetString("wt_do");
					txtP3p->Text = dane->GetString("sr_od");
					txtP3k->Text = dane->GetString("sr_do");
					txtP4p->Text = dane->GetString("czw_od");
					txtP4k->Text = dane->GetString("czw_do");
					txtP5p->Text = dane->GetString("pt_od");
					txtP5k->Text = dane->GetString("pt_do");
					txtP6p->Text = dane->GetString("sb_od");
					txtP6k->Text = dane->GetString("sb_do");
				}
				laczBaze->Close();
			}
			catch (Exception^ komunikat) {
				MessageBox::Show(komunikat->Message);
			}
		}
	}
}

private: System::Void btnPDodaj_Click(System::Object^ sender, System::EventArgs^ e) {
	// Dodanie u¿ytkowników do bazy za pomoc¹ transakcji
	if (txtPImie->Text->Length < 3 || txtPNazwisko->Text->Length < 4 || txtPLogin->Text->Length < 5) {
		MessageBox::Show("Uzupe³nij dane!");
	}
	else {
		uzytkownik_typ();

		MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
		IDbCommand^ polecenie = laczBaze->CreateCommand();
		IDbTransaction^ transakcja;
		laczBaze->Open();
		transakcja = laczBaze->MySqlConnection::BeginTransaction(IsolationLevel::ReadCommitted);
		
		polecenie->Connection = laczBaze;

		polecenie->Transaction = transakcja;

		try {
			polecenie->CommandText = "INSERT INTO uzytkownik SET imie='"+txtPImie->Text+"', nazwisko='"+txtPNazwisko->Text+"', uzytkownik_nazwa='"+txtPLogin->Text+"', haslo='"+txtPLogin->Text+"', pracownik="+pracownik_typ+";";
			polecenie->ExecuteNonQuery();

			if (chbPPracownik->Checked) {
				polecenie->CommandText = "INSERT INTO godziny SET uzytkownik_id=last_insert_id(), pn_od='" + txtP1p->Text + "', pn_do='" + txtP1k->Text + "', wt_od='" + txtP2p->Text + "', wt_do='" + txtP2k->Text + "', sr_od='" + txtP3p->Text + "', sr_do='" + txtP3k->Text + "', czw_od='" + txtP4p->Text + "', czw_do='" + txtP4k->Text + "', pt_od='" + txtP5p->Text + "', pt_do='" + txtP5k->Text + "', sb_od='" + txtP6p->Text + "', sb_do='" + txtP6k->Text + "' ;";
				polecenie->ExecuteNonQuery();
			}
			transakcja->Commit();
			MessageBox::Show("U¿ytkownik zosta³ dodany do bazy danych");
		}
		catch (Exception^ komunikat) {
			MessageBox::Show(komunikat->Message);
			transakcja->Rollback();
		}
		laczBaze->Close();
	}
	pokaz_siatke();
}

private: Void uzytkownik_typ() {
	if (chbPPracownik->Checked) {
		pracownik_typ = 1;
	}
	else {
		pracownik_typ = 0;
	}
}
private: System::Void btnPModyfikuj_Click(System::Object^ sender, System::EventArgs^ e) {
	// modyfikacja danych u¿ytkownika

	if (txtPImie->Text->Length < 3 || txtPNazwisko->Text->Length < 4 || txtPLogin->Text->Length < 5) {
		MessageBox::Show("Uzupe³nij dane!");
	}
	else {
		uzytkownik_typ();
		MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
		IDbCommand^ polecenie = laczBaze->CreateCommand();
		IDbTransaction^ transakcja;
		laczBaze->Open();
		transakcja = laczBaze->MySqlConnection::BeginTransaction(IsolationLevel::ReadCommitted);
		polecenie->Connection = laczBaze;
		polecenie->Transaction = transakcja;

		try {
			polecenie->CommandText = "SELECT * FROM godziny WHERE uzytkownik_id=" + id_rekordu + " ;";
			//Trzeba zamkn¹æ Readera w odpowiednim miejscu
			IDataReader^ wynik = polecenie->ExecuteReader();
			if (wynik->Read() && chbPPracownik->Checked == true) {
				wynik->Close();
				polecenie->CommandText = "UPDATE godziny SET pn_od='" + txtP1p->Text + "', pn_do='" + txtP1k->Text + "', wt_od='" + txtP2p->Text + "', wt_do='" + txtP2k->Text + "', sr_od='" + txtP3p->Text + "', sr_do='" + txtP3k->Text + "', czw_od='" + txtP4p->Text + "', czw_do='" + txtP4k->Text + "', pt_od='" + txtP5p->Text + "', pt_do='" + txtP5k->Text + "', sb_od='" + txtP6p->Text + "', sb_do='" + txtP6k->Text + "' WHERE uzytkownik_id="+id_rekordu+"; ";
				polecenie->ExecuteNonQuery();
			}
			else if(chbPPracownik->Checked){
				wynik->Close();
				polecenie->CommandText = "INSERT INTO godziny SET uzytkownik_id="+id_rekordu+", pn_od='" + txtP1p->Text + "', pn_do='" + txtP1k->Text + "', wt_od='" + txtP2p->Text + "', wt_do='" + txtP2k->Text + "', sr_od='" + txtP3p->Text + "', sr_do='" + txtP3k->Text + "', czw_od='" + txtP4p->Text + "', czw_do='" + txtP4k->Text + "', pt_od='" + txtP5p->Text + "', pt_do='" + txtP5k->Text + "', sb_od='" + txtP6p->Text + "', sb_do='" + txtP6k->Text + "' ;";
				polecenie->ExecuteNonQuery();
			}
			wynik->Close();
			polecenie->CommandText = "UPDATE uzytkownik SET imie='" + txtPImie->Text + "', nazwisko='" + txtPNazwisko->Text + "', uzytkownik_nazwa='" + txtPLogin->Text + "', pracownik=" + pracownik_typ + " WHERE uzytkownik_id = " + id_rekordu + ";";
			polecenie->ExecuteNonQuery();
			transakcja->Commit();
			MessageBox::Show("Dane u¿ytkownika zosta³y pomyœlnie zmodyfikowane");
		}
		catch (Exception^ komunikat) {
			MessageBox::Show(komunikat->Message);
			transakcja->Rollback();
		}
		laczBaze->Close();
	}

	pokaz_siatke();
}

private: Void wyczysc(Control^ zbior) {
	for each (Control^ element in zbior->Controls)
	{
		if (element->GetType() == TextBox::typeid || element->GetType() == MaskedTextBox::typeid) {
			element->Text = "";
		}
	}
}

private: System::Void btnPUsun_Click(System::Object^ sender, System::EventArgs^ e) {
	// usuniêcie u¿ytkownika

	if (id_rekordu == 1) {
		MessageBox::Show("Nie mo¿na usun¹æ u¿ytkownika Admin");
	}
	else {
		uzytkownik_typ();
		MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
		IDbCommand^ polecenie = laczBaze->CreateCommand();
		IDbTransaction^ transakcja;
		laczBaze->Open();
		transakcja = laczBaze->MySqlConnection::BeginTransaction(IsolationLevel::ReadCommitted);
		polecenie->Connection = laczBaze;
		polecenie->Transaction = transakcja;
		try {
			if (MessageBox::Show("Czy usun¹æ wybranego u¿ytkownika?", "Uwaga!!!", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				polecenie->CommandText = "DELETE FROM wizyty WHERE uzytkownik_id = " + id_rekordu + ";";
				polecenie->ExecuteNonQuery();
				polecenie->CommandText = "DELETE FROM uzytkownik_usluga WHERE uzytkownik_id = " + id_rekordu + ";";
				polecenie->ExecuteNonQuery();
				polecenie->CommandText = "DELETE FROM godziny WHERE uzytkownik_id = " + id_rekordu + ";";
				polecenie->ExecuteNonQuery();
				polecenie->CommandText = "DELETE FROM uzytkownik WHERE uzytkownik_id = " + id_rekordu + ";";
				polecenie->ExecuteNonQuery();
				transakcja->Commit();
				MessageBox::Show("U¿ytkownik zosta³ usuniêty");
			}
		}
		catch (Exception^ komunikat) {
			MessageBox::Show(komunikat->Message);
			transakcja->Rollback();
		}
		laczBaze->Close();
	}

	wyczysc(groupBox2);

	/*txtPImie->Text = "";
	txtPNazwisko->Text = "";
	txtPLogin->Text = "";
	chbPPracownik->Checked = false;*/

	pokaz_siatke();
}



private: System::Void chbPPracownik_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (chbPPracownik->Checked) {
		gbPGodziny->Visible = true;
	}
	else {
		gbPGodziny->Visible = false;
	}
	wyczysc(gbPGodziny);
}

private: Void czas_pracy(int czasStart) {
	array<TextBox^>^ czas_start = { txtP1p, txtP2p, txtP3p, txtP4p, txtP5p, txtP6p };
	array<TextBox^>^ czas_stop = { txtP1k, txtP2k, txtP3k, txtP4k, txtP5k, txtP6k };
	for (int i = 0; i <= 5; i++) {
		czas_start[i]->Text = czasStart + ":00";
		czas_stop[i]->Text = czasStart + 8 + ":00";
	}
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	czas_pracy(7);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	czas_pracy(8);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	czas_pracy(9);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	czas_pracy(10);
}

private: void pokaz_uslugi(System::Windows::Forms::TextBox^ pole, System::Windows::Forms::DataGridView^ siatka) {
	MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
	MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT * FROM uslugi WHERE nazwa LIKE '%" + pole->Text + "%' ORDER BY nazwa;", laczBaze);
	try {
		MySqlDataAdapter^ moja = gcnew MySqlDataAdapter();
		moja->SelectCommand = zapytanie;
		DataTable^ tabela = gcnew DataTable();
		moja->Fill(tabela);

		BindingSource^ zrodlo = gcnew BindingSource();
		zrodlo->DataSource = tabela;
		siatka->DataSource = zrodlo;
		laczBaze->Close();
	}
	catch (Exception^ komunikat) {
		MessageBox::Show(komunikat->Message);
	}

	siatka->Columns[0]->Visible = false;
}

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	pokaz_uslugi(txtUSzukaj, dgUslugi);
}
private: System::Void btnUDodaj_Click(System::Object^ sender, System::EventArgs^ e) {
	//dodanie uslug do bazy
	if (txtUNazwa->Text->Length < 3 || txtUCena->Text->Length < 1 || txtUCzas->Text->Length < 4) {
		MessageBox::Show("Uzupe³nij dane!");
	}
	else {
		uzytkownik_typ();

		MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
		IDbCommand^ polecenie = laczBaze->CreateCommand();
		IDbTransaction^ transakcja;
		laczBaze->Open();
		transakcja = laczBaze->MySqlConnection::BeginTransaction(IsolationLevel::ReadCommitted);
		polecenie->Connection = laczBaze;
		polecenie->Transaction = transakcja;

		try {
			String^ cena = txtUCena->Text->Replace(",", ".");
			polecenie->CommandText = "INSERT INTO uslugi SET nazwa = '"+txtUNazwa->Text+"', cena = '"+cena+"', czas = '"+txtUCzas->Text+"', opis = '"+txtUOpis->Text+"'; ";
			polecenie->ExecuteNonQuery();
			transakcja->Commit();
			MessageBox::Show("Us³uga zosta³a dodana do bazy danych");
		}
		catch (Exception^ komunikat) {
			MessageBox::Show(komunikat->Message);
			transakcja->Rollback();
		}
		laczBaze->Close();
	}
	pokaz_uslugi(txtUSzukaj, dgUslugi);
}
private: System::Void dgUslugi_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	//Wybranie us³ugi

	if (e->RowIndex >= 0) {
		id_rekordu = Convert::ToInt32(dgUslugi->Rows[e->RowIndex]->Cells[0]->Value);
		txtUNazwa->Text = dgUslugi->Rows[e->RowIndex]->Cells["nazwa"]->Value->ToString();
		txtUCena->Text = dgUslugi->Rows[e->RowIndex]->Cells["cena"]->Value->ToString();
		txtUCzas->Text = dgUslugi->Rows[e->RowIndex]->Cells["czas"]->Value->ToString();
		txtUOpis->Text = dgUslugi->Rows[e->RowIndex]->Cells["opis"]->Value->ToString();
		this->btnUModyfikuj->Enabled = true;
		this->btnUUsun->Enabled = true;
	}

}
private: System::Void btnUModyfikuj_Click(System::Object^ sender, System::EventArgs^ e) {
	// modyfikacja informacji o us³udze

	if (txtUNazwa->Text->Length < 3 || txtUCena->Text->Length < 1 || txtUCzas->Text->Length < 4) {
		MessageBox::Show("Uzupe³nij dane!");
	}
	else {
		uzytkownik_typ();
		MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
		IDbCommand^ polecenie = laczBaze->CreateCommand();
		IDbTransaction^ transakcja;
		laczBaze->Open();
		transakcja = laczBaze->MySqlConnection::BeginTransaction(IsolationLevel::ReadCommitted);
		polecenie->Connection = laczBaze;
		polecenie->Transaction = transakcja;

		try {
			String^ cena = txtUCena->Text->Replace(",", ".");
			polecenie->CommandText = "UPDATE uslugi SET nazwa ='"+txtUNazwa->Text+"', cena='"+cena+"', czas='"+txtUCzas->Text+"', opis='"+txtUOpis->Text+"' WHERE uslugi_id=" + id_rekordu + " ;";
			polecenie->ExecuteNonQuery();
			transakcja->Commit();
			MessageBox::Show("Informacje o us³udze zosta³y pomyœlnie zmodyfikowane");
		}
		catch (Exception^ komunikat) {
			MessageBox::Show(komunikat->Message);
			transakcja->Rollback();
		}
		laczBaze->Close();
	}
	pokaz_uslugi(txtUSzukaj, dgUslugi);
}
private: System::Void btnUUsun_Click(System::Object^ sender, System::EventArgs^ e) {
	// usuniêcie us³ugi
	
		uzytkownik_typ();
		MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
		IDbCommand^ polecenie = laczBaze->CreateCommand();
		IDbTransaction^ transakcja;
		laczBaze->Open();
		transakcja = laczBaze->MySqlConnection::BeginTransaction(IsolationLevel::ReadCommitted);
		polecenie->Connection = laczBaze;
		polecenie->Transaction = transakcja;
		try {
			if (MessageBox::Show("Czy usun¹æ wybran¹ us³ugê?", "Uwaga!!!", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				polecenie->CommandText = "DELETE FROM wizyty WHERE uslugi_id = " + id_rekordu + ";";
				polecenie->ExecuteNonQuery();
				polecenie->CommandText = "DELETE FROM uzytkownik_usluga WHERE uslugi_id = " + id_rekordu + ";";
				polecenie->ExecuteNonQuery();
				polecenie->CommandText = "DELETE FROM uslugi WHERE uslugi_id = " + id_rekordu + ";";
				polecenie->ExecuteNonQuery();
				transakcja->Commit();
				MessageBox::Show("Us³uga zosta³a usuniêta");
			}
		}
		catch (Exception^ komunikat) {
			MessageBox::Show(komunikat->Message);
			transakcja->Rollback();
		}
		laczBaze->Close();
		pokaz_uslugi(txtUSzukaj, dgUslugi);
		wyczysc(gbUslugi);
}


private: System::Void btnPUSzukaj_Click(System::Object^ sender, System::EventArgs^ e) {
	szukaj_pracownikow(txtPUSzukaj, dgPUPracownik);
	dgPUPracownik->Columns[0]->Visible = false;
}

private: void pokaz_uslugi() {
	MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
	MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT uslugi.uslugi_id, uslugi.nazwa, uslugi.cena, uslugi.czas FROM uslugi, uzytkownik_usluga WHERE uslugi.uslugi_id = uzytkownik_usluga.uslugi_id AND uzytkownik_usluga.uzytkownik_id = " + id_rekordu + " ORDER BY nazwa;", laczBaze);
	try {
		MySqlDataAdapter^ moja = gcnew MySqlDataAdapter();
		moja->SelectCommand = zapytanie;
		DataTable^ tabela = gcnew DataTable();
		moja->Fill(tabela);

		BindingSource^ zrodlo = gcnew BindingSource();
		zrodlo->DataSource = tabela;
		dgPUUslugi->DataSource = zrodlo;
		laczBaze->Close();
	}
	catch (Exception^ komunikat) {
		MessageBox::Show(komunikat->Message);
	}
	dgPUUslugi->Columns[0]->Visible = false;
}

private: System::Void dgPUPracownik_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	//Wyszukanie us³ug które wykonuje pracownik
	if (e->RowIndex >= 0) {
		id_rekordu = Convert::ToInt32(dgPUPracownik->Rows[e->RowIndex]->Cells[0]->Value);
		txtPUImie->Text = dgPUPracownik->Rows[e->RowIndex]->Cells["imie"]->Value->ToString();
		txtPUNazwisko->Text = dgPUPracownik->Rows[e->RowIndex]->Cells["nazwisko"]->Value->ToString();

		pokaz_uslugi();
		MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
		MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT * FROM uslugi ORDER BY nazwa;", laczBaze);
		try {
			MySqlDataAdapter^ moja = gcnew MySqlDataAdapter();
			moja->SelectCommand = zapytanie;
			DataTable^ tabela = gcnew DataTable();
			moja->Fill(tabela);

			BindingSource^ zrodlo = gcnew BindingSource();
			zrodlo->DataSource = tabela;
			dgPUUslugiNowe->DataSource = zrodlo;
			laczBaze->Close();
			dgPUUslugiNowe->Columns[0]->Visible = false;
		}
		catch (Exception^ komunikat) {
			MessageBox::Show(komunikat->Message);
		}

	}
}
private: System::Void dgPUUslugiNowe_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	//Dodanie nowej us³ugi do us³ug wykonywanych przez pracownika
	if (e->RowIndex >= 0) {
		id_usluga = Convert::ToInt32(dgPUUslugiNowe->Rows[e->RowIndex]->Cells[0]->Value);
		
		if (MessageBox::Show("Czy chcesz dodaæ now¹ us³ugê pracownikowi?", "Uwaga!", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {

			MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
			IDbCommand^ polecenie = laczBaze->CreateCommand();
			IDbTransaction^ transakcja;
			laczBaze->Open();
			transakcja = laczBaze->MySqlConnection::BeginTransaction(IsolationLevel::ReadCommitted);
			polecenie->Connection = laczBaze;
			polecenie->Transaction = transakcja;

			try {
				polecenie->CommandText = "INSERT INTO uzytkownik_usluga SET uzytkownik_id = '" + id_rekordu + "', uslugi_id = '" + id_usluga + "'; ";
				polecenie->ExecuteNonQuery();
				transakcja->Commit();
				MessageBox::Show("Us³uga zosta³a dodana do us³ug oferowanych przez pracownika");
			}
			catch (Exception^ komunikat) {
				MessageBox::Show(komunikat->Message);
				transakcja->Rollback();
			}
			laczBaze->Close();
			pokaz_uslugi();
		}
	}
}

private: System::Void dgPUUslugi_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	//Usuniêcie us³ugi z us³ug wykonywanych przez pracownika
	if (e->RowIndex >= 0) {
		id_usluga = Convert::ToInt32(dgPUUslugi->Rows[e->RowIndex]->Cells[0]->Value);

		if (MessageBox::Show("Czy chcesz usun¹æ us³ugê pracownikowi?", "Uwaga!", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {

			MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
			IDbCommand^ polecenie = laczBaze->CreateCommand();
			IDbTransaction^ transakcja;
			laczBaze->Open();
			transakcja = laczBaze->MySqlConnection::BeginTransaction(IsolationLevel::ReadCommitted);
			polecenie->Connection = laczBaze;
			polecenie->Transaction = transakcja;

			try {
				polecenie->CommandText = "DELETE FROM uzytkownik_usluga WHERE uzytkownik_id = " + id_rekordu + " AND uslugi_id = " + id_usluga + "; ";
				polecenie->ExecuteNonQuery();
				transakcja->Commit();
				MessageBox::Show("Us³uga zosta³a usuniêta z us³ug pracownika");
			}
			catch (Exception^ komunikat) {
				MessageBox::Show(komunikat->Message);
				transakcja->Rollback();
			}
			laczBaze->Close();
			pokaz_uslugi();
		}
	}

}

private: void szukaj_klientow(System::Windows::Forms::TextBox^ pole, System::Windows::Forms::DataGridView^ siatka) {
	MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
	MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT * FROM klienci WHERE CONCAT(imie, ' ', nazwisko, ' ', ' ', miejscowosc) LIKE '%" + pole->Text + "%' ORDER BY nazwisko;", laczBaze);
	try {
		MySqlDataAdapter^ moja = gcnew MySqlDataAdapter();
		moja->SelectCommand = zapytanie;
		DataTable^ tabela = gcnew DataTable();
		moja->Fill(tabela);

		BindingSource^ zrodlo = gcnew BindingSource();
		zrodlo->DataSource = tabela;
		siatka->DataSource = zrodlo;
		laczBaze->Close();
	}
	catch (Exception^ komunikat) {
		MessageBox::Show(komunikat->Message);
	}
}

private: System::Void btnKSzukaj_Click(System::Object^ sender, System::EventArgs^ e) {
	szukaj_klientow(txtKSzukaj, dgKlienci);
	dgKlienci->Columns[0]->Visible = false;
	dgKlienci->Columns["modyfikacja"]->Visible = false;
}
private: System::Void btnKDodaj_Click(System::Object^ sender, System::EventArgs^ e) {
	// Dodanie klienta do bazy za pomoc¹ transakcji
	if (txtKImie->Text->Length < 3 || txtKNazwisko->Text->Length < 4) {
		MessageBox::Show("Uzupe³nij dane!");
	}
	else {
		MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
		IDbCommand^ polecenie = laczBaze->CreateCommand();
		IDbTransaction^ transakcja;
		laczBaze->Open();
		transakcja = laczBaze->MySqlConnection::BeginTransaction(IsolationLevel::ReadCommitted);

		polecenie->Connection = laczBaze;

		polecenie->Transaction = transakcja;

		try {
			polecenie->CommandText = "INSERT INTO klienci SET imie='" + txtKImie->Text + "', nazwisko='" + txtKNazwisko->Text + "', email = '"+txtKEmail->Text+"', telefon = '"+txtKTelefon->Text+"', ulica = '"+txtKUlica->Text+"', numer = '"+txtKNumer->Text+"', miejscowosc = '"+txtKMiejscowosc->Text+"', poczta = '"+txtKKod->Text+"';";
			polecenie->ExecuteNonQuery();

			transakcja->Commit();
			MessageBox::Show("Klient: " + txtKImie->Text + " " + txtKNazwisko->Text + " zosta³ dodany do bazy danych");
		}
		catch (Exception^ komunikat) {
			MessageBox::Show(komunikat->Message);
			transakcja->Rollback();
		}
		laczBaze->Close();
	}
	szukaj_klientow(txtKSzukaj, dgKlienci);
}
private: System::Void dgKlienci_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	// Wybór klienta
	if (e->RowIndex >= 0) {

		id_rekordu = Convert::ToInt32(dgKlienci->Rows[e->RowIndex]->Cells[0]->Value);
		txtKImie->Text = dgKlienci->Rows[e->RowIndex]->Cells["imie"]->Value->ToString();
		txtKNazwisko->Text = dgKlienci->Rows[e->RowIndex]->Cells["nazwisko"]->Value->ToString();
		txtKEmail->Text = dgKlienci->Rows[e->RowIndex]->Cells["email"]->Value->ToString();
		txtKTelefon->Text = dgKlienci->Rows[e->RowIndex]->Cells["telefon"]->Value->ToString();
		txtKUlica->Text = dgKlienci->Rows[e->RowIndex]->Cells["ulica"]->Value->ToString();
		txtKNumer->Text = dgKlienci->Rows[e->RowIndex]->Cells["numer"]->Value->ToString();
		txtKKod->Text = dgKlienci->Rows[e->RowIndex]->Cells["poczta"]->Value->ToString();
		txtKMiejscowosc->Text = dgKlienci->Rows[e->RowIndex]->Cells["miejscowosc"]->Value->ToString();

		btnKModyfikuj->Visible = true;
		btnKUsun->Visible = true;
	}
}
private: System::Void btnKModyfikuj_Click(System::Object^ sender, System::EventArgs^ e) {
	// Modyfikacja danych klienta
	if (txtKImie->Text->Length < 3 || txtKNazwisko->Text->Length < 4) {
		MessageBox::Show("Uzupe³nij dane!");
	}
	else {

		MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
		IDbCommand^ polecenie = laczBaze->CreateCommand();
		IDbTransaction^ transakcja;
		laczBaze->Open();
		transakcja = laczBaze->MySqlConnection::BeginTransaction(IsolationLevel::ReadCommitted);

		polecenie->Connection = laczBaze;

		polecenie->Transaction = transakcja;

		try {
			polecenie->CommandText = "UPDATE klienci SET imie='" + txtKImie->Text + "', nazwisko='" + txtKNazwisko->Text + "', email = '" + txtKEmail->Text + "', telefon = '" + txtKTelefon->Text + "', ulica = '" + txtKUlica->Text + "', numer = '" + txtKNumer->Text + "', miejscowosc = '" + txtKMiejscowosc->Text + "', poczta = '" + txtKKod->Text + "' WHERE klienci_id = " + id_rekordu + ";";
			polecenie->ExecuteNonQuery();

			transakcja->Commit();
			MessageBox::Show("Dane klienta: " + txtKImie->Text + " " + txtKNazwisko->Text + " zosta³y pomyœlnie zmodyfikowane");
		}
		catch (Exception^ komunikat) {
			MessageBox::Show(komunikat->Message);
			transakcja->Rollback();
		}
		laczBaze->Close();
	}
	szukaj_klientow(txtKSzukaj, dgKlienci);
}
private: System::Void btnKUsun_Click(System::Object^ sender, System::EventArgs^ e) {
	// usuniêcie klienta z bazy danych

		MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
		IDbCommand^ polecenie = laczBaze->CreateCommand();
		IDbTransaction^ transakcja;
		laczBaze->Open();
		transakcja = laczBaze->MySqlConnection::BeginTransaction(IsolationLevel::ReadCommitted);

		polecenie->Connection = laczBaze;

		polecenie->Transaction = transakcja;

		try {
			if (MessageBox::Show("Czy mam usun¹æ klienta: " + txtKImie->Text + " " + txtKNazwisko->Text + "?", "Ostrze¿enie!", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes) {
				polecenie->CommandText = "DELETE FROM wizyty WHERE klienci_id = " + id_rekordu + ";";
				polecenie->ExecuteNonQuery();
				polecenie->CommandText = "DELETE FROM klienci WHERE klienci_id = " + id_rekordu + ";";
				polecenie->ExecuteNonQuery();

				transakcja->Commit();
				MessageBox::Show("Dane klienta: " + txtKImie->Text + " " + txtKNazwisko->Text + " zosta³y usuniête");
			}
		}
		catch (Exception^ komunikat) {
			MessageBox::Show(komunikat->Message);
			transakcja->Rollback();
		}
		laczBaze->Close();
	
	szukaj_klientow(txtKSzukaj, dgKlienci);
	wyczysc(gbKlienci);
}


private: System::Void btnRSzukajU_Click(System::Object^ sender, System::EventArgs^ e) {
	pokaz_uslugi(txtRSzukajU, dgRUslugi);
}
private: System::Void btnRSzukajK_Click(System::Object^ sender, System::EventArgs^ e) {
	szukaj_klientow(txtRSzukajK, dgRKlienci);
	dgRKlienci->Columns[0]->Visible = false;
	dgRKlienci->Columns["modyfikacja"]->Visible = false;
}
private: System::Void btnRSzukajP_Click(System::Object^ sender, System::EventArgs^ e) {
	szukaj_pracownikow(txtRSzukajP, dgRPracownik);
	dgRPracownik->Columns[0]->Visible = false;
}
private: System::Void dgRUslugi_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	// Rezerwacja - wybranie us³ugi
	if (e->RowIndex >= 0) {
		id_usluga = Convert::ToInt32(dgRUslugi->Rows[e->RowIndex]->Cells["uslugi_id"]->Value);
		txtRUslugaW->Text = dgRUslugi->Rows[e->RowIndex]->Cells["nazwa"]->Value->ToString();
		
		// wyœwietlenie pracownikó wykonuj¹cych wybran¹ us³ugê
		MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
		MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT uzytkownik.uzytkownik_id, uzytkownik.imie, uzytkownik.nazwisko, uzytkownik_nazwa AS login, uzytkownik.pracownik FROM uzytkownik, uzytkownik_usluga WHERE uzytkownik.uzytkownik_id = uzytkownik_usluga.uzytkownik_id AND uzytkownik_usluga.uslugi_id = "+id_usluga+" AND uzytkownik.pracownik = 1 ORDER BY nazwisko;", laczBaze);
		try {
			MySqlDataAdapter^ moja = gcnew MySqlDataAdapter();
			moja->SelectCommand = zapytanie;
			DataTable^ tabela = gcnew DataTable();
			moja->Fill(tabela);

			BindingSource^ zrodlo = gcnew BindingSource();
			zrodlo->DataSource = tabela;
			dgRPracownik->DataSource = zrodlo;
			laczBaze->Close();
		}
		catch (Exception^ komunikat) {
			MessageBox::Show(komunikat->Message);
		}

		dgRPracownik->Columns[0]->Visible = false;
	}
}
private: System::Void dgRKlienci_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	// Rezerwacja - wybranie klienta
	if (e->RowIndex >= 0) {
		id_klient = Convert::ToInt32(dgRKlienci->Rows[e->RowIndex]->Cells["klienci_id"]->Value);
		txtRKlientW->Text = dgRKlienci->Rows[e->RowIndex]->Cells["imie"]->Value->ToString() + " " + dgRKlienci->Rows[e->RowIndex]->Cells["nazwisko"]->Value->ToString();
	}
}

private: void pokaz_terminy() {
	String^ czas;
	int licznik = 0;
	String^ praca_od;
	String^ praca_do;
	int g_start;
	int g_stop;

	DateTime^ dzien_tygodnia = Convert::ToDateTime(data_w);
	int dzien = Convert::ToInt16(dzien_tygodnia->DayOfWeek);

	gbRGodziny->Controls->Clear();

	if (id_rekordu >= 0) {
		id_pracownik = Convert::ToInt32(dgRPracownik->Rows[id_rekordu]->Cells["uzytkownik_id"]->Value);
	}

	switch (dzien) {
	case 1:
		praca_od = "pn_od";
		praca_do = "pn_do";
		break;
	case 2:
		praca_od = "wt_od";
		praca_do = "wt_do";
		break;
	case 3:
		praca_od = "sr_od";
		praca_do = "sr_do";
		break;
	case 4:
		praca_od = "czw_od";
		praca_do = "czw_do";
		break;
	case 5:
		praca_od = "pt_od";
		praca_do = "pt_do";
		break;
	case 6:
		praca_od = "sb_od";
		praca_do = "sb_do";
		break;
	case 0:
		MessageBox::Show("Wybrany pracownik nie pracuje w niedzielê! \n Wyœwietlam poniedzia³ek");
		praca_od = "pn_od";
		praca_do = "pn_do";
		break;
	}

	//Odczyt danych
	MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
	laczBaze->Open();

	MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT date_format(" + praca_od + ", '%H') AS g_start, date_format(" + praca_do + ", '%H') AS g_stop FROM godziny WHERE uzytkownik_id = " + id_pracownik + ";", laczBaze);
	MySqlDataReader^ dane;
	dane = zapytanie->ExecuteReader();
	dane->Read();

	if (dane->HasRows) {
		g_start = Convert::ToInt32(dane->GetInt32("g_start"));
		g_stop = Convert::ToInt32(dane->GetInt32("g_stop"));
	}

	laczBaze->Close();

	// Wyœwietlenie pól z godzinami w polu gbRGodziny
	for (int g = g_start; g < g_stop; g++) {
		for (int m = 0; m < 60; m += 30) {
			czas = data_w + " " + g + ":" + m + ":00";
			DateTime godzina_r = Convert::ToDateTime(czas);

			DateTime^ data_r = Convert::ToDateTime(czas);
			String^ rok = Convert::ToString(data_r->Year);
			String^ miesiac = Convert::ToString(data_r->Month);
			String^ dzien = Convert::ToString(data_r->Day);
			String^ data_rezerwacji = rok + "-" + miesiac + "-" + dzien + " " + godzina_r.ToShortTimeString();

			laczBaze->Open();
			MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT wizyty.wizyty_id, date_format(wizyty.rezerwacja_od, '%H:%i') AS ROd, date_format(wizyty.rezerwacja_do, '%H:%i') AS RDo, uslugi.nazwa, klienci.nazwisko FROM wizyty, uslugi, klienci WHERE wizyty.rezerwacja_od = '" + data_rezerwacji + "' AND wizyty.uzytkownik_id = " + id_pracownik + " AND uslugi.uslugi_id = wizyty.uslugi_id AND klienci.klienci_id = wizyty.klienci_id;", laczBaze);
			MySqlDataReader^ dane;
			dane = zapytanie->ExecuteReader();
			dane->Read();

			System::Windows::Forms::TextBox^ poleGodziny = gcnew System::Windows::Forms::TextBox();
			gbRGodziny->Controls->Add(poleGodziny);
			poleGodziny->Width = 120;

			poleGodziny->BackColor = System::Drawing::Color::White;
			if (dane->HasRows) {
				poleGodziny->BackColor = System::Drawing::Color::Red;
				usluga = dane->GetString("nazwa");
				klient = dane->GetString("nazwisko");
				poleGodziny->Tag = dane->GetString("wizyty_id");
				poleGodziny->Text = String::Format(godzina_r.ToShortTimeString()) + " " + usluga + " " + klient;
			}
			else {
				usluga = "";
				klient = "";
				poleGodziny->Text = String::Format(godzina_r.ToShortTimeString());
			}


			//poleGodziny->Text = Convert::ToString(g);
			
			poleGodziny->Click += gcnew System::EventHandler(this, &Program::Pole_Klik);
			poleGodziny->Location = System::Drawing::Point(25, 25 + 30 * licznik);
			licznik++;

			laczBaze->Close();
		}
	}
}

private: System::Void dgRPracownik_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	monthCalendar1->Enabled = true;
	id_rekordu = e->RowIndex;
	//id_pracownik = Convert::ToInt32(dgRPracownik->Rows[e->RowIndex]->Cells[0]->Value);
	id_pracownik = id_rekordu;
	pokaz_terminy();
}

private: void Pole_Klik(System::Object^ sender, System::EventArgs^ e) {
	btnRUsun->Enabled = false;
	btnRModyfikuj->Enabled = false;
	TextBox^ pole = safe_cast<TextBox^>(sender);
	godzina_w = pole->Text;
	txtRTerminW->Text = data_w + " " + godzina_w;

	id_wizyty = Convert::ToInt16(pole->Tag);

	MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
	laczBaze->Open();

	MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT CONCAT(klienci.imie, ' ', klienci.nazwisko) AS klient, wizyty.klienci_id, wizyty.uzytkownik_id, wizyty.uslugi_id, uslugi.nazwa FROM klienci, wizyty, uslugi WHERE wizyty.wizyty_id="+id_wizyty+" AND klienci.klienci_id = wizyty.klienci_id AND uslugi.uslugi_id = wizyty.uslugi_id;", laczBaze);
	MySqlDataReader^ dane;
	dane = zapytanie->ExecuteReader();
	dane->Read();
	if (dane->HasRows) {
		txtRKlientW->Text = dane->GetString("klient");
		txtRUslugaW->Text = dane->GetString("nazwa");

		id_usluga = dane->GetInt16("uslugi_id");
		id_klient = dane->GetInt16("klienci_id");
		id_pracownik = dane->GetInt16("uzytkownik_id");
		btnRUsun->Enabled = true;
		btnRModyfikuj->Enabled = true;
	}
	laczBaze->Close();
}

private: System::Void monthCalendar1_DateSelected(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e) {
	data_w = String::Format(e->Start.ToShortDateString());
	txtRTerminW->Text = data_w;
	pokaz_terminy();
}
private: System::Void btnRDodaj_Click(System::Object^ sender, System::EventArgs^ e) {
	// Dodanie rezerwacji dla klienta do bazy za pomoc¹ transakcji
	if (id_klient <=0 || id_usluga <= 0 || id_pracownik <= 0 || txtRTerminW->Text->Length < 14) {
		MessageBox::Show("Uzupe³nij dane!");
	}
	else {
		MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
		IDbCommand^ polecenie = laczBaze->CreateCommand();
		IDbTransaction^ transakcja;
		laczBaze->Open();
		transakcja = laczBaze->MySqlConnection::BeginTransaction(IsolationLevel::ReadCommitted);

		polecenie->Connection = laczBaze;

		polecenie->Transaction = transakcja;

		try {
			DateTime^ data_wybor = Convert::ToDateTime(data_w);
			String^ rok = Convert::ToString(data_wybor->Year);
			String^ miesiac = Convert::ToString(data_wybor->Month);
			String^ dzien = Convert::ToString(data_wybor->Day);

			String^ rezerwacja_od = rok+"-"+miesiac+"-"+dzien+" "+godzina_w;

			polecenie->CommandText = "INSERT INTO wizyty SET klienci_id="+id_klient+", uslugi_id="+id_usluga+", uzytkownik_id="+id_pracownik+", rezerwacja_od='"+rezerwacja_od+"', rezerwacja_do='"+rezerwacja_od+"', status='oczekuje' ;";
			polecenie->ExecuteNonQuery();

			transakcja->Commit();
			MessageBox::Show("Rezerwacja dla klienta zosta³a dodana do bazy danych");
		}
		catch (Exception^ komunikat) {
			MessageBox::Show(komunikat->Message);
			transakcja->Rollback();
		}
		laczBaze->Close();
		pokaz_terminy();
	}
}
private: System::Void btnRModyfikuj_Click(System::Object^ sender, System::EventArgs^ e) {
	// modyfikacja rezerwacji klienta
	if (id_klient <= 0 || id_usluga <= 0 || id_pracownik <= 0 || txtRTerminW->Text->Length < 14) {
		MessageBox::Show("Uzupe³nij dane!");
	}
	else {
		MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
		IDbCommand^ polecenie = laczBaze->CreateCommand();
		IDbTransaction^ transakcja;
		laczBaze->Open();
		transakcja = laczBaze->MySqlConnection::BeginTransaction(IsolationLevel::ReadCommitted);

		polecenie->Connection = laczBaze;

		polecenie->Transaction = transakcja;

		try {
			polecenie->CommandText = "UPDATE wizyty SET klienci_id=" + id_klient + ", uslugi_id=" + id_usluga + ", uzytkownik_id=" + id_uzytkownika + ", status='oczekuje' WHERE wizyty_id = '"+id_wizyty+"'; ";
			polecenie->ExecuteNonQuery();

			transakcja->Commit();
			MessageBox::Show("Rezerwacja zosta³a zmodyfikowana");
		}
		catch (Exception^ komunikat) {
			MessageBox::Show(komunikat->Message);
			transakcja->Rollback();
		}
		laczBaze->Close();
		pokaz_terminy();
	}
}
private: System::Void btnRUsun_Click(System::Object^ sender, System::EventArgs^ e) {
	// usuniecie terminu rezerwacji

	MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
	IDbCommand^ polecenie = laczBaze->CreateCommand();
	IDbTransaction^ transakcja;
	laczBaze->Open();
	transakcja = laczBaze->MySqlConnection::BeginTransaction(IsolationLevel::ReadCommitted);

	polecenie->Connection = laczBaze;

	polecenie->Transaction = transakcja;

	try {
		if (MessageBox::Show("Czy mam usun¹æ wybrany termin?", "Ostrze¿enie!", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes) {
			polecenie->CommandText = "DELETE FROM wizyty WHERE wizyty_id = " + id_wizyty + ";";
			polecenie->ExecuteNonQuery();

			transakcja->Commit();
			MessageBox::Show("Termin rezerwacji zosta³ usuniêty!");
		}
	}
	catch (Exception^ komunikat) {
		MessageBox::Show(komunikat->Message);
		transakcja->Rollback();
	}
	laczBaze->Close();
	pokaz_terminy();
}


private: System::Void toolStripButton4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->tabControl1->SelectedTab = tabPage6;
}
private: System::Void toolStripButton2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->tabControl1->SelectedTab = tabPage5;
}
private: System::Void toolStripButton3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->tabControl1->SelectedTab = tabPage2;
}
private: System::Void toolStripButton5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->tabControl1->SelectedTab = tabPage3;
}
private: System::Void toolStripButton6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->tabControl1->SelectedTab = tabPage4;
}
private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->tabControl1->SelectedTab = tabPage1;
}


};
}
