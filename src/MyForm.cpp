#include "MyForm.h" //Главная форма - там
using namespace System; //Эта библиотека именно сейчас не используется, но может пригодиться
using namespace System::Windows::Forms; //Там все о формах
[STAThread]
int main(array<String^>^ args)  //Точка входа
{
	//Обязательные действия
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//Это - форма
	Bullsandcowsproject::MyForm form;
	//Запустить приложение, главная форма - эта
	Application::Run(% form);
}


	