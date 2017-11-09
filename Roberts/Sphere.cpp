#include "Sphere.h"



Sphere::Sphere()
{
}


Sphere::~Sphere()
{
}


List<List<float>^>^ Sphere::SetSphere()
{
	int s = 100;
	float pi = 3.14159265;

	float deltaTheta = pi / 12;
	float deltaPhi = 2 * pi / 10;

	List<List<float>^>^ v = gcnew List<List<float>^>();

	List<float>^ t = gcnew List<float>();
	t->Add(0 * s);
	t->Add(0 * s);
	t->Add(1 * s);
	t->Add(1);

	v->Add(t);

	float theta = 0;
	float phi = 0;

	for (int ring = 0; ring < 10; ring++)
	{
		theta += deltaTheta;
		for (int p = 0; p < 10; p++)
		{
			phi += deltaPhi;

			float x = Math::Sin(theta) * Math::Cos(phi) * s;
			float y = Math::Sin(theta) * Math::Sin(phi) * s;
			float z = Math::Cos(theta) * s;


			t = gcnew List<float>();
			t->Add(x);
			t->Add(y);
			t->Add(z);
			t->Add(1);

			v->Add(t);
		}
	}

	t = gcnew List<float>();
	t->Add(0 * s);
	t->Add(0 * s);
	t->Add(-1 * s);
	t->Add(1);

	v->Add(t);



	List<List<int>^>^ f = gcnew List<List<int>^>();


	for (size_t i = 0; i < v->Count -10; i++)
	{
		List<int>^ t = gcnew List<int>();

		t->Add(i);
		t->Add(i + 1);
		t->Add(i + 10);

		f->Add(t);
	}

	/*for (size_t i = v->Count - 10; i < v->Count - 1; i++)
	{
		List<int>^ t = gcnew List<int>();

		t->Add(i);
		t->Add(i + 1);
		t->Add(v->Count - 1);

		f->Add(t);
	}*/

	for (size_t i = 0; i < v->Count - 11; i++)
	{
		List<int>^ t = gcnew List<int>();

		t->Add(i);
		t->Add(i + 10);
		t->Add(i + 11);

		f->Add(t);
	}

	//for (size_t i = v->Count - 11; i < v->Count - 1; i++)
	//{
	//	List<int>^ t = gcnew List<int>();

	//	t->Add(i);
	//	t->Add(v->Count - 1);
	//	t->Add(0);

	//	f->Add(t);
	//}

	GetSphereStandartModel(v, f);
	return v;


	/*for (size_t i = 0; i < v->Count - 10; i++)
	{
		List<int>^ t = gcnew List<int>();

		t->Add(i);
		t->Add(i + 1);
		t->Add(i + 10);

		f->Add(t);
	}

	for (size_t i = v->Count - 10; i < v->Count - 1; i++)
	{
		List<int>^ t = gcnew List<int>();

		t->Add(i);
		t->Add(i + 1);
		t->Add(v->Count - 1);

		f->Add(t);
	}

	for (size_t i = 0; i < v->Count - 11; i++)
	{
		List<int>^ t = gcnew List<int>();

		t->Add(i + 1);
		t->Add(i + 10);
		t->Add(i + 11);

		f->Add(t);
	}*/

	/*for (size_t i = v->Count - 11; i < v->Count; i++)
	{
		List<int>^ t = gcnew List<int>();

		t->Add(i);
		t->Add(v->Count - 2);
		t->Add(v->Count - 1);

		f->Add(t);
	}*/

	//drawVertex(0, 0, 1) //north pole end cap
	//	for (int ring; ring < 10; ring++) { //move to a new z - offset 
	//		theta += deltaTheta;
	//		for (int point; point < 10; point++) { // draw a ring
	//			phi += deltaPhi;
	//			x = sin(theta) * cos(phi)
	//				y = sin(theta) * sin(phi)
	//				z = cos(theta)
	//				drawVertex(x, y, z)
	//		}
	//	}
	//drawVertex(0, 0, -1) //south pole end cap

	/*float sinA = Math::Sin(angle0);
	float cosA = Math::Cos(angle0);

	float sinB = Math::Sin(angle1);
	float cosB = Math::Cos(angle1);

	float s = 0.001;*/

	//List<List<float>^>^ v = gcnew List<List<float>^>();
	//List<List<int>^>^ f = gcnew List<List<int>^>();

	//float PI = 3.14159265;

	//float sA = PI / 50;
	//float sB = 2 * PI / 50;

	//for (int r = 0; r < 100; r += 5)
	//{
	//	if (r == 0)
	//	{
	//		List<float>^ t = gcnew List<float>();
	//		t->Add(0);
	//		t->Add(-100);
	//		t->Add(0);
	//		t->Add(1);
	//		continue;
	//	}

	//	for (float a = 0, b = 0; a <= PI && b <= 2 * PI; a += sA, b += sB)
	//	{
	//		List<float>^ t = gcnew List<float>();

	//		float sinA = Math::Sin(a);
	//		float cosA = Math::Cos(a);

	//		float sinB = Math::Sin(b);
	//		float cosB = Math::Cos(b);

	//		float X = r * sinA * cosB;
	//		float Y = r * sinA * sinB;
	//		float Z = r * cosA;

	//		t->Add(X);
	//		t->Add(Y);
	//		t->Add(Z);
	//		t->Add(1);

	//		v->Add(t);

	//	}

	//}
		

	//for (int r = 100; r >= 0; r -= 5)
	//{

	//	if (r == 0)
	//	{
	//		List<float>^ t = gcnew List<float>();
	//		t->Add(0);
	//		t->Add(100);
	//		t->Add(0);
	//		t->Add(1);
	//		continue;
	//	}

	//	for (float a = 0, b = 0; a <= PI && b <= 2 * PI; a += sA, b += sB)
	//	{
	//		List<float>^ t = gcnew List<float>();

	//		float sinA = Math::Sin(a);
	//		float cosA = Math::Cos(a);

	//		float sinB = Math::Sin(b);
	//		float cosB = Math::Cos(b);

	//		float X = r * sinA * cosB;
	//		float Y = r * sinA * sinB;
	//		float Z = r * cosA;

	//		t->Add(X);
	//		t->Add(Y);
	//		t->Add(Z);
	//		t->Add(1);

	//		v->Add(t);

	//	}

	//}

}

void Sphere::GetSphereStandartModel(List<List<float>^>^ v, List<List<int>^>^ f)
{
	vertices = gcnew array<float, 2>(v->Count, 4);

	for (size_t i = 0; i < vertices->GetLength(0); i++)
	{
		List<float>^ t = v[i];

		vertices[i, 0] = t[0];
		vertices[i, 1] = t[1];
		vertices[i, 2] = t[2];
		vertices[i, 3] = t[3];
	}

	faces = gcnew array<int, 2>(f->Count, 3);

	for (size_t i = 0; i < faces->GetLength(0); i++)
	{
		List<int>^ t = f[i];

		faces[i, 0] = t[0];
		faces[i, 1] = t[1];
		faces[i, 2] = t[2];
	}
}
