// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "IDOrSet_FFID_.pypp.hpp"

namespace bp = boost::python;

#include "SireFF/errors.h"

#include "SireStream/datastream.h"

#include "ffid.h"

#include "ffidx.h"

#include "ffname.h"

#include "forcefields.h"

#include "ffid.h"

SireID::IDOrSet<SireFF::FFID> __copy__(const SireID::IDOrSet<SireFF::FFID> &other){ return SireID::IDOrSet<SireFF::FFID>(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_IDOrSet_FFID__class(){

    { //::SireID::IDOrSet< SireFF::FFID >
        typedef bp::class_< SireID::IDOrSet< SireFF::FFID >, bp::bases< SireFF::FFID, SireID::ID > > IDOrSet_FFID__exposer_t;
        IDOrSet_FFID__exposer_t IDOrSet_FFID__exposer = IDOrSet_FFID__exposer_t( "IDOrSet_FFID_", "", bp::init< >("") );
        bp::scope IDOrSet_FFID__scope( IDOrSet_FFID__exposer );
        IDOrSet_FFID__exposer.def( bp::init< SireFF::FFID const & >(( bp::arg("id") ), "") );
        IDOrSet_FFID__exposer.def( bp::init< SireFF::FFID const &, SireFF::FFID const & >(( bp::arg("id0"), bp::arg("id1") ), "") );
        IDOrSet_FFID__exposer.def( bp::init< QList< SireFF::FFIdentifier > const & >(( bp::arg("ids") ), "") );
        IDOrSet_FFID__exposer.def( bp::init< SireID::IDOrSet< SireFF::FFID > const & >(( bp::arg("ids") ), "") );
        IDOrSet_FFID__exposer.def( bp::init< SireID::IDOrSet< SireFF::FFID > const & >(( bp::arg("other") ), "") );
        { //::SireID::IDOrSet< SireFF::FFID >::IDs
        
            typedef SireID::IDOrSet< SireFF::FFID > exported_class_t;
            typedef ::QSet< SireFF::FFIdentifier > const & ( ::SireID::IDOrSet< SireFF::FFID >::*IDs_function_type)(  ) const;
            IDs_function_type IDs_function_value( &::SireID::IDOrSet< SireFF::FFID >::IDs );
            
            IDOrSet_FFID__exposer.def( 
                "IDs"
                , IDs_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireID::IDOrSet< SireFF::FFID >::hash
        
            typedef SireID::IDOrSet< SireFF::FFID > exported_class_t;
            typedef ::uint ( ::SireID::IDOrSet< SireFF::FFID >::*hash_function_type)(  ) const;
            hash_function_type hash_function_value( &::SireID::IDOrSet< SireFF::FFID >::hash );
            
            IDOrSet_FFID__exposer.def( 
                "hash"
                , hash_function_value
                , "" );
        
        }
        { //::SireID::IDOrSet< SireFF::FFID >::isNull
        
            typedef SireID::IDOrSet< SireFF::FFID > exported_class_t;
            typedef bool ( ::SireID::IDOrSet< SireFF::FFID >::*isNull_function_type)(  ) const;
            isNull_function_type isNull_function_value( &::SireID::IDOrSet< SireFF::FFID >::isNull );
            
            IDOrSet_FFID__exposer.def( 
                "isNull"
                , isNull_function_value
                , "" );
        
        }
        { //::SireID::IDOrSet< SireFF::FFID >::map
        
            typedef SireID::IDOrSet< SireFF::FFID > exported_class_t;
            typedef ::QList< SireFF::FFIdx > ( ::SireID::IDOrSet< SireFF::FFID >::*map_function_type)( ::SireID::IDOrSet< SireFF::FFID >::SearchObject const & ) const;
            map_function_type map_function_value( &::SireID::IDOrSet< SireFF::FFID >::map );
            
            IDOrSet_FFID__exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("obj") )
                , "" );
        
        }
        IDOrSet_FFID__exposer.def( bp::self != bp::other< SireID::ID >() );
        IDOrSet_FFID__exposer.def( bp::self != bp::self );
        IDOrSet_FFID__exposer.def( bp::self != bp::other< SireFF::FFID >() );
        { //::SireID::IDOrSet< SireFF::FFID >::operator=
        
            typedef SireID::IDOrSet< SireFF::FFID > exported_class_t;
            typedef ::SireID::IDOrSet< SireFF::FFID > & ( ::SireID::IDOrSet< SireFF::FFID >::*assign_function_type)( ::SireID::IDOrSet< SireFF::FFID > const & ) ;
            assign_function_type assign_function_value( &::SireID::IDOrSet< SireFF::FFID >::operator= );
            
            IDOrSet_FFID__exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireID::IDOrSet< SireFF::FFID >::operator=
        
            typedef SireID::IDOrSet< SireFF::FFID > exported_class_t;
            typedef ::SireID::IDOrSet< SireFF::FFID > & ( ::SireID::IDOrSet< SireFF::FFID >::*assign_function_type)( ::SireFF::FFID const & ) ;
            assign_function_type assign_function_value( &::SireID::IDOrSet< SireFF::FFID >::operator= );
            
            IDOrSet_FFID__exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        IDOrSet_FFID__exposer.def( bp::self == bp::other< SireID::ID >() );
        IDOrSet_FFID__exposer.def( bp::self == bp::self );
        IDOrSet_FFID__exposer.def( bp::self == bp::other< SireFF::FFID >() );
        { //::SireID::IDOrSet< SireFF::FFID >::toString
        
            typedef SireID::IDOrSet< SireFF::FFID > exported_class_t;
            typedef ::QString ( ::SireID::IDOrSet< SireFF::FFID >::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireID::IDOrSet< SireFF::FFID >::toString );
            
            IDOrSet_FFID__exposer.def( 
                "toString"
                , toString_function_value
                , "" );
        
        }
        { //::SireID::IDOrSet< SireFF::FFID >::typeName
        
            typedef SireID::IDOrSet< SireFF::FFID > exported_class_t;
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireID::IDOrSet< SireFF::FFID >::typeName );
            
            IDOrSet_FFID__exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireID::IDOrSet< SireFF::FFID >::what
        
            typedef SireID::IDOrSet< SireFF::FFID > exported_class_t;
            typedef char const * ( ::SireID::IDOrSet< SireFF::FFID >::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireID::IDOrSet< SireFF::FFID >::what );
            
            IDOrSet_FFID__exposer.def( 
                "what"
                , what_function_value
                , "" );
        
        }
        IDOrSet_FFID__exposer.staticmethod( "typeName" );
        IDOrSet_FFID__exposer.def( "__copy__", &__copy__);
        IDOrSet_FFID__exposer.def( "__deepcopy__", &__copy__);
        IDOrSet_FFID__exposer.def( "clone", &__copy__);
        IDOrSet_FFID__exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireID::IDOrSet<SireFF::FFID> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        IDOrSet_FFID__exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireID::IDOrSet<SireFF::FFID> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        IDOrSet_FFID__exposer.def( "__str__", &__str__< ::SireID::IDOrSet<SireFF::FFID> > );
        IDOrSet_FFID__exposer.def( "__repr__", &__str__< ::SireID::IDOrSet<SireFF::FFID> > );
        IDOrSet_FFID__exposer.def( "__hash__", &::SireID::IDOrSet<SireFF::FFID>::hash );
    }

}
