#include <iostream>

using namespace std;

class Vector2
{
public:
	Vector2() : x(0), y(0) {}
	Vector2(float x, float y) : x(x), y(y) {}

	float GetX() const { return x; }

	float GetY() const { return y; }

private:
	float x;
	float y;
};