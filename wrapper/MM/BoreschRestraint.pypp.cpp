// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "BoreschRestraint.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireID/index.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireUnits/units.h"

#include "boreschrestraints.h"

#include <QDebug>

#include "boreschrestraints.h"

SireMM::BoreschRestraint __copy__(const SireMM::BoreschRestraint &other){ return SireMM::BoreschRestraint(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_BoreschRestraint_class(){

    { //::SireMM::BoreschRestraint
        typedef bp::class_< SireMM::BoreschRestraint, bp::bases< SireBase::Property > > BoreschRestraint_exposer_t;
        BoreschRestraint_exposer_t BoreschRestraint_exposer = BoreschRestraint_exposer_t( "BoreschRestraint", "This class provides information about a single Boresch restaint.\nThis is a collection of distance, angle and torsion restraints\nthat hold a ligand in a binding pose relative to a receptor\n", bp::init< >("Null constructor") );
        bp::scope BoreschRestraint_scope( BoreschRestraint_exposer );
        BoreschRestraint_exposer.def( bp::init< QList< long long > const &, QList< long long > const &, SireUnits::Dimension::Length const &, QVector< SireUnits::Dimension::PhysUnit< 0, 0, 0, 0, 0, 0, 1 > > const &, QVector< SireUnits::Dimension::PhysUnit< 0, 0, 0, 0, 0, 0, 1 > > const &, SireUnits::Dimension::HarmonicBondConstant const &, QVector< SireUnits::Dimension::PhysUnit< 1, 2, -2, 0, 0, -1, -2 > > const &, QVector< SireUnits::Dimension::PhysUnit< 1, 2, -2, 0, 0, -1, -2 > > const & >(( bp::arg("receptor_atoms"), bp::arg("ligand_atoms"), bp::arg("r0"), bp::arg("theta0"), bp::arg("phi0"), bp::arg("kr"), bp::arg("ktheta"), bp::arg("kphi") ), "Construct to restrain the atom at index atom to the specified position\n  using the specified force constant and flat-bottom well-width\n") );
        BoreschRestraint_exposer.def( bp::init< SireMM::BoreschRestraint const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMM::BoreschRestraint::isNull
        
            typedef bool ( ::SireMM::BoreschRestraint::*isNull_function_type)(  ) const;
            isNull_function_type isNull_function_value( &::SireMM::BoreschRestraint::isNull );
            
            BoreschRestraint_exposer.def( 
                "isNull"
                , isNull_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::BoreschRestraint::kphi
        
            typedef ::QVector< SireUnits::Dimension::PhysUnit< 1, 2, -2, 0, 0, -1, -2 > > ( ::SireMM::BoreschRestraint::*kphi_function_type)(  ) const;
            kphi_function_type kphi_function_value( &::SireMM::BoreschRestraint::kphi );
            
            BoreschRestraint_exposer.def( 
                "kphi"
                , kphi_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::BoreschRestraint::kr
        
            typedef ::SireUnits::Dimension::HarmonicBondConstant ( ::SireMM::BoreschRestraint::*kr_function_type)(  ) const;
            kr_function_type kr_function_value( &::SireMM::BoreschRestraint::kr );
            
            BoreschRestraint_exposer.def( 
                "kr"
                , kr_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::BoreschRestraint::ktheta
        
            typedef ::QVector< SireUnits::Dimension::PhysUnit< 1, 2, -2, 0, 0, -1, -2 > > ( ::SireMM::BoreschRestraint::*ktheta_function_type)(  ) const;
            ktheta_function_type ktheta_function_value( &::SireMM::BoreschRestraint::ktheta );
            
            BoreschRestraint_exposer.def( 
                "ktheta"
                , ktheta_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::BoreschRestraint::ligandAtoms
        
            typedef ::QVector< long long > ( ::SireMM::BoreschRestraint::*ligandAtoms_function_type)(  ) const;
            ligandAtoms_function_type ligandAtoms_function_value( &::SireMM::BoreschRestraint::ligandAtoms );
            
            BoreschRestraint_exposer.def( 
                "ligandAtoms"
                , ligandAtoms_function_value
                , bp::release_gil_policy()
                , "Return the indexes of the three ligand atoms" );
        
        }
        BoreschRestraint_exposer.def( bp::self != bp::self );
        BoreschRestraint_exposer.def( bp::self + bp::self );
        BoreschRestraint_exposer.def( bp::self + bp::other< SireMM::BoreschRestraints >() );
        { //::SireMM::BoreschRestraint::operator=
        
            typedef ::SireMM::BoreschRestraint & ( ::SireMM::BoreschRestraint::*assign_function_type)( ::SireMM::BoreschRestraint const & ) ;
            assign_function_type assign_function_value( &::SireMM::BoreschRestraint::operator= );
            
            BoreschRestraint_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        BoreschRestraint_exposer.def( bp::self == bp::self );
        { //::SireMM::BoreschRestraint::phi0
        
            typedef ::QVector< SireUnits::Dimension::PhysUnit< 0, 0, 0, 0, 0, 0, 1 > > ( ::SireMM::BoreschRestraint::*phi0_function_type)(  ) const;
            phi0_function_type phi0_function_value( &::SireMM::BoreschRestraint::phi0 );
            
            BoreschRestraint_exposer.def( 
                "phi0"
                , phi0_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::BoreschRestraint::r0
        
            typedef ::SireUnits::Dimension::Length ( ::SireMM::BoreschRestraint::*r0_function_type)(  ) const;
            r0_function_type r0_function_value( &::SireMM::BoreschRestraint::r0 );
            
            BoreschRestraint_exposer.def( 
                "r0"
                , r0_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::BoreschRestraint::receptorAtoms
        
            typedef ::QVector< long long > ( ::SireMM::BoreschRestraint::*receptorAtoms_function_type)(  ) const;
            receptorAtoms_function_type receptorAtoms_function_value( &::SireMM::BoreschRestraint::receptorAtoms );
            
            BoreschRestraint_exposer.def( 
                "receptorAtoms"
                , receptorAtoms_function_value
                , bp::release_gil_policy()
                , "Return the indexes of the three receptor atoms" );
        
        }
        { //::SireMM::BoreschRestraint::theta0
        
            typedef ::QVector< SireUnits::Dimension::PhysUnit< 0, 0, 0, 0, 0, 0, 1 > > ( ::SireMM::BoreschRestraint::*theta0_function_type)(  ) const;
            theta0_function_type theta0_function_value( &::SireMM::BoreschRestraint::theta0 );
            
            BoreschRestraint_exposer.def( 
                "theta0"
                , theta0_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::BoreschRestraint::toString
        
            typedef ::QString ( ::SireMM::BoreschRestraint::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMM::BoreschRestraint::toString );
            
            BoreschRestraint_exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::BoreschRestraint::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMM::BoreschRestraint::typeName );
            
            BoreschRestraint_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::BoreschRestraint::what
        
            typedef char const * ( ::SireMM::BoreschRestraint::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMM::BoreschRestraint::what );
            
            BoreschRestraint_exposer.def( 
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        BoreschRestraint_exposer.staticmethod( "typeName" );
        BoreschRestraint_exposer.def( "__copy__", &__copy__);
        BoreschRestraint_exposer.def( "__deepcopy__", &__copy__);
        BoreschRestraint_exposer.def( "clone", &__copy__);
        BoreschRestraint_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::BoreschRestraint >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        BoreschRestraint_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::BoreschRestraint >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        BoreschRestraint_exposer.def_pickle(sire_pickle_suite< ::SireMM::BoreschRestraint >());
        BoreschRestraint_exposer.def( "__str__", &__str__< ::SireMM::BoreschRestraint > );
        BoreschRestraint_exposer.def( "__repr__", &__str__< ::SireMM::BoreschRestraint > );
    }

}
