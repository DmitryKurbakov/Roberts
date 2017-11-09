#pragma once


using namespace System;
using namespace System::Collections::Generic;

ref class Sphere
{
public:

	array<float, 2>^ vertices;
	array<int, 2>^ faces;

	Sphere();
	~Sphere();


	List<List<float>^>^ SetSphere();

	void GetSphereStandartModel(List<List<float>^>^ v, List<List<int>^>^ f);
};

