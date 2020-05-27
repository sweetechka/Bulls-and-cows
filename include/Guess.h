#pragma once

/*����� "��������"*/

using namespace System; 
using namespace System::Collections::Generic; 

ref class Guess
{
	List<int>^ data; //������
	List<int>^ trydata; //������ �������
	List<String^>^ history; //������� �������

public:

	Guess()
	{
		data = gcnew List<int>(4);
		trydata = gcnew List<int>(4);
		history = gcnew List<String^>();
		SetRandom();
	}

	//���������� ��������
	//false, ���� �������� �� �������
	bool Set(int value)
	{
		history->Clear();
		if (!Valid(value)) return false;
		data->Clear();
		for each (int v in trydata) data->Add(v);
		return true;
	}

	void SetRandom()
	{
		int value;
		do
		{
			value = random->Next(1000, 10000);
		} while (!Set(value));
	}


	property int Bull
	{
		int get() {
			//���� - ��� ����� ������ ���������
			int count = 0;
			for (int k = 0; k < data->Count; k++)
				if (data[k] == trydata[k]) count++;
			return count;
		}
	}

	property int Cow
	{
		int get() {
			//������ - ��� ���� ���� � ������. ����� ����.
			int count = 0;
			for (int k = 0; k < trydata->Count; k++)
				if (data->IndexOf(trydata[k]) >= 0) count++;
			count -= Bull;
			return count;
		}
	}

	property List<String^>^ History
	{
		List<String^>^ get() { return history; }
	}

};