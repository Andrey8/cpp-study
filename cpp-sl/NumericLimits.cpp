#include "NumericLimits.h"

#include <iostream>
#include <limits>



namespace Tests
{
	template < typename T >
	void PrintNumericLimits()
	{
		std::cout << "Minimum value = " << std::numeric_limits< T >::min() << '\n';
		std::cout << "Maximum value = " << std::numeric_limits< T >::max() << '\n';
		std::cout << "Digits10 = " << std::numeric_limits< T >::digits10 << '\n';
		std::cout << "Epsilon = " << std::numeric_limits< T >::epsilon() << '\n';
		std::cout << "Infinity = " << std::numeric_limits< T >::infinity() << '\n';
	}

	void Test_NumericLimits_1()
	{	
		std::cout << "For int :\n";
		Tests::PrintNumericLimits< int >();

		std::cout << '\n';

		std::cout << "For double :\n";
		Tests::PrintNumericLimits< double >();

		std::cout << '\n';

		std::cout << "For char :\n";
		Tests::PrintNumericLimits< char >();
	}
}

