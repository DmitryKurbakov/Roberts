#include "Model.h"



Model::Model(array<float, 2>^ t, array<int, 2>^ f)
{
	this->transVertixMatrix = t;
	this->faceMatrix = f;

	//marker = gcnew Marker(250, 200);
}

Model::Model()
{

	vertixMatrix = gcnew array<float, 2>(6, 3) {

		{ 0., 0., 400. },
		{ 0., 0., 600. },
		{ 600., 600., 0. },
		{ 400., 600., 0. },
		{ 400., 400., 0. },
		{ 600., 400., 0. }

	};


	faceMatrix = gcnew array<int, 2>(4, 3) {

		{ 0, 1, 2},
		{ 0, 1, 3 },
		{ 0, 2, 3 },
		{ 1, 2, 3 },

	};

	transVertixMatrix = gcnew array<float, 2>(4, 4) {

		{ 200., 100., 10., 1. },
		{ 300., 300., 15., 1. },
		{ 100., 300., 15., 1. },
		{ 400., 200., 0., 1. },


	};

	marker = gcnew Marker(250, 200);

}


Model::~Model()
{
}

void Model::MakeVertixMatrix()
{

	//vertixMatrix = {{0, 0, 50}};

	/*vertixMatrix->Add(gcnew List<int>());
	vertixMatrix->Add(gcnew List<int>());
	vertixMatrix->Add(gcnew List<int>());
	vertixMatrix->Add(gcnew List<int>());
	vertixMatrix->Add(gcnew List<int>());
	vertixMatrix->Add(gcnew List<int>());

	vertixMatrix[0]->Add(0);
	vertixMatrix[0]->Add(0);
	vertixMatrix[0]->Add(50);

	vertixMatrix[1]->Add(0);
	vertixMatrix[1]->Add(0);
	vertixMatrix[1]->Add(-50);

	vertixMatrix[2]->Add(50);
	vertixMatrix[2]->Add(50);
	vertixMatrix[2]->Add(0);

	vertixMatrix[3]->Add(-50);
	vertixMatrix[3]->Add(50);
	vertixMatrix[3]->Add(0);

	vertixMatrix[4]->Add(-50);
	vertixMatrix[4]->Add(-50);
	vertixMatrix[4]->Add(0);

	vertixMatrix[5]->Add(50);
	vertixMatrix[5]->Add(-50);
	vertixMatrix[5]->Add(0);*/


}

void Model::MakeFaceMatrix()
{


	/*faceMatrix->Add(gcnew List<int>());
	faceMatrix->Add(gcnew List<int>());
	faceMatrix->Add(gcnew List<int>());
	faceMatrix->Add(gcnew List<int>());
	faceMatrix->Add(gcnew List<int>());
	faceMatrix->Add(gcnew List<int>());
	faceMatrix->Add(gcnew List<int>());
	faceMatrix->Add(gcnew List<int>());


	faceMatrix[0]->Add(1);
	faceMatrix[0]->Add(3);
	faceMatrix[0]->Add(4);

	faceMatrix[1]->Add(1);
	faceMatrix[1]->Add(4);
	faceMatrix[1]->Add(5);

	faceMatrix[2]->Add(1);
	faceMatrix[2]->Add(5);
	faceMatrix[2]->Add(6);

	faceMatrix[3]->Add(1);
	faceMatrix[3]->Add(6);
	faceMatrix[3]->Add(3);

	faceMatrix[4]->Add(2);
	faceMatrix[4]->Add(4);
	faceMatrix[4]->Add(3);

	faceMatrix[5]->Add(2);
	faceMatrix[5]->Add(5);
	faceMatrix[5]->Add(4);

	faceMatrix[6]->Add(2);
	faceMatrix[6]->Add(6);
	faceMatrix[6]->Add(5);

	faceMatrix[7]->Add(2);
	faceMatrix[7]->Add(3);
	faceMatrix[7]->Add(6);*/


}

array<float, 2>^ MatrixMultiply(array<float, 2>^ a, array<float, 2>^ b)
{

	array<float, 2>^ r = gcnew array<float, 2>(a->GetLength(0), b->GetLength(1));

	for (int i = 0; i < a->GetLength(0); i++)
	{

		for (int j = 0; j < b->GetLength(1); j++)
		{

			for (int k = 0; k < b->GetLength(0); k++)
			{
				r[i, j] += a[i, k] * b[k, j];
			}

		}

	}

	return r;

}

array<float>^ VectorMatrixMultiply(array<float>^ a, array<float, 2>^ b)
{
	//array<float>^ r = gcnew array<float>(b->GetLength(1));

	/*for (size_t i = 0; i < b->GetLength(1); i++)
	{
		
	}*/

	/*for (int i = 0; i < b->GetLength(0); i++)
	{
		res[i] = 0;
		for (int j = 0; j < 4; j++)
		{
			res[i] += a[j] * b[j, i];
		}
	}*/
	/*
	{
		
		a[0] * b[0, 0] + a[1] * b[1, 0] + a[2] * b[2, 0] + a[3] * b[3, 0],
		a[0] * b[0, 1] + a[1] * b[1, 1] + a[2] * b[2, 1] + a[3] * b[3, 1],
		a[0] * b[0, 2] + a[1] * b[1, 2] + a[2] * b[2, 2] + a[3] * b[3, 2],
		a[0] * b[0, 3] + a[1] * b[1, 3] + a[2] * b[2, 3] + a[3] * b[3, 3],
		a[0] * b[0, 4] + a[1] * b[1, 4] + a[2] * b[2, 4] + a[3] * b[3, 4],
		a[0] * b[0, 5] + a[1] * b[1, 5] + a[2] * b[2, 5] + a[3] * b[3, 5],
	
	};*/


	/*a = gcnew  array<float>(4) { 0, 0, 1, 0 };
	b = gcnew array<float, 2>(4, 6)
	{
		{2, -2, 0, 0, 0, 0},
		{ 0, 0, 2, -2, 0, 0 },
		{ 0, 0, 0, 0, 2, -2 },
		{ -1, -1, -1, -1, -1, -1 },
	};*/

	/*for (int i = 0; i < b->GetLength(0); i++)
	{

		for (int j = 0; j < a->GetLength(0); j++)
		{
			r[i] += a[j] * b[i, j];
		}
	}	*/


	array<float>^ r = gcnew array<float>(b->GetLength(1));

	for (int i = 0; i < b->GetLength(1); i++)
	{
		r[i] = 0;
		for (int j = 0; j < 4; j++)
		{
			r[i] += a[j] * b[j, i];
		}
	}

	return r;
}

array<float, 2>^ Model::HomogeneousCoordinateMethod(array<float, 2>^ m)
{
	array<float, 2>^ result = gcnew array<float, 2>(6, 4) {

		{ m[0, 0] * m[0, 3], m[0, 1] * m[0, 3], m[0, 2] * m[0, 3], m[0, 3] },
		{ m[1, 0] * m[1, 3], m[1, 1] * m[1, 3], m[1, 2] * m[1, 3], m[1, 3] },
		{ m[2, 0] * m[2, 3], m[2, 1] * m[2, 3], m[2, 2] * m[2, 3], m[2, 3] },
		{ m[3, 0] * m[3, 3], m[3, 1] * m[3, 3], m[3, 2] * m[3, 3], m[3, 3] },
		{ m[4, 0] * m[4, 3], m[4, 1] * m[4, 3], m[4, 2] * m[4, 3], m[4, 3] },
		{ m[5, 0] * m[5, 3], m[5, 1] * m[5, 3], m[5, 2] * m[5, 3], m[5, 3] },


	};


	return result;
}

array<float, 2>^ Model::GetRotationMatrix(array<float, 2>^ m, int axis, float angle)
{
	array<float, 2>^ t;
	array<float, 2>^ result;

	float sin = Math::Sin(angle);
	float cos = Math::Cos(angle);

	if (axis == 0)
	{

		t = gcnew array<float, 2>(4, 4) {

			{ 1.,	0.,			0.,		0. },
			{ 0.,	cos,		sin,	0. },
			{ 0.,	-1. * sin,	cos,	0. },
			{ 0.,	0.,			0.,		1. },


		};

	}

	if (axis == 1)
	{

		t = gcnew array<float, 2>(4, 4) {

			{ cos, 0., -1 * sin, 0. },
			{ 0.,	1.,	0.,			0. },
			{ sin,	0,	cos,		0. },
			{ 0.,	0.,	0.,			1. },


		};

	}

	if (axis == 2)
	{

		t = gcnew array<float, 2>(4, 4) {

			{ cos,		sin,	0., 0. },
			{ -1 * sin,	cos,	0.,	0. },
			{ 0.,		0.,		1.,	0. },
			{ 0.,		0.,		0.,	1. },


		};

	}


	return MatrixMultiply(m, t);
}

array<float, 2>^ Model::GetShiftsMatrix(array<float, 2>^ m, int dx, int dy, int dz)
{

	array<float, 2>^ t = gcnew array<float, 2>(4, 4) {

		{ 1., 0., 0., 0. },
		{ 0., 1., 0., 0. },
		{ 0., 0., 1., 0. },
		{ dx, dy, dz, 1. },
	};


	return MatrixMultiply(m, t);
}

array<float, 2>^ Model::GetScalingMatrix(array<float, 2>^ m, float p, float q, float r, float s)
{
	array<float, 2>^ t = gcnew array<float, 2>(4, 4) {

		{ p, 0., 0., 0. },
		{ 0., q,  0., 0. },
		{ 0., 0., r,  0. },
		{ 0., 0., 0., s },
	};


	return MatrixMultiply(m, t);
}

array<float, 2>^ Model::GetParallelProjectionMatrix(array<float, 2>^ m)
{
	array<float, 2>^ t = gcnew array<float, 2>(4, 4) {

		{ 1., 0., 0., 0. },
		{ 0., 1., 0., 0. },
		{ 0., 0., 0., 0. },
		{ 0., 0., 0., 1. },
	};

	return MatrixMultiply(m, t);
}

array<float, 2>^ Model::GetSinglePointPerspectiveProjectionMatrix(array<float, 2>^ m, float z)
{
	array<float, 2>^ t = gcnew array<float, 2>(4, 4) {

		{ 1., 0., 0., 0. },
		{ 0., 1., 0., 0. },
		{ 0., 0., 0., -1. / z },
		{ 0., 0., 0., 1. },
	};

	t = MatrixMultiply(m, t);

	return t;
}

array<float, 2>^ Model::GetSinglePointPerspectiveProjectionPoints(array<float, 2>^ m)
{
	for (int i = 0; i < m->GetLength(0); i++)
	{
		m[i, 0] /= m[i, 3];
		m[i, 1] /= m[i, 3];
		m[i, 2] /= m[i, 3];
	}

	return m;
}

array<int, 2>^ Model::RobertsAlgorithm(array<float, 2>^ v, array<int, 2>^ f)
{
	array<float, 2>^ bodyMatrix = GetBodyMatrix(v, f);

	array<float>^ testVector = gcnew array<float>(4){10, 10, 0, 1};

	//bodyMatrix = GetRotationMatrix(bodyMatrix, 1, 100);

	bodyMatrix = GetFixedMatrix(bodyMatrix, VectorMatrixMultiply(testVector, bodyMatrix));

	return CheckFaces(bodyMatrix);


}

array<float, 2>^ Model::GetBodyMatrix(array<float, 2>^ v, array<int, 2>^ f)
{
	array<float, 2>^ res = gcnew array<float, 2>(4, f->GetLength(0));

	array<float>^ p1 = gcnew array<float>(3);
	array<float>^ p2 = gcnew array<float>(3);
	array<float>^ p3 = gcnew array<float>(3);

	for (size_t i = 0; i < f->GetLength(0); i++)
	{
		
		p1[0] = v[f[i, 0], 0];
		p1[1] = v[f[i, 0], 1];
		p1[2] = v[f[i, 0], 2];
		
		p2[0] = v[f[i, 1], 0];
		p2[1] = v[f[i, 1], 1];
		p2[2] = v[f[i, 1], 2];

		p3[0] = v[f[i, 2], 0];
		p3[1] = v[f[i, 2], 1];
		p3[2] = v[f[i, 2], 2];

		float A, B, C, D;

		A = p1[1]*(p2[2] - p3[2]) + p2[1]*(p3[2] - p1[2]) + p3[1]*(p1[2] - p2[2]);
		B = p1[2]*(p2[0] - p3[0]) + p2[2]*(p3[0] - p1[0]) + p3[2]*(p1[0] - p2[0]);
		C = p1[0]*(p2[1] - p3[1]) + p2[0]*(p3[1] - p1[1]) + p2[0]*(p1[1] - p2[1]);
		D = -(p1[0] * (p2[1] * p3[2] - p3[1] * p2[2]) + p2[0] * (p3[1] * p1[2] - p1[1] * p3[2]) + p3[0] * (p1[1] * p2[2] - p2[1] * p1[2]));

		res[0, i] = A;
		res[1, i] = B;
		res[2, i] = C;
		res[3, i] = D;
	}

	return res;
}

array<float, 2>^ Model::GetFixedMatrix(array<float, 2>^ b, array<float>^ m)
{
	for (size_t k = 0; k < m->GetLength(0); k++)
	{
		if (m[k] > 0)
		{			
			for (size_t j = 0; j < b->GetLength(0); j++)
			{
				b[j, k] *= -1;
			}			
		}
		
	}

	return b;
	
}

array<int, 2>^ Model::CheckFaces(array<float, 2>^ b)
{
	

	System::Collections::Generic::List<System::Collections::Generic::List<int>^>^ temp = gcnew System::Collections::Generic::List<System::Collections::Generic::List<int>^>();


	array<float>^ testVector = gcnew array<float>(4) { 0, 0, 1000, 0 };

	array<float>^ resVector = VectorMatrixMultiply(testVector, b);

	for (size_t k = 0; k < resVector->GetLength(0); k++)
	{
		if (resVector[k] > 0)
		{
			System::Collections::Generic::List<int>^ sTemp = gcnew System::Collections::Generic::List<int>();

			for (size_t j = 0; j < faceMatrix->GetLength(1); j++)
			{
				sTemp->Add(faceMatrix[k, j]);
			}

			temp->Add(sTemp);
		}
	}


	array<int, 2>^ fm = gcnew array<int, 2>(temp->Count, faceMatrix->GetLength(1));

	for (size_t i = 0; i < fm->GetLength(0); i++)
	{
		System::Collections::Generic::List<int>^ sTemp = temp[i];

		for (size_t j = 0; j < fm->GetLength(1); j++)
		{
			fm[i, j] = sTemp[j];
		}
	}

	delete temp;
	return fm;
}



//void Model::SetSphere(float angle0, float angle1)
//{
//
//	float sin0 = Math::Sin(angle0);
//	float cos0 = Math::Cos(angle0);
//
//	float sin1 = Math::Sin(angle1);
//	float cos1 = Math::Cos(angle1);
//
//
//
//
//}



