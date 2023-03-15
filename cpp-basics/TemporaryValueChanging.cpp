#include "TemporaryValueChanging.h"

#include <iostream>



namespace CppBasicsTests
{
	class A
	{
	public:
		explicit A( int x ) : m_x( x ) {}

		int GetValue() const { return m_x; }

		A const operator++() const { return A( m_x + 1 ); }
	private:
		int m_x;
	};

	A foo( int x )
	{
		return A( x );
	}	

	int GetSquare( int x )
	{
		return x * x;
	}



	void Test_TempValueChanging_1()
	{
		//int n = 5;
		//std::cout << ++GetSquare( n ) << '\n';  // error

		//A a( 6 );
		std::cout << "Changed temporary object value = " << ( ++foo( 6 ) ).GetValue() << '\n';
	}


}










