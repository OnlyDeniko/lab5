#pragma once
#include"monom.h"
#include"polinom.h"
#include <msclr\marshal_cppstd.h>

namespace finalprojectWF {

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
	private: System::Windows::Forms::TextBox^  max_step_text_box;
	protected:
	private: System::Windows::Forms::TextBox^  count_var_text_box;
	private: System::Windows::Forms::Button^  max_step_button;
	private: System::Windows::Forms::Button^  count_var_button;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  polinom1_text_box;
	private: System::Windows::Forms::TextBox^  polinom2_text_box;
	private: System::Windows::Forms::ListBox^  choose_polinom_list_box;
	private: System::Windows::Forms::ListBox^  choose_operation_list_box;
	private: System::Windows::Forms::TextBox^  monom_text_box;
	private: System::Windows::Forms::Button^  do_button;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  res_text_box;
	private: System::Windows::Forms::Button^  swap_button;
	private: System::Windows::Forms::Button^  plus_buttton;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  multK_text_box;
	private: System::Windows::Forms::Button^  clear_button;
	private: System::Windows::Forms::Button^  P_eq_res_button;
	private: System::Windows::Forms::Button^  Q_eq_res_button;


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
			this->max_step_text_box = (gcnew System::Windows::Forms::TextBox());
			this->count_var_text_box = (gcnew System::Windows::Forms::TextBox());
			this->max_step_button = (gcnew System::Windows::Forms::Button());
			this->count_var_button = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->polinom1_text_box = (gcnew System::Windows::Forms::TextBox());
			this->polinom2_text_box = (gcnew System::Windows::Forms::TextBox());
			this->choose_polinom_list_box = (gcnew System::Windows::Forms::ListBox());
			this->choose_operation_list_box = (gcnew System::Windows::Forms::ListBox());
			this->monom_text_box = (gcnew System::Windows::Forms::TextBox());
			this->do_button = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->res_text_box = (gcnew System::Windows::Forms::TextBox());
			this->swap_button = (gcnew System::Windows::Forms::Button());
			this->plus_buttton = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->multK_text_box = (gcnew System::Windows::Forms::TextBox());
			this->clear_button = (gcnew System::Windows::Forms::Button());
			this->P_eq_res_button = (gcnew System::Windows::Forms::Button());
			this->Q_eq_res_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// max_step_text_box
			// 
			this->max_step_text_box->Location = System::Drawing::Point(735, 34);
			this->max_step_text_box->Margin = System::Windows::Forms::Padding(4);
			this->max_step_text_box->Name = L"max_step_text_box";
			this->max_step_text_box->Size = System::Drawing::Size(220, 26);
			this->max_step_text_box->TabIndex = 0;
			// 
			// count_var_text_box
			// 
			this->count_var_text_box->Location = System::Drawing::Point(1103, 34);
			this->count_var_text_box->Margin = System::Windows::Forms::Padding(4);
			this->count_var_text_box->Name = L"count_var_text_box";
			this->count_var_text_box->Size = System::Drawing::Size(220, 26);
			this->count_var_text_box->TabIndex = 1;
			// 
			// max_step_button
			// 
			this->max_step_button->Location = System::Drawing::Point(963, 34);
			this->max_step_button->Margin = System::Windows::Forms::Padding(4);
			this->max_step_button->Name = L"max_step_button";
			this->max_step_button->Size = System::Drawing::Size(132, 26);
			this->max_step_button->TabIndex = 2;
			this->max_step_button->Text = L"Set Max Step";
			this->max_step_button->UseVisualStyleBackColor = true;
			this->max_step_button->Click += gcnew System::EventHandler(this, &MyForm::max_step_button_Click);
			// 
			// count_var_button
			// 
			this->count_var_button->Location = System::Drawing::Point(1331, 34);
			this->count_var_button->Margin = System::Windows::Forms::Padding(4);
			this->count_var_button->Name = L"count_var_button";
			this->count_var_button->Size = System::Drawing::Size(132, 26);
			this->count_var_button->TabIndex = 3;
			this->count_var_button->Text = L"Set N";
			this->count_var_button->UseVisualStyleBackColor = true;
			this->count_var_button->Click += gcnew System::EventHandler(this, &MyForm::count_var_button_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(18, 179);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(23, 19);
			this->label1->TabIndex = 4;
			this->label1->Text = L"P:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(18, 341);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(26, 19);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Q:";
			// 
			// polinom1_text_box
			// 
			this->polinom1_text_box->Location = System::Drawing::Point(83, 176);
			this->polinom1_text_box->Margin = System::Windows::Forms::Padding(4);
			this->polinom1_text_box->Name = L"polinom1_text_box";
			this->polinom1_text_box->Size = System::Drawing::Size(718, 26);
			this->polinom1_text_box->TabIndex = 6;
			// 
			// polinom2_text_box
			// 
			this->polinom2_text_box->Location = System::Drawing::Point(83, 338);
			this->polinom2_text_box->Margin = System::Windows::Forms::Padding(4);
			this->polinom2_text_box->Name = L"polinom2_text_box";
			this->polinom2_text_box->Size = System::Drawing::Size(718, 26);
			this->polinom2_text_box->TabIndex = 7;
			// 
			// choose_polinom_list_box
			// 
			this->choose_polinom_list_box->FormattingEnabled = true;
			this->choose_polinom_list_box->ItemHeight = 19;
			this->choose_polinom_list_box->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Полином 1", L"Полином 2" });
			this->choose_polinom_list_box->Location = System::Drawing::Point(844, 242);
			this->choose_polinom_list_box->Margin = System::Windows::Forms::Padding(4);
			this->choose_polinom_list_box->Name = L"choose_polinom_list_box";
			this->choose_polinom_list_box->Size = System::Drawing::Size(98, 42);
			this->choose_polinom_list_box->TabIndex = 8;
			// 
			// choose_operation_list_box
			// 
			this->choose_operation_list_box->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->choose_operation_list_box->FormattingEnabled = true;
			this->choose_operation_list_box->ItemHeight = 19;
			this->choose_operation_list_box->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Добавить", L"Удалить" });
			this->choose_operation_list_box->Location = System::Drawing::Point(954, 242);
			this->choose_operation_list_box->Name = L"choose_operation_list_box";
			this->choose_operation_list_box->Size = System::Drawing::Size(98, 42);
			this->choose_operation_list_box->TabIndex = 9;
			// 
			// monom_text_box
			// 
			this->monom_text_box->Location = System::Drawing::Point(1078, 258);
			this->monom_text_box->Name = L"monom_text_box";
			this->monom_text_box->Size = System::Drawing::Size(261, 26);
			this->monom_text_box->TabIndex = 10;
			// 
			// do_button
			// 
			this->do_button->Location = System::Drawing::Point(1359, 258);
			this->do_button->Name = L"do_button";
			this->do_button->Size = System::Drawing::Size(99, 26);
			this->do_button->TabIndex = 11;
			this->do_button->Text = L"DO";
			this->do_button->UseVisualStyleBackColor = true;
			this->do_button->Click += gcnew System::EventHandler(this, &MyForm::do_button_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(18, 467);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 19);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Res:";
			// 
			// res_text_box
			// 
			this->res_text_box->Location = System::Drawing::Point(83, 460);
			this->res_text_box->Name = L"res_text_box";
			this->res_text_box->Size = System::Drawing::Size(718, 26);
			this->res_text_box->TabIndex = 13;
			// 
			// swap_button
			// 
			this->swap_button->Location = System::Drawing::Point(1359, 217);
			this->swap_button->Name = L"swap_button";
			this->swap_button->Size = System::Drawing::Size(99, 26);
			this->swap_button->TabIndex = 14;
			this->swap_button->Text = L"Swap";
			this->swap_button->UseVisualStyleBackColor = true;
			this->swap_button->Click += gcnew System::EventHandler(this, &MyForm::swap_button_Click);
			// 
			// plus_buttton
			// 
			this->plus_buttton->Location = System::Drawing::Point(901, 460);
			this->plus_buttton->Name = L"plus_buttton";
			this->plus_buttton->Size = System::Drawing::Size(90, 25);
			this->plus_buttton->TabIndex = 15;
			this->plus_buttton->Text = L"+";
			this->plus_buttton->UseVisualStyleBackColor = true;
			this->plus_buttton->Click += gcnew System::EventHandler(this, &MyForm::plus_buttton_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(901, 491);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 25);
			this->button1->TabIndex = 16;
			this->button1->Text = L"-";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(901, 522);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 25);
			this->button2->TabIndex = 17;
			this->button2->Text = L"*";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(901, 553);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(90, 25);
			this->button3->TabIndex = 18;
			this->button3->Text = L"* k";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// multK_text_box
			// 
			this->multK_text_box->Location = System::Drawing::Point(997, 553);
			this->multK_text_box->Name = L"multK_text_box";
			this->multK_text_box->Size = System::Drawing::Size(60, 26);
			this->multK_text_box->TabIndex = 19;
			// 
			// clear_button
			// 
			this->clear_button->Location = System::Drawing::Point(22, 34);
			this->clear_button->Name = L"clear_button";
			this->clear_button->Size = System::Drawing::Size(109, 39);
			this->clear_button->TabIndex = 20;
			this->clear_button->Text = L"Clear";
			this->clear_button->UseVisualStyleBackColor = true;
			this->clear_button->Click += gcnew System::EventHandler(this, &MyForm::clear_button_Click);
			// 
			// P_eq_res_button
			// 
			this->P_eq_res_button->Location = System::Drawing::Point(1078, 460);
			this->P_eq_res_button->Name = L"P_eq_res_button";
			this->P_eq_res_button->Size = System::Drawing::Size(90, 25);
			this->P_eq_res_button->TabIndex = 21;
			this->P_eq_res_button->Text = L"P = Res";
			this->P_eq_res_button->UseVisualStyleBackColor = true;
			this->P_eq_res_button->Click += gcnew System::EventHandler(this, &MyForm::P_eq_res_button_Click);
			// 
			// Q_eq_res_button
			// 
			this->Q_eq_res_button->Location = System::Drawing::Point(1078, 491);
			this->Q_eq_res_button->Name = L"Q_eq_res_button";
			this->Q_eq_res_button->Size = System::Drawing::Size(90, 25);
			this->Q_eq_res_button->TabIndex = 22;
			this->Q_eq_res_button->Text = L"Q = Res";
			this->Q_eq_res_button->UseVisualStyleBackColor = true;
			this->Q_eq_res_button->Click += gcnew System::EventHandler(this, &MyForm::Q_eq_res_button_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1476, 612);
			this->Controls->Add(this->Q_eq_res_button);
			this->Controls->Add(this->P_eq_res_button);
			this->Controls->Add(this->clear_button);
			this->Controls->Add(this->multK_text_box);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->plus_buttton);
			this->Controls->Add(this->swap_button);
			this->Controls->Add(this->res_text_box);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->do_button);
			this->Controls->Add(this->monom_text_box);
			this->Controls->Add(this->choose_operation_list_box);
			this->Controls->Add(this->choose_polinom_list_box);
			this->Controls->Add(this->polinom2_text_box);
			this->Controls->Add(this->polinom1_text_box);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->count_var_button);
			this->Controls->Add(this->max_step_button);
			this->Controls->Add(this->count_var_text_box);
			this->Controls->Add(this->max_step_text_box);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		int max_step = -1, n = -1;
		polinom* polinom1;
		polinom* polinom2;
		polinom* res;
	private: System::Void max_step_button_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ tmp = max_step_text_box->Text;
		max_step = System::Convert::ToInt32(tmp);
		max_step_text_box->ReadOnly = true;
		if (max_step != -1 && n != -1) {
			polinom1 = new polinom("", n, max_step);
			polinom2 = new polinom("", n, max_step);
		}
	}
	private: System::Void count_var_button_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ tmp = count_var_text_box->Text;
		n = System::Convert::ToInt32(tmp);
		count_var_text_box->ReadOnly = true;
		if (max_step != -1 && n != -1) {
			polinom1 = new polinom("", n, max_step);
			polinom2 = new polinom("", n, max_step);
		}
	}
	private:
		void operations_with_polinoms(int chosen, std::string s) {
			if (n == -1 || max_step == -1) {
				MessageBox::Show("Введите максимальную степень и N");
				return;
			}
			if (choose_operation_list_box->SelectedItem == "Добавить") {
				monom* kek = new monom(s, max_step, n);
				if (chosen == 1) {
					polinom1->add(*kek);
				}
				else {
					polinom2->add(*kek);
				}
			}
			else if (choose_operation_list_box->SelectedItem == "Удалить") {
				monom* kek = new monom(s, max_step, n);
				if (chosen == 1) {
					polinom1->erase(*kek);
				}
				else {
					polinom2->erase(*kek);
				}
			}
			else {
				MessageBox::Show("Выберите операцию!");
			}
			choose_operation_list_box->SelectedIndex = -1;
		}
	private: System::Void do_button_Click(System::Object^  sender, System::EventArgs^  e) {
		if (n == -1 || max_step == -1) {
			MessageBox::Show("Введите максимальную степень и N");
			return;
		}
		String^ tmpS = monom_text_box->Text;
		std::string tmp = msclr::interop::marshal_as<std::string>(tmpS);
		if (choose_polinom_list_box->SelectedItem == "Полином 1") {
			
			operations_with_polinoms(1, tmp);
		}
		else if (choose_polinom_list_box->SelectedItem == "Полином 2") {
			
			operations_with_polinoms(2, tmp);
		}
		else {
			MessageBox::Show("Выберите полином!");
		}
		choose_polinom_list_box->SelectedIndex = -1;
		polinom1_text_box->Text = msclr::interop::marshal_as<String^>(polinom1->to_string());
		polinom2_text_box->Text = msclr::interop::marshal_as<String^>(polinom2->to_string());
	}
	private: System::Void swap_button_Click(System::Object^  sender, System::EventArgs^  e) {
		if (n == -1 || max_step == -1) {
			MessageBox::Show("Введите максимальную степень и N");
			return;
		}
		polinom _3 = *polinom1;
		(*polinom1) = *polinom2;
		(*polinom2) = _3;
		polinom1_text_box->Text = msclr::interop::marshal_as<String^>(polinom1->to_string());
		polinom2_text_box->Text = msclr::interop::marshal_as<String^>(polinom2->to_string());
	}
	private: System::Void plus_buttton_Click(System::Object^  sender, System::EventArgs^  e) {
		if (n == -1 || max_step == -1) {
			MessageBox::Show("Введите максимальную степень и N");
			return;
		}
		res = new polinom(polinom1->operator+(*polinom2));
		res_text_box->Text = msclr::interop::marshal_as<String^>(res->to_string());
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (n == -1 || max_step == -1) {
			MessageBox::Show("Введите максимальную степень и N");
			return;
		}
		res = new polinom(polinom1->operator-(*polinom2));
		res_text_box->Text = msclr::interop::marshal_as<String^>(res->to_string());
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		if (n == -1 || max_step == -1) {
			MessageBox::Show("Введите максимальную степень и N");
			return;
		}
		res = new polinom(polinom1->operator*(*polinom2));
		res_text_box->Text = msclr::interop::marshal_as<String^>(res->to_string());
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		if (n == -1 || max_step == -1) {
			MessageBox::Show("Введите максимальную степень и N");
			return;
		}
		int k = System::Convert::ToInt32(multK_text_box->Text);
		res = new polinom(polinom1->operator*(k));
		res_text_box->Text = msclr::interop::marshal_as<String^>(res->to_string());
	}
	private: System::Void clear_button_Click(System::Object^  sender, System::EventArgs^  e) {
		
		max_step_text_box->ReadOnly = false;
		count_var_text_box->ReadOnly = false;
		max_step_text_box->Clear();
		count_var_text_box->Clear();
		n = -1;
		max_step = -1;
		polinom1_text_box->Clear();
		polinom2_text_box->Clear();
		res_text_box->Clear();
		multK_text_box->Clear();
		monom_text_box->Clear();
	}
	private: System::Void P_eq_res_button_Click(System::Object^  sender, System::EventArgs^  e) {
		polinom1 = new polinom(*res);
		polinom1_text_box->Text = msclr::interop::marshal_as<String^>(polinom1->to_string());
		polinom2_text_box->Text = msclr::interop::marshal_as<String^>(polinom2->to_string());
	}
	private: System::Void Q_eq_res_button_Click(System::Object^  sender, System::EventArgs^  e) {
		polinom2 = new polinom(*res);
		polinom1_text_box->Text = msclr::interop::marshal_as<String^>(polinom1->to_string());
		polinom2_text_box->Text = msclr::interop::marshal_as<String^>(polinom2->to_string());
	}
};
}
