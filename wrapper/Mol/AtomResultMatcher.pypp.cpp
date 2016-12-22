// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "AtomResultMatcher.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireStream/datastream.h"

#include "SireUnits/units.h"

#include "atomidentifier.h"

#include "atomidx.h"

#include "atommatcher.h"

#include "atommatchers.h"

#include "atomname.h"

#include "atomselection.h"

#include "evaluator.h"

#include "moleculeinfodata.h"

#include "moleculeview.h"

#include "tostring.h"

#include "atommatcher.h"

SireMol::AtomResultMatcher __copy__(const SireMol::AtomResultMatcher &other){ return SireMol::AtomResultMatcher(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_AtomResultMatcher_class(){

    { //::SireMol::AtomResultMatcher
        typedef bp::class_< SireMol::AtomResultMatcher, bp::bases< SireMol::AtomMatcher, SireBase::Property > > AtomResultMatcher_exposer_t;
        AtomResultMatcher_exposer_t AtomResultMatcher_exposer = AtomResultMatcher_exposer_t( "AtomResultMatcher", "This is a simple atom matcher that can be used to repeat a match\nbased on a prior result\n\nAuthor: Christopher Woods\n", bp::init< >("Constructor") );
        bp::scope AtomResultMatcher_scope( AtomResultMatcher_exposer );
        AtomResultMatcher_exposer.def( bp::init< QHash< SireMol::AtomIdx, SireMol::AtomIdx > const &, bp::optional< bool > >(( bp::arg("results"), bp::arg("invert")=(bool)(false) ), "Constructor") );
        AtomResultMatcher_exposer.def( bp::init< SireMol::AtomResultMatcher const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMol::AtomResultMatcher::isNull
        
            typedef bool ( ::SireMol::AtomResultMatcher::*isNull_function_type)(  ) const;
            isNull_function_type isNull_function_value( &::SireMol::AtomResultMatcher::isNull );
            
            AtomResultMatcher_exposer.def( 
                "isNull"
                , isNull_function_value
                , "" );
        
        }
        AtomResultMatcher_exposer.def( bp::self != bp::self );
        { //::SireMol::AtomResultMatcher::operator=
        
            typedef ::SireMol::AtomResultMatcher & ( ::SireMol::AtomResultMatcher::*assign_function_type)( ::SireMol::AtomResultMatcher const & ) ;
            assign_function_type assign_function_value( &::SireMol::AtomResultMatcher::operator= );
            
            AtomResultMatcher_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        AtomResultMatcher_exposer.def( bp::self == bp::self );
        { //::SireMol::AtomResultMatcher::toString
        
            typedef ::QString ( ::SireMol::AtomResultMatcher::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMol::AtomResultMatcher::toString );
            
            AtomResultMatcher_exposer.def( 
                "toString"
                , toString_function_value
                , "" );
        
        }
        { //::SireMol::AtomResultMatcher::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::AtomResultMatcher::typeName );
            
            AtomResultMatcher_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireMol::AtomResultMatcher::what
        
            typedef char const * ( ::SireMol::AtomResultMatcher::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMol::AtomResultMatcher::what );
            
            AtomResultMatcher_exposer.def( 
                "what"
                , what_function_value
                , "" );
        
        }
        AtomResultMatcher_exposer.staticmethod( "typeName" );
        AtomResultMatcher_exposer.def( "__copy__", &__copy__);
        AtomResultMatcher_exposer.def( "__deepcopy__", &__copy__);
        AtomResultMatcher_exposer.def( "clone", &__copy__);
        AtomResultMatcher_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::AtomResultMatcher >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AtomResultMatcher_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::AtomResultMatcher >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AtomResultMatcher_exposer.def( "__str__", &__str__< ::SireMol::AtomResultMatcher > );
        AtomResultMatcher_exposer.def( "__repr__", &__str__< ::SireMol::AtomResultMatcher > );
    }

}
