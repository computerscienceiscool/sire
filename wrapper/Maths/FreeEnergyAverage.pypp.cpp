// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "FreeEnergyAverage.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireMaths/histogram.h"

#include "SireMaths/maths.h"

#include "SireStream/datastream.h"

#include "SireUnits/units.h"

#include "freeenergyaverage.h"

#include <QDebug>

#include "freeenergyaverage.h"

SireMaths::FreeEnergyAverage __copy__(const SireMaths::FreeEnergyAverage &other){ return SireMaths::FreeEnergyAverage(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_FreeEnergyAverage_class(){

    { //::SireMaths::FreeEnergyAverage
        typedef bp::class_< SireMaths::FreeEnergyAverage, bp::bases< SireMaths::ExpAverage, SireMaths::Accumulator, SireBase::Property > > FreeEnergyAverage_exposer_t;
        FreeEnergyAverage_exposer_t FreeEnergyAverage_exposer = FreeEnergyAverage_exposer_t( "FreeEnergyAverage", bp::init< >() );
        bp::scope FreeEnergyAverage_scope( FreeEnergyAverage_exposer );
        FreeEnergyAverage_exposer.def( bp::init< bool >(( bp::arg("forwards_free_energy") )) );
        FreeEnergyAverage_exposer.def( bp::init< SireUnits::Dimension::Temperature const &, bp::optional< bool > >(( bp::arg("temperature"), bp::arg("forwards_free_energy")=(bool)(true) )) );
        FreeEnergyAverage_exposer.def( bp::init< SireUnits::Dimension::MolarEnergy const &, bp::optional< bool > >(( bp::arg("binwidth"), bp::arg("forwards_free_energy")=(bool)(true) )) );
        FreeEnergyAverage_exposer.def( bp::init< SireUnits::Dimension::Temperature const &, SireUnits::Dimension::MolarEnergy const &, bp::optional< bool > >(( bp::arg("temperature"), bp::arg("binwidth"), bp::arg("forwards_free_energy")=(bool)(true) )) );
        FreeEnergyAverage_exposer.def( bp::init< SireMaths::FreeEnergyAverage const & >(( bp::arg("other") )) );
        { //::SireMaths::FreeEnergyAverage::accumulate
        
            typedef void ( ::SireMaths::FreeEnergyAverage::*accumulate_function_type )( double ) ;
            accumulate_function_type accumulate_function_value( &::SireMaths::FreeEnergyAverage::accumulate );
            
            FreeEnergyAverage_exposer.def( 
                "accumulate"
                , accumulate_function_value
                , ( bp::arg("value") ) );
        
        }
        { //::SireMaths::FreeEnergyAverage::average
        
            typedef double ( ::SireMaths::FreeEnergyAverage::*average_function_type )(  ) const;
            average_function_type average_function_value( &::SireMaths::FreeEnergyAverage::average );
            
            FreeEnergyAverage_exposer.def( 
                "average"
                , average_function_value );
        
        }
        { //::SireMaths::FreeEnergyAverage::average2
        
            typedef double ( ::SireMaths::FreeEnergyAverage::*average2_function_type )(  ) const;
            average2_function_type average2_function_value( &::SireMaths::FreeEnergyAverage::average2 );
            
            FreeEnergyAverage_exposer.def( 
                "average2"
                , average2_function_value );
        
        }
        { //::SireMaths::FreeEnergyAverage::clear
        
            typedef void ( ::SireMaths::FreeEnergyAverage::*clear_function_type )(  ) ;
            clear_function_type clear_function_value( &::SireMaths::FreeEnergyAverage::clear );
            
            FreeEnergyAverage_exposer.def( 
                "clear"
                , clear_function_value );
        
        }
        { //::SireMaths::FreeEnergyAverage::fepFreeEnergy
        
            typedef double ( ::SireMaths::FreeEnergyAverage::*fepFreeEnergy_function_type )(  ) const;
            fepFreeEnergy_function_type fepFreeEnergy_function_value( &::SireMaths::FreeEnergyAverage::fepFreeEnergy );
            
            FreeEnergyAverage_exposer.def( 
                "fepFreeEnergy"
                , fepFreeEnergy_function_value );
        
        }
        { //::SireMaths::FreeEnergyAverage::histogram
        
            typedef ::SireMaths::Histogram const & ( ::SireMaths::FreeEnergyAverage::*histogram_function_type )(  ) const;
            histogram_function_type histogram_function_value( &::SireMaths::FreeEnergyAverage::histogram );
            
            FreeEnergyAverage_exposer.def( 
                "histogram"
                , histogram_function_value
                , bp::return_value_policy<bp::clone_const_reference>() );
        
        }
        { //::SireMaths::FreeEnergyAverage::isBackwardsFreeEnergy
        
            typedef bool ( ::SireMaths::FreeEnergyAverage::*isBackwardsFreeEnergy_function_type )(  ) const;
            isBackwardsFreeEnergy_function_type isBackwardsFreeEnergy_function_value( &::SireMaths::FreeEnergyAverage::isBackwardsFreeEnergy );
            
            FreeEnergyAverage_exposer.def( 
                "isBackwardsFreeEnergy"
                , isBackwardsFreeEnergy_function_value );
        
        }
        { //::SireMaths::FreeEnergyAverage::isForwardsFreeEnergy
        
            typedef bool ( ::SireMaths::FreeEnergyAverage::*isForwardsFreeEnergy_function_type )(  ) const;
            isForwardsFreeEnergy_function_type isForwardsFreeEnergy_function_value( &::SireMaths::FreeEnergyAverage::isForwardsFreeEnergy );
            
            FreeEnergyAverage_exposer.def( 
                "isForwardsFreeEnergy"
                , isForwardsFreeEnergy_function_value );
        
        }
        FreeEnergyAverage_exposer.def( bp::self != bp::self );
        FreeEnergyAverage_exposer.def( bp::self + bp::self );
        { //::SireMaths::FreeEnergyAverage::operator=
        
            typedef ::SireMaths::FreeEnergyAverage & ( ::SireMaths::FreeEnergyAverage::*assign_function_type )( ::SireMaths::FreeEnergyAverage const & ) ;
            assign_function_type assign_function_value( &::SireMaths::FreeEnergyAverage::operator= );
            
            FreeEnergyAverage_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >() );
        
        }
        FreeEnergyAverage_exposer.def( bp::self == bp::self );
        { //::SireMaths::FreeEnergyAverage::taylorExpansion
        
            typedef double ( ::SireMaths::FreeEnergyAverage::*taylorExpansion_function_type )(  ) const;
            taylorExpansion_function_type taylorExpansion_function_value( &::SireMaths::FreeEnergyAverage::taylorExpansion );
            
            FreeEnergyAverage_exposer.def( 
                "taylorExpansion"
                , taylorExpansion_function_value );
        
        }
        { //::SireMaths::FreeEnergyAverage::temperature
        
            typedef ::SireUnits::Dimension::Temperature ( ::SireMaths::FreeEnergyAverage::*temperature_function_type )(  ) const;
            temperature_function_type temperature_function_value( &::SireMaths::FreeEnergyAverage::temperature );
            
            FreeEnergyAverage_exposer.def( 
                "temperature"
                , temperature_function_value );
        
        }
        { //::SireMaths::FreeEnergyAverage::toString
        
            typedef ::QString ( ::SireMaths::FreeEnergyAverage::*toString_function_type )(  ) const;
            toString_function_type toString_function_value( &::SireMaths::FreeEnergyAverage::toString );
            
            FreeEnergyAverage_exposer.def( 
                "toString"
                , toString_function_value );
        
        }
        { //::SireMaths::FreeEnergyAverage::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMaths::FreeEnergyAverage::typeName );
            
            FreeEnergyAverage_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        FreeEnergyAverage_exposer.staticmethod( "typeName" );
        FreeEnergyAverage_exposer.def( "__copy__", &__copy__);
        FreeEnergyAverage_exposer.def( "__deepcopy__", &__copy__);
        FreeEnergyAverage_exposer.def( "clone", &__copy__);
        FreeEnergyAverage_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMaths::FreeEnergyAverage >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        FreeEnergyAverage_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMaths::FreeEnergyAverage >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        FreeEnergyAverage_exposer.def( "__str__", &__str__< ::SireMaths::FreeEnergyAverage > );
        FreeEnergyAverage_exposer.def( "__repr__", &__str__< ::SireMaths::FreeEnergyAverage > );
    }

}