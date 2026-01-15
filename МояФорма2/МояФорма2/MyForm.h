#pragma once

namespace МояФорма2 {

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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::CheckBox^ rbGray;

	private: System::Windows::Forms::CheckBox^ rbGreen;
	private: System::Windows::Forms::CheckBox^ rbYellow;
	private: System::Windows::Forms::CheckBox^ rbRed;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button6;





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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->rbGray = (gcnew System::Windows::Forms::CheckBox());
			this->rbGreen = (gcnew System::Windows::Forms::CheckBox());
			this->rbYellow = (gcnew System::Windows::Forms::CheckBox());
			this->rbRed = (gcnew System::Windows::Forms::CheckBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(26, 16);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(163, 30);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Показать надпись";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(195, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(235, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Кнопка работает отлично!";
			this->label1->Visible = false;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(26, 61);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(151, 32);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Стереть надпись";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(26, 118);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(151, 27);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Сменить цвет окна";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// rbGray
			// 
			this->rbGray->AutoSize = true;
			this->rbGray->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rbGray->Location = System::Drawing::Point(208, 77);
			this->rbGray->Name = L"rbGray";
			this->rbGray->Size = System::Drawing::Size(77, 24);
			this->rbGray->TabIndex = 4;
			this->rbGray->Text = L"Серый";
			this->rbGray->UseVisualStyleBackColor = true;
			this->rbGray->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// rbGreen
			// 
			this->rbGreen->AutoSize = true;
			this->rbGreen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rbGreen->Location = System::Drawing::Point(208, 137);
			this->rbGreen->Name = L"rbGreen";
			this->rbGreen->Size = System::Drawing::Size(96, 24);
			this->rbGreen->TabIndex = 5;
			this->rbGreen->Text = L"Зелёный";
			this->rbGreen->UseVisualStyleBackColor = true;
			this->rbGreen->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// rbYellow
			// 
			this->rbYellow->AutoSize = true;
			this->rbYellow->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rbYellow->Location = System::Drawing::Point(208, 167);
			this->rbYellow->Name = L"rbYellow";
			this->rbYellow->Size = System::Drawing::Size(89, 24);
			this->rbYellow->TabIndex = 6;
			this->rbYellow->Text = L"Жёлтый";
			this->rbYellow->UseVisualStyleBackColor = true;
			this->rbYellow->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox3_CheckedChanged);
			// 
			// rbRed
			// 
			this->rbRed->AutoSize = true;
			this->rbRed->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rbRed->Location = System::Drawing::Point(208, 107);
			this->rbRed->Name = L"rbRed";
			this->rbRed->Size = System::Drawing::Size(93, 24);
			this->rbRed->TabIndex = 7;
			this->rbRed->Text = L"Красный";
			this->rbRed->UseVisualStyleBackColor = true;
			this->rbRed->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbRed_CheckedChanged);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(26, 167);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(88, 34);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Закрыть";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(436, 23);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(313, 153);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Информация о приложении";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(34, 118);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(189, 20);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Оконное приложение";
			this->label3->Visible = false;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(17, 83);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(211, 24);
			this->radioButton2->TabIndex = 2;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Технология приложения";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(116, 42);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(152, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Филонович Я. Э.";
			this->label2->Visible = false;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(17, 38);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(74, 24);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Автор";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(26, 229);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(124, 26);
			this->textBox1->TabIndex = 10;
			this->textBox1->Text = L"Делимое";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(162, 229);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(123, 26);
			this->textBox2->TabIndex = 11;
			this->textBox2->Text = L"Делитель";
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(293, 229);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(113, 26);
			this->button5->TabIndex = 12;
			this->button5->Text = L"Вычислить";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(412, 229);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(252, 26);
			this->textBox3->TabIndex = 13;
			this->textBox3->Text = L"Результат (корень из частного)";
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(670, 229);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(110, 26);
			this->button6->TabIndex = 14;
			this->button6->Text = L"Очистить";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(792, 267);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->rbRed);
			this->Controls->Add(this->rbYellow);
			this->Controls->Add(this->rbGreen);
			this->Controls->Add(this->rbGray);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Visible = true;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Visible = false;
	}

private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (rbYellow->Checked)
	{
		rbRed->Checked = false;
		rbGreen->Checked = false;
		rbGray->Checked = false;
	}
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (rbGray->Checked)
	{
		rbRed->Checked = false;
		rbGreen->Checked = false;
		rbYellow->Checked = false;
	}
}
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (rbGreen->Checked)
	{
		rbRed->Checked = false;
		rbGray->Checked = false;
		rbYellow->Checked = false;
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (rbGray->Checked)
	{
		this->BackColor = System::Drawing::Color::Gray;
	}
	else if (rbRed->Checked)
	{
		this->BackColor = System::Drawing::Color::Red;
	}
	else if (rbGreen->Checked)
	{
		this->BackColor = System::Drawing::Color::Green;
	}
	else if (rbYellow->Checked)
	{
		this->BackColor = System::Drawing::Color::Yellow;
	}
	else
	{
		this->BackColor = System::Drawing::SystemColors::Control;
	}
}
private: System::Void rbRed_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (rbRed->Checked)
	{
		rbGray->Checked = false;
		rbGreen->Checked = false;
		rbYellow->Checked = false;
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	label2->Visible = true;
}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	label3->Visible = true;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{

		double dividend = Convert::ToDouble(textBox1->Text);
		double divisor = Convert::ToDouble(textBox2->Text);


		if (divisor == 0)
		{
			MessageBox::Show("Попытка деления на ноль или извлечения корня из отрицательного числа.",
				"Ошибка деления",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
			return;
		}

		double quotient = dividend / divisor;
		if (quotient < 0)
		{
			MessageBox::Show("Попытка деления на ноль или извлечения корня из отрицательного числа.",
				"Ошибка вычисления",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
			return;
		}


		double result = Math::Sqrt(quotient);

		textBox3->Text = result.ToString("");
		this->Text = result.ToString("");
	}
	catch (FormatException^)
	{
		MessageBox::Show("Ошибка: Введите корректные числовые значения!",
			"Ошибка ввода",
			MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
	}
	catch (OverflowException^)
	{
		MessageBox::Show("Ошибка: Слишком большое или маленькое число!",
			"Переполнение",
			MessageBoxButtons::OK,
			MessageBoxIcon::Error);
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Произошла ошибка: " + ex->Message,
			"Ошибка",
			MessageBoxButtons::OK,
			MessageBoxIcon::Error);
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	this->Text = "MyForm";
}
};
}
