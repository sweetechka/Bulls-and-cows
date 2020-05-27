#pragma once

/*Класс "угадайка"*/

using namespace System; 
using namespace System::Collections::Generic; 

ref class Guess
{
	List<int>^ data; //Данные
	List<int>^ trydata; //Данные попыток
	List<String^>^ history; //История попыток

public:

	Guess()
	{
		data = gcnew List<int>(4);
		trydata = gcnew List<int>(4);
		history = gcnew List<String^>();
		SetRandom();
	}

	//Установить значение
	//false, если значение не годится
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
			//Быки - это когда данные совпадают
			int count = 0;
			for (int k = 0; k < data->Count; k++)
				if (data[k] == trydata[k]) count++;
			return count;
		}
	}

	property int Cow
	{
		int get() {
			//Корова - это если есть в списке. Минус быки.
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