#pragma once


ref class Marker
{

public:

	int x;
	int y;
	int radius = 500;

	bool isDrag;
	Marker(int x, int y);
	~Marker();

	void MouseDown()
	{
		isDrag = true;
	}

	void MouseUp()
	{
		isDrag = false;
	}

	//void MouseMove();



};

