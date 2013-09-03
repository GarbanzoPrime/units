/* Copyright 2013, Garbanzo Prime

    This file is part of units.
    units is subject to the license specified in LICENSE.txt
*/
#ifndef UNITS_RATIO_059ece67_bac1_4792_bbc4_cc2bd442dde4
#define UNITS_RATIO_059ece67_bac1_4792_bbc4_cc2bd442dde4

#include "./config.hpp"
#include "./operations.hpp"

namespace units {
	template<Integer NUM , Integer DEN = 1>
	struct ratio {
		static constexpr Integer num = sign(NUM) * sign(DEN) * abs(NUM) / gcd(NUM,DEN) ;
		static constexpr Integer den = abs(DEN) / gcd(NUM, DEN) ;  
	/*	enum { 
				num = sign(NUM) * sign(DEN) * abs(NUM) / gcd(NUM,DEN) ,
				den = abs(DEN) / gcd(NUM, DEN)  
			} ;
	*/	
		typedef ratio<num, den> type ;
	} ;


	using atto  = ratio<1, 1000000000000000000> ;
	using femto = ratio<1,    1000000000000000> ;
	using pico  = ratio<1,       1000000000000> ;
	using nano  = ratio<1,          1000000000> ;
	using micro = ratio<1,             1000000> ;
	using milli = ratio<1,                1000> ;
	using centi = ratio<1,                 100> ;
	using deci  = ratio<1,                  10> ;
	using deca  = ratio<10,                  1> ;
	using hecto = ratio<100,                 1> ;
	using kilo  = ratio<1000,                1> ;
	using mega  = ratio<1000000,             1> ;
	using giga  = ratio<1000000000,          1> ;
	using tera  = ratio<1000000000000,       1> ;
	using peta  = ratio<1000000000000000,    1> ;
	using exa   = ratio<1000000000000000000, 1> ;

	template< typename R1 , typename R2 >
	using ratio_add = ratio<
		R1::num * lcm( R1::den , R2::den ) / R1::den + R2::num * lcm( R1::den , R2::den ) / R2::den ,
		lcm( R1::den , R2::den )> ;

	template< typename R1 , typename R2 >
	using ratio_subtract = ratio<
		R1::num * lcm( R1::den , R2::den ) / R1::den - R2::num * lcm( R1::den , R2::den ) / R2::den ,
		lcm( R1::den , R2::den )> ;

	template< typename R1 , typename R2 >
	using ratio_multiply = ratio<
		R1::num * R2::num ,
		R1::den * R2::den> ;

	template< typename R1 , typename R2 >
	using ratio_divide = ratio<
		R1::num * R2::den ,
		R1::den * R2::num> ;


/*	template< typename R1 , typename R2 >
	struct ratio_less = 
*/
}

#endif