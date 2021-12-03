//WARNING - AUTOGENERATED FILE - CONTENTS WILL BE OVERWRITTEN!
#include <Python.h>

#include "SireMove_registrars.h"

#include "Helpers/version_error_impl.h"

#include "titrationmove.h"
#include "volumechanger.h"
#include "replicas.h"
#include "internalmove.h"
#include "suprasimpacket.h"
#include "internalmovesingle.h"
#include "velocitygenerator.h"
#include "repexmove.h"
#include "suprasystem.h"
#include "suprasubsimpacket.h"
#include "integratorworkspace.h"
#include "molinserter.h"
#include "integrator.h"
#include "mtsmc.h"
#include "suprasubsystem.h"
#include "suprasubmoves.h"
#include "repexmove2.h"
#include "moleculardynamics.h"
#include "supramoves.h"
#include "rbworkspacejm.h"
#include "rigidbodymc.h"
#include "zmatrix.h"
#include "openmmmdintegrator.h"
#include "flexibility.h"
#include "openmmfrenergyst.h"
#include "zmatmove.h"
#include "moves.h"
#include "move.h"
#include "simstore.h"
#include "uniformsampler.h"
#include "ensemble.h"
#include "simpacket.h"
#include "openmmfrenergydt.h"
#include "getpoint.h"
#include "replica.h"
#include "volumemove.h"
#include "dlmrigidbody.h"
#include "supramove.h"
#include "velocityverlet.h"
#include "moldeleter.h"
#include "suprasubmove.h"
#include "titrator.h"
#include "rbworkspace.h"
#include "hybridmc.h"
#include "integratorworkspacejm.h"
#include "prefsampler.h"
#include "weightedmoves.h"
#include "openmmpmefep.h"

#include "Helpers/objectregistry.hpp"

void register_SireMove_objects()
{

    ObjectRegistry::registerConverterFor< SireMove::TitrationMove >();
    ObjectRegistry::registerConverterFor< SireMove::NullVolumeChanger >();
    ObjectRegistry::registerConverterFor< SireMove::ScaleVolumeFromCenter >();
    ObjectRegistry::registerConverterFor< SireMove::Replicas >();
    ObjectRegistry::registerConverterFor< SireMove::InternalMove >();
    ObjectRegistry::registerConverterFor< SireMove::SupraSimPacket >();
    ObjectRegistry::registerConverterFor< SireMove::InternalMoveSingle >();
    ObjectRegistry::registerConverterFor< SireMove::NullVelocityGenerator >();
    ObjectRegistry::registerConverterFor< SireMove::VelocitiesFromProperty >();
    ObjectRegistry::registerConverterFor< SireMove::MaxwellBoltzmann >();
    ObjectRegistry::registerConverterFor< SireMove::RepExMove >();
    ObjectRegistry::registerConverterFor< SireMove::RepExSubMove >();
    ObjectRegistry::registerConverterFor< SireMove::SupraSystem >();
    ObjectRegistry::registerConverterFor< SireMove::SupraSubSimPacket >();
    ObjectRegistry::registerConverterFor< SireMove::NullIntegratorWorkspace >();
    ObjectRegistry::registerConverterFor< SireMove::AtomicVelocityWorkspace >();
    ObjectRegistry::registerConverterFor< SireMove::NullInserter >();
    ObjectRegistry::registerConverterFor< SireMove::UniformInserter >();
    ObjectRegistry::registerConverterFor< SireMove::NullIntegrator >();
    ObjectRegistry::registerConverterFor< SireMove::MTSMC >();
    ObjectRegistry::registerConverterFor< SireMove::SupraSubSystem >();
    ObjectRegistry::registerConverterFor< SireMove::SameSupraSubMoves >();
    ObjectRegistry::registerConverterFor< SireMove::RepExMove2 >();
    ObjectRegistry::registerConverterFor< SireMove::MolecularDynamics >();
    ObjectRegistry::registerConverterFor< SireMove::SameSupraMoves >();
    ObjectRegistry::registerConverterFor< SireMove::RBWorkspaceJM >();
    ObjectRegistry::registerConverterFor< SireMove::RigidBodyMC >();
    ObjectRegistry::registerConverterFor< SireMove::ZMatrix >();
    ObjectRegistry::registerConverterFor< SireMove::ZMatrixLine >();
    ObjectRegistry::registerConverterFor< SireMove::ZMatrixCoords >();
    ObjectRegistry::registerConverterFor< SireMove::ZMatrixCoordsLine >();
    ObjectRegistry::registerConverterFor< SireMove::OpenMMMDIntegrator >();
    ObjectRegistry::registerConverterFor< SireMove::OpenMMMDIntegrator >();
    ObjectRegistry::registerConverterFor< SireMove::DofID >();
    ObjectRegistry::registerConverterFor< SireMove::Flexibility >();
    ObjectRegistry::registerConverterFor< SireMove::OpenMMFrEnergyST >();
    ObjectRegistry::registerConverterFor< SireMove::OpenMMFrEnergyST >();
    ObjectRegistry::registerConverterFor< SireMove::ZMatMove >();
    ObjectRegistry::registerConverterFor< SireMove::SameMoves >();
    ObjectRegistry::registerConverterFor< SireMove::NullMove >();
    ObjectRegistry::registerConverterFor< SireMove::SimStore >();
    ObjectRegistry::registerConverterFor< SireMove::UniformSampler >();
    ObjectRegistry::registerConverterFor< SireMove::Ensemble >();
    ObjectRegistry::registerConverterFor< SireMove::SimPacket >();
    ObjectRegistry::registerConverterFor< SireMove::OpenMMFrEnergyDT >();
    ObjectRegistry::registerConverterFor< SireMove::OpenMMFrEnergyDT >();
    ObjectRegistry::registerConverterFor< SireMove::NullGetPoint >();
    ObjectRegistry::registerConverterFor< SireMove::GetCOMPoint >();
    ObjectRegistry::registerConverterFor< SireMove::GetCOGPoint >();
    ObjectRegistry::registerConverterFor< SireMove::GetCentroidPoint >();
    ObjectRegistry::registerConverterFor< SireMove::Replica >();
    ObjectRegistry::registerConverterFor< SireMove::VolumeMove >();
    ObjectRegistry::registerConverterFor< SireMove::DLMRigidBody >();
    ObjectRegistry::registerConverterFor< SireMove::NullSupraMove >();
    ObjectRegistry::registerConverterFor< SireMove::VelocityVerlet >();
    ObjectRegistry::registerConverterFor< SireMove::NullDeleter >();
    ObjectRegistry::registerConverterFor< SireMove::SpecifiedGroupsDeleter >();
    ObjectRegistry::registerConverterFor< SireMove::SystemWideDeleter >();
    ObjectRegistry::registerConverterFor< SireMove::NullSupraSubMove >();
    ObjectRegistry::registerConverterFor< SireMove::Titrator >();
    ObjectRegistry::registerConverterFor< SireMove::RBWorkspace >();
    ObjectRegistry::registerConverterFor< SireMove::HybridMC >();
    ObjectRegistry::registerConverterFor< SireMove::HMCGenerator >();
    ObjectRegistry::registerConverterFor< SireMove::NullIntegratorWorkspaceJM >();
    ObjectRegistry::registerConverterFor< SireMove::AtomicVelocityWorkspaceJM >();
    ObjectRegistry::registerConverterFor< SireMove::PrefSampler >();
    ObjectRegistry::registerConverterFor< SireMove::WeightedMoves >();
    ObjectRegistry::registerConverterFor< SireMove::OpenMMPMEFEP >();
    ObjectRegistry::registerConverterFor< SireMove::OpenMMPMEFEP >();

}

