//WARNING - AUTOGENERATED FILE - CONTENTS WILL BE OVERWRITTEN!
#include <Python.h>

#include "SireMove_registrars.h"

#include "Helpers/version_error_impl.h"

#include "supramove.h"
#include "rigidbodymc.h"
#include "moleculardynamics.h"
#include "suprasimpacket.h"
#include "flexibility.h"
#include "supramoves.h"
#include "zmatrix.h"
#include "suprasubmoves.h"
#include "openmmfrenergydt.h"
#include "velocitygenerator.h"
#include "internalmove.h"
#include "volumechanger.h"
#include "weightedmoves.h"
#include "uniformsampler.h"
#include "rbworkspace.h"
#include "suprasubsystem.h"
#include "getpoint.h"
#include "repexmove.h"
#include "moves.h"
#include "titrationmove.h"
#include "prefsampler.h"
#include "hybridmc.h"
#include "integratorworkspace.h"
#include "ensemble.h"
#include "mtsmc.h"
#include "dlmrigidbody.h"
#include "volumemove.h"
#include "replica.h"
#include "integratorworkspacejm.h"
#include "zmatmove.h"
#include "velocityverlet.h"
#include "integrator.h"
#include "openmmmdintegrator.h"
#include "molinserter.h"
#include "openmmfrenergyst.h"
#include "suprasubsimpacket.h"
#include "suprasubmove.h"
#include "suprasystem.h"
#include "repexmove2.h"
#include "simpacket.h"
#include "titrator.h"
#include "move.h"
#include "internalmovesingle.h"
#include "rbworkspacejm.h"
#include "replicas.h"
#include "simstore.h"
#include "moldeleter.h"

#include "Helpers/objectregistry.hpp"

void register_SireMove_objects()
{

    ObjectRegistry::registerConverterFor< SireMove::NullSupraMove >();
    ObjectRegistry::registerConverterFor< SireMove::RigidBodyMC >();
    ObjectRegistry::registerConverterFor< SireMove::MolecularDynamics >();
    ObjectRegistry::registerConverterFor< SireMove::SupraSimPacket >();
    ObjectRegistry::registerConverterFor< SireMove::DofID >();
    ObjectRegistry::registerConverterFor< SireMove::Flexibility >();
    ObjectRegistry::registerConverterFor< SireMove::SameSupraMoves >();
    ObjectRegistry::registerConverterFor< SireMove::ZMatrix >();
    ObjectRegistry::registerConverterFor< SireMove::ZMatrixLine >();
    ObjectRegistry::registerConverterFor< SireMove::ZMatrixCoords >();
    ObjectRegistry::registerConverterFor< SireMove::ZMatrixCoordsLine >();
    ObjectRegistry::registerConverterFor< SireMove::SameSupraSubMoves >();
    ObjectRegistry::registerConverterFor< SireMove::OpenMMFrEnergyDT >();
    ObjectRegistry::registerConverterFor< SireMove::OpenMMFrEnergyDT >();
    ObjectRegistry::registerConverterFor< SireMove::NullVelocityGenerator >();
    ObjectRegistry::registerConverterFor< SireMove::VelocitiesFromProperty >();
    ObjectRegistry::registerConverterFor< SireMove::MaxwellBoltzmann >();
    ObjectRegistry::registerConverterFor< SireMove::InternalMove >();
    ObjectRegistry::registerConverterFor< SireMove::NullVolumeChanger >();
    ObjectRegistry::registerConverterFor< SireMove::ScaleVolumeFromCenter >();
    ObjectRegistry::registerConverterFor< SireMove::WeightedMoves >();
    ObjectRegistry::registerConverterFor< SireMove::UniformSampler >();
    ObjectRegistry::registerConverterFor< SireMove::RBWorkspace >();
    ObjectRegistry::registerConverterFor< SireMove::SupraSubSystem >();
    ObjectRegistry::registerConverterFor< SireMove::NullGetPoint >();
    ObjectRegistry::registerConverterFor< SireMove::GetCOMPoint >();
    ObjectRegistry::registerConverterFor< SireMove::GetCOGPoint >();
    ObjectRegistry::registerConverterFor< SireMove::GetCentroidPoint >();
    ObjectRegistry::registerConverterFor< SireMove::RepExMove >();
    ObjectRegistry::registerConverterFor< SireMove::RepExSubMove >();
    ObjectRegistry::registerConverterFor< SireMove::SameMoves >();
    ObjectRegistry::registerConverterFor< SireMove::TitrationMove >();
    ObjectRegistry::registerConverterFor< SireMove::PrefSampler >();
    ObjectRegistry::registerConverterFor< SireMove::HybridMC >();
    ObjectRegistry::registerConverterFor< SireMove::HMCGenerator >();
    ObjectRegistry::registerConverterFor< SireMove::NullIntegratorWorkspace >();
    ObjectRegistry::registerConverterFor< SireMove::AtomicVelocityWorkspace >();
    ObjectRegistry::registerConverterFor< SireMove::Ensemble >();
    ObjectRegistry::registerConverterFor< SireMove::MTSMC >();
    ObjectRegistry::registerConverterFor< SireMove::DLMRigidBody >();
    ObjectRegistry::registerConverterFor< SireMove::VolumeMove >();
    ObjectRegistry::registerConverterFor< SireMove::Replica >();
    ObjectRegistry::registerConverterFor< SireMove::NullIntegratorWorkspaceJM >();
    ObjectRegistry::registerConverterFor< SireMove::AtomicVelocityWorkspaceJM >();
    ObjectRegistry::registerConverterFor< SireMove::ZMatMove >();
    ObjectRegistry::registerConverterFor< SireMove::VelocityVerlet >();
    ObjectRegistry::registerConverterFor< SireMove::NullIntegrator >();
    ObjectRegistry::registerConverterFor< SireMove::OpenMMMDIntegrator >();
    ObjectRegistry::registerConverterFor< SireMove::OpenMMMDIntegrator >();
    ObjectRegistry::registerConverterFor< SireMove::NullInserter >();
    ObjectRegistry::registerConverterFor< SireMove::UniformInserter >();
    ObjectRegistry::registerConverterFor< SireMove::OpenMMFrEnergyST >();
    ObjectRegistry::registerConverterFor< SireMove::OpenMMFrEnergyST >();
    ObjectRegistry::registerConverterFor< SireMove::SupraSubSimPacket >();
    ObjectRegistry::registerConverterFor< SireMove::NullSupraSubMove >();
    ObjectRegistry::registerConverterFor< SireMove::SupraSystem >();
    ObjectRegistry::registerConverterFor< SireMove::RepExMove2 >();
    ObjectRegistry::registerConverterFor< SireMove::SimPacket >();
    ObjectRegistry::registerConverterFor< SireMove::Titrator >();
    ObjectRegistry::registerConverterFor< SireMove::NullMove >();
    ObjectRegistry::registerConverterFor< SireMove::InternalMoveSingle >();
    ObjectRegistry::registerConverterFor< SireMove::RBWorkspaceJM >();
    ObjectRegistry::registerConverterFor< SireMove::Replicas >();
    ObjectRegistry::registerConverterFor< SireMove::SimStore >();
    ObjectRegistry::registerConverterFor< SireMove::NullDeleter >();
    ObjectRegistry::registerConverterFor< SireMove::SpecifiedGroupsDeleter >();
    ObjectRegistry::registerConverterFor< SireMove::SystemWideDeleter >();

}

