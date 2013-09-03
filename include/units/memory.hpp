/* Copyright 2013, Garbanzo Prime

    This file is part of units.
    units is subject to the license specified in LICENSE.txt
*/
#ifndef UNITS_MEMORY_43eca86b_f55a_4520_873b_eb07b48d6390
#define UNITS_MEMORY_43eca86b_f55a_4520_873b_eb07b48d6390

#include "./ratio.hpp"

namespace units {
	template< typename Rep , typename Ratio >
	class Bytes {
	public:
		Rep count() constexpr  { return _data ; }
	
	private:
		Rep _data ;
	} ;
}

#endif