// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "PDBTitle.pypp.hpp"

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

SireIO::PDBTitle __copy__(const SireIO::PDBTitle &other){ return SireIO::PDBTitle(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_PDBTitle_class(){

    { //::SireIO::PDBTitle
        typedef bp::class_< SireIO::PDBTitle > PDBTitle_exposer_t;
        PDBTitle_exposer_t PDBTitle_exposer = PDBTitle_exposer_t( "PDBTitle", "This class provides functionality for readingwriting\nProtein Data Bank (PDB) title section records, e.g.\nHEADER, TITLE, REMARK, ...\n\nAuthor: Lester Hedges\n", bp::init< >("Default constructor.") );
        bp::scope PDBTitle_scope( PDBTitle_exposer );
        bp::enum_< SireIO::PDBTitle::RECORD_TYPE>("RECORD_TYPE")
            .value("HEADER", SireIO::PDBTitle::HEADER)
            .value("OBSLTE", SireIO::PDBTitle::OBSLTE)
            .value("TITLE", SireIO::PDBTitle::TITLE)
            .value("SPLIT", SireIO::PDBTitle::SPLIT)
            .value("CAVEAT", SireIO::PDBTitle::CAVEAT)
            .value("COMPND", SireIO::PDBTitle::COMPND)
            .value("SOURCE", SireIO::PDBTitle::SOURCE)
            .value("KEYWDS", SireIO::PDBTitle::KEYWDS)
            .value("EXPDTA", SireIO::PDBTitle::EXPDTA)
            .value("NUMMDL", SireIO::PDBTitle::NUMMDL)
            .value("MDLTYP", SireIO::PDBTitle::MDLTYP)
            .value("AUTHOR", SireIO::PDBTitle::AUTHOR)
            .value("REVDAT", SireIO::PDBTitle::REVDAT)
            .value("SPRSDE", SireIO::PDBTitle::SPRSDE)
            .value("JRNL", SireIO::PDBTitle::JRNL)
            .value("REMARK", SireIO::PDBTitle::REMARK)
            .export_values()
            ;
        { //::SireIO::PDBTitle::appendRecord
        
            typedef void ( ::SireIO::PDBTitle::*appendRecord_function_type)( ::QString const &,::SireIO::PDBTitle::RECORD_TYPE,::QStringList & ) ;
            appendRecord_function_type appendRecord_function_value( &::SireIO::PDBTitle::appendRecord );
            
            PDBTitle_exposer.def( 
                "appendRecord"
                , appendRecord_function_value
                , ( bp::arg("line"), bp::arg("record_type"), bp::arg("errors") )
                , "Append a PDB record." );
        
        }
        { //::SireIO::PDBTitle::hasRecords
        
            typedef bool ( ::SireIO::PDBTitle::*hasRecords_function_type)(  ) const;
            hasRecords_function_type hasRecords_function_value( &::SireIO::PDBTitle::hasRecords );
            
            PDBTitle_exposer.def( 
                "hasRecords"
                , hasRecords_function_value
                , "Whether the object contains any records." );
        
        }
        { //::SireIO::PDBTitle::nModels
        
            typedef int ( ::SireIO::PDBTitle::*nModels_function_type)(  ) const;
            nModels_function_type nModels_function_value( &::SireIO::PDBTitle::nModels );
            
            PDBTitle_exposer.def( 
                "nModels"
                , nModels_function_value
                , "Return the number of MODEL that should be in the PDB file." );
        
        }
        { //::SireIO::PDBTitle::nRecords
        
            typedef int ( ::SireIO::PDBTitle::*nRecords_function_type)(  ) const;
            nRecords_function_type nRecords_function_value( &::SireIO::PDBTitle::nRecords );
            
            PDBTitle_exposer.def( 
                "nRecords"
                , nRecords_function_value
                , "Return the number of title section records." );
        
        }
        { //::SireIO::PDBTitle::nRemarks
        
            typedef int ( ::SireIO::PDBTitle::*nRemarks_function_type)(  ) const;
            nRemarks_function_type nRemarks_function_value( &::SireIO::PDBTitle::nRemarks );
            
            PDBTitle_exposer.def( 
                "nRemarks"
                , nRemarks_function_value
                , "Return the number of REMARK records." );
        
        }
        { //::SireIO::PDBTitle::toPDBLines
        
            typedef ::QStringList ( ::SireIO::PDBTitle::*toPDBLines_function_type)(  ) const;
            toPDBLines_function_type toPDBLines_function_value( &::SireIO::PDBTitle::toPDBLines );
            
            PDBTitle_exposer.def( 
                "toPDBLines"
                , toPDBLines_function_value
                , "Generate PDB records from the atom data." );
        
        }
        { //::SireIO::PDBTitle::toString
        
            typedef ::QString ( ::SireIO::PDBTitle::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireIO::PDBTitle::toString );
            
            PDBTitle_exposer.def( 
                "toString"
                , toString_function_value
                , "Generate a string representation of the object." );
        
        }
        { //::SireIO::PDBTitle::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireIO::PDBTitle::typeName );
            
            PDBTitle_exposer.def( 
                "typeName"
                , typeName_function_value
                , "Return the C++ name for this class" );
        
        }
        PDBTitle_exposer.staticmethod( "typeName" );
        PDBTitle_exposer.def( "__copy__", &__copy__);
        PDBTitle_exposer.def( "__deepcopy__", &__copy__);
        PDBTitle_exposer.def( "clone", &__copy__);
        PDBTitle_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireIO::PDBTitle >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        PDBTitle_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireIO::PDBTitle >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        PDBTitle_exposer.def( "__str__", &__str__< ::SireIO::PDBTitle > );
        PDBTitle_exposer.def( "__repr__", &__str__< ::SireIO::PDBTitle > );
    }

}
