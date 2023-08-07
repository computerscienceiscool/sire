// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "AtomMapping.pypp.hpp"

namespace bp = boost::python;

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "atommapping.h"

#include "tostring.h"

#include "atommapping.h"

SireMol::AtomMapping __copy__(const SireMol::AtomMapping &other){ return SireMol::AtomMapping(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

#include "Helpers/len.hpp"

void register_AtomMapping_class(){

    { //::SireMol::AtomMapping
        typedef bp::class_< SireMol::AtomMapping, bp::bases< SireBase::Property > > AtomMapping_exposer_t;
        AtomMapping_exposer_t AtomMapping_exposer = AtomMapping_exposer_t( "AtomMapping", "This class holds the mapping from one set of atoms to another.\nThis enables you associate, atom by atom, atoms in one set to\natoms in another set. This is useful, e.g. for building perturbations,\nor for specifying mappings for alignments or RMSD calculations etc.\n", bp::init< >("") );
        bp::scope AtomMapping_scope( AtomMapping_exposer );
        AtomMapping_exposer.def( bp::init< SireMol::SelectorM< SireMol::Atom > const &, SireMol::SelectorM< SireMol::Atom > const & >(( bp::arg("atoms0"), bp::arg("atoms1") ), "") );
        AtomMapping_exposer.def( bp::init< SireMol::MoleculeView const &, SireMol::MoleculeView const & >(( bp::arg("mol0"), bp::arg("mol1") ), "") );
        AtomMapping_exposer.def( bp::init< SireMol::SelectorMol const &, SireMol::SelectorMol const & >(( bp::arg("mols0"), bp::arg("mols1") ), "") );
        AtomMapping_exposer.def( bp::init< SireMol::AtomMapping const & >(( bp::arg("other") ), "") );
        { //::SireMol::AtomMapping::atoms0
        
            typedef ::SireMol::SelectorM< SireMol::Atom > const & ( ::SireMol::AtomMapping::*atoms0_function_type)(  ) const;
            atoms0_function_type atoms0_function_value( &::SireMol::AtomMapping::atoms0 );
            
            AtomMapping_exposer.def( 
                "atoms0"
                , atoms0_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "Return the reference atoms. We map from these atom to\n  the mapped atoms (atoms1)" );
        
        }
        { //::SireMol::AtomMapping::atoms1
        
            typedef ::SireMol::SelectorM< SireMol::Atom > const & ( ::SireMol::AtomMapping::*atoms1_function_type)(  ) const;
            atoms1_function_type atoms1_function_value( &::SireMol::AtomMapping::atoms1 );
            
            AtomMapping_exposer.def( 
                "atoms1"
                , atoms1_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "Return the mapped atoms. We map from the reference atoms (atoms0)\n  to these atoms." );
        
        }
        { //::SireMol::AtomMapping::count
        
            typedef int ( ::SireMol::AtomMapping::*count_function_type)(  ) const;
            count_function_type count_function_value( &::SireMol::AtomMapping::count );
            
            AtomMapping_exposer.def( 
                "count"
                , count_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomMapping::find
        
            typedef ::SireMol::Atom ( ::SireMol::AtomMapping::*find_function_type)( ::SireMol::Atom const &,::SireMol::MoleculeView const &,bool ) const;
            find_function_type find_function_value( &::SireMol::AtomMapping::find );
            
            AtomMapping_exposer.def( 
                "find"
                , find_function_value
                , ( bp::arg("atom"), bp::arg("container"), bp::arg("find_all")=(bool)(true) )
                , "Find and return the equivalent of atom in the passed container.\n  This maps atom from the reference to the mapped atom, and then\n  locates and returns the mapped atom from the container.\n" );
        
        }
        { //::SireMol::AtomMapping::find
        
            typedef ::SireMol::Atom ( ::SireMol::AtomMapping::*find_function_type)( ::SireMol::Atom const &,::SireMol::SelectorM< SireMol::Atom > const &,bool ) const;
            find_function_type find_function_value( &::SireMol::AtomMapping::find );
            
            AtomMapping_exposer.def( 
                "find"
                , find_function_value
                , ( bp::arg("atom"), bp::arg("container"), bp::arg("find_all")=(bool)(true) )
                , "Find and return the equivalent of atom in the passed container.\n  This maps atom from the reference to the mapped atom, and then\n  locates and returns the mapped atom from the container.\n" );
        
        }
        { //::SireMol::AtomMapping::find
        
            typedef ::SireMol::Selector< SireMol::Atom > ( ::SireMol::AtomMapping::*find_function_type)( ::SireMol::MoleculeView const &,::SireMol::MoleculeView const &,bool ) const;
            find_function_type find_function_value( &::SireMol::AtomMapping::find );
            
            AtomMapping_exposer.def( 
                "find"
                , find_function_value
                , ( bp::arg("atoms"), bp::arg("container"), bp::arg("find_all")=(bool)(true) )
                , "Find and return the equivalent of atom in the passed container.\n  This maps atom from the reference to the mapped atom, and then\n  locates and returns the mapped atom from the container.\n" );
        
        }
        { //::SireMol::AtomMapping::find
        
            typedef ::SireMol::SelectorM< SireMol::Atom > ( ::SireMol::AtomMapping::*find_function_type)( ::SireMol::SelectorM< SireMol::Atom > const &,::SireMol::MoleculeView const &,bool ) const;
            find_function_type find_function_value( &::SireMol::AtomMapping::find );
            
            AtomMapping_exposer.def( 
                "find"
                , find_function_value
                , ( bp::arg("atoms"), bp::arg("container"), bp::arg("find_all")=(bool)(true) )
                , "Find and return the equivalent of atoms in the passed container.\n  This maps atoms from the reference to the mapped atoms, and then\n  locates and returns the mapped atoms from the container. Note that\n  all atoms must be found, and they will be returned in the same\n  order as atoms\n" );
        
        }
        { //::SireMol::AtomMapping::find
        
            typedef ::SireMol::SelectorM< SireMol::Atom > ( ::SireMol::AtomMapping::*find_function_type)( ::SireMol::MoleculeView const &,::SireMol::SelectorM< SireMol::Atom > const &,bool ) const;
            find_function_type find_function_value( &::SireMol::AtomMapping::find );
            
            AtomMapping_exposer.def( 
                "find"
                , find_function_value
                , ( bp::arg("atoms"), bp::arg("container"), bp::arg("find_all")=(bool)(true) )
                , "Find and return the equivalent of atoms in the passed container.\n  This maps atoms from the reference to the mapped atoms, and then\n  locates and returns the mapped atoms from the container. Note that\n  all atoms must be found, and they will be returned in the same\n  order as atoms\n" );
        
        }
        { //::SireMol::AtomMapping::find
        
            typedef ::SireMol::SelectorM< SireMol::Atom > ( ::SireMol::AtomMapping::*find_function_type)( ::SireMol::SelectorM< SireMol::Atom > const &,::SireMol::SelectorM< SireMol::Atom > const &,bool ) const;
            find_function_type find_function_value( &::SireMol::AtomMapping::find );
            
            AtomMapping_exposer.def( 
                "find"
                , find_function_value
                , ( bp::arg("atoms"), bp::arg("container"), bp::arg("find_all")=(bool)(true) )
                , "Find and return the equivalent of atoms in the passed container.\n  This maps atoms from the reference to the mapped atoms, and then\n  locates and returns the mapped atoms from the container. Note that\n  all atoms must be found, and they will be returned in the same\n  order as atoms\n" );
        
        }
        { //::SireMol::AtomMapping::isEmpty
        
            typedef bool ( ::SireMol::AtomMapping::*isEmpty_function_type)(  ) const;
            isEmpty_function_type isEmpty_function_value( &::SireMol::AtomMapping::isEmpty );
            
            AtomMapping_exposer.def( 
                "isEmpty"
                , isEmpty_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomMapping::map
        
            typedef ::SireMol::Atom ( ::SireMol::AtomMapping::*map_function_type)( ::SireMol::Atom const &,bool ) const;
            map_function_type map_function_value( &::SireMol::AtomMapping::map );
            
            AtomMapping_exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("atom"), bp::arg("find_all")=(bool)(true) )
                , "Map from atom (which must be in the reference atoms) to\n  the corresponding atom in the mapped atoms" );
        
        }
        { //::SireMol::AtomMapping::map
        
            typedef ::SireMol::SelectorM< SireMol::Atom > ( ::SireMol::AtomMapping::*map_function_type)( ::SireMol::MoleculeView const &,bool ) const;
            map_function_type map_function_value( &::SireMol::AtomMapping::map );
            
            AtomMapping_exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("atoms"), bp::arg("find_all")=(bool)(true) )
                , "Map from the passed atoms (which must all be in the reference\n  atoms) to the corresponding atoms in the mapped atoms. The\n  mapped atoms will be returned in the same order as the\n  reference atoms appeared in atoms. If find_all` is false\n  then this will use null atoms in the map when the mapped\n  atom cannot be found" );
        
        }
        { //::SireMol::AtomMapping::map
        
            typedef ::SireMol::SelectorM< SireMol::Atom > ( ::SireMol::AtomMapping::*map_function_type)( ::SireMol::SelectorM< SireMol::Atom > const &,bool ) const;
            map_function_type map_function_value( &::SireMol::AtomMapping::map );
            
            AtomMapping_exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("atoms"), bp::arg("find_all")=(bool)(true) )
                , "Map from the passed atoms (which must all be in the reference\n  atoms) to the corresponding atoms in the mapped atoms. The\n  mapped atoms will be returned in the same order as the\n  reference atoms appeared in atoms. If find_all` is false\n  then this will use null atoms in the map when the mapped\n  atom cannot be found" );
        
        }
        AtomMapping_exposer.def( bp::self != bp::self );
        { //::SireMol::AtomMapping::operator=
        
            typedef ::SireMol::AtomMapping & ( ::SireMol::AtomMapping::*assign_function_type)( ::SireMol::AtomMapping const & ) ;
            assign_function_type assign_function_value( &::SireMol::AtomMapping::operator= );
            
            AtomMapping_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        AtomMapping_exposer.def( bp::self == bp::self );
        { //::SireMol::AtomMapping::operator[]
        
            typedef ::SireMol::Atom ( ::SireMol::AtomMapping::*__getitem___function_type)( int ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::AtomMapping::operator[] );
            
            AtomMapping_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("i") )
                , "" );
        
        }
        { //::SireMol::AtomMapping::operator[]
        
            typedef ::SireMol::Atom ( ::SireMol::AtomMapping::*__getitem___function_type)( ::SireMol::Atom const & ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::AtomMapping::operator[] );
            
            AtomMapping_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("atom") )
                , "" );
        
        }
        { //::SireMol::AtomMapping::operator[]
        
            typedef ::SireMol::SelectorM< SireMol::Atom > ( ::SireMol::AtomMapping::*__getitem___function_type)( ::SireBase::Slice const & ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::AtomMapping::operator[] );
            
            AtomMapping_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("slice") )
                , "" );
        
        }
        { //::SireMol::AtomMapping::operator[]
        
            typedef ::SireMol::SelectorM< SireMol::Atom > ( ::SireMol::AtomMapping::*__getitem___function_type)( ::QList< long long > const & ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::AtomMapping::operator[] );
            
            AtomMapping_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("idxs") )
                , "" );
        
        }
        { //::SireMol::AtomMapping::operator[]
        
            typedef ::SireMol::SelectorM< SireMol::Atom > ( ::SireMol::AtomMapping::*__getitem___function_type)( ::SireMol::Selector< SireMol::Atom > const & ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::AtomMapping::operator[] );
            
            AtomMapping_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("atoms") )
                , "" );
        
        }
        { //::SireMol::AtomMapping::operator[]
        
            typedef ::SireMol::SelectorM< SireMol::Atom > ( ::SireMol::AtomMapping::*__getitem___function_type)( ::SireMol::SelectorM< SireMol::Atom > const & ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::AtomMapping::operator[] );
            
            AtomMapping_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("atoms") )
                , "" );
        
        }
        { //::SireMol::AtomMapping::size
        
            typedef int ( ::SireMol::AtomMapping::*size_function_type)(  ) const;
            size_function_type size_function_value( &::SireMol::AtomMapping::size );
            
            AtomMapping_exposer.def( 
                "size"
                , size_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomMapping::swap
        
            typedef ::SireMol::AtomMapping ( ::SireMol::AtomMapping::*swap_function_type)(  ) const;
            swap_function_type swap_function_value( &::SireMol::AtomMapping::swap );
            
            AtomMapping_exposer.def( 
                "swap"
                , swap_function_value
                , bp::release_gil_policy()
                , "Return an AtomMapping that swaps the reference and mapped atoms" );
        
        }
        { //::SireMol::AtomMapping::toString
        
            typedef ::QString ( ::SireMol::AtomMapping::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMol::AtomMapping::toString );
            
            AtomMapping_exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomMapping::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::AtomMapping::typeName );
            
            AtomMapping_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomMapping::what
        
            typedef char const * ( ::SireMol::AtomMapping::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMol::AtomMapping::what );
            
            AtomMapping_exposer.def( 
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        AtomMapping_exposer.staticmethod( "typeName" );
        AtomMapping_exposer.def( "__copy__", &__copy__);
        AtomMapping_exposer.def( "__deepcopy__", &__copy__);
        AtomMapping_exposer.def( "clone", &__copy__);
        AtomMapping_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::AtomMapping >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AtomMapping_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::AtomMapping >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AtomMapping_exposer.def_pickle(sire_pickle_suite< ::SireMol::AtomMapping >());
        AtomMapping_exposer.def( "__str__", &__str__< ::SireMol::AtomMapping > );
        AtomMapping_exposer.def( "__repr__", &__str__< ::SireMol::AtomMapping > );
        AtomMapping_exposer.def( "__len__", &__len_size< ::SireMol::AtomMapping > );
    }

}
