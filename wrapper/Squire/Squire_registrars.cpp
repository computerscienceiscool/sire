//WARNING - AUTOGENERATED FILE - CONTENTS WILL BE OVERWRITTEN!
#include <Python.h>

#include "Squire_registrars.h"

#include "Helpers/version_error_impl.h"

#include "pointcharge.h"
#include "qmchargeconstraint.h"
#include "qmprogram.h"
#include "qmpotential.h"
#include "molpro.h"
#include "qmchargecalculator.h"
#include "qmmmff.h"
#include "sqm.h"
#include "mopac.h"
#include "pgto.h"
#include "am1bcc.h"
#include "sgto.h"
#include "qmff.h"
#include "pointdipole.h"

#include "Helpers/objectregistry.hpp"

void register_Squire_objects()
{

    ObjectRegistry::registerConverterFor< Squire::PointCharge >();
    ObjectRegistry::registerConverterFor< Squire::QMChargeConstraint >();
    ObjectRegistry::registerConverterFor< Squire::NullQM >();
    ObjectRegistry::registerConverterFor< Squire::QMComponent >();
    ObjectRegistry::registerConverterFor< Squire::Molpro >();
    ObjectRegistry::registerConverterFor< Squire::NullQMChargeCalculator >();
    ObjectRegistry::registerConverterFor< Squire::QMMMFF >();
    ObjectRegistry::registerConverterFor< Squire::SQM >();
    ObjectRegistry::registerConverterFor< Squire::Mopac >();
    ObjectRegistry::registerConverterFor< Squire::P_GTO >();
    ObjectRegistry::registerConverterFor< Squire::PS_GTO >();
    ObjectRegistry::registerConverterFor< Squire::PP_GTO >();
    ObjectRegistry::registerConverterFor< Squire::AM1BCC >();
    ObjectRegistry::registerConverterFor< Squire::S_GTO >();
    ObjectRegistry::registerConverterFor< Squire::SS_GTO >();
    ObjectRegistry::registerConverterFor< Squire::QMFF >();
    ObjectRegistry::registerConverterFor< Squire::PointDipole >();

}

