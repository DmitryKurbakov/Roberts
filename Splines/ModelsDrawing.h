#pragma once

#include "Algorithms.h"
#include "Model.h"

using namespace System::Drawing;
using namespace System::Collections::Generic;


ref class ModelsDrawing :
	public Algorithms
{

	

public:

	Model^ tet;

	ModelsDrawing();
	~ModelsDrawing();

	Bitmap^ DrawTetrahedron(Bitmap^ bm, int mode, float z);
	//Bitmap^ DrawTetrahedronUsingPerspectiveProjection(Bitmap^ bm);

	List<PointF>^ GetListOfTetrahedronPoints(array<float, 2>^ m); 
};

