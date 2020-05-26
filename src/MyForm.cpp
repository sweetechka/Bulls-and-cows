#include "MyForm.h" 

using namespace System; 
using namespace System::Windows::Forms; 

[STAThread]
int main(array<String^>^ args)  //Точка входа
{
	//Обязательные действия
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	BullsandcowsVisualStudio::MyForm form;

	//Запуск приложения
	Application::Run(%form);
}
