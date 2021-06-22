#include <iostream>
#include <string>
#include <vector>
#include <cstring>
using namespace std;

class DrawShape // Abstract class
{
public:
	virtual void draw() = 0;

	void Param();
};

class SolidShapes : public DrawShape // Sub Abstract class
{
public:
	virtual ~SolidShapes() {}

};

class Square : public SolidShapes // A concrete class
{
public:
	virtual void draw() override
	{
		cout << "Draw a square" << endl;
	}

	virtual ~Square() {}
};


int main()
{
	Square* sq = new Square();

	sq->draw();


	return 0;
}
