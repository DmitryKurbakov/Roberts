#include "FilesHandler.h"



FilesHandler::FilesHandler()
{
}


FilesHandler::~FilesHandler()
{
}

Model ^ FilesHandler::GetModel(String ^ fileName)
{

	Model^ model;

	//String^ fileName = "objects.txt";
	try
	{
		Console::WriteLine("trying to open file {0}...", fileName);
		StreamReader^ din = File::OpenText(fileName);

		array<String^>^ input = din->ReadToEnd()->Split('\n');
		array<String^>^ strings = gcnew array<String^>(input->GetLength(0));

		for (size_t i = 0; i < input->GetLength(0); i++)
		{
			strings[i] = input[i]->Replace("\r", "");
		}

		String^ str;
		array<String^>^ values;


		//VERTIX
		int v = Int32::Parse(strings[0]);

		array<float, 2>^ t = gcnew array<float, 2>(v, 4);

		for (size_t i = 0; i < t->GetLength(0); i++)
		{
			for (size_t j = 0; j < t->GetLength(1) - 1; j++)
			{
				String^ st = (strings[i + 1]->Split(' ')[j])->Trim();
				t[i, j] = float::Parse(st, System::Globalization::CultureInfo::InvariantCulture) * 100;
			}
			t[i, 3] = 1;
		}


		//FACES
		int f = ((v == 4) || (v == 6) || (v == 12) || (v > 20)) ? 3 : (v == 8) ? 4 : 5;

		array<int, 2>^ faceMatrix = gcnew array<int, 2>(Int32::Parse(strings[v + 1]), f);

		for (size_t i = 0; i < faceMatrix->GetLength(0); i++)
		{
			for (size_t j = 0; j < faceMatrix->GetLength(1); j++)
			{
				faceMatrix[i, j] = Int32::Parse(strings[i + v + 2]->Split(' ')[j]);
			}
		}


		model = gcnew Model(t, faceMatrix);
		//for each (String^ obj in strings)

		//{
		//	figure = obj->Split(':')[0]->ToLower()->Trim();
		//	values = obj->Split(':')[1]->Split(',');



		//	//delete currentImage;

		//}
	}
	catch (Exception^ e)
	{
		if (dynamic_cast<FileNotFoundException^>(e))
			Console::WriteLine("file '{0}' not found", fileName);
		else
			Console::WriteLine("problem reading file '{0}'", fileName);

		model = gcnew Model();
	}

	return model;

}

