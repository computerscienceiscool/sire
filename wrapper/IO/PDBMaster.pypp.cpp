// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "PDBMaster.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/parallel.h"

#include "SireError/errors.h"

#include "SireIO/errors.h"

#include "SireIO/pdb2.h"

#include "SireMM/pdbparams.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireSystem/system.h"

#include "pdb2.h"

#include <iostream>

#include "pdb2.h"

SireIO::PDBMaster __copy__(const SireIO::PDBMaster &other){ return SireIO::PDBMaster(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_PDBMaster_class(){

    { //::SireIO::PDBMaster
        typedef bp::class_< SireIO::PDBMaster > PDBMaster_exposer_t;
        PDBMaster_exposer_t PDBMaster_exposer = PDBMaster_exposer_t( "PDBMaster", "This class provides functionality for readingwriting\nProtein Data Bank (PDB) MASTER records.\n\nIf present, this record provides data for validating the parser.\n\nAuthor: Lester Hedges\n", bp::init< >("Default constructor.") );
        bp::scope PDBMaster_scope( PDBMaster_exposer );
        PDBMaster_exposer.def( bp::init< QString const &, QStringList & >(( bp::arg("line"), bp::arg("errors") ), "Constructor.") );
        { //::SireIO::PDBMaster::nAtoms
        
            typedef int ( ::SireIO::PDBMaster::*nAtoms_function_type)(  ) const;
            nAtoms_function_type nAtoms_function_value( &::SireIO::PDBMaster::nAtoms );
            
            PDBMaster_exposer.def( 
                "nAtoms"
                , nAtoms_function_value
                , "Return the number of ATOM and HETATM records." );
        
        }
        { //::SireIO::PDBMaster::nConnects
        
            typedef int ( ::SireIO::PDBMaster::*nConnects_function_type)(  ) const;
            nConnects_function_type nConnects_function_value( &::SireIO::PDBMaster::nConnects );
            
            PDBMaster_exposer.def( 
                "nConnects"
                , nConnects_function_value
                , "Return the number of CONECT records." );
        
        }
        { //::SireIO::PDBMaster::nHelices
        
            typedef int ( ::SireIO::PDBMaster::*nHelices_function_type)(  ) const;
            nHelices_function_type nHelices_function_value( &::SireIO::PDBMaster::nHelices );
            
            PDBMaster_exposer.def( 
                "nHelices"
                , nHelices_function_value
                , "Return the number of HELIX records." );
        
        }
        { //::SireIO::PDBMaster::nHets
        
            typedef int ( ::SireIO::PDBMaster::*nHets_function_type)(  ) const;
            nHets_function_type nHets_function_value( &::SireIO::PDBMaster::nHets );
            
            PDBMaster_exposer.def( 
                "nHets"
                , nHets_function_value
                , "Return the number of HET records." );
        
        }
        { //::SireIO::PDBMaster::nRemarks
        
            typedef int ( ::SireIO::PDBMaster::*nRemarks_function_type)(  ) const;
            nRemarks_function_type nRemarks_function_value( &::SireIO::PDBMaster::nRemarks );
            
            PDBMaster_exposer.def( 
                "nRemarks"
                , nRemarks_function_value
                , "Return the number of REMARK records." );
        
        }
        { //::SireIO::PDBMaster::nSequences
        
            typedef int ( ::SireIO::PDBMaster::*nSequences_function_type)(  ) const;
            nSequences_function_type nSequences_function_value( &::SireIO::PDBMaster::nSequences );
            
            PDBMaster_exposer.def( 
                "nSequences"
                , nSequences_function_value
                , "Return the number of SEQRES records." );
        
        }
        { //::SireIO::PDBMaster::nSheets
        
            typedef int ( ::SireIO::PDBMaster::*nSheets_function_type)(  ) const;
            nSheets_function_type nSheets_function_value( &::SireIO::PDBMaster::nSheets );
            
            PDBMaster_exposer.def( 
                "nSheets"
                , nSheets_function_value
                , "Return the number of SHEET records." );
        
        }
        { //::SireIO::PDBMaster::nSites
        
            typedef int ( ::SireIO::PDBMaster::*nSites_function_type)(  ) const;
            nSites_function_type nSites_function_value( &::SireIO::PDBMaster::nSites );
            
            PDBMaster_exposer.def( 
                "nSites"
                , nSites_function_value
                , "Return the number of SITE records." );
        
        }
        { //::SireIO::PDBMaster::nTers
        
            typedef int ( ::SireIO::PDBMaster::*nTers_function_type)(  ) const;
            nTers_function_type nTers_function_value( &::SireIO::PDBMaster::nTers );
            
            PDBMaster_exposer.def( 
                "nTers"
                , nTers_function_value
                , "Return the number of TER records." );
        
        }
        { //::SireIO::PDBMaster::nTransforms
        
            typedef int ( ::SireIO::PDBMaster::*nTransforms_function_type)(  ) const;
            nTransforms_function_type nTransforms_function_value( &::SireIO::PDBMaster::nTransforms );
            
            PDBMaster_exposer.def( 
                "nTransforms"
                , nTransforms_function_value
                , "Return the number of coordinate transformation records." );
        
        }
        { //::SireIO::PDBMaster::toPDBLine
        
            typedef ::QString ( ::SireIO::PDBMaster::*toPDBLine_function_type)(  ) const;
            toPDBLine_function_type toPDBLine_function_value( &::SireIO::PDBMaster::toPDBLine );
            
            PDBMaster_exposer.def( 
                "toPDBLine"
                , toPDBLine_function_value
                , "Generate a PDB record from the master data." );
        
        }
        { //::SireIO::PDBMaster::toString
        
            typedef ::QString ( ::SireIO::PDBMaster::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireIO::PDBMaster::toString );
            
            PDBMaster_exposer.def( 
                "toString"
                , toString_function_value
                , "Generate a string representation of the object." );
        
        }
        { //::SireIO::PDBMaster::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireIO::PDBMaster::typeName );
            
            PDBMaster_exposer.def( 
                "typeName"
                , typeName_function_value
                , "Return the C++ name for this class" );
        
        }
        PDBMaster_exposer.staticmethod( "typeName" );
        PDBMaster_exposer.def( "__copy__", &__copy__);
        PDBMaster_exposer.def( "__deepcopy__", &__copy__);
        PDBMaster_exposer.def( "clone", &__copy__);
        PDBMaster_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireIO::PDBMaster >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        PDBMaster_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireIO::PDBMaster >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        PDBMaster_exposer.def( "__str__", &__str__< ::SireIO::PDBMaster > );
        PDBMaster_exposer.def( "__repr__", &__str__< ::SireIO::PDBMaster > );
    }

}
