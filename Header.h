#include<cstdlib>
#include<ctime>
using namespace System;
using namespace System::IO;
#define  MAX_SIZE 100
ref class myObject{
	
	array <String^>^ object;
	int count;
public:
	myObject(){
		this->object = gcnew array <String^>(MAX_SIZE);
		this->count = 0;
	}

	//�������� �� �������
	bool isEmpty() {
		return this->count == 0;
	}

	//�������� �� �������������
	bool isFull() {
		return this->count == MAX_SIZE;
	}
	//��������
	bool add(String^ pr) {
		if (!isFull())
		{
			this->object[count] = pr;
			this->count++;
			return true;
		}
		else return false;
	}
	//�������
	void deleteObject(int index) {
		for (int i = index; i < this->count - 1; i++) {
			this->object[i] = this->object[i + 1];
		}
		this->count--;
	}

	//������������� ��������� ������
	String^ generateRandObject() {
		srand(time(0));
		int i = 0 + rand() % (this->count);
		return this->object[i];
	}

	//��������� ����
	void readFromFile(StreamReader^ SR) {
		String^ str = gcnew String("");
		int i = 0;
		while (str = SR->ReadLine()) {
			this->object[i] = str;
			this->count++;
			i++;
		}
		SR->Close();
	}

	//��������� � ����
	void writeToFile(StreamWriter^ SW) {
		for (int i = 0; i < this->count - 1; i++) {
			String^ Line = gcnew String("");
			Line = this->object[i] + "\n";
			SW->Write(Line);
		}
		String^ Line = this->object[this->count - 1];
		SW->Write(Line);
		SW->Close();
	}

	//���������� � ListBox
	void viewLB(System::Windows::Forms::ListBox^ LB) {
		LB->Items->Clear();
		for (int i = 0; i < this->count; i++) {
			LB->Items->Add(this->object[i]);
		}
	}
};
