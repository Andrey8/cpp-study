#include <deque>
#include <list>
#include <vector>
#include <iostream>



namespace Tests
{
	template < typename T >
	std::ostream & operator<<( std::ostream & os, std::vector< T > const & v )
	{
		//os << "[[ ";
		for ( T const & item : v )
		{
			os << item << ' ';
		}
		//os << "]]";

		return os;
	}

	template < typename T >
	void PrintInfo( std::vector< T > const & v )
	{
		std::cout << "--- Vector " << v << " :\n";
		std::cout << "\tsize : " << v.size() << '\n';
		std::cout << "\tcapacity : " << v.capacity() << '\n';

		std::cout << "\telements' addresses :\n";
		for ( unsigned i = 0; i < v.size(); ++i )
		{
			std::cout << "\t\t" << i << " - " << &( v[ i ] ) << '\n';
		}

		std::cout << "---\n";
	}

	template < typename T >
	std::ostream & operator<<( std::ostream & os, std::deque< T > const & d )
	{
		os << "[[ ";
		for ( T const & item : d )
		{
			os << item << ' ';
		}
		os << "]]";

		return os;
	}

	template < typename T >
	void PrintInfo( std::deque< T > const & d )
	{
		std::cout << "--- Deque " << d << " :\n";
		std::cout << "\tsize : " << d.size() << '\n';

		std::cout << "\telements' addresses :\n";
		for ( unsigned i = 0; i < d.size(); ++i )
		{
			std::cout << "\t\t" << i << " - " << &( d[ i ] ) << '\n';
		}

		std::cout << "---\n";
	}

	void TestDeque_QueueModel_1()
	{
		std::deque< int > queue;

		std::list< int > const inputData = { 2, 4, 6, 8, 10, 12 };
		for ( auto const & item : inputData )
		{
			queue.push_front( item );
		}

		PrintInfo( queue );

		std::vector< int > outputData;
		while ( !queue.empty() )
		{
			outputData.push_back( queue.back() );

			queue.pop_back();
		}

		PrintInfo( queue );
		PrintInfo( outputData );
	}
}

