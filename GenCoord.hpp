

template <class T> class GenCoord
{
private:
	T x;
	T y;
	T z;

public:
	GenCoord(void)
	{
		x = y = z = 0;
	}

	GenCoord( T x, T y, T z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}
	
	T getX(void)
	{
		return this->x;
	}
};

template <class T>
GenCoord<T> operator-(GenCoord<T> left, GenCoord<T> right)
{
	GenCoord<T> erg = GenCoord<T>(5,5,5);
	return erg;
};

template <class T>
GenCoord<T> abs(GenCoord<T> input)
{
	GenCoord<T> tmp;
	return tmp;
}
