//WARNING - AUTOGENERATED FILE - CONTENTS WILL BE OVERWRITTEN!
#include <Python.h>

#include "SireVol_registrars.h"

#include "Helpers/version_error_impl.h"

#include "gridinfo.h"
#include "cartesian.h"
#include "aabox.h"
#include "combinedspace.h"
#include "grid.h"
#include "coordgroup.h"
#include "periodicbox.h"
#include "patching.h"
#include "combinespaces.h"

#include "Helpers/objectregistry.hpp"

void register_SireVol_objects()
{

    ObjectRegistry::registerConverterFor< SireVol::GridIndex >();
    ObjectRegistry::registerConverterFor< SireVol::GridInfo >();
    ObjectRegistry::registerConverterFor< SireVol::Cartesian >();
    ObjectRegistry::registerConverterFor< SireVol::AABox >();
    ObjectRegistry::registerConverterFor< SireVol::CombinedSpace >();
    ObjectRegistry::registerConverterFor< SireVol::NullGrid >();
    ObjectRegistry::registerConverterFor< SireVol::RegularGrid >();
    ObjectRegistry::registerConverterFor< SireVol::CoordGroup >();
    ObjectRegistry::registerConverterFor< SireVol::CoordGroupEditor >();
    ObjectRegistry::registerConverterFor< SireVol::CoordGroupArray >();
    ObjectRegistry::registerConverterFor< SireVol::CoordGroupArrayArray >();
    ObjectRegistry::registerConverterFor< SireVol::PeriodicBox >();
    ObjectRegistry::registerConverterFor< SireVol::NullPatching >();
    ObjectRegistry::registerConverterFor< SireVol::BoxPatching >();
    ObjectRegistry::registerConverterFor< SireVol::CombineSpaces >();

}

