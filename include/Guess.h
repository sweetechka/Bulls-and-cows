#pragma once

/*Класс "угадайка"*/

using namespace System; 
using namespace System::Collections::Generic; 

ref class Guess
{
	List<int>^ data; //Данные
	List<int>^ trydata; //Данные попыток
	List<String^>^ history; //История попыток

	bool Valid(int value)
	{
		if (value < 1000 || value > 9999) return false; //неверное количество цифр
		trydata->Clear();
		for (int k = 0; k < 4; k++)
		{
			int d = value % 10;
			if (trydata->IndexOf(d) >= 0) return false; //Повторная
			trydata->Add(d);
			value /= 10;
		}
		//Если добавлены все - то все нормально
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