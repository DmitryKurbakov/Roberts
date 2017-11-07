#pragma once

#include "Model.h"

using namespace System::Windows::Forms;
using namespace System;
using namespace System::IO;

ref class FilesHandler
{
public:
	FilesHandler();
	~FilesHandler();

	Model^ GetModel(String^ fileName);
};

