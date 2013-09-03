/* Copyright 2013, Garbanzo Prime

    This file is part of units.
    units is subject to the license specified in LICENSE.txt
*/
#ifndef UNITS_OPERATIONS_7f8fd5d9_b45a_4e47_ab90_0dbe60fc10c4
#define UNITS_OPERATIONS_7f8fd5d9_b45a_4e47_ab90_0dbe60fc10c4

#include "./config.hpp"

namespace units {

	constexpr Integer gcd( Integer x, Integer y ) {
		return ( x % y ) == 0 ? y : gcd( y , x % y ) ;
	}

	constexpr Integer abs( Integer val ) {
		return val < 0 ? val * -1 : val ;
	}

	constexpr Integer sign( Integer val ) {
		return val < 0 ? -1 : 1 ; 
	}
	
	constexpr Integer lcm( Integer x, Integer y ) {
		return x / gcd( x , y ) * y ;
	}
}

#endif