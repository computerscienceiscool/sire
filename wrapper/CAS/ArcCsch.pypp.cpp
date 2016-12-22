// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "ArcCsch.pypp.hpp"

namespace bp = boost::python;

#include "SireMaths/errors.h"

#include "SireStream/datastream.h"

#include "complexvalues.h"

#include "exp.h"

#include "expression.h"

#include "hyperbolicfuncs.h"

#include "identities.h"

#include "invhyperbolicfuncs.h"

#include "invtrigfuncs.h"

#include "trigfuncs.h"

#include "invhyperbolicfuncs.h"

SireCAS::ArcCsch __copy__(const SireCAS::ArcCsch &other){ return SireCAS::ArcCsch(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_ArcCsch_class(){

    { //::SireCAS::ArcCsch
        typedef bp::class_< SireCAS::ArcCsch, bp::bases< SireCAS::SingleFunc, SireCAS::ExBase > > ArcCsch_exposer_t;
        ArcCsch_exposer_t ArcCsch_exposer = ArcCsch_exposer_t( "ArcCsch", "Inverse-hyperbolic-cosecant", bp::init< >("Null constructor") );
        bp::scope ArcCsch_scope( ArcCsch_exposer );
        ArcCsch_exposer.def( bp::init< SireCAS::Expression const & >(( bp::arg("ex") ), "Construct cos(expression)") );
        ArcCsch_exposer.def( bp::init< SireCAS::ArcCsch const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireCAS::ArcCsch::evaluate
        
            typedef double ( ::SireCAS::ArcCsch::*evaluate_function_type)( ::SireCAS::Values const & ) const;
            evaluate_function_type evaluate_function_value( &::SireCAS::ArcCsch::evaluate );
            
            ArcCsch_exposer.def( 
                "evaluate"
                , evaluate_function_value
                , ( bp::arg("values") )
                , "Evaluate this function" );
        
        }
        { //::SireCAS::ArcCsch::evaluate
        
            typedef ::SireMaths::Complex ( ::SireCAS::ArcCsch::*evaluate_function_type)( ::SireCAS::ComplexValues const & ) const;
            evaluate_function_type evaluate_function_value( &::SireCAS::ArcCsch::evaluate );
            
            ArcCsch_exposer.def( 
                "evaluate"
                , evaluate_function_value
                , ( bp::arg("values") )
                , "Complex evaluation" );
        
        }
        ArcCsch_exposer.def( bp::self == bp::other< SireCAS::ExBase >() );
        { //::SireCAS::ArcCsch::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireCAS::ArcCsch::typeName );
            
            ArcCsch_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireCAS::ArcCsch::what
        
            typedef char const * ( ::SireCAS::ArcCsch::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireCAS::ArcCsch::what );
            
            ArcCsch_exposer.def( 
                "what"
                , what_function_value
                , "" );
        
        }
        ArcCsch_exposer.staticmethod( "typeName" );
        ArcCsch_exposer.def( "__copy__", &__copy__);
        ArcCsch_exposer.def( "__deepcopy__", &__copy__);
        ArcCsch_exposer.def( "clone", &__copy__);
        ArcCsch_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireCAS::ArcCsch >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        ArcCsch_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireCAS::ArcCsch >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        ArcCsch_exposer.def( "__str__", &__str__< ::SireCAS::ArcCsch > );
        ArcCsch_exposer.def( "__repr__", &__str__< ::SireCAS::ArcCsch > );
        ArcCsch_exposer.def( "__hash__", &::SireCAS::ArcCsch::hash );
    }

}
