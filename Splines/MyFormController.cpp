#include "MyFormController.h"



MyFormController::MyFormController(PictureBox^ p)
{
	this->pictureBox = p;
	this->pictureBox->Image = gcnew Bitmap(1920, 1080);

	this->mod = gcnew ModelsDrawing();

	cursor.X = 250;
	cursor.Y = 200;

}


MyFormController::~MyFormController()
{
}

void MyFormController::OnFormLoad()
{

	//Bitmap^ inputBitmap = gcnew Bitmap(pictureBox->Image);
	Bitmap^ resultBitmap = gcnew Bitmap(pictureBox->Image->Width, pictureBox->Image->Height);

	resultBitmap = mod->DrawTetrahedron(resultBitmap, mode, z);

	delete pictureBox->Image;
	pictureBox->Image = resultBitmap;

	
}

void MyFormController::OnMarkerMouseDown()
{
	mod->tet->marker->MouseDown();
}

void MyFormController::OnMarkerMouseMove(Point p)
{
	if (!(mod->tet->marker->isDrag)) return;
	
	Bitmap^ inputBitmap = gcnew Bitmap(pictureBox->Image);
	Bitmap^ resultBitmap = gcnew Bitmap(pictureBox->Image->Width, pictureBox->Image->Height);

	if (mode == 0)
	{
		
		mod->tet->transVertixMatrix = mod->tet->GetShiftsMatrix(mod->tet->transVertixMatrix,

			p.X == 0 ? 0 : p.X < cursor.X ? -2 : 2, 
			p.Y == 0 ? 0 : p.Y < cursor.Y ? -2 : 2, 

			0);

		resultBitmap = mod->DrawTetrahedron(resultBitmap, mode, z);
	}
	
	cursor = p;

	delete inputBitmap;
	delete pictureBox->Image;
	pictureBox->Image = resultBitmap;
}

void MyFormController::OnMarkerMouseUp()
{
	mod->tet->marker->MouseUp();
}

void MyFormController::OnScroll(int val, bool d)
{
	Bitmap^ inputBitmap = gcnew Bitmap(pictureBox->Image);
	Bitmap^ resultBitmap = gcnew Bitmap(pictureBox->Image->Width, pictureBox->Image->Height);

	int delta = d ? 15 : -15;

	mod->tet->transVertixMatrix = mod->tet->GetShiftsMatrix(mod->tet->transVertixMatrix,
		val == 0 ? delta : 0,
		val == 1 ? delta : 0,
		val == 2 ? delta : 0
	);

	resultBitmap = mod->DrawTetrahedron(resultBitmap, mode, z);

	//delta = d;

	//delete inputBitmap;
	delete pictureBox->Image;
	pictureBox->Image = resultBitmap;
	delete inputBitmap;
}

void MyFormController::OnRotation(int val, bool d)
{
	float PI = 3.1415;

	Bitmap^ inputBitmap = gcnew Bitmap(pictureBox->Image);
	Bitmap^ resultBitmap = gcnew Bitmap(pictureBox->Image->Width, pictureBox->Image->Height);

	int delta = d ? 10 : -10;

	mod->tet->transVertixMatrix = mod->tet->GetRotationMatrix(mod->tet->transVertixMatrix,
		val,   PI * delta / 180
	);

	resultBitmap = mod->DrawTetrahedron(resultBitmap, mode, z);

	//delta = d;

	//delete inputBitmap;
	delete pictureBox->Image;
	pictureBox->Image = resultBitmap;
	delete inputBitmap;
}

void MyFormController::OnScaling(int val, bool d)
{

	Bitmap^ inputBitmap = gcnew Bitmap(pictureBox->Image);
	Bitmap^ resultBitmap = gcnew Bitmap(pictureBox->Image->Width, pictureBox->Image->Height);

	float delta = d ? 1.1 : 0.9;

	mod->tet->transVertixMatrix = mod->tet->GetScalingMatrix(mod->tet->transVertixMatrix,
		val == 0 ? delta : 1,
		val == 1 ? delta : 1,
		val == 2 ? delta : 1,
		1
	);

	resultBitmap = mod->DrawTetrahedron(resultBitmap, mode, z);

	//delta = d;

	//delete inputBitmap;
	delete pictureBox->Image;
	pictureBox->Image = resultBitmap;
	delete inputBitmap;
}
