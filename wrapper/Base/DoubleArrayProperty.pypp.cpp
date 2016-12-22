// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "DoubleArrayProperty.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "arrayproperty.hpp"

#include "numberproperty.h"

#include "propertylist.h"

#include "stringproperty.h"

#include "tostring.h"

#include "propertylist.h"

SireBase::DoubleArrayProperty __copy__(const SireBase::DoubleArrayProperty &other){ return SireBase::DoubleArrayProperty(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/len.hpp"

void register_DoubleArrayProperty_class(){

    { //::SireBase::DoubleArrayProperty
        typedef bp::class_< SireBase::DoubleArrayProperty, bp::bases< SireBase::Property > > DoubleArrayProperty_exposer_t;
        DoubleArrayProperty_exposer_t DoubleArrayProperty_exposer = DoubleArrayProperty_exposer_t( "DoubleArrayProperty", "", bp::init< >("") );
        bp::scope DoubleArrayProperty_scope( DoubleArrayProperty_exposer );
        DoubleArrayProperty_exposer.def( bp::init< QList< double > const & >(( bp::arg("array") ), "") );
        DoubleArrayProperty_exposer.def( bp::init< QVector< double > const & >(( bp::arg("array") ), "") );
        DoubleArrayProperty_exposer.def( bp::init< SireBase::DoubleArrayProperty const & >(( bp::arg("other") ), "") );
        DoubleArrayProperty_exposer.def( bp::self != bp::self );
        DoubleArrayProperty_exposer.def( bp::self + bp::self );
        { //::SireBase::DoubleArrayProperty::operator=
        
            typedef ::SireBase::DoubleArrayProperty & ( ::SireBase::DoubleArrayProperty::*assign_function_type)( ::SireBase::DoubleArrayProperty const & ) ;
            assign_function_type assign_function_value( &::SireBase::DoubleArrayProperty::operator= );
            
            DoubleArrayProperty_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        DoubleArrayProperty_exposer.def( bp::self == bp::self );
        { //::SireBase::DoubleArrayProperty::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireBase::DoubleArrayProperty::typeName );
            
            DoubleArrayProperty_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        DoubleArrayProperty_exposer.staticmethod( "typeName" );
        DoubleArrayProperty_exposer.def( "__copy__", &__copy__);
        DoubleArrayProperty_exposer.def( "__deepcopy__", &__copy__);
        DoubleArrayProperty_exposer.def( "clone", &__copy__);
        DoubleArrayProperty_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireBase::DoubleArrayProperty >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        DoubleArrayProperty_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireBase::DoubleArrayProperty >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        DoubleArrayProperty_exposer.def( "__str__", &__str__< ::SireBase::DoubleArrayProperty > );
        DoubleArrayProperty_exposer.def( "__repr__", &__str__< ::SireBase::DoubleArrayProperty > );
        DoubleArrayProperty_exposer.def( "__len__", &__len_size< ::SireBase::DoubleArrayProperty > );
        DoubleArrayProperty_exposer.def( "__getitem__", &::SireBase::DoubleArrayProperty::getitem );
    }

}
