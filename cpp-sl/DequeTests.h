#include <deque>
#include <vector>
#include <iostream>



namespace Tests
{
	template < typename T >
	std::ostream & operator<<( std::ostream & os, std::vector< T > const & v );

	template < typename T >
	void PrintInfo( std::vector< T > const & v );

	template < typename T >
	std::ostream & operator<<( std::ostream & os, std::deque< T > const & d );

	template < typename T >
	void PrintInfo( std::deque< T > const & d );

	void TestDeque_QueueModel_1();
}

