/* Copyright 2013, Garbanzo Prime

    This file is part of units.
    units is subject to the license specified in LICENSE.txt
*/
#ifndef UNITS_DISTANCE_f58c1e8e_ce57_4ace_b9fc_eecbcad5aa74
#define UNITS_DISTANCE_f58c1e8e_ce57_4ace_b9fc_eecbcad5aa74

#include "./ratio.hpp"

namespace units {
	template< typename Rep , typename Ratio >
	class Meters {
	public:
		Meters() = default ;
		Meters( Meters<Rep,Ratio> const & ) = default ;
		explicit Meters( Rep from ) : _data( from ) {}

		Meters & operator=( Meters const & ) = default ;

		Rep amount() constexpr { return _data ; }
	

	private:
		Rep _data ;
	} ;
}

#endif