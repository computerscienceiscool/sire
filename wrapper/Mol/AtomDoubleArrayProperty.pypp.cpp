// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "AtomDoubleArrayProperty.pypp.hpp"

namespace bp = boost::python;

#include "atompropertylist.h"

#include "atompropertylist.h"

#include "SireMaths/vector.h"

#include "SireMol/moleculeview.h"

SireMol::AtomProperty<SireBase::DoubleArrayProperty> __copy__(const SireMol::AtomProperty<SireBase::DoubleArrayProperty> &other){ return SireMol::AtomProperty<SireBase::DoubleArrayProperty>(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/len.hpp"

void register_AtomDoubleArrayProperty_class(){

    { //::SireMol::AtomProperty< SireBase::DoubleArrayProperty >
        typedef bp::class_< SireMol::AtomProperty< SireBase::DoubleArrayProperty >, bp::bases< SireMol::AtomProp, SireMol::MolViewProperty, SireBase::Property > > AtomDoubleArrayProperty_exposer_t;
        AtomDoubleArrayProperty_exposer_t AtomDoubleArrayProperty_exposer = AtomDoubleArrayProperty_exposer_t( "AtomDoubleArrayProperty", "", bp::init< >("") );
        bp::scope AtomDoubleArrayProperty_scope( AtomDoubleArrayProperty_exposer );
        AtomDoubleArrayProperty_exposer.def( bp::init< SireMol::MoleculeInfo const & >(( bp::arg("molinfo") ), "") );
        AtomDoubleArrayProperty_exposer.def( bp::init< SireMol::MoleculeInfo const &, SireBase::DoubleArrayProperty const & >(( bp::arg("molinfo"), bp::arg("default_value") ), "") );
        AtomDoubleArrayProperty_exposer.def( bp::init< SireMol::MoleculeView const & >(( bp::arg("molview") ), "") );
        AtomDoubleArrayProperty_exposer.def( bp::init< SireMol::MoleculeView const &, SireBase::DoubleArrayProperty const & >(( bp::arg("molview"), bp::arg("default_value") ), "") );
        AtomDoubleArrayProperty_exposer.def( bp::init< SireMol::MoleculeInfoData const & >(( bp::arg("molinfo") ), "") );
        AtomDoubleArrayProperty_exposer.def( bp::init< SireMol::MoleculeInfoData const &, SireBase::DoubleArrayProperty const & >(( bp::arg("molinfo"), bp::arg("default_value") ), "") );
        AtomDoubleArrayProperty_exposer.def( bp::init< SireBase::DoubleArrayProperty const & >(( bp::arg("value") ), "") );
        AtomDoubleArrayProperty_exposer.def( bp::init< SireBase::PackedArray2D< SireBase::DoubleArrayProperty > const & >(( bp::arg("values") ), "") );
        AtomDoubleArrayProperty_exposer.def( bp::init< SireMol::AtomProperty< SireBase::DoubleArrayProperty > const & >(( bp::arg("other") ), "") );
        { //::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::array
        
            typedef SireMol::AtomProperty< SireBase::DoubleArrayProperty > exported_class_t;
            typedef ::SireBase::PackedArray2D< SireBase::DoubleArrayProperty > const & ( ::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::*array_function_type)(  ) const;
            array_function_type array_function_value( &::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::array );
            
            AtomDoubleArrayProperty_exposer.def( 
                "array"
                , array_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::assertCanConvert
        
            typedef SireMol::AtomProperty< SireBase::DoubleArrayProperty > exported_class_t;
            typedef void ( ::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::*assertCanConvert_function_type)( ::QVariant const & ) const;
            assertCanConvert_function_type assertCanConvert_function_value( &::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::assertCanConvert );
            
            AtomDoubleArrayProperty_exposer.def( 
                "assertCanConvert"
                , assertCanConvert_function_value
                , ( bp::arg("value") )
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::assignFrom
        
            typedef SireMol::AtomProperty< SireBase::DoubleArrayProperty > exported_class_t;
            typedef void ( ::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::*assignFrom_function_type)( ::SireMol::AtomProperty< QVariant > const & ) ;
            assignFrom_function_type assignFrom_function_value( &::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::assignFrom );
            
            AtomDoubleArrayProperty_exposer.def( 
                "assignFrom"
                , assignFrom_function_value
                , ( bp::arg("values") )
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::at
        
            typedef SireMol::AtomProperty< SireBase::DoubleArrayProperty > exported_class_t;
            typedef ::SireBase::PackedArray2D< SireBase::DoubleArrayProperty >::Array const & ( ::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::*at_function_type)( ::SireMol::CGIdx ) const;
            at_function_type at_function_value( &::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::at );
            
            AtomDoubleArrayProperty_exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("cgidx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::at
        
            typedef SireMol::AtomProperty< SireBase::DoubleArrayProperty > exported_class_t;
            typedef ::SireBase::DoubleArrayProperty const & ( ::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::*at_function_type)( ::SireMol::CGAtomIdx const & ) const;
            at_function_type at_function_value( &::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::at );
            
            AtomDoubleArrayProperty_exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("cgatomidx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::canConvert
        
            typedef SireMol::AtomProperty< SireBase::DoubleArrayProperty > exported_class_t;
            typedef bool ( ::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::*canConvert_function_type)( ::QVariant const & ) const;
            canConvert_function_type canConvert_function_value( &::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::canConvert );
            
            AtomDoubleArrayProperty_exposer.def( 
                "canConvert"
                , canConvert_function_value
                , ( bp::arg("value") )
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::copyFrom
        
            typedef SireMol::AtomProperty< SireBase::DoubleArrayProperty > exported_class_t;
            typedef void ( ::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::*copyFrom_function_type)( ::QVector< SireBase::DoubleArrayProperty > const & ) ;
            copyFrom_function_type copyFrom_function_value( &::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::copyFrom );
            
            AtomDoubleArrayProperty_exposer.def( 
                "copyFrom"
                , copyFrom_function_value
                , ( bp::arg("values") )
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::copyFrom
        
            typedef SireMol::AtomProperty< SireBase::DoubleArrayProperty > exported_class_t;
            typedef void ( ::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::*copyFrom_function_type)( ::QVector< SireBase::DoubleArrayProperty > const &,::SireMol::AtomSelection const & ) ;
            copyFrom_function_type copyFrom_function_value( &::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::copyFrom );
            
            AtomDoubleArrayProperty_exposer.def( 
                "copyFrom"
                , copyFrom_function_value
                , ( bp::arg("values"), bp::arg("selection") )
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::count
        
            typedef SireMol::AtomProperty< SireBase::DoubleArrayProperty > exported_class_t;
            typedef int ( ::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::*count_function_type)(  ) const;
            count_function_type count_function_value( &::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::count );
            
            AtomDoubleArrayProperty_exposer.def( 
                "count"
                , count_function_value
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::divide
        
            typedef SireMol::AtomProperty< SireBase::DoubleArrayProperty > exported_class_t;
            typedef ::SireBase::PropertyPtr ( ::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::*divide_function_type)( ::QVector< SireMol::AtomSelection > const & ) const;
            divide_function_type divide_function_value( &::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::divide );
            
            AtomDoubleArrayProperty_exposer.def( 
                "divide"
                , divide_function_value
                , ( bp::arg("beads") )
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::divideByResidue
        
            typedef SireMol::AtomProperty< SireBase::DoubleArrayProperty > exported_class_t;
            typedef ::SireBase::PropertyPtr ( ::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::*divideByResidue_function_type)( ::SireMol::MoleculeInfoData const & ) const;
            divideByResidue_function_type divideByResidue_function_value( &::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::divideByResidue );
            
            AtomDoubleArrayProperty_exposer.def( 
                "divideByResidue"
                , divideByResidue_function_value
                , ( bp::arg("molinfo") )
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::fromVariant
        
            typedef SireMol::AtomProperty< SireBase::DoubleArrayProperty > exported_class_t;
            typedef ::SireMol::AtomProperty< SireBase::DoubleArrayProperty > ( *fromVariant_function_type )( ::SireMol::AtomProperty< QVariant > const & );
            fromVariant_function_type fromVariant_function_value( &::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::fromVariant );
            
            AtomDoubleArrayProperty_exposer.def( 
                "fromVariant"
                , fromVariant_function_value
                , ( bp::arg("variant") )
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::get
        
            typedef SireMol::AtomProperty< SireBase::DoubleArrayProperty > exported_class_t;
            typedef ::SireBase::PackedArray2D< SireBase::DoubleArrayProperty >::Array const & ( ::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::*get_function_type)( ::SireMol::CGIdx ) const;
            get_function_type get_function_value( &::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::get );
            
            AtomDoubleArrayProperty_exposer.def( 
                "get"
                , get_function_value
                , ( bp::arg("cgidx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::get
        
            typedef SireMol::AtomProperty< SireBase::DoubleArrayProperty > exported_class_t;
            typedef ::SireBase::DoubleArrayProperty const & ( ::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::*get_function_type)( ::SireMol::CGAtomIdx const & ) const;
            get_function_type get_function_value( &::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::get );
            
            AtomDoubleArrayProperty_exposer.def( 
                "get"
                , get_function_value
                , ( bp::arg("cgatomidx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::getAsProperty
        
            typedef SireMol::AtomProperty< SireBase::DoubleArrayProperty > exported_class_t;
            typedef ::SireBase::PropertyPtr ( ::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::*getAsProperty_function_type)( ::SireMol::CGAtomIdx const & ) const;
            getAsProperty_function_type getAsProperty_function_value( &::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::getAsProperty );
            
            AtomDoubleArrayProperty_exposer.def( 
                "getAsProperty"
                , getAsProperty_function_value
                , ( bp::arg("cgatomidx") )
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::getAsVariant
        
            typedef SireMol::AtomProperty< SireBase::DoubleArrayProperty > exported_class_t;
            typedef ::QVariant ( ::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::*getAsVariant_function_type)( ::SireMol::CGAtomIdx const & ) const;
            getAsVariant_function_type getAsVariant_function_value( &::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::getAsVariant );
            
            AtomDoubleArrayProperty_exposer.def( 
                "getAsVariant"
                , getAsVariant_function_value
                , ( bp::arg("cgatomidx") )
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::isCompatibleWith
        
            typedef SireMol::AtomProperty< SireBase::DoubleArrayProperty > exported_class_t;
            typedef bool ( ::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::*isCompatibleWith_function_type)( ::SireMol::MoleculeInfoData const & ) const;
            isCompatibleWith_function_type isCompatibleWith_function_value( &::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::isCompatibleWith );
            
            AtomDoubleArrayProperty_exposer.def( 
                "isCompatibleWith"
                , isCompatibleWith_function_value
                , ( bp::arg("molinfo") )
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::isCompatibleWith
        
            typedef SireMol::AtomProperty< SireBase::DoubleArrayProperty > exported_class_t;
            typedef bool ( ::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::*isCompatibleWith_function_type)( ::SireMol::MoleculeInfo const & ) const;
            isCompatibleWith_function_type isCompatibleWith_function_value( &::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::isCompatibleWith );
            
            AtomDoubleArrayProperty_exposer.def( 
                "isCompatibleWith"
                , isCompatibleWith_function_value
                , ( bp::arg("molinfo") )
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::isEmpty
        
            typedef SireMol::AtomProperty< SireBase::DoubleArrayProperty > exported_class_t;
            typedef bool ( ::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::*isEmpty_function_type)(  ) const;
            isEmpty_function_type isEmpty_function_value( &::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::isEmpty );
            
            AtomDoubleArrayProperty_exposer.def( 
                "isEmpty"
                , isEmpty_function_value
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::matchToSelection
        
            typedef SireMol::AtomProperty< SireBase::DoubleArrayProperty > exported_class_t;
            typedef ::SireMol::AtomProperty< SireBase::DoubleArrayProperty > ( ::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::*matchToSelection_function_type)( ::SireMol::AtomSelection const & ) const;
            matchToSelection_function_type matchToSelection_function_value( &::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::matchToSelection );
            
            AtomDoubleArrayProperty_exposer.def( 
                "matchToSelection"
                , matchToSelection_function_value
                , ( bp::arg("selection") )
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::merge
        
            typedef SireMol::AtomProperty< SireBase::DoubleArrayProperty > exported_class_t;
            typedef ::SireBase::PropertyPtr ( ::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::*merge_function_type)( ::SireMol::MoleculeInfoData const & ) const;
            merge_function_type merge_function_value( &::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::merge );
            
            AtomDoubleArrayProperty_exposer.def( 
                "merge"
                , merge_function_value
                , ( bp::arg("molinfo") )
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::nAtoms
        
            typedef SireMol::AtomProperty< SireBase::DoubleArrayProperty > exported_class_t;
            typedef int ( ::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::*nAtoms_function_type)(  ) const;
            nAtoms_function_type nAtoms_function_value( &::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::nAtoms );
            
            AtomDoubleArrayProperty_exposer.def( 
                "nAtoms"
                , nAtoms_function_value
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::nAtoms
        
            typedef SireMol::AtomProperty< SireBase::DoubleArrayProperty > exported_class_t;
            typedef int ( ::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::*nAtoms_function_type)( ::SireMol::CGIdx ) const;
            nAtoms_function_type nAtoms_function_value( &::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::nAtoms );
            
            AtomDoubleArrayProperty_exposer.def( 
                "nAtoms"
                , nAtoms_function_value
                , ( bp::arg("cgidx") )
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::nCutGroups
        
            typedef SireMol::AtomProperty< SireBase::DoubleArrayProperty > exported_class_t;
            typedef int ( ::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::*nCutGroups_function_type)(  ) const;
            nCutGroups_function_type nCutGroups_function_value( &::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::nCutGroups );
            
            AtomDoubleArrayProperty_exposer.def( 
                "nCutGroups"
                , nCutGroups_function_value
                , "" );
        
        }
        AtomDoubleArrayProperty_exposer.def( bp::self != bp::self );
        { //::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::operator=
        
            typedef SireMol::AtomProperty< SireBase::DoubleArrayProperty > exported_class_t;
            typedef ::SireMol::AtomProperty< SireBase::DoubleArrayProperty > & ( ::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::*assign_function_type)( ::SireMol::AtomProperty< SireBase::DoubleArrayProperty > const & ) ;
            assign_function_type assign_function_value( &::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::operator= );
            
            AtomDoubleArrayProperty_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        AtomDoubleArrayProperty_exposer.def( bp::self == bp::self );
        { //::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::operator[]
        
            typedef SireMol::AtomProperty< SireBase::DoubleArrayProperty > exported_class_t;
            typedef ::SireBase::PackedArray2D< SireBase::DoubleArrayProperty >::Array const & ( ::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::*__getitem___function_type)( ::SireMol::CGIdx ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::operator[] );
            
            AtomDoubleArrayProperty_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("cgidx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::operator[]
        
            typedef SireMol::AtomProperty< SireBase::DoubleArrayProperty > exported_class_t;
            typedef ::SireBase::DoubleArrayProperty const & ( ::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::*__getitem___function_type)( ::SireMol::CGAtomIdx const & ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::operator[] );
            
            AtomDoubleArrayProperty_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("cgatomidx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::set
        
            typedef SireMol::AtomProperty< SireBase::DoubleArrayProperty > exported_class_t;
            typedef ::SireMol::AtomProperty< SireBase::DoubleArrayProperty > & ( ::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::*set_function_type)( ::SireMol::CGAtomIdx const &,::SireBase::DoubleArrayProperty const & ) ;
            set_function_type set_function_value( &::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::set );
            
            AtomDoubleArrayProperty_exposer.def( 
                "set"
                , set_function_value
                , ( bp::arg("cgatomidx"), bp::arg("value") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::set
        
            typedef SireMol::AtomProperty< SireBase::DoubleArrayProperty > exported_class_t;
            typedef ::SireMol::AtomProperty< SireBase::DoubleArrayProperty > & ( ::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::*set_function_type)( ::SireMol::CGIdx,::QVector< SireBase::DoubleArrayProperty > const & ) ;
            set_function_type set_function_value( &::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::set );
            
            AtomDoubleArrayProperty_exposer.def( 
                "set"
                , set_function_value
                , ( bp::arg("cgidx"), bp::arg("values") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::size
        
            typedef SireMol::AtomProperty< SireBase::DoubleArrayProperty > exported_class_t;
            typedef int ( ::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::*size_function_type)(  ) const;
            size_function_type size_function_value( &::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::size );
            
            AtomDoubleArrayProperty_exposer.def( 
                "size"
                , size_function_value
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::toString
        
            typedef SireMol::AtomProperty< SireBase::DoubleArrayProperty > exported_class_t;
            typedef ::QString ( ::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::toString );
            
            AtomDoubleArrayProperty_exposer.def( 
                "toString"
                , toString_function_value
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::toVariant
        
            typedef SireMol::AtomProperty< SireBase::DoubleArrayProperty > exported_class_t;
            typedef ::SireMol::AtomProperty< QVariant > ( ::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::*toVariant_function_type)(  ) const;
            toVariant_function_type toVariant_function_value( &::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::toVariant );
            
            AtomDoubleArrayProperty_exposer.def( 
                "toVariant"
                , toVariant_function_value
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::toVector
        
            typedef SireMol::AtomProperty< SireBase::DoubleArrayProperty > exported_class_t;
            typedef ::QVector< SireBase::DoubleArrayProperty > ( ::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::*toVector_function_type)(  ) const;
            toVector_function_type toVector_function_value( &::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::toVector );
            
            AtomDoubleArrayProperty_exposer.def( 
                "toVector"
                , toVector_function_value
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::toVector
        
            typedef SireMol::AtomProperty< SireBase::DoubleArrayProperty > exported_class_t;
            typedef ::QVector< SireBase::DoubleArrayProperty > ( ::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::*toVector_function_type)( ::SireMol::AtomSelection const & ) const;
            toVector_function_type toVector_function_value( &::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::toVector );
            
            AtomDoubleArrayProperty_exposer.def( 
                "toVector"
                , toVector_function_value
                , ( bp::arg("selection") )
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::typeName
        
            typedef SireMol::AtomProperty< SireBase::DoubleArrayProperty > exported_class_t;
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::AtomProperty< SireBase::DoubleArrayProperty >::typeName );
            
            AtomDoubleArrayProperty_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        AtomDoubleArrayProperty_exposer.staticmethod( "fromVariant" );
        AtomDoubleArrayProperty_exposer.staticmethod( "typeName" );
        AtomDoubleArrayProperty_exposer.def( "__copy__", &__copy__);
        AtomDoubleArrayProperty_exposer.def( "__deepcopy__", &__copy__);
        AtomDoubleArrayProperty_exposer.def( "clone", &__copy__);
        AtomDoubleArrayProperty_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::AtomProperty<SireBase::DoubleArrayProperty> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AtomDoubleArrayProperty_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::AtomProperty<SireBase::DoubleArrayProperty> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AtomDoubleArrayProperty_exposer.def_pickle(sire_pickle_suite< ::SireMol::AtomProperty<SireBase::DoubleArrayProperty> >());
        AtomDoubleArrayProperty_exposer.def( "__str__", &__str__< ::SireMol::AtomProperty<SireBase::DoubleArrayProperty> > );
        AtomDoubleArrayProperty_exposer.def( "__repr__", &__str__< ::SireMol::AtomProperty<SireBase::DoubleArrayProperty> > );
        AtomDoubleArrayProperty_exposer.def( "__len__", &__len_size< ::SireMol::AtomProperty<SireBase::DoubleArrayProperty> > );
    }

}
