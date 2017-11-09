#pragma once

#include "ModelsDrawing.h"
#include "FilesHandler.h"
#include "Sphere.h"

using namespace System::Windows::Forms;


ref class MyFormController 
{
public:
	
	PictureBox^ pictureBox;

	ModelsDrawing^ mod;

	Point cursor;

	FilesHandler^ fh;


	int mode = 0;
	bool del = false;
	float z = 150;

	String^ fileName = "sphere.txt";
	//int delta = 500;

	MyFormController(PictureBox^ p);
	~MyFormController();

	void OnFormLoad();
	void OnMarkerMouseDown();
	void OnMarkerMouseMove(Point p);
	void OnMarkerMouseUp();
	void OnScroll(int val, bool d);
	void OnRotation(int val, bool d);
	void OnScaling(int val, bool d);

	
};

