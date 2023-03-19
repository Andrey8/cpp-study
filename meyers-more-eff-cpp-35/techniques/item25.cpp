#include "item25.h"

#include <iostream>
#include <string>
#include <list>
#include <fstream>
#include <sstream>



namespace Meyers35
{
	namespace Item25
	{
		class AbstractNLComponent
		{
		public:
			AbstractNLComponent( std::string const & str )
				: m_data( str )
			{}

			// The Virtual Constructor
			virtual AbstractNLComponent * Clone() const = 0;
			std::string GetData() const { return m_data; }
			virtual std::ostream & Print( std::ostream & os ) const = 0;

		protected:
			std::string m_data;
		};

		std::ostream & operator<<( std::ostream & os, AbstractNLComponent const & nlcomp )
		{
			return nlcomp.Print( os );
		}



		class TextBlock : public AbstractNLComponent
		{
		public:
			TextBlock( std::string const & str )
				: AbstractNLComponent( str )
			{}

			virtual TextBlock * Clone() const override
			{
				return new TextBlock( *this );
			}

			virtual std::ostream & Print( std::ostream & os ) const override
			{
				os << "[TextBlock] : " << m_data;

				return os;
			}
		};

		class Graphic : public AbstractNLComponent
		{
		public:
			Graphic( std::string const & str )
				: AbstractNLComponent( str )
			{}

			virtual Graphic * Clone() const override
			{
				return new Graphic( *this );
			}

			virtual std::ostream & Print( std::ostream & os ) const override
			{
				os << "[Graphic] : " << m_data;

				return os;
			}
		};

		class NewsLetter
		{
		public:
			NewsLetter( std::istream & istrm );
			NewsLetter( NewsLetter const & rhs );

			void PrintData() const;

		private:
			std::list< AbstractNLComponent * > m_components;

			AbstractNLComponent * ReadComponent( std::istream & istrm );
		};



		NewsLetter::NewsLetter( std::istream & istrm )
		{
			while ( !istrm.eof() )
			{
				// std::string line;
				// std::getline( istrm, line );
				// std::cout << "\'" << line << "\'" << '\n';

				m_components.push_back( ReadComponent( istrm ) );
			}
		}

		NewsLetter::NewsLetter( NewsLetter const & rhs )
		{
			for ( auto const & item : rhs.m_components )
			{
				m_components.push_back( item->Clone() );
			}
		}

		void NewsLetter::PrintData() const
		{
			for ( auto const & item : m_components )
			{
				//std::cout << "\'" << item->GetData() << "\' ";
				std::cout << *item << '\n';
			}

			std::cout << '\n';
		}

		AbstractNLComponent * NewsLetter::ReadComponent( std::istream & istrm )
		{
			//std::cout << m_components.size() << '\n';

			if ( !istrm )
			{
				throw std::runtime_error( "ERROR : input stream is empty.\n" );
			}

			std::string line;
			std::getline( istrm, line );

			// if ( istrm.eof() )
			// {
			// 	std::cout << "empty stream\n";
			// }

			//std::cout << "Line : \'" << line << "\'" << '\n';

			std::istringstream iss( line );

			std::string tag;
			iss >> tag;

			//std::cout << "Tag : " << tag << '\n';

			if ( tag == "TB" )
			{
				std::string data;
				iss >> data;

				return new TextBlock( data );
			}
			else if ( tag == "G" )
			{
				std::string data;
				iss >> data;

				return new Graphic( data );
			}

			throw std::invalid_argument( "ERROR : wrong input line.\n" );
		}



		void Test_1( char const * filePath )
		{
			std::ifstream inputFile( filePath );

			if ( !inputFile.is_open() )
			{
				throw std::runtime_error( "ERROR : file is not open.\n" );
			}

			NewsLetter letter1( inputFile );
			letter1.PrintData();

			std::cout << "-----\n";

			NewsLetter letter2( letter1 );
			letter2.PrintData();
		}

	}
}
