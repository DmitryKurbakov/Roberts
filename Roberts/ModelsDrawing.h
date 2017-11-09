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

	int x0, y0;

	array<float, 2>^ modVertixMatrix;

	ModelsDrawing(int x0, int y0);
	~ModelsDrawing();

	Bitmap^ DrawTetrahedron(Bitmap^ bm, int mode, float z, bool del);
	//Bitmap^ DrawTetrahedronUsingPerspectiveProjection(Bitmap^ bm);

	Bitmap^ DrawSphere(Bitmap^ bm, List<List<float>^>^ m);

	List<PointF>^ GetListOfTetrahedronPoints(array<float, 2>^ m); 

	array<float, 2>^ GetCenteringModelmatrix(array<float, 2>^ m);
};

