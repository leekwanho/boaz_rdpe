#include <malloc.h>
#include <random>
#include <string>

#pragma once


namespace boaz_rdpe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Form1�� ���� ����Դϴ�.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: ������ �ڵ带 ���⿡ �߰��մϴ�.
			//
		}

	protected:
		/// <summary>
		/// ��� ���� ��� ���ҽ��� �����մϴ�.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^  ������;
	protected: 

	protected: 

	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  result;

	private: System::Windows::Forms::CheckBox^  ������;
	private: System::Windows::Forms::CheckBox^  ������;
	private: System::Windows::Forms::CheckBox^  ������;
	private: System::Windows::Forms::CheckBox^  �ڱ���;
	private: System::Windows::Forms::CheckBox^  �谭��;
	private: System::Windows::Forms::CheckBox^  ���μ�;
	private: System::Windows::Forms::CheckBox^  �̼���;
	private: System::Windows::Forms::CheckBox^  �ڼҿ�;
	private: System::Windows::Forms::CheckBox^  �ڹν�;
	private: System::Windows::Forms::CheckBox^  ����;

	private: System::Windows::Forms::CheckBox^  ��¿�;

	private: System::Windows::Forms::CheckBox^  �ۿ��;

	private: System::Windows::Forms::CheckBox^  ������;

	private: System::Windows::Forms::CheckBox^  ������;

	private: System::Windows::Forms::CheckBox^  �ڼ���;

	private: System::Windows::Forms::CheckBox^  �����;

	private: System::Windows::Forms::CheckBox^  ������;

	private: System::Windows::Forms::CheckBox^  ������;
	private: System::Windows::Forms::CheckBox^  ������;
	private: System::Windows::Forms::CheckBox^  �Ѽ���;

	private: System::Windows::Forms::CheckBox^  �����;

	private: System::Windows::Forms::CheckBox^  �ֿ���;

	private: System::Windows::Forms::CheckBox^  �־Ƹ�;

	private: System::Windows::Forms::CheckBox^  �ּ���;

	private: System::Windows::Forms::CheckBox^  �ֱ���;

	private: System::Windows::Forms::CheckBox^  ������;

	private: System::Windows::Forms::CheckBox^  ������;

	private: System::Windows::Forms::CheckBox^  ������;

	private: System::Windows::Forms::CheckBox^  �Ӱ���;

	private: System::Windows::Forms::CheckBox^  ������;

	private: System::Windows::Forms::CheckBox^  ���强;

	private: System::Windows::Forms::CheckBox^  ���ر�;

	private: System::Windows::Forms::CheckBox^  ���ֿ�;

	private: System::Windows::Forms::CheckBox^  �̼���;

	private: System::Windows::Forms::CheckBox^  �̶�;

	private: System::Windows::Forms::CheckBox^  �̵���;

	private: System::Windows::Forms::CheckBox^  �̰�ȣ;

	private: System::Windows::Forms::CheckBox^  �̰���;

	private: System::Windows::Forms::CheckBox^  ������;
	private: System::Windows::Forms::CheckBox^  kkjj123;
	private: System::Windows::Forms::CheckBox^  hansol;




	private: System::Windows::Forms::CheckBox^  ȫ����;

	private: System::Windows::Forms::CheckBox^  ���;

	private: System::Windows::Forms::CheckBox^  ���;

	private: System::Windows::Forms::CheckBox^  ��;

	private: System::Windows::Forms::CheckBox^  ����;

	private: System::Windows::Forms::CheckBox^  ������;

	private: System::Windows::Forms::CheckBox^  ���ذ�;

private: System::Windows::Forms::CheckBox^  �ӹμ�;

private: System::Windows::Forms::CheckBox^  ���ϱ�;

private: System::Windows::Forms::CheckBox^  ����;

private: System::Windows::Forms::CheckBox^  ���ΰ�;

private: System::Windows::Forms::CheckBox^  ���ֿ�;

private: System::Windows::Forms::CheckBox^  �����;

private: System::Windows::Forms::CheckBox^  �Ⱥ���;

private: System::Windows::Forms::CheckBox^  ����ȭ;

private: System::Windows::Forms::CheckBox^  ����ö;

private: System::Windows::Forms::CheckBox^  ����ȣ;

private: System::Windows::Forms::CheckBox^  ������;

private: System::Windows::Forms::CheckBox^  �ȸ�;

private: System::Windows::Forms::CheckBox^  ������;

private: System::Windows::Forms::CheckBox^  ������;

private: System::Windows::Forms::CheckBox^  ���μ�;

private: System::Windows::Forms::CheckBox^  �ڼ���;

private: System::Windows::Forms::CheckBox^  ������;

private: System::Windows::Forms::CheckBox^  �����;

private: System::Windows::Forms::CheckBox^  ������;

private: System::Windows::Forms::CheckBox^  �赵��;

private: System::Windows::Forms::CheckBox^  �質��;

private: System::Windows::Forms::CheckBox^  �Ǿƿ�;

private: System::Windows::Forms::CheckBox^  ���¿�;

private: System::Windows::Forms::CheckBox^  ����;

	private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::TextBox^  people;
private: System::Windows::Forms::Label^  label3;

	private:
		/// <summary>
		/// �ʼ� �����̳� �����Դϴ�.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����̳� ������ �ʿ��� �޼����Դϴ�.
		/// �� �޼����� ������ �ڵ� ������� �������� ���ʽÿ�.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->������ = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->result = (gcnew System::Windows::Forms::TextBox());
			this->������ = (gcnew System::Windows::Forms::CheckBox());
			this->������ = (gcnew System::Windows::Forms::CheckBox());
			this->������ = (gcnew System::Windows::Forms::CheckBox());
			this->�ڱ��� = (gcnew System::Windows::Forms::CheckBox());
			this->�谭�� = (gcnew System::Windows::Forms::CheckBox());
			this->���μ� = (gcnew System::Windows::Forms::CheckBox());
			this->�̼��� = (gcnew System::Windows::Forms::CheckBox());
			this->�ڼҿ� = (gcnew System::Windows::Forms::CheckBox());
			this->�ڹν� = (gcnew System::Windows::Forms::CheckBox());
			this->���� = (gcnew System::Windows::Forms::CheckBox());
			this->��¿� = (gcnew System::Windows::Forms::CheckBox());
			this->�ۿ�� = (gcnew System::Windows::Forms::CheckBox());
			this->������ = (gcnew System::Windows::Forms::CheckBox());
			this->������ = (gcnew System::Windows::Forms::CheckBox());
			this->�ڼ��� = (gcnew System::Windows::Forms::CheckBox());
			this->����� = (gcnew System::Windows::Forms::CheckBox());
			this->������ = (gcnew System::Windows::Forms::CheckBox());
			this->������ = (gcnew System::Windows::Forms::CheckBox());
			this->������ = (gcnew System::Windows::Forms::CheckBox());
			this->�Ѽ��� = (gcnew System::Windows::Forms::CheckBox());
			this->����� = (gcnew System::Windows::Forms::CheckBox());
			this->�ֿ��� = (gcnew System::Windows::Forms::CheckBox());
			this->�־Ƹ� = (gcnew System::Windows::Forms::CheckBox());
			this->�ּ��� = (gcnew System::Windows::Forms::CheckBox());
			this->�ֱ��� = (gcnew System::Windows::Forms::CheckBox());
			this->������ = (gcnew System::Windows::Forms::CheckBox());
			this->������ = (gcnew System::Windows::Forms::CheckBox());
			this->������ = (gcnew System::Windows::Forms::CheckBox());
			this->�Ӱ��� = (gcnew System::Windows::Forms::CheckBox());
			this->������ = (gcnew System::Windows::Forms::CheckBox());
			this->���强 = (gcnew System::Windows::Forms::CheckBox());
			this->���ر� = (gcnew System::Windows::Forms::CheckBox());
			this->���ֿ� = (gcnew System::Windows::Forms::CheckBox());
			this->�̼��� = (gcnew System::Windows::Forms::CheckBox());
			this->�̶� = (gcnew System::Windows::Forms::CheckBox());
			this->�̵��� = (gcnew System::Windows::Forms::CheckBox());
			this->�̰�ȣ = (gcnew System::Windows::Forms::CheckBox());
			this->�̰��� = (gcnew System::Windows::Forms::CheckBox());
			this->������ = (gcnew System::Windows::Forms::CheckBox());
			this->kkjj123 = (gcnew System::Windows::Forms::CheckBox());
			this->hansol = (gcnew System::Windows::Forms::CheckBox());
			this->ȫ���� = (gcnew System::Windows::Forms::CheckBox());
			this->��� = (gcnew System::Windows::Forms::CheckBox());
			this->��� = (gcnew System::Windows::Forms::CheckBox());
			this->�� = (gcnew System::Windows::Forms::CheckBox());
			this->���� = (gcnew System::Windows::Forms::CheckBox());
			this->������ = (gcnew System::Windows::Forms::CheckBox());
			this->���ذ� = (gcnew System::Windows::Forms::CheckBox());
			this->�ӹμ� = (gcnew System::Windows::Forms::CheckBox());
			this->���ϱ� = (gcnew System::Windows::Forms::CheckBox());
			this->���� = (gcnew System::Windows::Forms::CheckBox());
			this->���ΰ� = (gcnew System::Windows::Forms::CheckBox());
			this->���ֿ� = (gcnew System::Windows::Forms::CheckBox());
			this->����� = (gcnew System::Windows::Forms::CheckBox());
			this->�Ⱥ��� = (gcnew System::Windows::Forms::CheckBox());
			this->����ȭ = (gcnew System::Windows::Forms::CheckBox());
			this->����ö = (gcnew System::Windows::Forms::CheckBox());
			this->����ȣ = (gcnew System::Windows::Forms::CheckBox());
			this->������ = (gcnew System::Windows::Forms::CheckBox());
			this->�ȸ� = (gcnew System::Windows::Forms::CheckBox());
			this->������ = (gcnew System::Windows::Forms::CheckBox());
			this->������ = (gcnew System::Windows::Forms::CheckBox());
			this->���μ� = (gcnew System::Windows::Forms::CheckBox());
			this->�ڼ��� = (gcnew System::Windows::Forms::CheckBox());
			this->������ = (gcnew System::Windows::Forms::CheckBox());
			this->����� = (gcnew System::Windows::Forms::CheckBox());
			this->������ = (gcnew System::Windows::Forms::CheckBox());
			this->�赵�� = (gcnew System::Windows::Forms::CheckBox());
			this->�質�� = (gcnew System::Windows::Forms::CheckBox());
			this->�Ǿƿ� = (gcnew System::Windows::Forms::CheckBox());
			this->���¿� = (gcnew System::Windows::Forms::CheckBox());
			this->���� = (gcnew System::Windows::Forms::CheckBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->people = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// ������
			// 
			this->������->AutoSize = true;
			this->������->Location = System::Drawing::Point(417, 21);
			this->������->Name = L"������";
			this->������->Size = System::Drawing::Size(60, 16);
			this->������->TabIndex = 0;
			this->������->Text = L"������";
			this->������->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(378, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 12);
			this->label1->TabIndex = 1;
			this->label1->Text = L"1,2��";
			// 
			// result
			// 
			this->result->Location = System::Drawing::Point(12, 12);
			this->result->Multiline = true;
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(360, 371);
			this->result->TabIndex = 2;
			// 
			// ������
			// 
			this->������->AutoSize = true;
			this->������->Location = System::Drawing::Point(483, 21);
			this->������->Name = L"������";
			this->������->Size = System::Drawing::Size(60, 16);
			this->������->TabIndex = 3;
			this->������->Text = L"������";
			this->������->UseVisualStyleBackColor = true;
			// 
			// ������
			// 
			this->������->AutoSize = true;
			this->������->Location = System::Drawing::Point(549, 21);
			this->������->Name = L"������";
			this->������->Size = System::Drawing::Size(60, 16);
			this->������->TabIndex = 4;
			this->������->Text = L"������";
			this->������->UseVisualStyleBackColor = true;
			// 
			// ������
			// 
			this->������->AutoSize = true;
			this->������->Location = System::Drawing::Point(615, 21);
			this->������->Name = L"������";
			this->������->Size = System::Drawing::Size(60, 16);
			this->������->TabIndex = 5;
			this->������->Text = L"������";
			this->������->UseVisualStyleBackColor = true;
			// 
			// �ڱ���
			// 
			this->�ڱ���->AutoSize = true;
			this->�ڱ���->Location = System::Drawing::Point(681, 21);
			this->�ڱ���->Name = L"�ڱ���";
			this->�ڱ���->Size = System::Drawing::Size(60, 16);
			this->�ڱ���->TabIndex = 6;
			this->�ڱ���->Text = L"�ڱ���";
			this->�ڱ���->UseVisualStyleBackColor = true;
			// 
			// �谭��
			// 
			this->�谭��->AutoSize = true;
			this->�谭��->Location = System::Drawing::Point(681, 43);
			this->�谭��->Name = L"�谭��";
			this->�谭��->Size = System::Drawing::Size(60, 16);
			this->�谭��->TabIndex = 11;
			this->�谭��->Text = L"�谭��";
			this->�谭��->UseVisualStyleBackColor = true;
			// 
			// ���μ�
			// 
			this->���μ�->AutoSize = true;
			this->���μ�->Location = System::Drawing::Point(615, 43);
			this->���μ�->Name = L"���μ�";
			this->���μ�->Size = System::Drawing::Size(60, 16);
			this->���μ�->TabIndex = 10;
			this->���μ�->Text = L"���μ�";
			this->���μ�->UseVisualStyleBackColor = true;
			// 
			// �̼���
			// 
			this->�̼���->AutoSize = true;
			this->�̼���->Location = System::Drawing::Point(549, 43);
			this->�̼���->Name = L"�̼���";
			this->�̼���->Size = System::Drawing::Size(60, 16);
			this->�̼���->TabIndex = 9;
			this->�̼���->Text = L"�̼���";
			this->�̼���->UseVisualStyleBackColor = true;
			// 
			// �ڼҿ�
			// 
			this->�ڼҿ�->AutoSize = true;
			this->�ڼҿ�->Location = System::Drawing::Point(483, 43);
			this->�ڼҿ�->Name = L"�ڼҿ�";
			this->�ڼҿ�->Size = System::Drawing::Size(60, 16);
			this->�ڼҿ�->TabIndex = 8;
			this->�ڼҿ�->Text = L"�ڼҿ�";
			this->�ڼҿ�->UseVisualStyleBackColor = true;
			// 
			// �ڹν�
			// 
			this->�ڹν�->AutoSize = true;
			this->�ڹν�->Location = System::Drawing::Point(417, 43);
			this->�ڹν�->Name = L"�ڹν�";
			this->�ڹν�->Size = System::Drawing::Size(60, 16);
			this->�ڹν�->TabIndex = 7;
			this->�ڹν�->Text = L"�ڹν�";
			this->�ڹν�->UseVisualStyleBackColor = true;
			// 
			// ����
			// 
			this->����->AutoSize = true;
			this->����->Location = System::Drawing::Point(681, 87);
			this->����->Name = L"����";
			this->����->Size = System::Drawing::Size(48, 16);
			this->����->TabIndex = 21;
			this->����->Text = L"����";
			this->����->UseVisualStyleBackColor = true;
			// 
			// ��¿�
			// 
			this->��¿�->AutoSize = true;
			this->��¿�->Location = System::Drawing::Point(615, 87);
			this->��¿�->Name = L"��¿�";
			this->��¿�->Size = System::Drawing::Size(60, 16);
			this->��¿�->TabIndex = 20;
			this->��¿�->Text = L"��¿�";
			this->��¿�->UseVisualStyleBackColor = true;
			// 
			// �ۿ��
			// 
			this->�ۿ��->AutoSize = true;
			this->�ۿ��->Location = System::Drawing::Point(549, 87);
			this->�ۿ��->Name = L"�ۿ��";
			this->�ۿ��->Size = System::Drawing::Size(60, 16);
			this->�ۿ��->TabIndex = 19;
			this->�ۿ��->Text = L"�ۿ��";
			this->�ۿ��->UseVisualStyleBackColor = true;
			// 
			// ������
			// 
			this->������->AutoSize = true;
			this->������->Location = System::Drawing::Point(483, 87);
			this->������->Name = L"������";
			this->������->Size = System::Drawing::Size(60, 16);
			this->������->TabIndex = 18;
			this->������->Text = L"������";
			this->������->UseVisualStyleBackColor = true;
			// 
			// ������
			// 
			this->������->AutoSize = true;
			this->������->Location = System::Drawing::Point(417, 87);
			this->������->Name = L"������";
			this->������->Size = System::Drawing::Size(60, 16);
			this->������->TabIndex = 17;
			this->������->Text = L"������";
			this->������->UseVisualStyleBackColor = true;
			// 
			// �ڼ���
			// 
			this->�ڼ���->AutoSize = true;
			this->�ڼ���->Location = System::Drawing::Point(681, 65);
			this->�ڼ���->Name = L"�ڼ���";
			this->�ڼ���->Size = System::Drawing::Size(60, 16);
			this->�ڼ���->TabIndex = 16;
			this->�ڼ���->Text = L"�ڼ���";
			this->�ڼ���->UseVisualStyleBackColor = true;
			// 
			// �����
			// 
			this->�����->AutoSize = true;
			this->�����->Location = System::Drawing::Point(615, 65);
			this->�����->Name = L"�����";
			this->�����->Size = System::Drawing::Size(60, 16);
			this->�����->TabIndex = 15;
			this->�����->Text = L"�����";
			this->�����->UseVisualStyleBackColor = true;
			// 
			// ������
			// 
			this->������->AutoSize = true;
			this->������->Location = System::Drawing::Point(549, 65);
			this->������->Name = L"������";
			this->������->Size = System::Drawing::Size(60, 16);
			this->������->TabIndex = 14;
			this->������->Text = L"������";
			this->������->UseVisualStyleBackColor = true;
			// 
			// ������
			// 
			this->������->AutoSize = true;
			this->������->Location = System::Drawing::Point(483, 65);
			this->������->Name = L"������";
			this->������->Size = System::Drawing::Size(60, 16);
			this->������->TabIndex = 13;
			this->������->Text = L"������";
			this->������->UseVisualStyleBackColor = true;
			// 
			// ������
			// 
			this->������->AutoSize = true;
			this->������->Location = System::Drawing::Point(417, 65);
			this->������->Name = L"������";
			this->������->Size = System::Drawing::Size(60, 16);
			this->������->TabIndex = 12;
			this->������->Text = L"������";
			this->������->UseVisualStyleBackColor = true;
			// 
			// �Ѽ���
			// 
			this->�Ѽ���->AutoSize = true;
			this->�Ѽ���->Location = System::Drawing::Point(681, 175);
			this->�Ѽ���->Name = L"�Ѽ���";
			this->�Ѽ���->Size = System::Drawing::Size(60, 16);
			this->�Ѽ���->TabIndex = 41;
			this->�Ѽ���->Text = L"�Ѽ���";
			this->�Ѽ���->UseVisualStyleBackColor = true;
			// 
			// �����
			// 
			this->�����->AutoSize = true;
			this->�����->Location = System::Drawing::Point(615, 175);
			this->�����->Name = L"�����";
			this->�����->Size = System::Drawing::Size(60, 16);
			this->�����->TabIndex = 40;
			this->�����->Text = L"�����";
			this->�����->UseVisualStyleBackColor = true;
			// 
			// �ֿ���
			// 
			this->�ֿ���->AutoSize = true;
			this->�ֿ���->Location = System::Drawing::Point(549, 175);
			this->�ֿ���->Name = L"�ֿ���";
			this->�ֿ���->Size = System::Drawing::Size(60, 16);
			this->�ֿ���->TabIndex = 39;
			this->�ֿ���->Text = L"�ֿ���";
			this->�ֿ���->UseVisualStyleBackColor = true;
			// 
			// �־Ƹ�
			// 
			this->�־Ƹ�->AutoSize = true;
			this->�־Ƹ�->Location = System::Drawing::Point(483, 175);
			this->�־Ƹ�->Name = L"�־Ƹ�";
			this->�־Ƹ�->Size = System::Drawing::Size(60, 16);
			this->�־Ƹ�->TabIndex = 38;
			this->�־Ƹ�->Text = L"�־Ƹ�";
			this->�־Ƹ�->UseVisualStyleBackColor = true;
			// 
			// �ּ���
			// 
			this->�ּ���->AutoSize = true;
			this->�ּ���->Location = System::Drawing::Point(417, 175);
			this->�ּ���->Name = L"�ּ���";
			this->�ּ���->Size = System::Drawing::Size(60, 16);
			this->�ּ���->TabIndex = 37;
			this->�ּ���->Text = L"�ּ���";
			this->�ּ���->UseVisualStyleBackColor = true;
			// 
			// �ֱ���
			// 
			this->�ֱ���->AutoSize = true;
			this->�ֱ���->Location = System::Drawing::Point(681, 153);
			this->�ֱ���->Name = L"�ֱ���";
			this->�ֱ���->Size = System::Drawing::Size(60, 16);
			this->�ֱ���->TabIndex = 36;
			this->�ֱ���->Text = L"�ֱ���";
			this->�ֱ���->UseVisualStyleBackColor = true;
			// 
			// ������
			// 
			this->������->AutoSize = true;
			this->������->Location = System::Drawing::Point(615, 153);
			this->������->Name = L"������";
			this->������->Size = System::Drawing::Size(60, 16);
			this->������->TabIndex = 35;
			this->������->Text = L"������";
			this->������->UseVisualStyleBackColor = true;
			// 
			// ������
			// 
			this->������->AutoSize = true;
			this->������->Location = System::Drawing::Point(549, 153);
			this->������->Name = L"������";
			this->������->Size = System::Drawing::Size(60, 16);
			this->������->TabIndex = 34;
			this->������->Text = L"������";
			this->������->UseVisualStyleBackColor = true;
			// 
			// ������
			// 
			this->������->AutoSize = true;
			this->������->Location = System::Drawing::Point(483, 153);
			this->������->Name = L"������";
			this->������->Size = System::Drawing::Size(60, 16);
			this->������->TabIndex = 33;
			this->������->Text = L"������";
			this->������->UseVisualStyleBackColor = true;
			// 
			// �Ӱ���
			// 
			this->�Ӱ���->AutoSize = true;
			this->�Ӱ���->Location = System::Drawing::Point(417, 153);
			this->�Ӱ���->Name = L"�Ӱ���";
			this->�Ӱ���->Size = System::Drawing::Size(60, 16);
			this->�Ӱ���->TabIndex = 32;
			this->�Ӱ���->Text = L"�Ӱ���";
			this->�Ӱ���->UseVisualStyleBackColor = true;
			// 
			// ������
			// 
			this->������->AutoSize = true;
			this->������->Location = System::Drawing::Point(681, 131);
			this->������->Name = L"������";
			this->������->Size = System::Drawing::Size(60, 16);
			this->������->TabIndex = 31;
			this->������->Text = L"������";
			this->������->UseVisualStyleBackColor = true;
			// 
			// ���强
			// 
			this->���强->AutoSize = true;
			this->���强->Location = System::Drawing::Point(615, 131);
			this->���强->Name = L"���强";
			this->���强->Size = System::Drawing::Size(60, 16);
			this->���强->TabIndex = 30;
			this->���强->Text = L"���强";
			this->���强->UseVisualStyleBackColor = true;
			// 
			// ���ر�
			// 
			this->���ر�->AutoSize = true;
			this->���ر�->Location = System::Drawing::Point(549, 131);
			this->���ر�->Name = L"���ر�";
			this->���ر�->Size = System::Drawing::Size(60, 16);
			this->���ر�->TabIndex = 29;
			this->���ر�->Text = L"���ر�";
			this->���ر�->UseVisualStyleBackColor = true;
			// 
			// ���ֿ�
			// 
			this->���ֿ�->AutoSize = true;
			this->���ֿ�->Location = System::Drawing::Point(483, 131);
			this->���ֿ�->Name = L"���ֿ�";
			this->���ֿ�->Size = System::Drawing::Size(60, 16);
			this->���ֿ�->TabIndex = 28;
			this->���ֿ�->Text = L"���ֿ�";
			this->���ֿ�->UseVisualStyleBackColor = true;
			// 
			// �̼���
			// 
			this->�̼���->AutoSize = true;
			this->�̼���->Location = System::Drawing::Point(417, 131);
			this->�̼���->Name = L"�̼���";
			this->�̼���->Size = System::Drawing::Size(60, 16);
			this->�̼���->TabIndex = 27;
			this->�̼���->Text = L"�̼���";
			this->�̼���->UseVisualStyleBackColor = true;
			// 
			// �̶�
			// 
			this->�̶�->AutoSize = true;
			this->�̶�->Location = System::Drawing::Point(681, 109);
			this->�̶�->Name = L"�̶�";
			this->�̶�->Size = System::Drawing::Size(48, 16);
			this->�̶�->TabIndex = 26;
			this->�̶�->Text = L"�̶�";
			this->�̶�->UseVisualStyleBackColor = true;
			// 
			// �̵���
			// 
			this->�̵���->AutoSize = true;
			this->�̵���->Location = System::Drawing::Point(615, 109);
			this->�̵���->Name = L"�̵���";
			this->�̵���->Size = System::Drawing::Size(60, 16);
			this->�̵���->TabIndex = 25;
			this->�̵���->Text = L"�̵���";
			this->�̵���->UseVisualStyleBackColor = true;
			// 
			// �̰�ȣ
			// 
			this->�̰�ȣ->AutoSize = true;
			this->�̰�ȣ->Location = System::Drawing::Point(549, 109);
			this->�̰�ȣ->Name = L"�̰�ȣ";
			this->�̰�ȣ->Size = System::Drawing::Size(60, 16);
			this->�̰�ȣ->TabIndex = 24;
			this->�̰�ȣ->Text = L"�̰�ȣ";
			this->�̰�ȣ->UseVisualStyleBackColor = true;
			// 
			// �̰���
			// 
			this->�̰���->AutoSize = true;
			this->�̰���->Location = System::Drawing::Point(483, 109);
			this->�̰���->Name = L"�̰���";
			this->�̰���->Size = System::Drawing::Size(60, 16);
			this->�̰���->TabIndex = 23;
			this->�̰���->Text = L"�̰���";
			this->�̰���->UseVisualStyleBackColor = true;
			// 
			// ������
			// 
			this->������->AutoSize = true;
			this->������->Location = System::Drawing::Point(417, 109);
			this->������->Name = L"������";
			this->������->Size = System::Drawing::Size(60, 16);
			this->������->TabIndex = 22;
			this->������->Text = L"������";
			this->������->UseVisualStyleBackColor = true;
			// 
			// kkjj123
			// 
			this->kkjj123->AutoSize = true;
			this->kkjj123->Location = System::Drawing::Point(549, 344);
			this->kkjj123->Name = L"kkjj123";
			this->kkjj123->Size = System::Drawing::Size(60, 16);
			this->kkjj123->TabIndex = 74;
			this->kkjj123->Text = L"kkjj123";
			this->kkjj123->UseVisualStyleBackColor = true;
			// 
			// hansol
			// 
			this->hansol->AutoSize = true;
			this->hansol->Location = System::Drawing::Point(483, 344);
			this->hansol->Name = L"hansol";
			this->hansol->Size = System::Drawing::Size(62, 16);
			this->hansol->TabIndex = 73;
			this->hansol->Text = L"hansol";
			this->hansol->UseVisualStyleBackColor = true;
			// 
			// ȫ����
			// 
			this->ȫ����->AutoSize = true;
			this->ȫ����->Location = System::Drawing::Point(417, 344);
			this->ȫ����->Name = L"ȫ����";
			this->ȫ����->Size = System::Drawing::Size(60, 16);
			this->ȫ����->TabIndex = 72;
			this->ȫ����->Text = L"ȫ����";
			this->ȫ����->UseVisualStyleBackColor = true;
			// 
			// ���
			// 
			this->���->AutoSize = true;
			this->���->Location = System::Drawing::Point(681, 322);
			this->���->Name = L"���";
			this->���->Size = System::Drawing::Size(48, 16);
			this->���->TabIndex = 71;
			this->���->Text = L"���";
			this->���->UseVisualStyleBackColor = true;
			// 
			// ���
			// 
			this->���->AutoSize = true;
			this->���->Location = System::Drawing::Point(615, 322);
			this->���->Name = L"���";
			this->���->Size = System::Drawing::Size(48, 16);
			this->���->TabIndex = 70;
			this->���->Text = L"���";
			this->���->UseVisualStyleBackColor = true;
			// 
			// ��
			// 
			this->��->AutoSize = true;
			this->��->Location = System::Drawing::Point(549, 322);
			this->��->Name = L"��";
			this->��->Size = System::Drawing::Size(36, 16);
			this->��->TabIndex = 69;
			this->��->Text = L"��";
			this->��->UseVisualStyleBackColor = true;
			// 
			// ����
			// 
			this->����->AutoSize = true;
			this->����->Location = System::Drawing::Point(483, 322);
			this->����->Name = L"����";
			this->����->Size = System::Drawing::Size(48, 16);
			this->����->TabIndex = 68;
			this->����->Text = L"����";
			this->����->UseVisualStyleBackColor = true;
			// 
			// ������
			// 
			this->������->AutoSize = true;
			this->������->Location = System::Drawing::Point(417, 322);
			this->������->Name = L"������";
			this->������->Size = System::Drawing::Size(60, 16);
			this->������->TabIndex = 67;
			this->������->Text = L"������";
			this->������->UseVisualStyleBackColor = true;
			// 
			// ���ذ�
			// 
			this->���ذ�->AutoSize = true;
			this->���ذ�->Location = System::Drawing::Point(681, 300);
			this->���ذ�->Name = L"���ذ�";
			this->���ذ�->Size = System::Drawing::Size(60, 16);
			this->���ذ�->TabIndex = 66;
			this->���ذ�->Text = L"���ذ�";
			this->���ذ�->UseVisualStyleBackColor = true;
			// 
			// �ӹμ�
			// 
			this->�ӹμ�->AutoSize = true;
			this->�ӹμ�->Location = System::Drawing::Point(615, 300);
			this->�ӹμ�->Name = L"�ӹμ�";
			this->�ӹμ�->Size = System::Drawing::Size(60, 16);
			this->�ӹμ�->TabIndex = 65;
			this->�ӹμ�->Text = L"�ӹμ�";
			this->�ӹμ�->UseVisualStyleBackColor = true;
			// 
			// ���ϱ�
			// 
			this->���ϱ�->AutoSize = true;
			this->���ϱ�->Location = System::Drawing::Point(549, 300);
			this->���ϱ�->Name = L"���ϱ�";
			this->���ϱ�->Size = System::Drawing::Size(60, 16);
			this->���ϱ�->TabIndex = 64;
			this->���ϱ�->Text = L"���ϱ�";
			this->���ϱ�->UseVisualStyleBackColor = true;
			// 
			// ����
			// 
			this->����->AutoSize = true;
			this->����->Location = System::Drawing::Point(483, 300);
			this->����->Name = L"����";
			this->����->Size = System::Drawing::Size(48, 16);
			this->����->TabIndex = 63;
			this->����->Text = L"����";
			this->����->UseVisualStyleBackColor = true;
			// 
			// ���ΰ�
			// 
			this->���ΰ�->AutoSize = true;
			this->���ΰ�->Location = System::Drawing::Point(417, 300);
			this->���ΰ�->Name = L"���ΰ�";
			this->���ΰ�->Size = System::Drawing::Size(60, 16);
			this->���ΰ�->TabIndex = 62;
			this->���ΰ�->Text = L"���ΰ�";
			this->���ΰ�->UseVisualStyleBackColor = true;
			// 
			// ���ֿ�
			// 
			this->���ֿ�->AutoSize = true;
			this->���ֿ�->Location = System::Drawing::Point(681, 278);
			this->���ֿ�->Name = L"���ֿ�";
			this->���ֿ�->Size = System::Drawing::Size(60, 16);
			this->���ֿ�->TabIndex = 61;
			this->���ֿ�->Text = L"���ֿ�";
			this->���ֿ�->UseVisualStyleBackColor = true;
			// 
			// �����
			// 
			this->�����->AutoSize = true;
			this->�����->Location = System::Drawing::Point(615, 278);
			this->�����->Name = L"�����";
			this->�����->Size = System::Drawing::Size(60, 16);
			this->�����->TabIndex = 60;
			this->�����->Text = L"�����";
			this->�����->UseVisualStyleBackColor = true;
			// 
			// �Ⱥ���
			// 
			this->�Ⱥ���->AutoSize = true;
			this->�Ⱥ���->Location = System::Drawing::Point(549, 278);
			this->�Ⱥ���->Name = L"�Ⱥ���";
			this->�Ⱥ���->Size = System::Drawing::Size(60, 16);
			this->�Ⱥ���->TabIndex = 59;
			this->�Ⱥ���->Text = L"�Ⱥ���";
			this->�Ⱥ���->UseVisualStyleBackColor = true;
			// 
			// ����ȭ
			// 
			this->����ȭ->AutoSize = true;
			this->����ȭ->Location = System::Drawing::Point(483, 278);
			this->����ȭ->Name = L"����ȭ";
			this->����ȭ->Size = System::Drawing::Size(60, 16);
			this->����ȭ->TabIndex = 58;
			this->����ȭ->Text = L"����ȭ";
			this->����ȭ->UseVisualStyleBackColor = true;
			// 
			// ����ö
			// 
			this->����ö->AutoSize = true;
			this->����ö->Location = System::Drawing::Point(417, 278);
			this->����ö->Name = L"����ö";
			this->����ö->Size = System::Drawing::Size(60, 16);
			this->����ö->TabIndex = 57;
			this->����ö->Text = L"����ö";
			this->����ö->UseVisualStyleBackColor = true;
			// 
			// ����ȣ
			// 
			this->����ȣ->AutoSize = true;
			this->����ȣ->Location = System::Drawing::Point(681, 256);
			this->����ȣ->Name = L"����ȣ";
			this->����ȣ->Size = System::Drawing::Size(60, 16);
			this->����ȣ->TabIndex = 56;
			this->����ȣ->Text = L"����ȣ";
			this->����ȣ->UseVisualStyleBackColor = true;
			// 
			// ������
			// 
			this->������->AutoSize = true;
			this->������->Location = System::Drawing::Point(615, 256);
			this->������->Name = L"������";
			this->������->Size = System::Drawing::Size(60, 16);
			this->������->TabIndex = 55;
			this->������->Text = L"������";
			this->������->UseVisualStyleBackColor = true;
			// 
			// �ȸ�
			// 
			this->�ȸ�->AutoSize = true;
			this->�ȸ�->Location = System::Drawing::Point(549, 256);
			this->�ȸ�->Name = L"�ȸ�";
			this->�ȸ�->Size = System::Drawing::Size(48, 16);
			this->�ȸ�->TabIndex = 54;
			this->�ȸ�->Text = L"�ȸ�";
			this->�ȸ�->UseVisualStyleBackColor = true;
			// 
			// ������
			// 
			this->������->AutoSize = true;
			this->������->Location = System::Drawing::Point(483, 256);
			this->������->Name = L"������";
			this->������->Size = System::Drawing::Size(60, 16);
			this->������->TabIndex = 53;
			this->������->Text = L"������";
			this->������->UseVisualStyleBackColor = true;
			// 
			// ������
			// 
			this->������->AutoSize = true;
			this->������->Location = System::Drawing::Point(417, 256);
			this->������->Name = L"������";
			this->������->Size = System::Drawing::Size(60, 16);
			this->������->TabIndex = 52;
			this->������->Text = L"������";
			this->������->UseVisualStyleBackColor = true;
			// 
			// ���μ�
			// 
			this->���μ�->AutoSize = true;
			this->���μ�->Location = System::Drawing::Point(681, 234);
			this->���μ�->Name = L"���μ�";
			this->���μ�->Size = System::Drawing::Size(60, 16);
			this->���μ�->TabIndex = 51;
			this->���μ�->Text = L"���μ�";
			this->���μ�->UseVisualStyleBackColor = true;
			// 
			// �ڼ���
			// 
			this->�ڼ���->AutoSize = true;
			this->�ڼ���->Location = System::Drawing::Point(615, 234);
			this->�ڼ���->Name = L"�ڼ���";
			this->�ڼ���->Size = System::Drawing::Size(60, 16);
			this->�ڼ���->TabIndex = 50;
			this->�ڼ���->Text = L"�ڼ���";
			this->�ڼ���->UseVisualStyleBackColor = true;
			// 
			// ������
			// 
			this->������->AutoSize = true;
			this->������->Location = System::Drawing::Point(549, 234);
			this->������->Name = L"������";
			this->������->Size = System::Drawing::Size(60, 16);
			this->������->TabIndex = 49;
			this->������->Text = L"������";
			this->������->UseVisualStyleBackColor = true;
			// 
			// �����
			// 
			this->�����->AutoSize = true;
			this->�����->Location = System::Drawing::Point(483, 234);
			this->�����->Name = L"�����";
			this->�����->Size = System::Drawing::Size(60, 16);
			this->�����->TabIndex = 48;
			this->�����->Text = L"�����";
			this->�����->UseVisualStyleBackColor = true;
			// 
			// ������
			// 
			this->������->AutoSize = true;
			this->������->Location = System::Drawing::Point(417, 234);
			this->������->Name = L"������";
			this->������->Size = System::Drawing::Size(60, 16);
			this->������->TabIndex = 47;
			this->������->Text = L"������";
			this->������->UseVisualStyleBackColor = true;
			// 
			// �赵��
			// 
			this->�赵��->AutoSize = true;
			this->�赵��->Location = System::Drawing::Point(681, 212);
			this->�赵��->Name = L"�赵��";
			this->�赵��->Size = System::Drawing::Size(60, 16);
			this->�赵��->TabIndex = 46;
			this->�赵��->Text = L"�赵��";
			this->�赵��->UseVisualStyleBackColor = true;
			// 
			// �質��
			// 
			this->�質��->AutoSize = true;
			this->�質��->Location = System::Drawing::Point(615, 212);
			this->�質��->Name = L"�質��";
			this->�質��->Size = System::Drawing::Size(60, 16);
			this->�質��->TabIndex = 45;
			this->�質��->Text = L"�質��";
			this->�質��->UseVisualStyleBackColor = true;
			// 
			// �Ǿƿ�
			// 
			this->�Ǿƿ�->AutoSize = true;
			this->�Ǿƿ�->Location = System::Drawing::Point(549, 212);
			this->�Ǿƿ�->Name = L"�Ǿƿ�";
			this->�Ǿƿ�->Size = System::Drawing::Size(60, 16);
			this->�Ǿƿ�->TabIndex = 44;
			this->�Ǿƿ�->Text = L"�Ǿƿ�";
			this->�Ǿƿ�->UseVisualStyleBackColor = true;
			// 
			// ���¿�
			// 
			this->���¿�->AutoSize = true;
			this->���¿�->Location = System::Drawing::Point(483, 212);
			this->���¿�->Name = L"���¿�";
			this->���¿�->Size = System::Drawing::Size(60, 16);
			this->���¿�->TabIndex = 43;
			this->���¿�->Text = L"���¿�";
			this->���¿�->UseVisualStyleBackColor = true;
			// 
			// ����
			// 
			this->����->AutoSize = true;
			this->����->Location = System::Drawing::Point(417, 212);
			this->����->Name = L"����";
			this->����->Size = System::Drawing::Size(48, 16);
			this->����->TabIndex = 42;
			this->����->Text = L"����";
			this->����->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(378, 212);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(23, 12);
			this->label2->TabIndex = 82;
			this->label2->Text = L"3��";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(615, 367);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(126, 21);
			this->button1->TabIndex = 83;
			this->button1->Text = L"RUN!!";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// people
			// 
			this->people->Location = System::Drawing::Point(483, 368);
			this->people->Name = L"people";
			this->people->Size = System::Drawing::Size(110, 21);
			this->people->TabIndex = 84;
			this->people->Text = L"7";
			this->people->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(415, 371);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 12);
			this->label3->TabIndex = 85;
			this->label3->Text = L"���ξ�\?";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(752, 401);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->people);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->kkjj123);
			this->Controls->Add(this->hansol);
			this->Controls->Add(this->ȫ����);
			this->Controls->Add(this->���);
			this->Controls->Add(this->���);
			this->Controls->Add(this->��);
			this->Controls->Add(this->����);
			this->Controls->Add(this->������);
			this->Controls->Add(this->���ذ�);
			this->Controls->Add(this->�ӹμ�);
			this->Controls->Add(this->���ϱ�);
			this->Controls->Add(this->����);
			this->Controls->Add(this->���ΰ�);
			this->Controls->Add(this->���ֿ�);
			this->Controls->Add(this->�����);
			this->Controls->Add(this->�Ⱥ���);
			this->Controls->Add(this->����ȭ);
			this->Controls->Add(this->����ö);
			this->Controls->Add(this->����ȣ);
			this->Controls->Add(this->������);
			this->Controls->Add(this->�ȸ�);
			this->Controls->Add(this->������);
			this->Controls->Add(this->������);
			this->Controls->Add(this->���μ�);
			this->Controls->Add(this->�ڼ���);
			this->Controls->Add(this->������);
			this->Controls->Add(this->�����);
			this->Controls->Add(this->������);
			this->Controls->Add(this->�赵��);
			this->Controls->Add(this->�質��);
			this->Controls->Add(this->�Ǿƿ�);
			this->Controls->Add(this->���¿�);
			this->Controls->Add(this->����);
			this->Controls->Add(this->�Ѽ���);
			this->Controls->Add(this->�����);
			this->Controls->Add(this->�ֿ���);
			this->Controls->Add(this->�־Ƹ�);
			this->Controls->Add(this->�ּ���);
			this->Controls->Add(this->�ֱ���);
			this->Controls->Add(this->������);
			this->Controls->Add(this->������);
			this->Controls->Add(this->������);
			this->Controls->Add(this->�Ӱ���);
			this->Controls->Add(this->������);
			this->Controls->Add(this->���强);
			this->Controls->Add(this->���ر�);
			this->Controls->Add(this->���ֿ�);
			this->Controls->Add(this->�̼���);
			this->Controls->Add(this->�̶�);
			this->Controls->Add(this->�̵���);
			this->Controls->Add(this->�̰�ȣ);
			this->Controls->Add(this->�̰���);
			this->Controls->Add(this->������);
			this->Controls->Add(this->����);
			this->Controls->Add(this->��¿�);
			this->Controls->Add(this->�ۿ��);
			this->Controls->Add(this->������);
			this->Controls->Add(this->������);
			this->Controls->Add(this->�ڼ���);
			this->Controls->Add(this->�����);
			this->Controls->Add(this->������);
			this->Controls->Add(this->������);
			this->Controls->Add(this->������);
			this->Controls->Add(this->�谭��);
			this->Controls->Add(this->���μ�);
			this->Controls->Add(this->�̼���);
			this->Controls->Add(this->�ڼҿ�);
			this->Controls->Add(this->�ڹν�);
			this->Controls->Add(this->�ڱ���);
			this->Controls->Add(this->������);
			this->Controls->Add(this->������);
			this->Controls->Add(this->������);
			this->Controls->Add(this->result);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->������);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"BOAZ ������Ǯ��";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 int i,j;
			 char *temp;
			 int count=0;
			 char **nameList;

			 result->Text="";//���â ���� ����

			 if(������->Checked)//üũ ���մ°� �����
				 count++;
			 if(������->Checked)
				 count++;
			 if(������->Checked)
				 count++;
			 if(������->Checked)
				 count++;
			 if(�ڱ���->Checked)
				 count++;
			 if(�ڹν�->Checked)
				 count++;
			 if(�ڼҿ�->Checked)
				 count++;
			 if(�̼���->Checked)
				 count++;
			 if(���μ�->Checked)
				 count++;
			 if(�谭��->Checked)
				 count++;
			 if(������->Checked)
				 count++;
			 if(������->Checked)
				 count++;
			 if(������->Checked)
				 count++;
			 if(�����->Checked)
				 count++;
			 if(�ڼ���->Checked)
				 count++;
			 if(������->Checked)
				 count++;
			 if(������->Checked)
				 count++;
			 if(�ۿ��->Checked)
				 count++;
			 if(��¿�->Checked)
				 count++;
			 if(����->Checked)
				 count++;
			 if(������->Checked)
				 count++;
			 if(�̰���->Checked)
				 count++;
			 if(�̰�ȣ->Checked)
				 count++;
			 if(�̵���->Checked)
				 count++;
			 if(�̶�->Checked)
				 count++;
			 if(�̼���->Checked)
				 count++;
			 if(���ֿ�->Checked)
				 count++;
			 if(���ر�->Checked)
				 count++;
			 if(���强->Checked)
				 count++;
			 if(������->Checked)
				 count++;
			 if(�Ӱ���->Checked)
				 count++;
			 if(������->Checked)
				 count++;
			 if(������->Checked)
				 count++;
			 if(������->Checked)
				 count++;
			 if(�ֱ���->Checked)
				 count++;
			 if(�ּ���->Checked)
				 count++;
			 if(�־Ƹ�->Checked)
				 count++;
			 if(�ֿ���->Checked)
				 count++;
			 if(�����->Checked)
				 count++;
			 if(�Ѽ���->Checked)
				 count++;
			 if(����->Checked)
				 count++;
			 if(���¿�->Checked)
				 count++;
			 if(�Ǿƿ�->Checked)
				 count++;
			 if(�質��->Checked)
				 count++;
			 if(�赵��->Checked)
				 count++;
			 if(������->Checked)
				 count++;
			 if(�����->Checked)
				 count++;
			 if(������->Checked)
				 count++;
			 if(�ڼ���->Checked)
				 count++;
			 if(���μ�->Checked)
				 count++;
			 if(������->Checked)
				 count++;
			 if(������->Checked)
				 count++;
			 if(�ȸ�->Checked)
				 count++;
			 if(������->Checked)
				 count++;
			 if(����ȣ->Checked)
				 count++;
			 if(����ö->Checked)
				 count++;
			 if(����ȭ->Checked)
				 count++;
			 if(�Ⱥ���->Checked)
				 count++;
			 if(�����->Checked)
				 count++;
			 if(���ֿ�->Checked)
				 count++;
			 if(���ΰ�->Checked)
				 count++;
			 if(����->Checked)
				 count++;
			 if(���ϱ�->Checked)
				 count++;
			 if(�ӹμ�->Checked)
				 count++;
			 if(���ذ�->Checked)
				 count++;
			 if(������->Checked)
				 count++;
			 if(����->Checked)
				 count++;
			 if(��->Checked)
				 count++;
			 if(���->Checked)
				 count++;
			 if(���->Checked)
				 count++;
			 if(ȫ����->Checked)
				 count++;
			 if(hansol->Checked)
				 count++;
			 if(kkjj123->Checked)
				 count++;

			 if(count>0){//���õȰ� �մٸ�

				 nameList=new char*[count];//�迭����
				 for(i=0;i<count;i++)
					 nameList[i]=new char[10];

				 i=0;
				 if(������->Checked)
					 nameList[i++]="������";
				 if(������->Checked)
					 nameList[i++]="������";
				 if(������->Checked)
					 nameList[i++]="������";
				 if(������->Checked)
					 nameList[i++]="������";
				 if(�ڱ���->Checked)
					 nameList[i++]="�ڱ���";
				 if(�ڹν�->Checked)
					 nameList[i++]="�ڹν�";
				 if(�ڼҿ�->Checked)
					 nameList[i++]="�ڼҿ�";
				 if(�̼���->Checked)
					 nameList[i++]="�̼���";
				 if(���μ�->Checked)
					 nameList[i++]="���μ�";
				 if(�谭��->Checked)
					 nameList[i++]="�谭��";
				 if(������->Checked)
					 nameList[i++]="������";
				 if(������->Checked)
					 nameList[i++]="������";
				 if(������->Checked)
					 nameList[i++]="������";
				 if(�����->Checked)
					 nameList[i++]="�����";
				 if(�ڼ���->Checked)
					 nameList[i++]="�ڼ���";
				 if(������->Checked)
					 nameList[i++]="������";
				 if(������->Checked)
					 nameList[i++]="������";
				 if(�ۿ��->Checked)
					 nameList[i++]="�ۿ��";
				 if(��¿�->Checked)
					 nameList[i++]="��¿�";
				 if(����->Checked)
					 nameList[i++]="����";
				 if(������->Checked)
					 nameList[i++]="������";
				 if(�̰���->Checked)
					 nameList[i++]="�̰���";
				 if(�̰�ȣ->Checked)
					 nameList[i++]="�̰�ȣ";
				 if(�̵���->Checked)
					 nameList[i++]="�̵���";
				 if(�̶�->Checked)
					 nameList[i++]="�̶�";
				 if(�̼���->Checked)
					 nameList[i++]="�̼���";
				 if(���ֿ�->Checked)
					 nameList[i++]="���ֿ�";
				 if(���ر�->Checked)
					 nameList[i++]="���ر�";
				 if(���强->Checked)
					 nameList[i++]="���强";
				 if(������->Checked)
					 nameList[i++]="������";
				 if(�Ӱ���->Checked)
					 nameList[i++]="�Ӱ���";
				 if(������->Checked)
					 nameList[i++]="������";
				 if(������->Checked)
					 nameList[i++]="������";
				 if(������->Checked)
					 nameList[i++]="������";
				 if(�ֱ���->Checked)
					 nameList[i++]="�ֱ���";
				 if(�ּ���->Checked)
					 nameList[i++]="�ּ���";
				 if(�־Ƹ�->Checked)
					 nameList[i++]="�־Ƹ�";
				 if(�ֿ���->Checked)
					 nameList[i++]="�ֿ���";
				 if(�����->Checked)
					 nameList[i++]="�����";
				 if(�Ѽ���->Checked)
					 nameList[i++]="�Ѽ���";
				 if(����->Checked)
					 nameList[i++]="����";
				 if(���¿�->Checked)
					 nameList[i++]="���¿�";
				 if(�Ǿƿ�->Checked)
					 nameList[i++]="�Ǿƿ�";
				 if(�質��->Checked)
					 nameList[i++]="�質��";
				 if(�赵��->Checked)
					 nameList[i++]="�赵��";
				 if(������->Checked)
					 nameList[i++]="������";
				 if(�����->Checked)
					 nameList[i++]="�����";
				 if(������->Checked)
					 nameList[i++]="������";
				 if(�ڼ���->Checked)
					 nameList[i++]="�ڼ���";
				 if(���μ�->Checked)
					 nameList[i++]="���μ�";
				 if(������->Checked)
					 nameList[i++]="������";
				 if(������->Checked)
					 nameList[i++]="������";
				 if(�ȸ�->Checked)
					 nameList[i++]="�ȸ�";
				 if(������->Checked)
					 nameList[i++]="������";
				 if(����ȣ->Checked)
					 nameList[i++]="����ȣ";
				 if(����ö->Checked)
					 nameList[i++]="����ö";
				 if(����ȭ->Checked)
					 nameList[i++]="����ȭ";
				 if(�Ⱥ���->Checked)
					 nameList[i++]="�Ⱥ���";
				 if(�����->Checked)
					 nameList[i++]="�����";
				 if(���ֿ�->Checked)
					 nameList[i++]="���ֿ�";
				 if(���ΰ�->Checked)
					 nameList[i++]="���ΰ�";
				 if(����->Checked)
					 nameList[i++]="����";
				 if(���ϱ�->Checked)
					 nameList[i++]="���ϱ�";
				 if(�ӹμ�->Checked)
					 nameList[i++]="�ӹμ�";
				 if(���ذ�->Checked)
					 nameList[i++]="���ذ�";
				 if(������->Checked)
					 nameList[i++]="������";
				 if(����->Checked)
					 nameList[i++]="����";
				 if(��->Checked)
					 nameList[i++]="��";
				 if(���->Checked)
					 nameList[i++]="���";
				 if(���->Checked)
					 nameList[i++]="���";
				 if(ȫ����->Checked)
					 nameList[i++]="ȫ����";
				 if(hansol->Checked)
					 nameList[i++]="hansol";
				 if(kkjj123->Checked)
					 nameList[i++]="kkjj123";

				 
				 temp=new char[10];
				 for(i=0;i<count;i++){
					 j=rand()%count;
					 temp=nameList[i];
					 nameList[i]=nameList[j];
					 nameList[j]=temp;
				 }
				 delete temp;
				 
				 int ttt=System::Convert::ToInt32(people->Text);
				 int jo=1;


				 for(i=0;i<count;i++){
					if(i%ttt==0){
						result->Text += "\r\n\r\n" + ((jo++) + "�� :");
					}

					String ^clistr = gcnew String(nameList[i]);

					result->Text += "  " + clistr;
					

				 }

				 for(i=0;i<count;i++)
					 delete nameList[i];
				 delete nameList;
			 }

		 }
};
}
