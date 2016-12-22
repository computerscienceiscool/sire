// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "DoubleFunc.pypp.hpp"

namespace bp = boost::python;

#include "SireCAS/errors.h"

#include "SireStream/datastream.h"

#include "complexvalues.h"

#include "doublefunc.h"

#include "identities.h"

#include "values.h"

#include <QDebug>

#include "doublefunc.h"

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_DoubleFunc_class(){

    { //::SireCAS::DoubleFunc
        typedef bp::class_< SireCAS::DoubleFunc, bp::bases< SireCAS::ExBase >, boost::noncopyable > DoubleFunc_exposer_t;
        DoubleFunc_exposer_t DoubleFunc_exposer = DoubleFunc_exposer_t( "DoubleFunc", "Base class of all double-expression functions ( e.g. f(x(), y()) )\n\nAuthor: Christopher Woods\n", bp::no_init );
        bp::scope DoubleFunc_scope( DoubleFunc_exposer );
        { //::SireCAS::DoubleFunc::children
        
            typedef ::SireCAS::Expressions ( ::SireCAS::DoubleFunc::*children_function_type)(  ) const;
            children_function_type children_function_value( &::SireCAS::DoubleFunc::children );
            
            DoubleFunc_exposer.def( 
                "children"
                , children_function_value
                , "Return the child expression of this function" );
        
        }
        { //::SireCAS::DoubleFunc::conjugate
        
            typedef ::SireCAS::Expression ( ::SireCAS::DoubleFunc::*conjugate_function_type)(  ) const;
            conjugate_function_type conjugate_function_value( &::SireCAS::DoubleFunc::conjugate );
            
            DoubleFunc_exposer.def( 
                "conjugate"
                , conjugate_function_value
                , "Return the conjugate of this function" );
        
        }
        { //::SireCAS::DoubleFunc::differentiate
        
            typedef ::SireCAS::Expression ( ::SireCAS::DoubleFunc::*differentiate_function_type)( ::SireCAS::Symbol const & ) const;
            differentiate_function_type differentiate_function_value( &::SireCAS::DoubleFunc::differentiate );
            
            DoubleFunc_exposer.def( 
                "differentiate"
                , differentiate_function_value
                , ( bp::arg("symbol") )
                , "Return the differential of this function with respect to symbol" );
        
        }
        { //::SireCAS::DoubleFunc::expand
        
            typedef ::QList< SireCAS::Factor > ( ::SireCAS::DoubleFunc::*expand_function_type)( ::SireCAS::Symbol const & ) const;
            expand_function_type expand_function_value( &::SireCAS::DoubleFunc::expand );
            
            DoubleFunc_exposer.def( 
                "expand"
                , expand_function_value
                , ( bp::arg("symbol") )
                , "" );
        
        }
        { //::SireCAS::DoubleFunc::functions
        
            typedef ::SireCAS::Functions ( ::SireCAS::DoubleFunc::*functions_function_type)(  ) const;
            functions_function_type functions_function_value( &::SireCAS::DoubleFunc::functions );
            
            DoubleFunc_exposer.def( 
                "functions"
                , functions_function_value
                , "Return the functions used in this function" );
        
        }
        { //::SireCAS::DoubleFunc::hash
        
            typedef ::uint ( ::SireCAS::DoubleFunc::*hash_function_type)(  ) const;
            hash_function_type hash_function_value( &::SireCAS::DoubleFunc::hash );
            
            DoubleFunc_exposer.def( 
                "hash"
                , hash_function_value
                , "Return a has for the function" );
        
        }
        { //::SireCAS::DoubleFunc::integrate
        
            typedef ::SireCAS::Expression ( ::SireCAS::DoubleFunc::*integrate_function_type)( ::SireCAS::Symbol const & ) const;
            integrate_function_type integrate_function_value( &::SireCAS::DoubleFunc::integrate );
            
            DoubleFunc_exposer.def( 
                "integrate"
                , integrate_function_value
                , ( bp::arg("symbol") )
                , "Return the integral of this function with respect to symbol" );
        
        }
        { //::SireCAS::DoubleFunc::isComplex
        
            typedef bool ( ::SireCAS::DoubleFunc::*isComplex_function_type)(  ) const;
            isComplex_function_type isComplex_function_value( &::SireCAS::DoubleFunc::isComplex );
            
            DoubleFunc_exposer.def( 
                "isComplex"
                , isComplex_function_value
                , "Return whether this is complex" );
        
        }
        { //::SireCAS::DoubleFunc::isCompound
        
            typedef bool ( ::SireCAS::DoubleFunc::*isCompound_function_type)(  ) const;
            isCompound_function_type isCompound_function_value( &::SireCAS::DoubleFunc::isCompound );
            
            DoubleFunc_exposer.def( 
                "isCompound"
                , isCompound_function_value
                , "A function is not compound" );
        
        }
        { //::SireCAS::DoubleFunc::isConstant
        
            typedef bool ( ::SireCAS::DoubleFunc::*isConstant_function_type)(  ) const;
            isConstant_function_type isConstant_function_value( &::SireCAS::DoubleFunc::isConstant );
            
            DoubleFunc_exposer.def( 
                "isConstant"
                , isConstant_function_value
                , "Return whether or not this is constant" );
        
        }
        { //::SireCAS::DoubleFunc::isFunction
        
            typedef bool ( ::SireCAS::DoubleFunc::*isFunction_function_type)( ::SireCAS::Symbol const & ) const;
            isFunction_function_type isFunction_function_value( &::SireCAS::DoubleFunc::isFunction );
            
            DoubleFunc_exposer.def( 
                "isFunction"
                , isFunction_function_value
                , ( bp::arg("symbol") )
                , "Return if this is a function of symbol" );
        
        }
        { //::SireCAS::DoubleFunc::operator=
        
            typedef ::SireCAS::DoubleFunc & ( ::SireCAS::DoubleFunc::*assign_function_type)( ::SireCAS::DoubleFunc const & ) ;
            assign_function_type assign_function_value( &::SireCAS::DoubleFunc::operator= );
            
            DoubleFunc_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireCAS::DoubleFunc::substitute
        
            typedef ::SireCAS::Expression ( ::SireCAS::DoubleFunc::*substitute_function_type)( ::SireCAS::Identities const & ) const;
            substitute_function_type substitute_function_value( &::SireCAS::DoubleFunc::substitute );
            
            DoubleFunc_exposer.def( 
                "substitute"
                , substitute_function_value
                , ( bp::arg("identities") )
                , "Substitute into this expression" );
        
        }
        { //::SireCAS::DoubleFunc::symbols
        
            typedef ::SireCAS::Symbols ( ::SireCAS::DoubleFunc::*symbols_function_type)(  ) const;
            symbols_function_type symbols_function_value( &::SireCAS::DoubleFunc::symbols );
            
            DoubleFunc_exposer.def( 
                "symbols"
                , symbols_function_value
                , "Return the symbols used in this function" );
        
        }
        { //::SireCAS::DoubleFunc::toString
        
            typedef ::QString ( ::SireCAS::DoubleFunc::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireCAS::DoubleFunc::toString );
            
            DoubleFunc_exposer.def( 
                "toString"
                , toString_function_value
                , "Return a string representation of this function" );
        
        }
        { //::SireCAS::DoubleFunc::x
        
            typedef ::SireCAS::Expression const & ( ::SireCAS::DoubleFunc::*x_function_type)(  ) const;
            x_function_type x_function_value( &::SireCAS::DoubleFunc::x );
            
            DoubleFunc_exposer.def( 
                "x"
                , x_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireCAS::DoubleFunc::y
        
            typedef ::SireCAS::Expression const & ( ::SireCAS::DoubleFunc::*y_function_type)(  ) const;
            y_function_type y_function_value( &::SireCAS::DoubleFunc::y );
            
            DoubleFunc_exposer.def( 
                "y"
                , y_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        DoubleFunc_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireCAS::DoubleFunc >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        DoubleFunc_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireCAS::DoubleFunc >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        DoubleFunc_exposer.def( "__str__", &__str__< ::SireCAS::DoubleFunc > );
        DoubleFunc_exposer.def( "__repr__", &__str__< ::SireCAS::DoubleFunc > );
        DoubleFunc_exposer.def( "__hash__", &::SireCAS::DoubleFunc::hash );
    }

}
