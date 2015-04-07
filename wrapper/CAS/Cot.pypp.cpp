// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Cot.pypp.hpp"

namespace bp = boost::python;

#include "SireStream/datastream.h"

#include "complexvalues.h"

#include "exp.h"

#include "expression.h"

#include "identities.h"

#include "trigfuncs.h"

#include "trigfuncs.h"

SireCAS::Cot __copy__(const SireCAS::Cot &other){ return SireCAS::Cot(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_Cot_class(){

    { //::SireCAS::Cot
        typedef bp::class_< SireCAS::Cot, bp::bases< SireCAS::SingleFunc, SireCAS::ExBase > > Cot_exposer_t;
        Cot_exposer_t Cot_exposer = Cot_exposer_t( "Cot", bp::init< >() );
        bp::scope Cot_scope( Cot_exposer );
        Cot_exposer.def( bp::init< SireCAS::Expression const & >(( bp::arg("ex") )) );
        Cot_exposer.def( bp::init< SireCAS::Cot const & >(( bp::arg("other") )) );
        { //::SireCAS::Cot::evaluate
        
            typedef double ( ::SireCAS::Cot::*evaluate_function_type )( ::SireCAS::Values const & ) const;
            evaluate_function_type evaluate_function_value( &::SireCAS::Cot::evaluate );
            
            Cot_exposer.def( 
                "evaluate"
                , evaluate_function_value
                , ( bp::arg("values") ) );
        
        }
        { //::SireCAS::Cot::evaluate
        
            typedef ::SireMaths::Complex ( ::SireCAS::Cot::*evaluate_function_type )( ::SireCAS::ComplexValues const & ) const;
            evaluate_function_type evaluate_function_value( &::SireCAS::Cot::evaluate );
            
            Cot_exposer.def( 
                "evaluate"
                , evaluate_function_value
                , ( bp::arg("values") ) );
        
        }
        Cot_exposer.def( bp::self == bp::other< SireCAS::ExBase >() );
        { //::SireCAS::Cot::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireCAS::Cot::typeName );
            
            Cot_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        { //::SireCAS::Cot::what
        
            typedef char const * ( ::SireCAS::Cot::*what_function_type )(  ) const;
            what_function_type what_function_value( &::SireCAS::Cot::what );
            
            Cot_exposer.def( 
                "what"
                , what_function_value );
        
        }
        Cot_exposer.staticmethod( "typeName" );
        Cot_exposer.def( "__copy__", &__copy__);
        Cot_exposer.def( "__deepcopy__", &__copy__);
        Cot_exposer.def( "clone", &__copy__);
        Cot_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireCAS::Cot >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Cot_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireCAS::Cot >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Cot_exposer.def( "__str__", &__str__< ::SireCAS::Cot > );
        Cot_exposer.def( "__repr__", &__str__< ::SireCAS::Cot > );
    }

}