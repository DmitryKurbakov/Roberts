#include "ModelsDrawing.h"

ModelsDrawing::ModelsDrawing()
{
	//tet = gcnew Model();
}


ModelsDrawing::~ModelsDrawing()
{
}

Bitmap ^ ModelsDrawing::DrawTetrahedron(Bitmap^ bm, int mode, float z)
{
	
	Graphics^ gr = Graphics::FromImage(bm);
	Pen^ p = gcnew Pen(Color::Blue, 2);

	//tt = tet->GetRotationMatrix(tt, 2, 0.3);
	List<PointF>^ points;
	
	if (mode == 0)
	{
		points = GetListOfTetrahedronPoints(tet->GetParallelProjectionMatrix(tet->transVertixMatrix));
	}

	else if (mode == 1)
	{
		points = GetListOfTetrahedronPoints(tet->GetParallelProjectionPoints(tet->GetSinglePointPerspectiveProjectionMatrix(tet->transVertixMatrix, z)));
	}
	

	array<int, 2>^ r = tet->faceMatrix;

	for (int i = 0; i < r->GetLength(0); i++)
	{
		for (int j = 0; j < 3; j++)
		{

			if (j == 2)
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
