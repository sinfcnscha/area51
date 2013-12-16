#include <iostream>
#include <Coord.hpp>
#include <GenCoord.hpp>

using namespace std;


int main()
{
	Coord a = Coord(1,1,1);
	Coord b = Coord();
	a = abs(a - b);
	GenCoord<int> c = GenCoord<int>(1,1,1);
	GenCoord<int> d = GenCoord<int>(1,1,1);
	c = abs(d-c);

	cout << "value: " << a.getX() << endl;
	cout << "value: " << c.getX() << endl;
	return 0;
}
