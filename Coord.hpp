

class Coord
{
private:
	int x;
	int y;
	int z;

public:
	Coord(void)
	{
		x = y = z = 0;
	}

	Coord( int x, int y, int z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}
	
	int getX(void)
	{
		return this->x;
	}
};

Coord operator - (Coord left, Coord right)
{
	Coord erg = Coord(5,5,5);
	return erg;
};

Coord abs(Coord input)
{
	Coord tmp;
	return tmp;
}
