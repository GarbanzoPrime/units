/* Copyright 2013, Garbanzo Prime

    This file is part of units.
    units is subject to the license specified in LICENSE.txt
*/
#ifndef UNITS_TIME_589af57b_bfa5_4b41_8910_b92081be16fb
#define UNITS_TIME_589af57b_bfa5_4b41_8910_b92081be16fb

#include "./ratio.hpp"

namespace units {
	template< typename Rep , typename Ratio >
	class Seconds {
	public:

		Rep count() constexpr  { return _data ; }
	
	private:
		Rep _data ;
	} ;
}

#endif