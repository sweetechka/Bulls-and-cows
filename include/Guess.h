#pragma once

/*Класс "угадайка"*/

using namespace System; 
using namespace System::Collections::Generic; 

ref class Guess
{
public:

	Guess()
	{
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

};