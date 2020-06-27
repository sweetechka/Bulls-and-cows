#pragma once
/*
Класс "угадайка"
*/
using namespace System; //String
using namespace System::Collections::Generic; //List

ref class Guess
{
	List<int>^ data; //Data
	List<int>^ trydata; //Data of tries
	List<String^>^ history; //History of tries

	bool Valid(int value)
	{
		if (value < 1000 || value > 9999) return false; //wrong number of digits
		trydata->Clear();
		for (int k = 0; k < 4; k++)
		{
			int d = value % 10;
			if (trydata->IndexOf(d) >= 0) return false; 
			trydata->Add(d);
			value /= 10;
		}
		return true;
	}

	static Random^ random = gcnew Random();

	public:
	Guess()
	{
		data = gcnew List<int>(4);
		trydata = gcnew List<int>(4);
		history = gcnew List<String^>();
		SetRandom();
	}


	//Set false, if value is invalid
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


	//Set TrySet
	bool TrySet(int value)
	{
		if (!Valid(value)) return false; //Only right numbers
		history->Add(value.ToString() + " Бык = " + Bull.ToString() + " Корова " + Cow.ToString());
		return true;
	}


	property int Bull
	{
		int get() {
			//Bulls - correct numbers on right positions
			int count = 0;
			for (int k = 0; k < data->Count; k++)
				if (data[k] == trydata[k]) count++;
			return count;
		}
	}


	property int Cow
	{
		int get() {
			//Cows - correct numbers on wrong positions
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