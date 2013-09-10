/* Copyright 2013, Garbanzo Prime

    This file is part of units.
    units is subject to the license specified in LICENSE.txt
*/
#ifndef UNITS_FREQUENCY_6a83ae65_3179_4d2f_9eaa_07742b826a8d
#define UNITS_FREQUENCY_6a83ae65_3179_4d2f_9eaa_07742b826a8d

#include "./ratio.hpp"

namespace units {
	template< typename Rep , typename Ratio >
	class Hertz {
	public:

		Rep count() const { return _data ; }
	
	private:
		Rep _data ;
	} ;
}

#endif