#include "Main.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::OleDb;

[STAThreadAttribute]
int main(array<String^>^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Access::Main form;
	Application::Run(% form);
}

System::Void Access::Main::оПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("программа работает с MS ACCESS", "Внимание!");
}

System::Void Access::Main::выходИзПрограммыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

System::Void Access::Main::DowloadButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	//connection
	String^ connection_string = "provider=Microsoft.ACE.OLEDB.12.0;Data Source =C:/Users/Aleksej/source/repos/Access/Access/DataBase.accdb";
	OleDbConnection^ connection = gcnew OleDbConnection(connection_string);
	connection->Open();

	//Command

	String^ query = "SELECT * FROM [table_name]";
	OleDbCommand^ command = gcnew OleDbCommand(query, connection);

	//reading
	OleDbDataReader^ reader = command->ExecuteReader();

	//cheking
	if (reader->HasRows == false)
	{
		MessageBox::Show("внимание, данные не считаны", "Warning!");
		return;
	}
	else
	{
		while (reader->Read())
		{
			//Display
			dataGridView1->Rows->Add(reader["id"], reader["Name"], reader["Cost"], reader["Amount"]);
		}
	}
	reader->Close();
	connection->Close();
}


System::Void Access::Main::InsertButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dataGridView1->SelectedRows->Count != 1)
	{
		MessageBox::Show("Ты блядина выделила больше одной строки, мразь тупорылая", "Уважаемый пользователь, ну:)");
		return;
	}

	//index
	int index = dataGridView1->SelectedRows[0]->Index;;

	// cheking
	if (
		dataGridView1->Rows[index]->Cells[0] == nullptr ||
		dataGridView1->Rows[index]->Cells[1] == nullptr ||
		dataGridView1->Rows[index]->Cells[2] == nullptr ||
		dataGridView1->Rows[index]->Cells[3] == nullptr)
	{
		MessageBox::Show("Ты блять введи ВСЕ данные в строку ебливую", "К сожалению получилась ошибка:(");
		return;
	}

	//Reading
	String^ id = dataGridView1->Rows[index]->Cells[0]->Value->ToString();
	String^ name = dataGridView1->Rows[index]->Cells[1]->Value->ToString();
	String^ cost = dataGridView1->Rows[index]->Cells[2]->Value->ToString();
	String^ amount = dataGridView1->Rows[index]->Cells[3]->Value->ToString();

	//connection
	String^ connection_string = "provider=Microsoft.ACE.OLEDB.12.0;Data Source =C:/Users/Aleksej/source/repos/Access/Access/DataBase.accdb";
	OleDbConnection^ connection = gcnew OleDbConnection(connection_string);
	connection->Open();

	//Command

	String^ query = "INSERT INTO [table_name] VALUES (" + id + " , '" + name + "' ," + cost + " , " + amount + ")";
	OleDbCommand^ command = gcnew OleDbCommand(query, connection);

	if (command->ExecuteNonQuery() != 1)
	{
		MessageBox::Show("Все нормально, это программная ошибка, но все равно ты блядина:)", "Ты меня заебал:)");

	}
	else {
		MessageBox::Show("Данные добавлены", "Все ок! Расслабься, блядина");
	}
	connection->Close();
}

System::Void Access::Main::UpdateButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dataGridView1->SelectedRows->Count != 1)
	{
		MessageBox::Show("Ты блядина выделила больше одной строки, мразь тупорылая", "Уважаемый пользователь, ну:)");
		return;
	}

	//index
	int index = dataGridView1->SelectedRows[0]->Index;;

	// cheking
	if (
		dataGridView1->Rows[index]->Cells[0] == nullptr ||
		dataGridView1->Rows[index]->Cells[1] == nullptr ||
		dataGridView1->Rows[index]->Cells[2] == nullptr ||
		dataGridView1->Rows[index]->Cells[3] == nullptr)
	{
		MessageBox::Show("Ты блять введи ВСЕ данные в строку ебливую", "К сожалению получилась ошибка:(");
		return;
	}

	//Reading
	String^ id = dataGridView1->Rows[index]->Cells[0]->Value->ToString();
	String^ name = dataGridView1->Rows[index]->Cells[1]->Value->ToString();
	String^ cost = dataGridView1->Rows[index]->Cells[2]->Value->ToString();
	String^ amount = dataGridView1->Rows[index]->Cells[3]->Value->ToString();

	//connection
	String^ connection_string = "provider=Microsoft.ACE.OLEDB.12.0;Data Source =C:/Users/Aleksej/source/repos/Access/Access/DataBase.accdb";
	OleDbConnection^ connection = gcnew OleDbConnection(connection_string);
	connection->Open();

	//Command

	String^ query = "UPDATE [table_name] SET Name='" + name + "' , Cost = " + cost + " , Amount = " + amount + " WHERE id = " + id;
	OleDbCommand^ command = gcnew OleDbCommand(query, connection);

	if (command->ExecuteNonQuery() != 1)
	{
		MessageBox::Show("Все нормально, это программная ошибка, но все равно ты блядина:)", "Ты меня заебал:)");
	}
	else {
		MessageBox::Show("Данные обновлены", "Все ок! Расслабься, блядина");
	}
	connection->Close();
}

System::Void Access::Main::DeleteButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dataGridView1->SelectedRows->Count != 1)
	{
		MessageBox::Show("Ты блядина выделила больше одной строки, мразь тупорылая", "Уважаемый пользователь, ну:)");
		return;
	}

	//index
	int index = dataGridView1->SelectedRows[0]->Index;;

	// cheking
	if (dataGridView1->Rows[index]->Cells[0] == nullptr )
	{
		MessageBox::Show("Ты блять введи ВСЕ данные в строку ебливую", "К сожалению получилась ошибка:(");
		return;
	}

	//Reading
	String^ id = dataGridView1->Rows[index]->Cells[0]->Value->ToString();
	

	//connection
	String^ connection_string = "provider=Microsoft.ACE.OLEDB.12.0;Data Source =C:/Users/Aleksej/source/repos/Access/Access/DataBase.accdb";
	OleDbConnection^ connection = gcnew OleDbConnection(connection_string);
	connection->Open();

	//Command

	String^ query = "DELETE FROM [table_name] WHERE id = "+id;
	OleDbCommand^ command = gcnew OleDbCommand(query, connection);

	if (command->ExecuteNonQuery() != 1)
	{
		MessageBox::Show("Все нормально, это программная ошибка, но все равно ты блядина:)", "Ты меня заебал:)");
	}
	else {
		MessageBox::Show("Данные удалены", "Все ок! Расслабься, блядина");
		dataGridView1->Rows->RemoveAt(index);
	}
	connection->Close();
}
