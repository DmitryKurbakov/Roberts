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

	array<float, 2>^ r = gcnew array<float, 2>(4, 4);

	for (int i = 0; i < 4; i++)
	{

		for (int j = 0; j < 4; j++)
		{

			for (int k = 0; k < 4; k++)
			{
				r[i, j] += a[i, k] * b[k, j];
			}

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

array<float, 2>^ Model::GetParallelProjectionPoints(array<float, 2>^ m)
{
	for (int i = 0; i < m->GetLength(0); i++)
	{
		m[i, 0] /= m[i, 3];
		m[i, 1] /= m[i, 3];
	}

	return m;
}







