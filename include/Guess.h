#pragma once

/*����� "��������"*/

using namespace System; 
using namespace System::Collections::Generic; 

ref class Guess
{
	List<int>^ data; //������
	List<int>^ trydata; //������ �������
	List<String^>^ history; //������� �������

	bool Valid(int value)
	{
		if (value < 1000 || value > 9999) return false; //�������� ���������� ����
		trydata->Clear();
		for (int k = 0; k < 4; k++)
		{
			int d = value % 10;
			if (trydata->IndexOf(d) >= 0) return false; //���������
			trydata->Add(d);
			value /= 10;
		}
		//���� ��������� ��� - �� ��� ���������
		return true;
	}


public:

	Guess()
	{
		data = gcnew List<int>(4);
		trydata = gcnew List<int>(4);
		history = gcnew List<String^>();
		SetRandom();
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