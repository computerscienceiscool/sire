// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Version.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/refcountdata.h"

#include "SireStream/datastream.h"

#include "majorminorversion.h"

#include <QDataStream>

#include "majorminorversion.h"

SireBase::Version __copy__(const SireBase::Version &other){ return SireBase::Version(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_Version_class(){

    { //::SireBase::Version
        typedef bp::class_< SireBase::Version > Version_exposer_t;
        Version_exposer_t Version_exposer = Version_exposer_t( "Version", "This is a simple class that holds a major and minor version number", bp::init< bp::optional< quint64, quint64 > >(( bp::arg("major")=(::quint64)(0), bp::arg("minor")=(::quint64)(0) ), "Constructor") );
        bp::scope Version_scope( Version_exposer );
        Version_exposer.def( bp::init< SireBase::Version const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireBase::Version::majorVersion
        
            typedef ::quint64 ( ::SireBase::Version::*majorVersion_function_type)(  ) const;
            majorVersion_function_type majorVersion_function_value( &::SireBase::Version::majorVersion );
            
            Version_exposer.def( 
                "majorVersion"
                , majorVersion_function_value
                , "" );
        
        }
        { //::SireBase::Version::minorVersion
        
            typedef ::quint64 ( ::SireBase::Version::*minorVersion_function_type)(  ) const;
            minorVersion_function_type minorVersion_function_value( &::SireBase::Version::minorVersion );
            
            Version_exposer.def( 
                "minorVersion"
                , minorVersion_function_value
                , "" );
        
        }
        Version_exposer.def( bp::self != bp::self );
        { //::SireBase::Version::operator=
        
            typedef ::SireBase::Version & ( ::SireBase::Version::*assign_function_type)( ::SireBase::Version const & ) ;
            assign_function_type assign_function_value( &::SireBase::Version::operator= );
            
            Version_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        Version_exposer.def( bp::self == bp::self );
        { //::SireBase::Version::toString
        
            typedef ::QString ( ::SireBase::Version::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireBase::Version::toString );
            
            Version_exposer.def( 
                "toString"
                , toString_function_value
                , "Return a string representation of this version number" );
        
        }
        { //::SireBase::Version::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireBase::Version::typeName );
            
            Version_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireBase::Version::what
        
            typedef char const * ( ::SireBase::Version::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireBase::Version::what );
            
            Version_exposer.def( 
                "what"
                , what_function_value
                , "" );
        
        }
        Version_exposer.staticmethod( "typeName" );
        Version_exposer.def( "__copy__", &__copy__);
        Version_exposer.def( "__deepcopy__", &__copy__);
        Version_exposer.def( "clone", &__copy__);
        Version_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireBase::Version >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Version_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireBase::Version >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Version_exposer.def( "__str__", &__str__< ::SireBase::Version > );
        Version_exposer.def( "__repr__", &__str__< ::SireBase::Version > );
    }

}
