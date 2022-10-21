#pragma once

#include "Program.h"

namespace Gabinet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Logowanie
	/// </summary>
	public ref class Logowanie : public System::Windows::Forms::Form
	{
	public:
		Logowanie(void)
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
		~Logowanie()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnAnuluj;
	protected:

	private: System::Windows::Forms::Button^ btnZaloguj;
	private: System::Windows::Forms::Label^ lblUzytkownik;
	private: System::Windows::Forms::Label^ lblHaslo;


	private: System::Windows::Forms::TextBox^ txtUzytkownik;
	private: System::Windows::Forms::TextBox^ txtHaslo;
	protected:


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Logowanie::typeid));
			this->btnAnuluj = (gcnew System::Windows::Forms::Button());
			this->btnZaloguj = (gcnew System::Windows::Forms::Button());
			this->lblUzytkownik = (gcnew System::Windows::Forms::Label());
			this->lblHaslo = (gcnew System::Windows::Forms::Label());
			this->txtUzytkownik = (gcnew System::Windows::Forms::TextBox());
			this->txtHaslo = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btnAnuluj
			// 
			this->btnAnuluj->BackColor = System::Drawing::Color::Crimson;
			this->btnAnuluj->FlatAppearance->BorderSize = 0;
			this->btnAnuluj->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAnuluj->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnAnuluj->ForeColor = System::Drawing::Color::White;
			this->btnAnuluj->Location = System::Drawing::Point(26, 135);
			this->btnAnuluj->Name = L"btnAnuluj";
			this->btnAnuluj->Size = System::Drawing::Size(104, 33);
			this->btnAnuluj->TabIndex = 0;
			this->btnAnuluj->Text = L"Anuluj";
			this->btnAnuluj->UseVisualStyleBackColor = false;
			this->btnAnuluj->Click += gcnew System::EventHandler(this, &Logowanie::btnAnuluj_Click);
			// 
			// btnZaloguj
			// 
			this->btnZaloguj->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->btnZaloguj->FlatAppearance->BorderSize = 0;
			this->btnZaloguj->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnZaloguj->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnZaloguj->ForeColor = System::Drawing::Color::White;
			this->btnZaloguj->Location = System::Drawing::Point(164, 135);
			this->btnZaloguj->Name = L"btnZaloguj";
			this->btnZaloguj->Size = System::Drawing::Size(104, 33);
			this->btnZaloguj->TabIndex = 1;
			this->btnZaloguj->Text = L"Zaloguj";
			this->btnZaloguj->UseVisualStyleBackColor = false;
			this->btnZaloguj->Click += gcnew System::EventHandler(this, &Logowanie::btnZaloguj_Click);
			// 
			// lblUzytkownik
			// 
			this->lblUzytkownik->AutoSize = true;
			this->lblUzytkownik->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblUzytkownik->ForeColor = System::Drawing::Color::White;
			this->lblUzytkownik->Location = System::Drawing::Point(22, 33);
			this->lblUzytkownik->Name = L"lblUzytkownik";
			this->lblUzytkownik->Size = System::Drawing::Size(105, 23);
			this->lblUzytkownik->TabIndex = 2;
			this->lblUzytkownik->Text = L"u¿ytkownik:";
			// 
			// lblHaslo
			// 
			this->lblHaslo->AutoSize = true;
			this->lblHaslo->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblHaslo->ForeColor = System::Drawing::Color::White;
			this->lblHaslo->Location = System::Drawing::Point(61, 85);
			this->lblHaslo->Name = L"lblHaslo";
			this->lblHaslo->Size = System::Drawing::Size(57, 23);
			this->lblHaslo->TabIndex = 3;
			this->lblHaslo->Text = L"has³o:";
			// 
			// txtUzytkownik
			// 
			this->txtUzytkownik->Location = System::Drawing::Point(133, 31);
			this->txtUzytkownik->Name = L"txtUzytkownik";
			this->txtUzytkownik->Size = System::Drawing::Size(136, 26);
			this->txtUzytkownik->TabIndex = 4;
			this->txtUzytkownik->Text = L"admin";
			// 
			// txtHaslo
			// 
			this->txtHaslo->Location = System::Drawing::Point(133, 82);
			this->txtHaslo->Name = L"txtHaslo";
			this->txtHaslo->PasswordChar = '*';
			this->txtHaslo->Size = System::Drawing::Size(136, 26);
			this->txtHaslo->TabIndex = 5;
			this->txtHaslo->Text = L"123";
			// 
			// Logowanie
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSlateGray;
			this->ClientSize = System::Drawing::Size(294, 203);
			this->Controls->Add(this->txtHaslo);
			this->Controls->Add(this->txtUzytkownik);
			this->Controls->Add(this->lblHaslo);
			this->Controls->Add(this->lblUzytkownik);
			this->Controls->Add(this->btnZaloguj);
			this->Controls->Add(this->btnAnuluj);
			this->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Logowanie";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Logowanie";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void btnAnuluj_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

private: System::Void btnZaloguj_Click(System::Object^ sender, System::EventArgs^ e) {
	
	String^ konfiguracja = L"datasource=localhost;port=3306;username=root;password=AAhh5%gX#;database=gabinet";
	MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
	MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT uzytkownik_id FROM uzytkownik WHERE uzytkownik_nazwa = '" + txtUzytkownik->Text + "' AND haslo = '" + txtHaslo->Text +"';", laczBaze);
	MySqlDataReader^ odczytanie;
	try {
		laczBaze->Open();
		odczytanie = zapytanie->ExecuteReader();

		if (odczytanie->Read()) {
			int id_uzytkownik = odczytanie->GetInt32(0);
			this->Hide();
			Program^ program = gcnew Program(id_uzytkownik);
			program->ShowDialog();
			this->Close();
		}
		else {
			MessageBox::Show("B³êdna nazwa u¿ytkownika lub niepoprawne has³o");
		}
	}
	catch(Exception^ ex){
		MessageBox::Show(ex->Message);
	}
	laczBaze->Close();
}

};
}
