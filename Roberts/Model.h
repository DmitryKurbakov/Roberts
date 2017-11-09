#pragma once


#include "Marker.h"


using namespace System;
using namespace System::Collections::Generic;

ref class Model
{
public:

	Marker^ marker;

	array<float, 2>^ vertixMatrix;
	array<int, 2>^ faceMatrix;
	array<float, 2>^ transVertixMatrix;

	Model(array<float, 2>^ t, array<int, 2>^ f);

	Model();
	~Model();

	void MakeVertixMatrix();
	void MakeFaceMatrix();

	array<float, 2>^ HomogeneousCoordinateMethod(array<float, 2>^ m);

	array<float, 2>^ GetRotationMatrix(array<float, 2>^ m, int axis, float angle);
	array<float, 2>^ GetShiftsMatrix(array<float, 2>^ m, int dx, int dy, int dz);
	array<float, 2>^ GetScalingMatrix(array<float, 2>^ m, float p, float q, float r, float s);

	array<float, 2>^ GetParallelProjectionMatrix(array<float, 2>^ m);
	array<float, 2>^ GetSinglePointPerspectiveProjectionMatrix(array<float, 2>^ m, float z);

	array<float, 2>^ GetSinglePointPerspectiveProjectionPoints(array<float, 2>^ m);
	//array<float, 2>^ MatrixMultiply(array<float, 2>^ a, array<float, 2>^ b);

	
	array<int, 2>^ RobertsAlgorithm(array<float, 2>^ v, array<int, 2>^ f);
	array<float, 2>^ GetBodyMatrix(array<float, 2>^ v, array<int, 2>^ f);
	array<float, 2>^ GetFixedMatrix(array<float, 2>^ b, array<float>^ m);
	array<int, 2>^ CheckFaces(array<float, 2>^ b);


	//void SetSphere(float angle0, float angle1);
};

