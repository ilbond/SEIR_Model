#pragma once
#include <cmath>
#include <vector>

using namespace std;

namespace Graph {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
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
	private: ZedGraph::ZedGraphControl^  zedGraphControl1;
	private: System::Windows::Forms::Button^  button1;




	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: ZedGraph::ZedGraphControl^ zedGraphControl2;
	private: ZedGraph::ZedGraphControl^ zedGraphControl3;
	private: ZedGraph::ZedGraphControl^ zedGraphControl4;
	private: System::Windows::Forms::ComboBox^ comboBox1;




	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: ZedGraph::ZedGraphControl^ zedGraphControl5;
	private: ZedGraph::ZedGraphControl^ zedGraphControl6;
	private: System::Windows::Forms::PictureBox^ pictureBox1;


	protected:
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->zedGraphControl2 = (gcnew ZedGraph::ZedGraphControl());
			this->zedGraphControl3 = (gcnew ZedGraph::ZedGraphControl());
			this->zedGraphControl4 = (gcnew ZedGraph::ZedGraphControl());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->zedGraphControl5 = (gcnew ZedGraph::ZedGraphControl());
			this->zedGraphControl6 = (gcnew ZedGraph::ZedGraphControl());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(454, 15);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(685, 568);
			this->zedGraphControl1->TabIndex = 0;
			this->zedGraphControl1->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl1_Load);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(154, 174);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(142, 29);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Провести расчёт";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(276, 15);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(155, 20);
			this->textBox1->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(256, 19);
			this->label1->TabIndex = 4;
			this->label1->Text = L"θ - коэф. инкубации";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(276, 41);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(155, 20);
			this->textBox2->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 14);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(250, 19);
			this->label2->TabIndex = 6;
			this->label2->Text = L"N – количество людей в популяции";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(276, 119);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(155, 20);
			this->textBox4->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 118);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(243, 19);
			this->label4->TabIndex = 10;
			this->label4->Text = L"I0 – количество инфицированных ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(12, 144);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(232, 19);
			this->label5->TabIndex = 11;
			this->label5->Text = L"T - количество дней наблюдения";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(276, 145);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(155, 20);
			this->textBox5->TabIndex = 12;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(276, 67);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(155, 20);
			this->textBox6->TabIndex = 13;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(276, 93);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(155, 20);
			this->textBox7->TabIndex = 14;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(12, 66);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(211, 19);
			this->label6->TabIndex = 15;
			this->label6->Text = L"β – интенсивность заражения";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(12, 92);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(258, 19);
			this->label7->TabIndex = 16;
			this->label7->Text = L"γ - интенсивность выздоравливания";
			// 
			// zedGraphControl2
			// 
			this->zedGraphControl2->Location = System::Drawing::Point(454, 15);
			this->zedGraphControl2->Name = L"zedGraphControl2";
			this->zedGraphControl2->ScrollGrace = 0;
			this->zedGraphControl2->ScrollMaxX = 0;
			this->zedGraphControl2->ScrollMaxY = 0;
			this->zedGraphControl2->ScrollMaxY2 = 0;
			this->zedGraphControl2->ScrollMinX = 0;
			this->zedGraphControl2->ScrollMinY = 0;
			this->zedGraphControl2->ScrollMinY2 = 0;
			this->zedGraphControl2->Size = System::Drawing::Size(685, 568);
			this->zedGraphControl2->TabIndex = 17;
			// 
			// zedGraphControl3
			// 
			this->zedGraphControl3->Location = System::Drawing::Point(454, 15);
			this->zedGraphControl3->Name = L"zedGraphControl3";
			this->zedGraphControl3->ScrollGrace = 0;
			this->zedGraphControl3->ScrollMaxX = 0;
			this->zedGraphControl3->ScrollMaxY = 0;
			this->zedGraphControl3->ScrollMaxY2 = 0;
			this->zedGraphControl3->ScrollMinX = 0;
			this->zedGraphControl3->ScrollMinY = 0;
			this->zedGraphControl3->ScrollMinY2 = 0;
			this->zedGraphControl3->Size = System::Drawing::Size(685, 568);
			this->zedGraphControl3->TabIndex = 18;
			// 
			// zedGraphControl4
			// 
			this->zedGraphControl4->Location = System::Drawing::Point(454, 15);
			this->zedGraphControl4->Name = L"zedGraphControl4";
			this->zedGraphControl4->ScrollGrace = 0;
			this->zedGraphControl4->ScrollMaxX = 0;
			this->zedGraphControl4->ScrollMaxY = 0;
			this->zedGraphControl4->ScrollMaxY2 = 0;
			this->zedGraphControl4->ScrollMinX = 0;
			this->zedGraphControl4->ScrollMinY = 0;
			this->zedGraphControl4->ScrollMinY2 = 0;
			this->zedGraphControl4->Size = System::Drawing::Size(685, 568);
			this->zedGraphControl4->TabIndex = 19;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"S(t), I(t), R(t)", L"S(t)", L"E(t)", L"I(t)", L"R(t)",
					L"I(S(t))"
			});
			this->comboBox1->Location = System::Drawing::Point(15, 179);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 20;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(327, 181);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(52, 19);
			this->label8->TabIndex = 21;
			this->label8->Text = L"R0 > 1";
			this->label8->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(327, 181);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(61, 19);
			this->label9->TabIndex = 22;
			this->label9->Text = L"R0 <= 1";
			this->label9->Visible = false;
			// 
			// zedGraphControl5
			// 
			this->zedGraphControl5->Location = System::Drawing::Point(454, 15);
			this->zedGraphControl5->Name = L"zedGraphControl5";
			this->zedGraphControl5->ScrollGrace = 0;
			this->zedGraphControl5->ScrollMaxX = 0;
			this->zedGraphControl5->ScrollMaxY = 0;
			this->zedGraphControl5->ScrollMaxY2 = 0;
			this->zedGraphControl5->ScrollMinX = 0;
			this->zedGraphControl5->ScrollMinY = 0;
			this->zedGraphControl5->ScrollMinY2 = 0;
			this->zedGraphControl5->Size = System::Drawing::Size(685, 568);
			this->zedGraphControl5->TabIndex = 23;
			// 
			// zedGraphControl6
			// 
			this->zedGraphControl6->Location = System::Drawing::Point(454, 15);
			this->zedGraphControl6->Name = L"zedGraphControl6";
			this->zedGraphControl6->ScrollGrace = 0;
			this->zedGraphControl6->ScrollMaxX = 0;
			this->zedGraphControl6->ScrollMaxY = 0;
			this->zedGraphControl6->ScrollMaxY2 = 0;
			this->zedGraphControl6->ScrollMinX = 0;
			this->zedGraphControl6->ScrollMinY = 0;
			this->zedGraphControl6->ScrollMinY2 = 0;
			this->zedGraphControl6->Size = System::Drawing::Size(685, 568);
			this->zedGraphControl6->TabIndex = 25;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(15, 298);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(416, 187);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 24;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1151, 595);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->zedGraphControl6);
			this->Controls->Add(this->zedGraphControl5);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->zedGraphControl4);
			this->Controls->Add(this->zedGraphControl3);
			this->Controls->Add(this->zedGraphControl2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->zedGraphControl1);
			this->Name = L"MyForm";
			this->Text = L"SEIR модель с учётом демографических процессов, Бондаренко Илья 381803-2";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		//return N * Mu - Mu * S - Beta * I * S / N;
		//return Beta * I * S / N - Gamma * I - Mu * I;
		double func_S(double S, double E, double I, double Beta, int N) {
			
			return - Beta * S * I/N;
		}

		double func_E(double S, double E, double I, int N, double Beta, double Theta) {
			
			return Beta * S * I/N  - Theta * E;
		}

		double func_I(double S, double E, double I, int N, double Gamma, double Theta) {

			return Theta * E - Gamma * I;
		}

		double func_R(double I, double R, double Gamma, double Mu) {
			return Gamma * I;
		}

		vector<double> Runge_Kutta(double S, double E, double I, double R, int N, double Beta, double Gamma, double Theta, double h) {
			double k1, k2, k3, k4;
			double l1, l2, l3, l4;
			double m1, m2, m3, m4;
			vector<double> res(3);
			
			k1 = func_S(S, E, I, Beta, N);
			m1 = func_E(S, E, I, N, Beta, Theta);
			l1 = func_I(S, E, I, N, Gamma, Theta);

			k2 = func_S(S + (h / 2.0) * k1, E + (h / 2.0) * m1, I + (h / 2.0) * l1, Beta, N);
			m2 = func_E(S + (h / 2.0) * k1, E + (h / 2.0) * m1, I + (h / 2.0) * l1, N, Beta, Theta);
			l2 = func_I(S + (h / 2.0) * k1, E + (h / 2.0) * m1, I + (h / 2.0) * l1, N, Gamma, Theta);

			//k2 = func_S(S + (h / 2.0) * k1, I, N, Beta, Mu);
			//l2 = func_I(S, I + (h / 2.0) * l1, N, Beta, Gamma, Mu);

			k3 = func_S(S + (h / 2.0) * k2, E + (h / 2.0) * m2, I + (h / 2.0) * l2, Beta, N);
			m3 = func_E(S + (h / 2.0) * k2, E + (h / 2.0) * m2, I + (h / 2.0) * l2, N, Beta, Theta);
			l3 = func_I(S + (h / 2.0) * k2, E + (h / 2.0) * m2, I + (h / 2.0) * l2, N, Gamma, Theta);
			//k3 = func_S(S + (h / 2.0) * k2, I, N, Beta, Mu);
			//l3 = func_I(S, I + (h / 2.0) * l2, N, Beta, Gamma, Mu);

			k4 = func_S(S + (h / 2.0) * k3, E + (h / 2.0) * m3, I + (h / 2.0) * l3, Beta, N);
			m4 = func_E(S + (h / 2.0) * k3, E + (h / 2.0) * m3, I + (h / 2.0) * l3, N, Beta, Theta);
			l4 = func_I(S + (h / 2.0) * k3, E + (h / 2.0) * m3, I + (h / 2.0) * l3, N, Gamma, Theta);
			//k4 = func_S(S + h * k3, I, N, Beta, Mu);
			//l4 = func_I(S, I + h * l3, N, Beta, Gamma, Mu);
			res[0] = S + (h / 6.0) * (k1 + 2.0 * k2 + 2.0 * k3 + k4);
			res[1] = E + (h / 6.0) * (m1 + 2.0 * m2 + 2.0 * m3 + m4);
			res[2] = I + (h / 6.0) * (l1 + 2.0 * l2 + 2.0 * l3 + l4);	 
			
			return res;
		}

		/*double RKS(double S, double I, int N, double Beta, double Gamma, double Mu, double h) {
			double k1, k2, k3, k4;
			double res;
			k1 = func_S(S, I, N, Beta, Mu);
			k2 = func_S(S + 0.5 * h * k1, I, N, Beta, Mu);
			k3 = func_S(S + 0.5 * h * k2, I, N, Beta, Mu);
			k4 = func_S(S + h * k3, I, N, Beta, Mu);
			res = S + (h / 6.0) * (k1 + 2.0 * k2 + 2.0 * k3 + k4);
			return res;
		}
		double RKI(double S, double I, int N, double Beta, double Gamma, double Mu, double h) {
			double k1, k2, k3, k4;
			double res;
			k1 = func_I(S, I, N, Beta, Gamma, Mu);
			k2 = func_I(S, I + 0.5 * h * k1, N, Beta, Gamma, Mu);
			k3 = func_I(S, I + 0.5 * h * k2, N, Beta, Gamma, Mu);
			k4 = func_I(S, I + h * k3, N, Beta, Gamma, Mu);
			res = I + (h / 6.0) * (k1 + 2.0 * k2 + 2.0 * k3 + k4);
			return res;
		}
		double RKR(double S, double I, double R, int N, double Beta, double Gamma, double Mu, double h) {
			double k1, k2, k3, k4;
			double res;
			k1 = func_R(I, R, Gamma, Mu);
			k2 = func_R(I, R + 0.5*h*k1, Gamma, Mu);
			k3 = func_R(I, R + 0.5*h*k2, Gamma, Mu);
			k4 = func_R(I, R + h*k3, Gamma, Mu);
			res = R + (h / 6.0) * (k1 + 2.0 * k2 + 2.0 * k3 + k4);
			return res;
		}*/

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		label8->Visible = false;
		label9->Visible = false;

		zedGraphControl1->Visible = true;
		zedGraphControl2->Visible = false;
		zedGraphControl3->Visible = false;
		zedGraphControl4->Visible = false;
		zedGraphControl5->Visible = false;
		zedGraphControl6->Visible = false;
		GraphPane^ panelSt = zedGraphControl1->GraphPane;
		GraphPane^ panelEt = zedGraphControl6->GraphPane;
		GraphPane^ panelIt = zedGraphControl2->GraphPane;
		GraphPane^ panelRt = zedGraphControl3->GraphPane;
		GraphPane^ panelIS = zedGraphControl4->GraphPane;
		GraphPane^ panelSIRt = zedGraphControl5->GraphPane;
		panelSt->CurveList->Clear();
		panelEt->CurveList->Clear();
		panelIt->CurveList->Clear();
		panelRt->CurveList->Clear();
		panelIS->CurveList->Clear();
		panelSIRt->CurveList->Clear();
		PointPairList^ St = gcnew ZedGraph::PointPairList();
		PointPairList^ Et = gcnew ZedGraph::PointPairList();
		PointPairList^ It = gcnew ZedGraph::PointPairList();
		PointPairList^ Rt = gcnew ZedGraph::PointPairList();
		PointPairList^ IS = gcnew ZedGraph::PointPairList();

		panelSt->XAxis->Title->Text = "t";
		panelSt->YAxis->Title->Text = "S";
		panelSt->Title->Text = "График S(t)";
		panelEt->XAxis->Title->Text = "t";
		panelEt->YAxis->Title->Text = "S";
		panelEt->Title->Text = "График E(t)";
		panelIt->XAxis->Title->Text = "t";
		panelIt->YAxis->Title->Text = "I";
		panelIt->Title->Text = "График I(t)";
		panelRt->XAxis->Title->Text = "t";
		panelRt->YAxis->Title->Text = "R";
		panelRt->Title->Text = "График R(t)";
		panelIS->XAxis->Title->Text = "S";
		panelIS->YAxis->Title->Text = "I";
		panelIS->Title->Text = "График I(S)";
		panelSIRt->XAxis->Title->Text = "t";
		panelSIRt->YAxis->Title->Text = "S(t), I(t), R(t)";
		panelSIRt->Title->Text = "Графики S(t), I(t), R(t)";

		int N = Convert::ToInt64(textBox1->Text);
		double Theta = Convert::ToDouble(textBox2->Text);
		double Beta = Convert::ToDouble(textBox6->Text);
		double Gamma = Convert::ToDouble(textBox7->Text);

		double R0 = (Beta) / (Gamma + Theta);
		//textBox8->Text = Convert::ToString(R0);
		if (R0 > 1) {
			label8->Visible = true;
			label9->Visible = false;
		}
		else {
			label8->Visible = false;
			label9->Visible = true;
		}


		//double h0 = Convert::ToDouble(textBox3->Text);
		double h0 = 1;
		int I0 = Convert::ToInt64(textBox4->Text);
		double tmax = Convert::ToDouble(textBox5->Text);

		double t = 0;
		double h = h0;

		double S, E, I, R = 0;
		I = I0;
		S = N - I0;
		R = N - S - I;
		int i = 0;
		vector<double> temp(2);
		//dataGridView1->Rows->Clear();
		while (t <= tmax) {
			St->Add(t, S);
			Et->Add(t, E);
			It->Add(t, I);
			Rt->Add(t, R);
			IS->Add(S, I);

			//dataGridView1->Rows->Add();
			//dataGridView1->Rows[i]->Cells[0]->Value = t;
			//dataGridView1->Rows[i]->Cells[1]->Value = S;
			//dataGridView1->Rows[i]->Cells[2]->Value = I;
			//dataGridView1->Rows[i]->Cells[3]->Value = R;

			temp = Runge_Kutta(S, E, I, R, N, Beta, Gamma, Theta, h);
			S = temp[0];
			E = temp[1];
			I = temp[2];
			R = N - S - E - I;
			//if (t != 0) Gamma = 1 / t;
			/*double tempS = RKS(S, I, N, Beta, Gamma, Mu, h);
			double tempI = RKI(S, I, N, Beta, Gamma, Mu, h);
			double tempR = RKR(S, I, R, N, Beta, Gamma, Mu, h);
			S = tempS;
			I = tempI;
			R = tempR;*/
			t += h;
			i++;
		}

		// Интервал, где есть данные
		double xmin_limit = 0 - 5;
		double xmax_limit = tmax + 5;

		LineItem^ CurveSt = panelSt->AddCurve("S(t)", St, Color::Red, SymbolType::None);
		LineItem^ CurveEt = panelSt->AddCurve("E(t)", Et, Color::Aquamarine, SymbolType::None);
		LineItem^ CurveIt = panelIt->AddCurve("I(t)", It, Color::Blue, SymbolType::None);
		LineItem^ CurveRt = panelRt->AddCurve("R(t)", Rt, Color::Green, SymbolType::None);
		LineItem^ CurveIS = panelIS->AddCurve("I(S(t))", IS, Color::Purple, SymbolType::None);
		LineItem^ CurveSt1 = panelSIRt->AddCurve("S(t)", St, Color::Red, SymbolType::None);
		LineItem^ CurveIt1 = panelSIRt->AddCurve("I(t)", It, Color::Blue, SymbolType::None);
		LineItem^ CurveRt1 = panelSIRt->AddCurve("R(t)", Rt, Color::Green, SymbolType::None);
		PointPairList^ SIN = gcnew ZedGraph::PointPairList();
		t = 0;
		int tempI = I0;
		int tempS = N - I0;
		//SIN->Add(0, N);
		for(int i = 0; i <= N; i++) {
			SIN->Add(i, N-i);
		}
		LineItem^ CurveSIN = panelIS->AddCurve("S + I = N", SIN, Color::Yellow, SymbolType::None);

		panelSt->XAxis->Scale->Min = xmin_limit;
		panelSt->XAxis->Scale->Max = xmax_limit;
		panelIt->XAxis->Scale->Min = xmin_limit;
		panelIt->XAxis->Scale->Max = xmax_limit;
		panelRt->XAxis->Scale->Min = xmin_limit;
		panelRt->XAxis->Scale->Max = xmax_limit;
		panelIS->XAxis->Scale->Min = 0 - 25;
		panelIS->XAxis->Scale->Max = N + 25;
		panelIS->YAxis->Scale->Min = 0 - 25;
		panelIS->YAxis->Scale->Max = N + 25;

		//--------------------------------------------------------------------------------------------------------------
		
		// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
		// В противном случае на рисунке будет показана только часть графика, 
		// которая умещается в интервалы по осям, установленные по умолчанию
		zedGraphControl1->AxisChange();
		// Обновляем график
		zedGraphControl1->Invalidate();

	}

	private: System::Void zedGraphControl1_Load(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (comboBox1->SelectedIndex == 0) {
			zedGraphControl1->Visible = true;
			zedGraphControl2->Visible = false;
			zedGraphControl3->Visible = false;
			zedGraphControl4->Visible = false;
			zedGraphControl5->Visible = false;
			zedGraphControl6->Visible = false;
		}
		if (comboBox1->SelectedIndex == 1) {
			zedGraphControl1->Visible = false;
			zedGraphControl2->Visible = true;
			zedGraphControl3->Visible = false;
			zedGraphControl4->Visible = false;
			zedGraphControl5->Visible = false;
			zedGraphControl6->Visible = false;
		}
		if (comboBox1->SelectedIndex == 2) {
			zedGraphControl1->Visible = false;
			zedGraphControl2->Visible = false;
			zedGraphControl3->Visible = true;
			zedGraphControl4->Visible = false;
			zedGraphControl5->Visible = false;
			zedGraphControl6->Visible = false;
		}
		if (comboBox1->SelectedIndex == 3) {
			zedGraphControl1->Visible = false;
			zedGraphControl2->Visible = false;
			zedGraphControl3->Visible = false;
			zedGraphControl4->Visible = true;
			zedGraphControl5->Visible = false;
			zedGraphControl6->Visible = false;
		}
		if (comboBox1->SelectedIndex == 4) {
			zedGraphControl1->Visible = false;
			zedGraphControl2->Visible = false;
			zedGraphControl3->Visible = false;
			zedGraphControl4->Visible = false;
			zedGraphControl5->Visible = true;
			zedGraphControl6->Visible = false;
		}
		if (comboBox1->SelectedIndex == 5) {
			zedGraphControl1->Visible = false;
			zedGraphControl2->Visible = false;
			zedGraphControl3->Visible = false;
			zedGraphControl4->Visible = false;
			zedGraphControl5->Visible = false;
			zedGraphControl6->Visible = true;
		}
	}

};
}
