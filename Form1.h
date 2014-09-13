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
	/// Form1에 대한 요약입니다.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: 생성자 코드를 여기에 추가합니다.
			//
		}

	protected:
		/// <summary>
		/// 사용 중인 모든 리소스를 정리합니다.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^  강하진;
	protected: 

	protected: 

	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  result;

	private: System::Windows::Forms::CheckBox^  김유나;
	private: System::Windows::Forms::CheckBox^  김진솔;
	private: System::Windows::Forms::CheckBox^  김형구;
	private: System::Windows::Forms::CheckBox^  박근한;
	private: System::Windows::Forms::CheckBox^  김강현;
	private: System::Windows::Forms::CheckBox^  강민성;
	private: System::Windows::Forms::CheckBox^  이성훈;
	private: System::Windows::Forms::CheckBox^  박소영;
	private: System::Windows::Forms::CheckBox^  박민식;
	private: System::Windows::Forms::CheckBox^  오선;

	private: System::Windows::Forms::CheckBox^  양승우;

	private: System::Windows::Forms::CheckBox^  송용우;

	private: System::Windows::Forms::CheckBox^  손혜주;

	private: System::Windows::Forms::CheckBox^  서수진;

	private: System::Windows::Forms::CheckBox^  박소현;

	private: System::Windows::Forms::CheckBox^  남상아;

	private: System::Windows::Forms::CheckBox^  나동훈;

	private: System::Windows::Forms::CheckBox^  김태훈;
	private: System::Windows::Forms::CheckBox^  김지혁;
	private: System::Windows::Forms::CheckBox^  한성원;

	private: System::Windows::Forms::CheckBox^  최희수;

	private: System::Windows::Forms::CheckBox^  최예은;

	private: System::Windows::Forms::CheckBox^  최아름;

	private: System::Windows::Forms::CheckBox^  최송희;

	private: System::Windows::Forms::CheckBox^  최기훈;

	private: System::Windows::Forms::CheckBox^  지영은;

	private: System::Windows::Forms::CheckBox^  임지현;

	private: System::Windows::Forms::CheckBox^  임제헌;

	private: System::Windows::Forms::CheckBox^  임관훈;

	private: System::Windows::Forms::CheckBox^  이형기;

	private: System::Windows::Forms::CheckBox^  이헌성;

	private: System::Windows::Forms::CheckBox^  이준기;

	private: System::Windows::Forms::CheckBox^  이주원;

	private: System::Windows::Forms::CheckBox^  이선민;

	private: System::Windows::Forms::CheckBox^  이람;

	private: System::Windows::Forms::CheckBox^  이도영;

	private: System::Windows::Forms::CheckBox^  이관호;

	private: System::Windows::Forms::CheckBox^  이고은;

	private: System::Windows::Forms::CheckBox^  오영규;
	private: System::Windows::Forms::CheckBox^  kkjj123;
	private: System::Windows::Forms::CheckBox^  hansol;




	private: System::Windows::Forms::CheckBox^  홍재현;

	private: System::Windows::Forms::CheckBox^  헛썽;

	private: System::Windows::Forms::CheckBox^  향긔;

	private: System::Windows::Forms::CheckBox^  햄;

	private: System::Windows::Forms::CheckBox^  최준;

	private: System::Windows::Forms::CheckBox^  최유녕;

	private: System::Windows::Forms::CheckBox^  지준경;

private: System::Windows::Forms::CheckBox^  임민수;

private: System::Windows::Forms::CheckBox^  윤일근;

private: System::Windows::Forms::CheckBox^  윤이;

private: System::Windows::Forms::CheckBox^  유인경;

private: System::Windows::Forms::CheckBox^  안주연;

private: System::Windows::Forms::CheckBox^  안재붕;

private: System::Windows::Forms::CheckBox^  안병훈;

private: System::Windows::Forms::CheckBox^  신현화;

private: System::Windows::Forms::CheckBox^  신주철;

private: System::Windows::Forms::CheckBox^  송준호;

private: System::Windows::Forms::CheckBox^  손정은;

private: System::Windows::Forms::CheckBox^  셜리;

private: System::Windows::Forms::CheckBox^  성미진;

private: System::Windows::Forms::CheckBox^  서영주;

private: System::Windows::Forms::CheckBox^  박인성;

private: System::Windows::Forms::CheckBox^  박수찬;

private: System::Windows::Forms::CheckBox^  문정현;

private: System::Windows::Forms::CheckBox^  모경현;

private: System::Windows::Forms::CheckBox^  김형직;

private: System::Windows::Forms::CheckBox^  김도현;

private: System::Windows::Forms::CheckBox^  김나현;

private: System::Windows::Forms::CheckBox^  권아영;

private: System::Windows::Forms::CheckBox^  고태영;

private: System::Windows::Forms::CheckBox^  경희;

	private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::TextBox^  people;
private: System::Windows::Forms::Label^  label3;

	private:
		/// <summary>
		/// 필수 디자이너 변수입니다.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 디자이너 지원에 필요한 메서드입니다.
		/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->강하진 = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->result = (gcnew System::Windows::Forms::TextBox());
			this->김유나 = (gcnew System::Windows::Forms::CheckBox());
			this->김진솔 = (gcnew System::Windows::Forms::CheckBox());
			this->김형구 = (gcnew System::Windows::Forms::CheckBox());
			this->박근한 = (gcnew System::Windows::Forms::CheckBox());
			this->김강현 = (gcnew System::Windows::Forms::CheckBox());
			this->강민성 = (gcnew System::Windows::Forms::CheckBox());
			this->이성훈 = (gcnew System::Windows::Forms::CheckBox());
			this->박소영 = (gcnew System::Windows::Forms::CheckBox());
			this->박민식 = (gcnew System::Windows::Forms::CheckBox());
			this->오선 = (gcnew System::Windows::Forms::CheckBox());
			this->양승우 = (gcnew System::Windows::Forms::CheckBox());
			this->송용우 = (gcnew System::Windows::Forms::CheckBox());
			this->손혜주 = (gcnew System::Windows::Forms::CheckBox());
			this->서수진 = (gcnew System::Windows::Forms::CheckBox());
			this->박소현 = (gcnew System::Windows::Forms::CheckBox());
			this->남상아 = (gcnew System::Windows::Forms::CheckBox());
			this->나동훈 = (gcnew System::Windows::Forms::CheckBox());
			this->김태훈 = (gcnew System::Windows::Forms::CheckBox());
			this->김지혁 = (gcnew System::Windows::Forms::CheckBox());
			this->한성원 = (gcnew System::Windows::Forms::CheckBox());
			this->최희수 = (gcnew System::Windows::Forms::CheckBox());
			this->최예은 = (gcnew System::Windows::Forms::CheckBox());
			this->최아름 = (gcnew System::Windows::Forms::CheckBox());
			this->최송희 = (gcnew System::Windows::Forms::CheckBox());
			this->최기훈 = (gcnew System::Windows::Forms::CheckBox());
			this->지영은 = (gcnew System::Windows::Forms::CheckBox());
			this->임지현 = (gcnew System::Windows::Forms::CheckBox());
			this->임제헌 = (gcnew System::Windows::Forms::CheckBox());
			this->임관훈 = (gcnew System::Windows::Forms::CheckBox());
			this->이형기 = (gcnew System::Windows::Forms::CheckBox());
			this->이헌성 = (gcnew System::Windows::Forms::CheckBox());
			this->이준기 = (gcnew System::Windows::Forms::CheckBox());
			this->이주원 = (gcnew System::Windows::Forms::CheckBox());
			this->이선민 = (gcnew System::Windows::Forms::CheckBox());
			this->이람 = (gcnew System::Windows::Forms::CheckBox());
			this->이도영 = (gcnew System::Windows::Forms::CheckBox());
			this->이관호 = (gcnew System::Windows::Forms::CheckBox());
			this->이고은 = (gcnew System::Windows::Forms::CheckBox());
			this->오영규 = (gcnew System::Windows::Forms::CheckBox());
			this->kkjj123 = (gcnew System::Windows::Forms::CheckBox());
			this->hansol = (gcnew System::Windows::Forms::CheckBox());
			this->홍재현 = (gcnew System::Windows::Forms::CheckBox());
			this->헛썽 = (gcnew System::Windows::Forms::CheckBox());
			this->향긔 = (gcnew System::Windows::Forms::CheckBox());
			this->햄 = (gcnew System::Windows::Forms::CheckBox());
			this->최준 = (gcnew System::Windows::Forms::CheckBox());
			this->최유녕 = (gcnew System::Windows::Forms::CheckBox());
			this->지준경 = (gcnew System::Windows::Forms::CheckBox());
			this->임민수 = (gcnew System::Windows::Forms::CheckBox());
			this->윤일근 = (gcnew System::Windows::Forms::CheckBox());
			this->윤이 = (gcnew System::Windows::Forms::CheckBox());
			this->유인경 = (gcnew System::Windows::Forms::CheckBox());
			this->안주연 = (gcnew System::Windows::Forms::CheckBox());
			this->안재붕 = (gcnew System::Windows::Forms::CheckBox());
			this->안병훈 = (gcnew System::Windows::Forms::CheckBox());
			this->신현화 = (gcnew System::Windows::Forms::CheckBox());
			this->신주철 = (gcnew System::Windows::Forms::CheckBox());
			this->송준호 = (gcnew System::Windows::Forms::CheckBox());
			this->손정은 = (gcnew System::Windows::Forms::CheckBox());
			this->셜리 = (gcnew System::Windows::Forms::CheckBox());
			this->성미진 = (gcnew System::Windows::Forms::CheckBox());
			this->서영주 = (gcnew System::Windows::Forms::CheckBox());
			this->박인성 = (gcnew System::Windows::Forms::CheckBox());
			this->박수찬 = (gcnew System::Windows::Forms::CheckBox());
			this->문정현 = (gcnew System::Windows::Forms::CheckBox());
			this->모경현 = (gcnew System::Windows::Forms::CheckBox());
			this->김형직 = (gcnew System::Windows::Forms::CheckBox());
			this->김도현 = (gcnew System::Windows::Forms::CheckBox());
			this->김나현 = (gcnew System::Windows::Forms::CheckBox());
			this->권아영 = (gcnew System::Windows::Forms::CheckBox());
			this->고태영 = (gcnew System::Windows::Forms::CheckBox());
			this->경희 = (gcnew System::Windows::Forms::CheckBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->people = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// 강하진
			// 
			this->강하진->AutoSize = true;
			this->강하진->Location = System::Drawing::Point(417, 21);
			this->강하진->Name = L"강하진";
			this->강하진->Size = System::Drawing::Size(60, 16);
			this->강하진->TabIndex = 0;
			this->강하진->Text = L"강하진";
			this->강하진->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(378, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 12);
			this->label1->TabIndex = 1;
			this->label1->Text = L"1,2기";
			// 
			// result
			// 
			this->result->Location = System::Drawing::Point(12, 12);
			this->result->Multiline = true;
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(360, 371);
			this->result->TabIndex = 2;
			// 
			// 김유나
			// 
			this->김유나->AutoSize = true;
			this->김유나->Location = System::Drawing::Point(483, 21);
			this->김유나->Name = L"김유나";
			this->김유나->Size = System::Drawing::Size(60, 16);
			this->김유나->TabIndex = 3;
			this->김유나->Text = L"김유나";
			this->김유나->UseVisualStyleBackColor = true;
			// 
			// 김진솔
			// 
			this->김진솔->AutoSize = true;
			this->김진솔->Location = System::Drawing::Point(549, 21);
			this->김진솔->Name = L"김진솔";
			this->김진솔->Size = System::Drawing::Size(60, 16);
			this->김진솔->TabIndex = 4;
			this->김진솔->Text = L"김진솔";
			this->김진솔->UseVisualStyleBackColor = true;
			// 
			// 김형구
			// 
			this->김형구->AutoSize = true;
			this->김형구->Location = System::Drawing::Point(615, 21);
			this->김형구->Name = L"김형구";
			this->김형구->Size = System::Drawing::Size(60, 16);
			this->김형구->TabIndex = 5;
			this->김형구->Text = L"김형구";
			this->김형구->UseVisualStyleBackColor = true;
			// 
			// 박근한
			// 
			this->박근한->AutoSize = true;
			this->박근한->Location = System::Drawing::Point(681, 21);
			this->박근한->Name = L"박근한";
			this->박근한->Size = System::Drawing::Size(60, 16);
			this->박근한->TabIndex = 6;
			this->박근한->Text = L"박근한";
			this->박근한->UseVisualStyleBackColor = true;
			// 
			// 김강현
			// 
			this->김강현->AutoSize = true;
			this->김강현->Location = System::Drawing::Point(681, 43);
			this->김강현->Name = L"김강현";
			this->김강현->Size = System::Drawing::Size(60, 16);
			this->김강현->TabIndex = 11;
			this->김강현->Text = L"김강현";
			this->김강현->UseVisualStyleBackColor = true;
			// 
			// 강민성
			// 
			this->강민성->AutoSize = true;
			this->강민성->Location = System::Drawing::Point(615, 43);
			this->강민성->Name = L"강민성";
			this->강민성->Size = System::Drawing::Size(60, 16);
			this->강민성->TabIndex = 10;
			this->강민성->Text = L"강민성";
			this->강민성->UseVisualStyleBackColor = true;
			// 
			// 이성훈
			// 
			this->이성훈->AutoSize = true;
			this->이성훈->Location = System::Drawing::Point(549, 43);
			this->이성훈->Name = L"이성훈";
			this->이성훈->Size = System::Drawing::Size(60, 16);
			this->이성훈->TabIndex = 9;
			this->이성훈->Text = L"이성훈";
			this->이성훈->UseVisualStyleBackColor = true;
			// 
			// 박소영
			// 
			this->박소영->AutoSize = true;
			this->박소영->Location = System::Drawing::Point(483, 43);
			this->박소영->Name = L"박소영";
			this->박소영->Size = System::Drawing::Size(60, 16);
			this->박소영->TabIndex = 8;
			this->박소영->Text = L"박소영";
			this->박소영->UseVisualStyleBackColor = true;
			// 
			// 박민식
			// 
			this->박민식->AutoSize = true;
			this->박민식->Location = System::Drawing::Point(417, 43);
			this->박민식->Name = L"박민식";
			this->박민식->Size = System::Drawing::Size(60, 16);
			this->박민식->TabIndex = 7;
			this->박민식->Text = L"박민식";
			this->박민식->UseVisualStyleBackColor = true;
			// 
			// 오선
			// 
			this->오선->AutoSize = true;
			this->오선->Location = System::Drawing::Point(681, 87);
			this->오선->Name = L"오선";
			this->오선->Size = System::Drawing::Size(48, 16);
			this->오선->TabIndex = 21;
			this->오선->Text = L"오선";
			this->오선->UseVisualStyleBackColor = true;
			// 
			// 양승우
			// 
			this->양승우->AutoSize = true;
			this->양승우->Location = System::Drawing::Point(615, 87);
			this->양승우->Name = L"양승우";
			this->양승우->Size = System::Drawing::Size(60, 16);
			this->양승우->TabIndex = 20;
			this->양승우->Text = L"양승우";
			this->양승우->UseVisualStyleBackColor = true;
			// 
			// 송용우
			// 
			this->송용우->AutoSize = true;
			this->송용우->Location = System::Drawing::Point(549, 87);
			this->송용우->Name = L"송용우";
			this->송용우->Size = System::Drawing::Size(60, 16);
			this->송용우->TabIndex = 19;
			this->송용우->Text = L"송용우";
			this->송용우->UseVisualStyleBackColor = true;
			// 
			// 손혜주
			// 
			this->손혜주->AutoSize = true;
			this->손혜주->Location = System::Drawing::Point(483, 87);
			this->손혜주->Name = L"손혜주";
			this->손혜주->Size = System::Drawing::Size(60, 16);
			this->손혜주->TabIndex = 18;
			this->손혜주->Text = L"손혜주";
			this->손혜주->UseVisualStyleBackColor = true;
			// 
			// 서수진
			// 
			this->서수진->AutoSize = true;
			this->서수진->Location = System::Drawing::Point(417, 87);
			this->서수진->Name = L"서수진";
			this->서수진->Size = System::Drawing::Size(60, 16);
			this->서수진->TabIndex = 17;
			this->서수진->Text = L"서수진";
			this->서수진->UseVisualStyleBackColor = true;
			// 
			// 박소현
			// 
			this->박소현->AutoSize = true;
			this->박소현->Location = System::Drawing::Point(681, 65);
			this->박소현->Name = L"박소현";
			this->박소현->Size = System::Drawing::Size(60, 16);
			this->박소현->TabIndex = 16;
			this->박소현->Text = L"박소현";
			this->박소현->UseVisualStyleBackColor = true;
			// 
			// 남상아
			// 
			this->남상아->AutoSize = true;
			this->남상아->Location = System::Drawing::Point(615, 65);
			this->남상아->Name = L"남상아";
			this->남상아->Size = System::Drawing::Size(60, 16);
			this->남상아->TabIndex = 15;
			this->남상아->Text = L"남상아";
			this->남상아->UseVisualStyleBackColor = true;
			// 
			// 나동훈
			// 
			this->나동훈->AutoSize = true;
			this->나동훈->Location = System::Drawing::Point(549, 65);
			this->나동훈->Name = L"나동훈";
			this->나동훈->Size = System::Drawing::Size(60, 16);
			this->나동훈->TabIndex = 14;
			this->나동훈->Text = L"나동훈";
			this->나동훈->UseVisualStyleBackColor = true;
			// 
			// 김태훈
			// 
			this->김태훈->AutoSize = true;
			this->김태훈->Location = System::Drawing::Point(483, 65);
			this->김태훈->Name = L"김태훈";
			this->김태훈->Size = System::Drawing::Size(60, 16);
			this->김태훈->TabIndex = 13;
			this->김태훈->Text = L"김태훈";
			this->김태훈->UseVisualStyleBackColor = true;
			// 
			// 김지혁
			// 
			this->김지혁->AutoSize = true;
			this->김지혁->Location = System::Drawing::Point(417, 65);
			this->김지혁->Name = L"김지혁";
			this->김지혁->Size = System::Drawing::Size(60, 16);
			this->김지혁->TabIndex = 12;
			this->김지혁->Text = L"김지혁";
			this->김지혁->UseVisualStyleBackColor = true;
			// 
			// 한성원
			// 
			this->한성원->AutoSize = true;
			this->한성원->Location = System::Drawing::Point(681, 175);
			this->한성원->Name = L"한성원";
			this->한성원->Size = System::Drawing::Size(60, 16);
			this->한성원->TabIndex = 41;
			this->한성원->Text = L"한성원";
			this->한성원->UseVisualStyleBackColor = true;
			// 
			// 최희수
			// 
			this->최희수->AutoSize = true;
			this->최희수->Location = System::Drawing::Point(615, 175);
			this->최희수->Name = L"최희수";
			this->최희수->Size = System::Drawing::Size(60, 16);
			this->최희수->TabIndex = 40;
			this->최희수->Text = L"최희수";
			this->최희수->UseVisualStyleBackColor = true;
			// 
			// 최예은
			// 
			this->최예은->AutoSize = true;
			this->최예은->Location = System::Drawing::Point(549, 175);
			this->최예은->Name = L"최예은";
			this->최예은->Size = System::Drawing::Size(60, 16);
			this->최예은->TabIndex = 39;
			this->최예은->Text = L"최예은";
			this->최예은->UseVisualStyleBackColor = true;
			// 
			// 최아름
			// 
			this->최아름->AutoSize = true;
			this->최아름->Location = System::Drawing::Point(483, 175);
			this->최아름->Name = L"최아름";
			this->최아름->Size = System::Drawing::Size(60, 16);
			this->최아름->TabIndex = 38;
			this->최아름->Text = L"최아름";
			this->최아름->UseVisualStyleBackColor = true;
			// 
			// 최송희
			// 
			this->최송희->AutoSize = true;
			this->최송희->Location = System::Drawing::Point(417, 175);
			this->최송희->Name = L"최송희";
			this->최송희->Size = System::Drawing::Size(60, 16);
			this->최송희->TabIndex = 37;
			this->최송희->Text = L"최송희";
			this->최송희->UseVisualStyleBackColor = true;
			// 
			// 최기훈
			// 
			this->최기훈->AutoSize = true;
			this->최기훈->Location = System::Drawing::Point(681, 153);
			this->최기훈->Name = L"최기훈";
			this->최기훈->Size = System::Drawing::Size(60, 16);
			this->최기훈->TabIndex = 36;
			this->최기훈->Text = L"최기훈";
			this->최기훈->UseVisualStyleBackColor = true;
			// 
			// 지영은
			// 
			this->지영은->AutoSize = true;
			this->지영은->Location = System::Drawing::Point(615, 153);
			this->지영은->Name = L"지영은";
			this->지영은->Size = System::Drawing::Size(60, 16);
			this->지영은->TabIndex = 35;
			this->지영은->Text = L"지영은";
			this->지영은->UseVisualStyleBackColor = true;
			// 
			// 임지현
			// 
			this->임지현->AutoSize = true;
			this->임지현->Location = System::Drawing::Point(549, 153);
			this->임지현->Name = L"임지현";
			this->임지현->Size = System::Drawing::Size(60, 16);
			this->임지현->TabIndex = 34;
			this->임지현->Text = L"임지현";
			this->임지현->UseVisualStyleBackColor = true;
			// 
			// 임제헌
			// 
			this->임제헌->AutoSize = true;
			this->임제헌->Location = System::Drawing::Point(483, 153);
			this->임제헌->Name = L"임제헌";
			this->임제헌->Size = System::Drawing::Size(60, 16);
			this->임제헌->TabIndex = 33;
			this->임제헌->Text = L"임제헌";
			this->임제헌->UseVisualStyleBackColor = true;
			// 
			// 임관훈
			// 
			this->임관훈->AutoSize = true;
			this->임관훈->Location = System::Drawing::Point(417, 153);
			this->임관훈->Name = L"임관훈";
			this->임관훈->Size = System::Drawing::Size(60, 16);
			this->임관훈->TabIndex = 32;
			this->임관훈->Text = L"임관훈";
			this->임관훈->UseVisualStyleBackColor = true;
			// 
			// 이형기
			// 
			this->이형기->AutoSize = true;
			this->이형기->Location = System::Drawing::Point(681, 131);
			this->이형기->Name = L"이형기";
			this->이형기->Size = System::Drawing::Size(60, 16);
			this->이형기->TabIndex = 31;
			this->이형기->Text = L"이형기";
			this->이형기->UseVisualStyleBackColor = true;
			// 
			// 이헌성
			// 
			this->이헌성->AutoSize = true;
			this->이헌성->Location = System::Drawing::Point(615, 131);
			this->이헌성->Name = L"이헌성";
			this->이헌성->Size = System::Drawing::Size(60, 16);
			this->이헌성->TabIndex = 30;
			this->이헌성->Text = L"이헌성";
			this->이헌성->UseVisualStyleBackColor = true;
			// 
			// 이준기
			// 
			this->이준기->AutoSize = true;
			this->이준기->Location = System::Drawing::Point(549, 131);
			this->이준기->Name = L"이준기";
			this->이준기->Size = System::Drawing::Size(60, 16);
			this->이준기->TabIndex = 29;
			this->이준기->Text = L"이준기";
			this->이준기->UseVisualStyleBackColor = true;
			// 
			// 이주원
			// 
			this->이주원->AutoSize = true;
			this->이주원->Location = System::Drawing::Point(483, 131);
			this->이주원->Name = L"이주원";
			this->이주원->Size = System::Drawing::Size(60, 16);
			this->이주원->TabIndex = 28;
			this->이주원->Text = L"이주원";
			this->이주원->UseVisualStyleBackColor = true;
			// 
			// 이선민
			// 
			this->이선민->AutoSize = true;
			this->이선민->Location = System::Drawing::Point(417, 131);
			this->이선민->Name = L"이선민";
			this->이선민->Size = System::Drawing::Size(60, 16);
			this->이선민->TabIndex = 27;
			this->이선민->Text = L"이선민";
			this->이선민->UseVisualStyleBackColor = true;
			// 
			// 이람
			// 
			this->이람->AutoSize = true;
			this->이람->Location = System::Drawing::Point(681, 109);
			this->이람->Name = L"이람";
			this->이람->Size = System::Drawing::Size(48, 16);
			this->이람->TabIndex = 26;
			this->이람->Text = L"이람";
			this->이람->UseVisualStyleBackColor = true;
			// 
			// 이도영
			// 
			this->이도영->AutoSize = true;
			this->이도영->Location = System::Drawing::Point(615, 109);
			this->이도영->Name = L"이도영";
			this->이도영->Size = System::Drawing::Size(60, 16);
			this->이도영->TabIndex = 25;
			this->이도영->Text = L"이도영";
			this->이도영->UseVisualStyleBackColor = true;
			// 
			// 이관호
			// 
			this->이관호->AutoSize = true;
			this->이관호->Location = System::Drawing::Point(549, 109);
			this->이관호->Name = L"이관호";
			this->이관호->Size = System::Drawing::Size(60, 16);
			this->이관호->TabIndex = 24;
			this->이관호->Text = L"이관호";
			this->이관호->UseVisualStyleBackColor = true;
			// 
			// 이고은
			// 
			this->이고은->AutoSize = true;
			this->이고은->Location = System::Drawing::Point(483, 109);
			this->이고은->Name = L"이고은";
			this->이고은->Size = System::Drawing::Size(60, 16);
			this->이고은->TabIndex = 23;
			this->이고은->Text = L"이고은";
			this->이고은->UseVisualStyleBackColor = true;
			// 
			// 오영규
			// 
			this->오영규->AutoSize = true;
			this->오영규->Location = System::Drawing::Point(417, 109);
			this->오영규->Name = L"오영규";
			this->오영규->Size = System::Drawing::Size(60, 16);
			this->오영규->TabIndex = 22;
			this->오영규->Text = L"오영규";
			this->오영규->UseVisualStyleBackColor = true;
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
			// 홍재현
			// 
			this->홍재현->AutoSize = true;
			this->홍재현->Location = System::Drawing::Point(417, 344);
			this->홍재현->Name = L"홍재현";
			this->홍재현->Size = System::Drawing::Size(60, 16);
			this->홍재현->TabIndex = 72;
			this->홍재현->Text = L"홍재현";
			this->홍재현->UseVisualStyleBackColor = true;
			// 
			// 헛썽
			// 
			this->헛썽->AutoSize = true;
			this->헛썽->Location = System::Drawing::Point(681, 322);
			this->헛썽->Name = L"헛썽";
			this->헛썽->Size = System::Drawing::Size(48, 16);
			this->헛썽->TabIndex = 71;
			this->헛썽->Text = L"헛썽";
			this->헛썽->UseVisualStyleBackColor = true;
			// 
			// 향긔
			// 
			this->향긔->AutoSize = true;
			this->향긔->Location = System::Drawing::Point(615, 322);
			this->향긔->Name = L"향긔";
			this->향긔->Size = System::Drawing::Size(48, 16);
			this->향긔->TabIndex = 70;
			this->향긔->Text = L"향긔";
			this->향긔->UseVisualStyleBackColor = true;
			// 
			// 햄
			// 
			this->햄->AutoSize = true;
			this->햄->Location = System::Drawing::Point(549, 322);
			this->햄->Name = L"햄";
			this->햄->Size = System::Drawing::Size(36, 16);
			this->햄->TabIndex = 69;
			this->햄->Text = L"햄";
			this->햄->UseVisualStyleBackColor = true;
			// 
			// 최준
			// 
			this->최준->AutoSize = true;
			this->최준->Location = System::Drawing::Point(483, 322);
			this->최준->Name = L"최준";
			this->최준->Size = System::Drawing::Size(48, 16);
			this->최준->TabIndex = 68;
			this->최준->Text = L"최준";
			this->최준->UseVisualStyleBackColor = true;
			// 
			// 최유녕
			// 
			this->최유녕->AutoSize = true;
			this->최유녕->Location = System::Drawing::Point(417, 322);
			this->최유녕->Name = L"최유녕";
			this->최유녕->Size = System::Drawing::Size(60, 16);
			this->최유녕->TabIndex = 67;
			this->최유녕->Text = L"최유녕";
			this->최유녕->UseVisualStyleBackColor = true;
			// 
			// 지준경
			// 
			this->지준경->AutoSize = true;
			this->지준경->Location = System::Drawing::Point(681, 300);
			this->지준경->Name = L"지준경";
			this->지준경->Size = System::Drawing::Size(60, 16);
			this->지준경->TabIndex = 66;
			this->지준경->Text = L"지준경";
			this->지준경->UseVisualStyleBackColor = true;
			// 
			// 임민수
			// 
			this->임민수->AutoSize = true;
			this->임민수->Location = System::Drawing::Point(615, 300);
			this->임민수->Name = L"임민수";
			this->임민수->Size = System::Drawing::Size(60, 16);
			this->임민수->TabIndex = 65;
			this->임민수->Text = L"임민수";
			this->임민수->UseVisualStyleBackColor = true;
			// 
			// 윤일근
			// 
			this->윤일근->AutoSize = true;
			this->윤일근->Location = System::Drawing::Point(549, 300);
			this->윤일근->Name = L"윤일근";
			this->윤일근->Size = System::Drawing::Size(60, 16);
			this->윤일근->TabIndex = 64;
			this->윤일근->Text = L"윤일근";
			this->윤일근->UseVisualStyleBackColor = true;
			// 
			// 윤이
			// 
			this->윤이->AutoSize = true;
			this->윤이->Location = System::Drawing::Point(483, 300);
			this->윤이->Name = L"윤이";
			this->윤이->Size = System::Drawing::Size(48, 16);
			this->윤이->TabIndex = 63;
			this->윤이->Text = L"윤이";
			this->윤이->UseVisualStyleBackColor = true;
			// 
			// 유인경
			// 
			this->유인경->AutoSize = true;
			this->유인경->Location = System::Drawing::Point(417, 300);
			this->유인경->Name = L"유인경";
			this->유인경->Size = System::Drawing::Size(60, 16);
			this->유인경->TabIndex = 62;
			this->유인경->Text = L"유인경";
			this->유인경->UseVisualStyleBackColor = true;
			// 
			// 안주연
			// 
			this->안주연->AutoSize = true;
			this->안주연->Location = System::Drawing::Point(681, 278);
			this->안주연->Name = L"안주연";
			this->안주연->Size = System::Drawing::Size(60, 16);
			this->안주연->TabIndex = 61;
			this->안주연->Text = L"안주연";
			this->안주연->UseVisualStyleBackColor = true;
			// 
			// 안재붕
			// 
			this->안재붕->AutoSize = true;
			this->안재붕->Location = System::Drawing::Point(615, 278);
			this->안재붕->Name = L"안재붕";
			this->안재붕->Size = System::Drawing::Size(60, 16);
			this->안재붕->TabIndex = 60;
			this->안재붕->Text = L"안재붕";
			this->안재붕->UseVisualStyleBackColor = true;
			// 
			// 안병훈
			// 
			this->안병훈->AutoSize = true;
			this->안병훈->Location = System::Drawing::Point(549, 278);
			this->안병훈->Name = L"안병훈";
			this->안병훈->Size = System::Drawing::Size(60, 16);
			this->안병훈->TabIndex = 59;
			this->안병훈->Text = L"안병훈";
			this->안병훈->UseVisualStyleBackColor = true;
			// 
			// 신현화
			// 
			this->신현화->AutoSize = true;
			this->신현화->Location = System::Drawing::Point(483, 278);
			this->신현화->Name = L"신현화";
			this->신현화->Size = System::Drawing::Size(60, 16);
			this->신현화->TabIndex = 58;
			this->신현화->Text = L"신현화";
			this->신현화->UseVisualStyleBackColor = true;
			// 
			// 신주철
			// 
			this->신주철->AutoSize = true;
			this->신주철->Location = System::Drawing::Point(417, 278);
			this->신주철->Name = L"신주철";
			this->신주철->Size = System::Drawing::Size(60, 16);
			this->신주철->TabIndex = 57;
			this->신주철->Text = L"신주철";
			this->신주철->UseVisualStyleBackColor = true;
			// 
			// 송준호
			// 
			this->송준호->AutoSize = true;
			this->송준호->Location = System::Drawing::Point(681, 256);
			this->송준호->Name = L"송준호";
			this->송준호->Size = System::Drawing::Size(60, 16);
			this->송준호->TabIndex = 56;
			this->송준호->Text = L"송준호";
			this->송준호->UseVisualStyleBackColor = true;
			// 
			// 손정은
			// 
			this->손정은->AutoSize = true;
			this->손정은->Location = System::Drawing::Point(615, 256);
			this->손정은->Name = L"손정은";
			this->손정은->Size = System::Drawing::Size(60, 16);
			this->손정은->TabIndex = 55;
			this->손정은->Text = L"손정은";
			this->손정은->UseVisualStyleBackColor = true;
			// 
			// 셜리
			// 
			this->셜리->AutoSize = true;
			this->셜리->Location = System::Drawing::Point(549, 256);
			this->셜리->Name = L"셜리";
			this->셜리->Size = System::Drawing::Size(48, 16);
			this->셜리->TabIndex = 54;
			this->셜리->Text = L"셜리";
			this->셜리->UseVisualStyleBackColor = true;
			// 
			// 성미진
			// 
			this->성미진->AutoSize = true;
			this->성미진->Location = System::Drawing::Point(483, 256);
			this->성미진->Name = L"성미진";
			this->성미진->Size = System::Drawing::Size(60, 16);
			this->성미진->TabIndex = 53;
			this->성미진->Text = L"성미진";
			this->성미진->UseVisualStyleBackColor = true;
			// 
			// 서영주
			// 
			this->서영주->AutoSize = true;
			this->서영주->Location = System::Drawing::Point(417, 256);
			this->서영주->Name = L"서영주";
			this->서영주->Size = System::Drawing::Size(60, 16);
			this->서영주->TabIndex = 52;
			this->서영주->Text = L"서영주";
			this->서영주->UseVisualStyleBackColor = true;
			// 
			// 박인성
			// 
			this->박인성->AutoSize = true;
			this->박인성->Location = System::Drawing::Point(681, 234);
			this->박인성->Name = L"박인성";
			this->박인성->Size = System::Drawing::Size(60, 16);
			this->박인성->TabIndex = 51;
			this->박인성->Text = L"박인성";
			this->박인성->UseVisualStyleBackColor = true;
			// 
			// 박수찬
			// 
			this->박수찬->AutoSize = true;
			this->박수찬->Location = System::Drawing::Point(615, 234);
			this->박수찬->Name = L"박수찬";
			this->박수찬->Size = System::Drawing::Size(60, 16);
			this->박수찬->TabIndex = 50;
			this->박수찬->Text = L"박수찬";
			this->박수찬->UseVisualStyleBackColor = true;
			// 
			// 문정현
			// 
			this->문정현->AutoSize = true;
			this->문정현->Location = System::Drawing::Point(549, 234);
			this->문정현->Name = L"문정현";
			this->문정현->Size = System::Drawing::Size(60, 16);
			this->문정현->TabIndex = 49;
			this->문정현->Text = L"문정현";
			this->문정현->UseVisualStyleBackColor = true;
			// 
			// 모경현
			// 
			this->모경현->AutoSize = true;
			this->모경현->Location = System::Drawing::Point(483, 234);
			this->모경현->Name = L"모경현";
			this->모경현->Size = System::Drawing::Size(60, 16);
			this->모경현->TabIndex = 48;
			this->모경현->Text = L"모경현";
			this->모경현->UseVisualStyleBackColor = true;
			// 
			// 김형직
			// 
			this->김형직->AutoSize = true;
			this->김형직->Location = System::Drawing::Point(417, 234);
			this->김형직->Name = L"김형직";
			this->김형직->Size = System::Drawing::Size(60, 16);
			this->김형직->TabIndex = 47;
			this->김형직->Text = L"김형직";
			this->김형직->UseVisualStyleBackColor = true;
			// 
			// 김도현
			// 
			this->김도현->AutoSize = true;
			this->김도현->Location = System::Drawing::Point(681, 212);
			this->김도현->Name = L"김도현";
			this->김도현->Size = System::Drawing::Size(60, 16);
			this->김도현->TabIndex = 46;
			this->김도현->Text = L"김도현";
			this->김도현->UseVisualStyleBackColor = true;
			// 
			// 김나현
			// 
			this->김나현->AutoSize = true;
			this->김나현->Location = System::Drawing::Point(615, 212);
			this->김나현->Name = L"김나현";
			this->김나현->Size = System::Drawing::Size(60, 16);
			this->김나현->TabIndex = 45;
			this->김나현->Text = L"김나현";
			this->김나현->UseVisualStyleBackColor = true;
			// 
			// 권아영
			// 
			this->권아영->AutoSize = true;
			this->권아영->Location = System::Drawing::Point(549, 212);
			this->권아영->Name = L"권아영";
			this->권아영->Size = System::Drawing::Size(60, 16);
			this->권아영->TabIndex = 44;
			this->권아영->Text = L"권아영";
			this->권아영->UseVisualStyleBackColor = true;
			// 
			// 고태영
			// 
			this->고태영->AutoSize = true;
			this->고태영->Location = System::Drawing::Point(483, 212);
			this->고태영->Name = L"고태영";
			this->고태영->Size = System::Drawing::Size(60, 16);
			this->고태영->TabIndex = 43;
			this->고태영->Text = L"고태영";
			this->고태영->UseVisualStyleBackColor = true;
			// 
			// 경희
			// 
			this->경희->AutoSize = true;
			this->경희->Location = System::Drawing::Point(417, 212);
			this->경희->Name = L"경희";
			this->경희->Size = System::Drawing::Size(48, 16);
			this->경희->TabIndex = 42;
			this->경희->Text = L"경희";
			this->경희->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(378, 212);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(23, 12);
			this->label2->TabIndex = 82;
			this->label2->Text = L"3기";
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
			this->label3->Text = L"몇인씩\?";
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
			this->Controls->Add(this->홍재현);
			this->Controls->Add(this->헛썽);
			this->Controls->Add(this->향긔);
			this->Controls->Add(this->햄);
			this->Controls->Add(this->최준);
			this->Controls->Add(this->최유녕);
			this->Controls->Add(this->지준경);
			this->Controls->Add(this->임민수);
			this->Controls->Add(this->윤일근);
			this->Controls->Add(this->윤이);
			this->Controls->Add(this->유인경);
			this->Controls->Add(this->안주연);
			this->Controls->Add(this->안재붕);
			this->Controls->Add(this->안병훈);
			this->Controls->Add(this->신현화);
			this->Controls->Add(this->신주철);
			this->Controls->Add(this->송준호);
			this->Controls->Add(this->손정은);
			this->Controls->Add(this->셜리);
			this->Controls->Add(this->성미진);
			this->Controls->Add(this->서영주);
			this->Controls->Add(this->박인성);
			this->Controls->Add(this->박수찬);
			this->Controls->Add(this->문정현);
			this->Controls->Add(this->모경현);
			this->Controls->Add(this->김형직);
			this->Controls->Add(this->김도현);
			this->Controls->Add(this->김나현);
			this->Controls->Add(this->권아영);
			this->Controls->Add(this->고태영);
			this->Controls->Add(this->경희);
			this->Controls->Add(this->한성원);
			this->Controls->Add(this->최희수);
			this->Controls->Add(this->최예은);
			this->Controls->Add(this->최아름);
			this->Controls->Add(this->최송희);
			this->Controls->Add(this->최기훈);
			this->Controls->Add(this->지영은);
			this->Controls->Add(this->임지현);
			this->Controls->Add(this->임제헌);
			this->Controls->Add(this->임관훈);
			this->Controls->Add(this->이형기);
			this->Controls->Add(this->이헌성);
			this->Controls->Add(this->이준기);
			this->Controls->Add(this->이주원);
			this->Controls->Add(this->이선민);
			this->Controls->Add(this->이람);
			this->Controls->Add(this->이도영);
			this->Controls->Add(this->이관호);
			this->Controls->Add(this->이고은);
			this->Controls->Add(this->오영규);
			this->Controls->Add(this->오선);
			this->Controls->Add(this->양승우);
			this->Controls->Add(this->송용우);
			this->Controls->Add(this->손혜주);
			this->Controls->Add(this->서수진);
			this->Controls->Add(this->박소현);
			this->Controls->Add(this->남상아);
			this->Controls->Add(this->나동훈);
			this->Controls->Add(this->김태훈);
			this->Controls->Add(this->김지혁);
			this->Controls->Add(this->김강현);
			this->Controls->Add(this->강민성);
			this->Controls->Add(this->이성훈);
			this->Controls->Add(this->박소영);
			this->Controls->Add(this->박민식);
			this->Controls->Add(this->박근한);
			this->Controls->Add(this->김형구);
			this->Controls->Add(this->김진솔);
			this->Controls->Add(this->김유나);
			this->Controls->Add(this->result);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->강하진);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"BOAZ 랜덤뒷풀이";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 int i,j;
			 char *temp;
			 int count=0;
			 char **nameList;

			 result->Text="";//결과창 비우고 시작

			 if(강하진->Checked)//체크 되잇는거 몇개인지
				 count++;
			 if(김유나->Checked)
				 count++;
			 if(김진솔->Checked)
				 count++;
			 if(김형구->Checked)
				 count++;
			 if(박근한->Checked)
				 count++;
			 if(박민식->Checked)
				 count++;
			 if(박소영->Checked)
				 count++;
			 if(이성훈->Checked)
				 count++;
			 if(강민성->Checked)
				 count++;
			 if(김강현->Checked)
				 count++;
			 if(김지혁->Checked)
				 count++;
			 if(김태훈->Checked)
				 count++;
			 if(나동훈->Checked)
				 count++;
			 if(남상아->Checked)
				 count++;
			 if(박소현->Checked)
				 count++;
			 if(서수진->Checked)
				 count++;
			 if(손혜주->Checked)
				 count++;
			 if(송용우->Checked)
				 count++;
			 if(양승우->Checked)
				 count++;
			 if(오선->Checked)
				 count++;
			 if(오영규->Checked)
				 count++;
			 if(이고은->Checked)
				 count++;
			 if(이관호->Checked)
				 count++;
			 if(이도영->Checked)
				 count++;
			 if(이람->Checked)
				 count++;
			 if(이선민->Checked)
				 count++;
			 if(이주원->Checked)
				 count++;
			 if(이준기->Checked)
				 count++;
			 if(이헌성->Checked)
				 count++;
			 if(이형기->Checked)
				 count++;
			 if(임관훈->Checked)
				 count++;
			 if(임제헌->Checked)
				 count++;
			 if(임지현->Checked)
				 count++;
			 if(지영은->Checked)
				 count++;
			 if(최기훈->Checked)
				 count++;
			 if(최송희->Checked)
				 count++;
			 if(최아름->Checked)
				 count++;
			 if(최예은->Checked)
				 count++;
			 if(최희수->Checked)
				 count++;
			 if(한성원->Checked)
				 count++;
			 if(경희->Checked)
				 count++;
			 if(고태영->Checked)
				 count++;
			 if(권아영->Checked)
				 count++;
			 if(김나현->Checked)
				 count++;
			 if(김도현->Checked)
				 count++;
			 if(김형직->Checked)
				 count++;
			 if(모경현->Checked)
				 count++;
			 if(문정현->Checked)
				 count++;
			 if(박수찬->Checked)
				 count++;
			 if(박인성->Checked)
				 count++;
			 if(서영주->Checked)
				 count++;
			 if(성미진->Checked)
				 count++;
			 if(셜리->Checked)
				 count++;
			 if(손정은->Checked)
				 count++;
			 if(송준호->Checked)
				 count++;
			 if(신주철->Checked)
				 count++;
			 if(신현화->Checked)
				 count++;
			 if(안병훈->Checked)
				 count++;
			 if(안재붕->Checked)
				 count++;
			 if(안주연->Checked)
				 count++;
			 if(유인경->Checked)
				 count++;
			 if(윤이->Checked)
				 count++;
			 if(윤일근->Checked)
				 count++;
			 if(임민수->Checked)
				 count++;
			 if(지준경->Checked)
				 count++;
			 if(최유녕->Checked)
				 count++;
			 if(최준->Checked)
				 count++;
			 if(햄->Checked)
				 count++;
			 if(향긔->Checked)
				 count++;
			 if(헛썽->Checked)
				 count++;
			 if(홍재현->Checked)
				 count++;
			 if(hansol->Checked)
				 count++;
			 if(kkjj123->Checked)
				 count++;

			 if(count>0){//선택된게 잇다면

				 nameList=new char*[count];//배열생성
				 for(i=0;i<count;i++)
					 nameList[i]=new char[10];

				 i=0;
				 if(강하진->Checked)
					 nameList[i++]="강하진";
				 if(김유나->Checked)
					 nameList[i++]="김유나";
				 if(김진솔->Checked)
					 nameList[i++]="김진솔";
				 if(김형구->Checked)
					 nameList[i++]="김형구";
				 if(박근한->Checked)
					 nameList[i++]="박근한";
				 if(박민식->Checked)
					 nameList[i++]="박민식";
				 if(박소영->Checked)
					 nameList[i++]="박소영";
				 if(이성훈->Checked)
					 nameList[i++]="이성훈";
				 if(강민성->Checked)
					 nameList[i++]="강민성";
				 if(김강현->Checked)
					 nameList[i++]="김강현";
				 if(김지혁->Checked)
					 nameList[i++]="김지혁";
				 if(김태훈->Checked)
					 nameList[i++]="김태훈";
				 if(나동훈->Checked)
					 nameList[i++]="나동훈";
				 if(남상아->Checked)
					 nameList[i++]="남상아";
				 if(박소현->Checked)
					 nameList[i++]="박소현";
				 if(서수진->Checked)
					 nameList[i++]="서수진";
				 if(손혜주->Checked)
					 nameList[i++]="손혜주";
				 if(송용우->Checked)
					 nameList[i++]="송용우";
				 if(양승우->Checked)
					 nameList[i++]="양승우";
				 if(오선->Checked)
					 nameList[i++]="오선";
				 if(오영규->Checked)
					 nameList[i++]="오영규";
				 if(이고은->Checked)
					 nameList[i++]="이고은";
				 if(이관호->Checked)
					 nameList[i++]="이관호";
				 if(이도영->Checked)
					 nameList[i++]="이도영";
				 if(이람->Checked)
					 nameList[i++]="이람";
				 if(이선민->Checked)
					 nameList[i++]="이선민";
				 if(이주원->Checked)
					 nameList[i++]="이주원";
				 if(이준기->Checked)
					 nameList[i++]="이준기";
				 if(이헌성->Checked)
					 nameList[i++]="이헌성";
				 if(이형기->Checked)
					 nameList[i++]="이형기";
				 if(임관훈->Checked)
					 nameList[i++]="임관훈";
				 if(임제헌->Checked)
					 nameList[i++]="임제헌";
				 if(임지현->Checked)
					 nameList[i++]="임지현";
				 if(지영은->Checked)
					 nameList[i++]="지영은";
				 if(최기훈->Checked)
					 nameList[i++]="최기훈";
				 if(최송희->Checked)
					 nameList[i++]="최송희";
				 if(최아름->Checked)
					 nameList[i++]="최아름";
				 if(최예은->Checked)
					 nameList[i++]="최예은";
				 if(최희수->Checked)
					 nameList[i++]="최희수";
				 if(한성원->Checked)
					 nameList[i++]="한성원";
				 if(경희->Checked)
					 nameList[i++]="경희";
				 if(고태영->Checked)
					 nameList[i++]="고태영";
				 if(권아영->Checked)
					 nameList[i++]="권아영";
				 if(김나현->Checked)
					 nameList[i++]="김나현";
				 if(김도현->Checked)
					 nameList[i++]="김도현";
				 if(김형직->Checked)
					 nameList[i++]="김형직";
				 if(모경현->Checked)
					 nameList[i++]="모경현";
				 if(문정현->Checked)
					 nameList[i++]="문정현";
				 if(박수찬->Checked)
					 nameList[i++]="박수찬";
				 if(박인성->Checked)
					 nameList[i++]="박인성";
				 if(서영주->Checked)
					 nameList[i++]="서영주";
				 if(성미진->Checked)
					 nameList[i++]="성미진";
				 if(셜리->Checked)
					 nameList[i++]="셜리";
				 if(손정은->Checked)
					 nameList[i++]="손정은";
				 if(송준호->Checked)
					 nameList[i++]="송준호";
				 if(신주철->Checked)
					 nameList[i++]="신주철";
				 if(신현화->Checked)
					 nameList[i++]="신현화";
				 if(안병훈->Checked)
					 nameList[i++]="안병훈";
				 if(안재붕->Checked)
					 nameList[i++]="안재붕";
				 if(안주연->Checked)
					 nameList[i++]="안주연";
				 if(유인경->Checked)
					 nameList[i++]="유인경";
				 if(윤이->Checked)
					 nameList[i++]="윤이";
				 if(윤일근->Checked)
					 nameList[i++]="윤일근";
				 if(임민수->Checked)
					 nameList[i++]="임민수";
				 if(지준경->Checked)
					 nameList[i++]="지준경";
				 if(최유녕->Checked)
					 nameList[i++]="최유녕";
				 if(최준->Checked)
					 nameList[i++]="최준";
				 if(햄->Checked)
					 nameList[i++]="햄";
				 if(향긔->Checked)
					 nameList[i++]="향긔";
				 if(헛썽->Checked)
					 nameList[i++]="헛썽";
				 if(홍재현->Checked)
					 nameList[i++]="홍재현";
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
						result->Text += "\r\n\r\n" + ((jo++) + "조 :");
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
