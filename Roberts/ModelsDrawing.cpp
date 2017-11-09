#include "ModelsDrawing.h"

ModelsDrawing::ModelsDrawing(int x0, int y0)
{
	//tet = gcnew Model();
	
	this->x0 = x0;
	this->y0 = y0;
}


ModelsDrawing::~ModelsDrawing()
{
}

Bitmap ^ ModelsDrawing::DrawTetrahedron(Bitmap^ bm, int mode, float z, bool del)
{
	
	Graphics^ gr = Graphics::FromImage(bm);
	Pen^ p = gcnew Pen(Color::Blue, 2);

	//tt = tet->GetRotationMatrix(tt, 2, 0.3);
	List<PointF>^ points;
	
	array<int, 2>^ r = del ?
		tet->RobertsAlgorithm(tet->transVertixMatrix, tet->faceMatrix)
		: tet->faceMatrix;
	
	if (mode == 0)
	{
		modVertixMatrix = GetCenteringModelmatrix(tet->transVertixMatrix);
		points = GetListOfTetrahedronPoints(tet->GetParallelProjectionMatrix(modVertixMatrix));
	}

	else if (mode == 1)
	{

		array<float, 2>^ t = tet->GetSinglePointPerspectiveProjectionPoints(
			tet->GetSinglePointPerspectiveProjectionMatrix(
				tet->transVertixMatrix, z));
		
		modVertixMatrix = GetCenteringModelmatrix(t);

		points = GetListOfTetrahedronPoints(modVertixMatrix);
	
	}
	

	

	//array<int, 2>^ r = tet->faceMatrix;

	for (int i = 0; i < r->GetLength(0); i++)
	{
		for (int j = 0; j < r->GetLength(1); j++)
		{

			if (j == r->GetLength(1) - 1)
			{
				gr->DrawLine(p, points[r[i, j]].X, points[r[i, j]].Y, points[r[i, 0]].X, points[r[i, 0]].Y);
			}

			else
			{
				gr->DrawLine(p, points[r[i, j]].X, points[r[i, j]].Y, points[r[i, j + 1]].X, points[r[i, j + 1]].Y);
			}
			
		}
	}

	delete points;
	delete r;
	delete gr;
	delete p;

	return bm;
}

//Bitmap ^ ModelsDrawing::DrawTetrahedronUsingPerspectiveProjection(Bitmap ^ bm)
//{
//	Graphics^ gr = Graphics::FromImage(bm);
//	Pen^ p = gcnew Pen(Color::Blue, 2);
//
//	//tt = tet->GetRotationMatrix(tt, 2, 0.3);
//	List<PointF>^ points = GetListOfTetrahedronPoints(tet->GetParallelProjectionPoints(tet->GetSinglePointPerspectiveProjectionMatrix(tet->transVertixMatrix, 100)));
//	//List<PointF>^ points = GetListOfTetrahedronPoints(tet->GetParallelProjectionMatrix(tet->transVertixMatrix));
//	array<int, 2>^ r = tet->faceMatrix;
//
//	for (int i = 0; i < r->GetLength(0); i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//
//			if (j == 2)
//			{
//				gr->DrawLine(p, points[r[i, j]].X, points[r[i, j]].Y, points[r[i, 0]].X, points[r[i, 0]].Y);
//			}
//
//			else
//			{
//				gr->DrawLine(p, points[r[i, j]].X, points[r[i, j]].Y, points[r[i, j + 1]].X, points[r[i, j + 1]].Y);
//			}
//
//		}
//	}
//
//	delete points;
//	delete r;
//	delete gr;
//	delete p;
//
//	return bm;
//}

Bitmap ^ ModelsDrawing::DrawSphere(Bitmap ^ bm, List<List<float>^>^ m)
{
	
	for each (List<float>^ l in m)
	{
		bm->SetPixel(x0 + l[0], y0 + l[1], Color::Blue);
	}

	return bm;
}

List<PointF>^ ModelsDrawing::GetListOfTetrahedronPoints(array<float, 2>^ m)
{
	List<PointF>^ p = gcnew List<PointF>();

	for (size_t i = 0; i < m->GetLength(0); i++)
	{
		PointF point(m[i, 0], m[i, 1]);

		p->Add(point);
	}

	return p;
}

array<float, 2>^ ModelsDrawing::GetCenteringModelmatrix(array<float, 2>^ m)
{
	modVertixMatrix = gcnew array<float, 2>(m->GetLength(0), m->GetLength(1));

	for (size_t i = 0; i < m->GetLength(0); i++)
	{
		modVertixMatrix[i, 0] += m[i, 0] + x0;
		modVertixMatrix[i, 1] += m[i, 1] + y0;
	}

	return modVertixMatrix;
}

