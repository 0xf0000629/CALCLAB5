#pragma once
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <math.h>
namespace CALCLAB5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ THEFORM
	/// </summary>
	public ref class THEFORM : public System::Windows::Forms::Form
	{
	public:
		THEFORM(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~THEFORM()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ table;
	protected:

	private: System::Windows::Forms::TextBox^ xStr;
	private: System::Windows::Forms::TextBox^ yStr;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ yLabel;
	private: System::Windows::Forms::Label^ xLabel;
	private: System::Windows::Forms::Button^ btnRUN;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ statusbar;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ inputm;

	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ function;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ xlStr;
	private: System::Windows::Forms::TextBox^ xrStr;



	private: System::Windows::Forms::TextBox^ nStr;
	private: System::Windows::Forms::ComboBox^ method;
	private: System::Windows::Forms::Label^ label5;


	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->table = (gcnew System::Windows::Forms::DataGridView());
			this->xStr = (gcnew System::Windows::Forms::TextBox());
			this->yStr = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->inputm = (gcnew System::Windows::Forms::ComboBox());
			this->yLabel = (gcnew System::Windows::Forms::Label());
			this->xLabel = (gcnew System::Windows::Forms::Label());
			this->btnRUN = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->statusbar = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->method = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->xrStr = (gcnew System::Windows::Forms::TextBox());
			this->nStr = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->function = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->xlStr = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// table
			// 
			this->table->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->table->Location = System::Drawing::Point(12, 211);
			this->table->Name = L"table";
			this->table->Size = System::Drawing::Size(728, 129);
			this->table->TabIndex = 0;
			// 
			// xStr
			// 
			this->xStr->Location = System::Drawing::Point(11, 58);
			this->xStr->Name = L"xStr";
			this->xStr->Size = System::Drawing::Size(384, 30);
			this->xStr->TabIndex = 1;
			// 
			// yStr
			// 
			this->yStr->Location = System::Drawing::Point(11, 123);
			this->yStr->Name = L"yStr";
			this->yStr->Size = System::Drawing::Size(384, 30);
			this->yStr->TabIndex = 2;
			this->yStr->TextChanged += gcnew System::EventHandler(this, &THEFORM::yStr_TextChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->inputm);
			this->groupBox1->Controls->Add(this->yLabel);
			this->groupBox1->Controls->Add(this->xLabel);
			this->groupBox1->Controls->Add(this->xStr);
			this->groupBox1->Controls->Add(this->yStr);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(401, 167);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"INPUT AREA 1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(154, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(68, 29);
			this->label1->TabIndex = 7;
			this->label1->Text = L"input:";
			this->label1->Click += gcnew System::EventHandler(this, &THEFORM::label1_Click);
			// 
			// inputm
			// 
			this->inputm->FormattingEnabled = true;
			this->inputm->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"normal input", L"from file", L"choose function" });
			this->inputm->Location = System::Drawing::Point(228, 20);
			this->inputm->Name = L"inputm";
			this->inputm->Size = System::Drawing::Size(125, 31);
			this->inputm->TabIndex = 6;
			this->inputm->SelectedIndexChanged += gcnew System::EventHandler(this, &THEFORM::filec_SelectedIndexChanged);
			// 
			// yLabel
			// 
			this->yLabel->AutoSize = true;
			this->yLabel->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->yLabel->Location = System::Drawing::Point(6, 91);
			this->yLabel->Name = L"yLabel";
			this->yLabel->Size = System::Drawing::Size(85, 29);
			this->yLabel->TabIndex = 4;
			this->yLabel->Text = L"Y array";
			// 
			// xLabel
			// 
			this->xLabel->AutoSize = true;
			this->xLabel->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->xLabel->Location = System::Drawing::Point(6, 26);
			this->xLabel->Name = L"xLabel";
			this->xLabel->Size = System::Drawing::Size(87, 29);
			this->xLabel->TabIndex = 3;
			this->xLabel->Text = L"X array";
			// 
			// btnRUN
			// 
			this->btnRUN->Location = System::Drawing::Point(746, 30);
			this->btnRUN->Name = L"btnRUN";
			this->btnRUN->Size = System::Drawing::Size(110, 674);
			this->btnRUN->TabIndex = 5;
			this->btnRUN->Text = L"GO!!!!";
			this->btnRUN->UseVisualStyleBackColor = true;
			this->btnRUN->Click += gcnew System::EventHandler(this, &THEFORM::btnRUN_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 346);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(728, 358);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// statusbar
			// 
			this->statusbar->Location = System::Drawing::Point(12, 185);
			this->statusbar->Name = L"statusbar";
			this->statusbar->Size = System::Drawing::Size(728, 20);
			this->statusbar->TabIndex = 5;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->method);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->xrStr);
			this->groupBox2->Controls->Add(this->nStr);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->function);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->xlStr);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(419, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(321, 167);
			this->groupBox2->TabIndex = 8;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"INPUT AREA 2";
			// 
			// method
			// 
			this->method->FormattingEnabled = true;
			this->method->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"lagrange", L"newton split", L"newton equal range",
					L"gauss interpolation"
			});
			this->method->Location = System::Drawing::Point(128, 129);
			this->method->Name = L"method";
			this->method->Size = System::Drawing::Size(186, 31);
			this->method->TabIndex = 12;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(6, 131);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(94, 29);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Method:";
			// 
			// xrStr
			// 
			this->xrStr->Location = System::Drawing::Point(204, 61);
			this->xrStr->Name = L"xrStr";
			this->xrStr->Size = System::Drawing::Size(111, 30);
			this->xrStr->TabIndex = 8;
			// 
			// nStr
			// 
			this->nStr->Location = System::Drawing::Point(128, 97);
			this->nStr->Name = L"nStr";
			this->nStr->Size = System::Drawing::Size(111, 30);
			this->nStr->TabIndex = 9;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(123, 20);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 29);
			this->label2->TabIndex = 7;
			this->label2->Text = L"f(x)";
			// 
			// function
			// 
			this->function->FormattingEnabled = true;
			this->function->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"sin(x)", L"cos(x)" });
			this->function->Location = System::Drawing::Point(189, 20);
			this->function->Name = L"function";
			this->function->Size = System::Drawing::Size(125, 31);
			this->function->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(6, 98);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(117, 29);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Points (N):";
			this->label3->Click += gcnew System::EventHandler(this, &THEFORM::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(123, 61);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(75, 29);
			this->label4->TabIndex = 3;
			this->label4->Text = L"<= x <=";
			this->label4->Click += gcnew System::EventHandler(this, &THEFORM::label4_Click);
			// 
			// xlStr
			// 
			this->xlStr->Location = System::Drawing::Point(6, 61);
			this->xlStr->Name = L"xlStr";
			this->xlStr->Size = System::Drawing::Size(111, 30);
			this->xlStr->TabIndex = 1;
			// 
			// THEFORM
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(868, 716);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->statusbar);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnRUN);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->table);
			this->Name = L"THEFORM";
			this->Text = L"THEFORM";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: double to_double(System::String^ str) {
		const char* chars = (const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(str)).ToPointer();
		std::string ss = chars;

		// Free the allocated memory for const char*
		System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr((void*)chars));
		std::istringstream iss(ss);
		double result;
		iss >> result;
		return result;
	}
	private: std::string to_normal(System::String^ str) {
		const char* chars = (const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(str)).ToPointer();
		std::string ss = chars;
		return ss;
	}
	private: System::String^ to_system(std::string s) {
		array<Byte>^ bytes = gcnew array<Byte>(s.length());
		System::Runtime::InteropServices::Marshal::Copy((IntPtr)(char*)s.c_str(), bytes, 0, s.length());

		System::String^ managedString = System::Text::Encoding::UTF8->GetString(bytes);
		return managedString;
	}
	private: double min(double a, double b) {
		if (a < b) return a; else return b;
	}
	private: double max(double a, double b) {
		if (a > b) return a; else return b;
	}
	private: void drawitall(double minx, double miny, double maxx, double maxy, std::vector <double> vx, std::vector <double> vy, System::String^ col) {
		Graphics^ canvas = pictureBox1->CreateGraphics();
		Color c_color = Color::FromName(col);
		Pen^ colorPen = (gcnew Pen(c_color, 2.0));

		Drawing::Font^ font = (gcnew Drawing::Font("Arial", 12));
		Brush^ brush = Brushes::Black;
		Brush^ brushr = Brushes::Red;

		SizeF textSize;

		double horiz = maxx - minx;
		double vert = maxy - miny;

		try {
			for (int i = 0;i < vx.size() - 1;i++) {
				double gx1 = vx[i];double gx2 = vx[i + 1];
				double gy1 = vy[i];double gy2 = vy[i + 1];
				canvas->DrawLine(colorPen,
					float((gx1 - minx) / horiz * pictureBox1->Width),
					float((1 - (gy1 - miny) / vert) * pictureBox1->Height),
					float((gx2 - minx) / horiz * pictureBox1->Width),
					float((1 - (gy2 - miny) / vert) * pictureBox1->Height));
			}
		}
		catch (...) {
		}
		return;
	}
	private: void drawdots(double minx, double miny, double maxx, double maxy, std::vector <double> vx, std::vector <double> vy) {
		Graphics^ canvas = pictureBox1->CreateGraphics();
		Color c_color = Color::FromName("Black");
		Pen^ colorPen = (gcnew Pen(c_color, 5.0));

		Drawing::Font^ font = (gcnew Drawing::Font("Arial", 12));
		Brush^ brush = Brushes::Black;
		Brush^ brushr = Brushes::Red;

		SizeF textSize;

		double horiz = maxx - minx;
		double vert = maxy - miny;

		for (int i = 0;i < vx.size();i++) {
			double gx1 = vx[i];
			double gy1 = vy[i];
			canvas->DrawEllipse(colorPen, (gx1 - minx) / horiz * pictureBox1->Width,
				(1 - (gy1 - miny) / vert) * pictureBox1->Height, 1.0, 1);
		}
		return;
	}
	private: void canv_clear(double minx, double miny, double maxx, double maxy) {
		Graphics^ canvas = pictureBox1->CreateGraphics();
		Color c_white = Color::FromName("White");
		canvas->Clear(c_white);

		Color c_color = Color::FromName("LightGray");
		Pen^ colorPen = (gcnew Pen(c_color, 2.0));

		Drawing::Font^ font = (gcnew Drawing::Font("Arial", 12));
		Brush^ brush = Brushes::LightGray;
		Brush^ brushr = Brushes::Red;

		SizeF textSize;

		double horiz = maxx - minx;
		double vert = maxy - miny;

		float x1 = 0;
		float x2 = 0;
		float y1 = 0;
		float y2 = 0;

		double tx = 1;
		while (fabs(horiz) < 10) { horiz *= 10; tx *= 10; }
		double xrange = 1 / tx;
		horiz /= tx;
		double ty = 1;
		while (fabs(vert) < 10) { vert *= 10; ty *= 10; }
		double yrange = 1 / ty;
		vert /= ty;

		for (double i = floor(minx); i < ceil(maxx); i += xrange*4) {
			x1 = i;
			x2 = i;
			canvas->DrawLine(colorPen,
				(x1 - minx) / horiz * pictureBox1->Width,
				pictureBox1->Height + 5,
				(x2 - minx) / horiz * pictureBox1->Width,
				pictureBox1->Height - 5);
			textSize = canvas->MeasureString((i).ToString("F2"), font);
			canvas->DrawString((i).ToString("F2"), font, brush,
				(x1 - minx) / horiz * pictureBox1->Width - textSize.Width / 2,
				pictureBox1->Height - textSize.Height);
		}

		for (double i = floor(miny); i < ceil(maxy); i += yrange*4) {
			y1 = i;
			y2 = i;
			canvas->DrawLine(colorPen,
				-5,
				(1 - (y1 - miny) / vert) * pictureBox1->Height,
				5,
				(1 - (y2 - miny) / vert) * pictureBox1->Height);
			textSize = canvas->MeasureString((i).ToString("F2"), font);
			canvas->DrawString((i).ToString("F2"), font, brush,
				5,
				(1 - ((y1)-miny) / vert) * pictureBox1->Height - textSize.Height / 2);
		}
		return;
	}
	private: std::vector<std::string> split(std::string k) {
		std::vector<std::string> result;
		System::String^ s = to_system(k);
		array<System::String^>^ parts = s->Split(gcnew array<Char>{' '}, StringSplitOptions::RemoveEmptyEntries);

		for (int i = 0; i < parts->Length; i++)
		{
			System::String^ b = parts[i];
			result.push_back(to_normal(b));
		}

		return result;
	}
	private: void tableit(std::vector <std::string> a) {
		std::vector <std::vector<std::string> > v;
		int i, j;
		for (i = 0;i < a.size();i++) {
			v.push_back(split(a[i]));
		}
		table->ColumnHeadersVisible = true;
		table->Columns->Clear();
		for (j = 0;j < v[0].size();j++) {
			table->Columns->Add(to_system(v[0][j]), to_system(v[0][j]));
		}
		for (i = 1;i < v.size();i++) {
			table->Rows->Add();
			for (j = 0;j < v[i].size();j++) {
				table->Rows[i - 1]->Cells[j]->Value = to_system(v[i][j]);
			}
		}
		return;
	}
	private: System::Void yStr_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
		   double langr(std::vector <double>& vx, std::vector <double>& vy, double x) {
			   int i, j, n = vx.size();
			   double ans = 0;
			   for (i = 0;i < n;i++) {
				   double top = 1;
				   double bottom = 1;
				   for (j = 0;j < n;j++) {
					   if (j != i) {
						   top *= (x - vx[j]);
						   bottom *= (vx[i] - vx[j]);
					   }
				   }
				   ans += top / bottom * vy[i];
			   }
			   return ans;
		   }
		   double f_mul(std::vector <double>& vx, std::vector <double>& vy, int i, int j) {
			   if (i == j) return vy[i];
			   else return (f_mul(vx, vy, i + 1, j) - f_mul(vx, vy, i, j - 1)) / (vx[j] - vx[i]);
		   }
		   double newton_split(std::vector <double>& vx, std::vector <double>& vy, double x) {
			   int i = 0;
			   double ans = 0, ml = 1;
			   for (i = 0;i < vx.size();i++) {
				   ans += f_mul(vx, vy, 0, i) * ml;
				   ml *= (x - vx[i]);
			   }
			   return ans;
		   }
		   double min_dist(std::vector <double>& vx, double x) {
			   int ans = 0;
			   double mini = 9999999;
			   for (int i = 0;i < vx.size();i++) {
				   if (fabs(x - vx[i]) < mini) {
					   mini = fabs(x - vx[i]);
					   ans = i;
				   }
			   }
			   return ans;
		   }
		   double delta_rec(std::vector <double>& vx, std::vector <double>& vy, double i, int pow) {
			   if (pow == 0) {
				   return vy[i];
			   }
			   else {
				   return delta_rec(vx, vy, i + 1, pow - 1) - delta_rec(vx, vy, i, pow - 1);
			   }
		   }
		   double newton_eq(std::vector <double>& vx, std::vector <double>& vy, double x) {
			   int i = 0;
			   //int pos = min_dist(vx, x);
			   int pos = 0;
			   double t = (x - vx[pos]) / (vx[1] - vx[0]);
			   double ans = 0, ml = 1, fact = 1;
			   for (i = 0;i < vx.size()-pos;i++) {
				   if ((x - vx[pos]) >= 0) {
					   ans += delta_rec(vx, vy, pos, i) * ml / fact;
					   ml *= (t - i);
				   }
				   else {
					   ans += delta_rec(vx, vy, vx.size() - 1 - i, i) * ml / fact;
					   ml *= (t + i);
				   }
				   if (i != 0)fact *= (i + 1);
			   }
			   return ans;
		   }
		   double delta_mid(std::vector <double>& vx, std::vector <double>& vy, double i, int pow) {
			   if (pow == 0) {
				   return vy[i + vx.size() / 2];
			   }
			   else {
				   return delta_mid(vx, vy, i + 1, pow - 1) - delta_mid(vx, vy, i, pow - 1);
			   }
		   }
		   double gauss_inter(std::vector <double>& vx, std::vector <double>& vy, double x, double a) {
			   int i = 0, facti = 2;
			   double t = (x - a) / (vx[1] - vx[0]);
			   double ans = 0, ml = 1, fact = 1, pos1 = 0, pos2 = 0;
			   ans += delta_mid(vx, vy, pos1, 0);
			   if (x < a) pos2--; ml *= t;
			   ans += delta_mid(vx, vy, pos2, 1) * ml;
			   pos1--; pos2--;
			   for (i = 2;i <= vx.size();i++) {
				   fact *= facti;
				   if (x < a) ml *= (t + i - 1); else ml *= (t - i + 1);
				   ans += delta_mid(vx, vy, pos1, facti) * ml / fact;
				   if (facti == vx.size() - 1) break;

				   fact *= (facti + 1);
				   if (x >= a) ml *= (t + i - 1); else ml *= (t - i + 1);
				   ans += delta_mid(vx, vy, pos2, facti + 1) * ml / fact;
				   if (facti + 1 == vx.size() - 1) break;

				   pos1--; pos2--; facti += 2;
			   }
			   return ans;
		   }
	private: System::Void btnRUN_Click(System::Object^ sender, System::EventArgs^ e) {
		std::vector <double> vx;
		std::vector <double> vy;
		std::string xfs, yfs;

		if (inputm->SelectedIndex == 0) {
			xfs = to_normal(xStr->Text);
			yfs = to_normal(yStr->Text);
		}
		if (inputm->SelectedIndex == 1) {
			std::ifstream fin("input.txt");
			getline(fin, xfs);
			getline(fin, yfs);
			xStr->Text = to_system(xfs);
			yStr->Text = to_system(yfs);
		}
		if (inputm->SelectedIndex == 2) {
			double ns = to_double(nStr->Text);
			double xranges = fabs(to_double(xrStr->Text) - to_double(xlStr->Text))/(ns-1);
			for (double i = 0;i < ns;i++) {
				xfs += to_normal((to_double(xlStr->Text) + i * xranges).ToString("F5")+" ");
				if (function->SelectedIndex == 0)
					yfs += to_normal(sin(to_double(xlStr->Text) + i * xranges).ToString("F5") + " ");
				else
					yfs += to_normal(cos(to_double(xlStr->Text) + i * xranges).ToString("F5") + " ");
			}
			xStr->Text = to_system(xfs)->Replace(",", ".");
			yStr->Text = to_system(yfs)->Replace(",", ".");
			xfs = to_normal(xStr->Text);
			yfs = to_normal(yStr->Text);
		}
		try {
			std::vector <std::string> vxs = split(xfs);
			vx.resize(vxs.size());
			for (int i = 0;i < vxs.size();i++) {
				vx[i] = to_double(to_system(vxs[i]));
			}
		}
		catch (...) {
			statusbar->Text = "X value input is invalid.";
			return;
		}
		try {
			std::vector <std::string> vys = split(yfs);
			vy.resize(vys.size());
			for (int i = 0;i < vys.size();i++) {
				vy[i] = to_double(to_system(vys[i]));
			}
		}
		catch (...) {
			statusbar->Text = "Y value input is invalid.";
			return;
		}
		if (vx.size() != vy.size()) {
			statusbar->Text = "X input size isn't equal to the Y input size.";
			return;
		}
		int n = vx.size();
		double minx = 999999999, miny = 999999999;
		double maxx = -999999999, maxy = -999999999;
		switch (method->SelectedIndex) {
		case 0: {
			double xrange = (vx[vx.size() - 1] - vx[0]) / 30;
			std::vector <double> newspx;
			std::vector <double> newsp;
			for (double i = vx[0];i <= vx[vx.size() - 1];i += xrange) {
				double ans = langr(vx, vy, i);
				minx = min(minx, i);
				miny = min(miny, ans);
				maxx = max(maxx, i);
				maxy = max(maxy, ans);
				newspx.push_back(i);
				newsp.push_back(ans);
			}
			canv_clear(minx, miny, maxx, maxy);
			drawitall(minx, miny, maxx, maxy, newspx, newsp, "Blue");
			break;
		}
		case 1: {
			double xrange = (vx[vx.size() - 1] - vx[0])/30;
			std::vector <double> newspx;
			std::vector <double> newsp;
			for (double i = vx[0];i <= vx[vx.size()-1];i+=xrange) {
				double ans = newton_split(vx, vy, i);
				minx = min(minx, i);
				miny = min(miny, ans);
				maxx = max(maxx, i);
				maxy = max(maxy, ans);
				newspx.push_back(i);
				newsp.push_back(ans);
			}
			canv_clear(minx, miny, maxx, maxy);
			drawitall(minx, miny, maxx, maxy, newspx, newsp, "Red");

			std::vector <std::string> to_table(n + 1);
			to_table[0] = ". ";
			for (int i = 1;i <= n;i++) { to_table[0] += to_normal("i=" + (i - 1).ToString() + " "); }
			for (int i = 0;i < n;i++) {
				to_table[i + 1] += to_normal("j=" + i.ToString() + " ");
				for (int j = 0;j <= i;j++) {
					to_table[i + 1] += to_normal(f_mul(vx, vy, j, i).ToString("F5") + " ");
				}
			}
			tableit(to_table);
			break;
		}
		case 2: {
			double xrange = (vx[vx.size() - 1] - vx[0]) / 30;
			std::vector <double> neweqx;
			std::vector <double> neweq;
			for (double i = vx[0];i <= vx[vx.size() - 1];i += xrange) {
				double ans = newton_eq(vx, vy, i);
				minx = min(minx, i);
				miny = min(miny, ans);
				maxx = max(maxx, i);
				maxy = max(maxy, ans);
				neweqx.push_back(i);
				neweq.push_back(ans);
			}
			canv_clear(minx, miny, maxx, maxy);
			drawitall(minx, miny, maxx, maxy, neweqx, neweq, "Pink");

			std::vector <std::string> to_table(n + 1);
			to_table[0] = "x ";
			for (int i = 0;i < n;i++) { to_table[0] += to_normal("d" + i.ToString() + "y "); }
			for (int i = 0;i < n;i++) {
				to_table[i + 1] += to_normal(vx[i].ToString("F5") + " ");
				for (int j = 0;j <= n - i - 1;j++) {
					to_table[i + 1] += to_normal(delta_rec(vx, vy, i, j).ToString("F5") + " ");
				}
			}
			tableit(to_table);
			break;
		}
		case 3: {
			double xrange = (vx[vx.size() - 1] - vx[0]) / 30;
			std::vector <double> gaussx;
			std::vector <double> gauss;
			for (double i = vx[0];i <= vx[vx.size() - 1];i += xrange) {
				double ans = gauss_inter(vx, vy, i, vx[vx.size()/2]);
				minx = min(minx, i);
				miny = min(miny, ans);
				maxx = max(maxx, i);
				maxy = max(maxy, ans);
				gaussx.push_back(i);
				gauss.push_back(ans);
			}
			canv_clear(minx, miny, maxx, maxy);
			drawitall(minx, miny, maxx, maxy, gaussx, gauss, "Green");
			break;
		}
		}
		drawdots(minx, miny, maxx, maxy, vx, vy);
		return;
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void filec_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
