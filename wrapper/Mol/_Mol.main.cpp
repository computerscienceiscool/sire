// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License


#include "boost/python.hpp"

#include "Helpers/clone_const_reference.hpp"

#include "AbsFromMass.pypp.hpp"

#include "AbsFromNumber.pypp.hpp"

#include "AmberParameters.pypp.hpp"

#include "AngleID.pypp.hpp"

#include "AnglePerturbation.pypp.hpp"

#include "Atom.pypp.hpp"

#include "AtomBeads.pypp.hpp"

#include "AtomCharges.pypp.hpp"

#include "AtomCoords.pypp.hpp"

#include "AtomCutting.pypp.hpp"

#include "AtomEditor.pypp.hpp"

#include "AtomEditorBase.pypp.hpp"

#include "AtomElements.pypp.hpp"

#include "AtomEnergies.pypp.hpp"

#include "AtomFloatProperty.pypp.hpp"

#include "AtomForces.pypp.hpp"

#include "AtomID.pypp.hpp"

#include "AtomIDMatcher.pypp.hpp"

#include "AtomIdx.pypp.hpp"

#include "AtomIdxMatcher.pypp.hpp"

#include "AtomIntProperty.pypp.hpp"

#include "AtomMCSMatcher.pypp.hpp"

#include "AtomMasses.pypp.hpp"

#include "AtomMatchInverter.pypp.hpp"

#include "AtomMatcher.pypp.hpp"

#include "AtomMultiMatcher.pypp.hpp"

#include "AtomName.pypp.hpp"

#include "AtomNameMatcher.pypp.hpp"

#include "AtomNum.pypp.hpp"

#include "AtomPolarisabilities.pypp.hpp"

#include "AtomProp.pypp.hpp"

#include "AtomResultMatcher.pypp.hpp"

#include "AtomSelection.pypp.hpp"

#include "AtomStringProperty.pypp.hpp"

#include "AtomStructureEditor.pypp.hpp"

#include "AtomVariantProperty.pypp.hpp"

#include "AtomVelocities.pypp.hpp"

#include "AtomsIn_CGID_.pypp.hpp"

#include "AtomsIn_ChainID_.pypp.hpp"

#include "AtomsIn_ResID_.pypp.hpp"

#include "AtomsIn_SegID_.pypp.hpp"

#include "Bead.pypp.hpp"

#include "BeadEditor.pypp.hpp"

#include "BeadEditorBase.pypp.hpp"

#include "BeadFloatProperty.pypp.hpp"

#include "BeadID.pypp.hpp"

#include "BeadIdx.pypp.hpp"

#include "BeadIntProperty.pypp.hpp"

#include "BeadNum.pypp.hpp"

#include "BeadProp.pypp.hpp"

#include "BeadStringProperty.pypp.hpp"

#include "BeadVariantProperty.pypp.hpp"

#include "Beading.pypp.hpp"

#include "Beads.pypp.hpp"

#include "BondHunter.pypp.hpp"

#include "BondID.pypp.hpp"

#include "BondPerturbation.pypp.hpp"

#include "CGAtomID.pypp.hpp"

#include "CGAtomIdx.pypp.hpp"

#include "CGChainID.pypp.hpp"

#include "CGEditor.pypp.hpp"

#include "CGEditorBase.pypp.hpp"

#include "CGFloatProperty.pypp.hpp"

#include "CGID.pypp.hpp"

#include "CGIdx.pypp.hpp"

#include "CGIntProperty.pypp.hpp"

#include "CGName.pypp.hpp"

#include "CGProp.pypp.hpp"

#include "CGResID.pypp.hpp"

#include "CGStringProperty.pypp.hpp"

#include "CGStructureEditor.pypp.hpp"

#include "CGVariantProperty.pypp.hpp"

#include "CGsWithAtoms.pypp.hpp"

#include "Chain.pypp.hpp"

#include "ChainAtomID.pypp.hpp"

#include "ChainEditor.pypp.hpp"

#include "ChainEditorBase.pypp.hpp"

#include "ChainFloatProperty.pypp.hpp"

#include "ChainID.pypp.hpp"

#include "ChainIdx.pypp.hpp"

#include "ChainIntProperty.pypp.hpp"

#include "ChainName.pypp.hpp"

#include "ChainProp.pypp.hpp"

#include "ChainResID.pypp.hpp"

#include "ChainStringProperty.pypp.hpp"

#include "ChainStructureEditor.pypp.hpp"

#include "ChainVariantProperty.pypp.hpp"

#include "ChainsWithAtoms.pypp.hpp"

#include "ChainsWithRes.pypp.hpp"

#include "ChargePerturbation.pypp.hpp"

#include "ChemicalBondHunter.pypp.hpp"

#include "Connectivity.pypp.hpp"

#include "ConnectivityBase.pypp.hpp"

#include "ConnectivityEditor.pypp.hpp"

#include "CovalentBondHunter.pypp.hpp"

#include "CovalentBondHunterParameters.pypp.hpp"

#include "CutGroup.pypp.hpp"

#include "CuttingFunction.pypp.hpp"

#include "DihedralID.pypp.hpp"

#include "DihedralPerturbation.pypp.hpp"

#include "Element.pypp.hpp"

#include "Evaluator.pypp.hpp"

#include "Force3D.pypp.hpp"

#include "GeometryPerturbation.pypp.hpp"

#include "GeometryPerturbations.pypp.hpp"

#include "GroupAtomIDBase.pypp.hpp"

#include "IDAndSet_AtomID_.pypp.hpp"

#include "IDAndSet_CGID_.pypp.hpp"

#include "IDAndSet_ChainID_.pypp.hpp"

#include "IDAndSet_MGID_.pypp.hpp"

#include "IDAndSet_MolID_.pypp.hpp"

#include "IDAndSet_ResID_.pypp.hpp"

#include "IDAndSet_SegID_.pypp.hpp"

#include "IDOrSet_AtomID_.pypp.hpp"

#include "IDOrSet_CGID_.pypp.hpp"

#include "IDOrSet_ChainID_.pypp.hpp"

#include "IDOrSet_MGID_.pypp.hpp"

#include "IDOrSet_MolID_.pypp.hpp"

#include "IDOrSet_ResID_.pypp.hpp"

#include "IDOrSet_SegID_.pypp.hpp"

#include "ImproperID.pypp.hpp"

#include "MGID.pypp.hpp"

#include "MGIDsAndMaps.pypp.hpp"

#include "MGIdx.pypp.hpp"

#include "MGName.pypp.hpp"

#include "MGNum.pypp.hpp"

#include "MolAtomID.pypp.hpp"

#include "MolEditor.pypp.hpp"

#include "MolEditorBase.pypp.hpp"

#include "MolGroupsBase.pypp.hpp"

#include "MolID.pypp.hpp"

#include "MolIdx.pypp.hpp"

#include "MolInfo.pypp.hpp"

#include "MolName.pypp.hpp"

#include "MolNum.pypp.hpp"

#include "MolResID.pypp.hpp"

#include "MolResNum.pypp.hpp"

#include "MolStructureEditor.pypp.hpp"

#include "MolViewProperty.pypp.hpp"

#include "MolWithResID.pypp.hpp"

#include "Molecule.pypp.hpp"

#include "MoleculeBeading.pypp.hpp"

#include "MoleculeGroup.pypp.hpp"

#include "MoleculeGroups.pypp.hpp"

#include "MoleculeProperty.pypp.hpp"

#include "MoleculeView.pypp.hpp"

#include "Molecules.pypp.hpp"

#include "MoverBase.pypp.hpp"

#include "Mover_Atom_.pypp.hpp"

#include "Mover_Bead_.pypp.hpp"

#include "Mover_Beads_.pypp.hpp"

#include "Mover_Chain_.pypp.hpp"

#include "Mover_CutGroup_.pypp.hpp"

#include "Mover_Molecule_.pypp.hpp"

#include "Mover_PartialMolecule_.pypp.hpp"

#include "Mover_Residue_.pypp.hpp"

#include "Mover_Segment_.pypp.hpp"

#include "Mover_Selector_Atom_.pypp.hpp"

#include "Mover_Selector_Chain_.pypp.hpp"

#include "Mover_Selector_CutGroup_.pypp.hpp"

#include "Mover_Selector_Residue_.pypp.hpp"

#include "Mover_Selector_Segment_.pypp.hpp"

#include "Mover_ViewsOfMol_.pypp.hpp"

#include "NullBeading.pypp.hpp"

#include "NullBondHunter.pypp.hpp"

#include "NullGeometryPerturbation.pypp.hpp"

#include "NullPerturbation.pypp.hpp"

#include "PartialMolecule.pypp.hpp"

#include "Perturbation.pypp.hpp"

#include "PerturbationSymbols.pypp.hpp"

#include "Perturbations.pypp.hpp"

#include "RelFromMass.pypp.hpp"

#include "RelFromNumber.pypp.hpp"

#include "ResAtomID.pypp.hpp"

#include "ResEditor.pypp.hpp"

#include "ResEditorBase.pypp.hpp"

#include "ResFloatProperty.pypp.hpp"

#include "ResID.pypp.hpp"

#include "ResIdx.pypp.hpp"

#include "ResIn_ChainID_.pypp.hpp"

#include "ResIntProperty.pypp.hpp"

#include "ResName.pypp.hpp"

#include "ResNum.pypp.hpp"

#include "ResProp.pypp.hpp"

#include "ResStringProperty.pypp.hpp"

#include "ResStructureEditor.pypp.hpp"

#include "ResVariantProperty.pypp.hpp"

#include "ResWithAtoms.pypp.hpp"

#include "Residue.pypp.hpp"

#include "ResidueBeading.pypp.hpp"

#include "ResidueCutting.pypp.hpp"

#include "SegAtomID.pypp.hpp"

#include "SegCGID.pypp.hpp"

#include "SegChainID.pypp.hpp"

#include "SegEditor.pypp.hpp"

#include "SegEditorBase.pypp.hpp"

#include "SegFloatProperty.pypp.hpp"

#include "SegID.pypp.hpp"

#include "SegIdx.pypp.hpp"

#include "SegIntProperty.pypp.hpp"

#include "SegName.pypp.hpp"

#include "SegProp.pypp.hpp"

#include "SegResID.pypp.hpp"

#include "SegStringProperty.pypp.hpp"

#include "SegStructureEditor.pypp.hpp"

#include "SegVariantProperty.pypp.hpp"

#include "Segment.pypp.hpp"

#include "SegsWithAtoms.pypp.hpp"

#include "Selector_Atom_.pypp.hpp"

#include "Selector_Chain_.pypp.hpp"

#include "Selector_CutGroup_.pypp.hpp"

#include "Selector_Residue_.pypp.hpp"

#include "Selector_Segment_.pypp.hpp"

#include "SpecifyMol.pypp.hpp"

#include "Specify_AtomID_.pypp.hpp"

#include "Specify_CGID_.pypp.hpp"

#include "Specify_ChainID_.pypp.hpp"

#include "Specify_MGID_.pypp.hpp"

#include "Specify_ResID_.pypp.hpp"

#include "Specify_SegID_.pypp.hpp"

#include "UserBeading.pypp.hpp"

#include "Velocity3D.pypp.hpp"

#include "ViewsOfMol.pypp.hpp"

#include "VolumeMap.pypp.hpp"

#include "WeightFunction.pypp.hpp"

#include "Within.pypp.hpp"

#include "_Mol_free_functions.pypp.hpp"

namespace bp = boost::python;

#include "SireMol_containers.h"

#include "SireMol_registrars.h"

#include "SireMol_properties.h"

#include "SireMol/moleculedata.h"

#include "SireMol/moleculeview.h"

#include "SireMol/partialmolecule.h"

#include "SireMol/mover.hpp"

#include "SireMol/mgidentifier.h"

BOOST_PYTHON_MODULE(_Mol){
    register_SireMol_objects();

    register_SireMol_containers();

    register_AtomID_class();

    register_IDAndSet_AtomID__class();

    register_CGID_class();

    register_IDAndSet_CGID__class();

    register_ChainID_class();

    register_IDAndSet_ChainID__class();

    register_MGID_class();

    register_IDAndSet_MGID__class();

    register_MolID_class();

    register_IDAndSet_MolID__class();

    register_ResID_class();

    register_IDAndSet_ResID__class();

    register_SegID_class();

    register_IDAndSet_SegID__class();

    register_IDOrSet_AtomID__class();

    register_IDOrSet_CGID__class();

    register_IDOrSet_ChainID__class();

    register_IDOrSet_MGID__class();

    register_IDOrSet_MolID__class();

    register_IDOrSet_ResID__class();

    register_IDOrSet_SegID__class();

    register_Specify_AtomID__class();

    register_Specify_CGID__class();

    register_Specify_ChainID__class();

    register_Specify_MGID__class();

    register_Specify_ResID__class();

    register_Specify_SegID__class();

    register_Velocity3D_class();

    register_Force3D_class();

    register_WeightFunction_class();

    register_AbsFromMass_class();

    register_AbsFromNumber_class();

    register_MolViewProperty_class();

    register_MoleculeProperty_class();

    register_AmberParameters_class();

    register_AngleID_class();

    register_Perturbation_class();

    register_GeometryPerturbation_class();

    register_AnglePerturbation_class();

    register_MoleculeView_class();

    register_Atom_class();

    register_CuttingFunction_class();

    register_AtomCutting_class();

    register_AtomEditorBase_class();

    register_AtomEditor_class();

    register_AtomMatcher_class();

    register_AtomIDMatcher_class();

    register_AtomIdx_class();

    register_AtomIdxMatcher_class();

    register_AtomMCSMatcher_class();

    register_AtomMatchInverter_class();

    register_AtomMultiMatcher_class();

    register_AtomName_class();

    register_AtomNameMatcher_class();

    register_AtomNum_class();

    register_AtomProp_class();

    register_AtomStringProperty_class();

    register_AtomVariantProperty_class();

    register_AtomForces_class();

    register_AtomVelocities_class();

    register_AtomCoords_class();

    register_AtomBeads_class();

    register_AtomElements_class();

    register_AtomCharges_class();

    register_AtomPolarisabilities_class();

    register_AtomMasses_class();

    register_AtomEnergies_class();

    register_AtomFloatProperty_class();

    register_AtomIntProperty_class();

    register_AtomResultMatcher_class();

    register_AtomSelection_class();

    register_AtomStructureEditor_class();

    register_AtomsIn_CGID__class();

    register_AtomsIn_ChainID__class();

    register_AtomsIn_ResID__class();

    register_AtomsIn_SegID__class();

    register_Bead_class();

    register_BeadEditorBase_class();

    register_BeadEditor_class();

    register_BeadID_class();

    register_BeadIdx_class();

    register_BeadNum_class();

    register_BeadProp_class();

    register_BeadStringProperty_class();

    register_BeadVariantProperty_class();

    register_BeadFloatProperty_class();

    register_BeadIntProperty_class();

    register_Beading_class();

    register_Beads_class();

    register_BondHunter_class();

    register_BondID_class();

    register_BondPerturbation_class();

    register_CGAtomIdx_class();

    register_CutGroup_class();

    register_CGEditorBase_class();

    register_CGEditor_class();

    register_CGIdx_class();

    register_CGName_class();

    register_CGProp_class();

    register_CGStringProperty_class();

    register_CGVariantProperty_class();

    register_CGFloatProperty_class();

    register_CGIntProperty_class();

    register_CGStructureEditor_class();

    register_CGsWithAtoms_class();

    register_Chain_class();

    register_ChainEditorBase_class();

    register_ChainEditor_class();

    register_ChainIdx_class();

    register_ChainName_class();

    register_ChainProp_class();

    register_ChainStringProperty_class();

    register_ChainVariantProperty_class();

    register_ChainFloatProperty_class();

    register_ChainIntProperty_class();

    register_ChainResID_class();

    register_ChainStructureEditor_class();

    register_ChainsWithAtoms_class();

    register_ChainsWithRes_class();

    register_ChargePerturbation_class();

    register_CovalentBondHunter_class();

    register_ChemicalBondHunter_class();

    register_ConnectivityBase_class();

    register_Connectivity_class();

    register_ConnectivityEditor_class();

    register_CovalentBondHunterParameters_class();

    register_DihedralID_class();

    register_DihedralPerturbation_class();

    register_Molecule_class();

    register_MolEditorBase_class();

    register_Residue_class();

    register_ResEditorBase_class();

    register_Segment_class();

    register_SegEditorBase_class();

    register_Element_class();

    register_Evaluator_class();

    register_GeometryPerturbations_class();

    register_GroupAtomIDBase_class();

    register_CGAtomID_class();

    register_ChainAtomID_class();

    register_ResAtomID_class();

    register_SegAtomID_class();

    register_CGChainID_class();

    register_CGResID_class();

    register_SegCGID_class();

    register_SegChainID_class();

    register_SegResID_class();

    register_ImproperID_class();

    register_MGIDsAndMaps_class();

    register_MGIdx_class();

    register_MGName_class();

    register_MGNum_class();

    register_MolAtomID_class();

    register_MolEditor_class();

    register_MolGroupsBase_class();

    register_MolIdx_class();

    register_MolInfo_class();

    register_MolName_class();

    register_MolNum_class();

    register_MolResID_class();

    register_MolResNum_class();

    register_MolStructureEditor_class();

    register_MolWithResID_class();

    register_MoleculeBeading_class();

    register_MoleculeGroup_class();

    register_MoleculeGroups_class();

    register_Molecules_class();

    register_MoverBase_class();

    register_Mover_Atom__class();

    register_Mover_Bead__class();

    register_Mover_Beads__class();

    register_Mover_Chain__class();

    register_Mover_CutGroup__class();

    register_Mover_Molecule__class();

    register_PartialMolecule_class();

    register_Mover_PartialMolecule__class();

    register_Mover_Residue__class();

    register_Mover_Segment__class();

    register_Selector_Atom__class();

    register_Mover_Selector_Atom__class();

    register_Selector_Chain__class();

    register_Mover_Selector_Chain__class();

    register_Selector_CutGroup__class();

    register_Mover_Selector_CutGroup__class();

    register_Selector_Residue__class();

    register_Mover_Selector_Residue__class();

    register_Selector_Segment__class();

    register_Mover_Selector_Segment__class();

    register_ViewsOfMol_class();

    register_Mover_ViewsOfMol__class();

    register_NullBeading_class();

    register_NullBondHunter_class();

    register_NullGeometryPerturbation_class();

    register_NullPerturbation_class();

    register_PerturbationSymbols_class();

    register_Perturbations_class();

    register_RelFromMass_class();

    register_RelFromNumber_class();

    register_ResEditor_class();

    register_ResIdx_class();

    register_ResIn_ChainID__class();

    register_ResName_class();

    register_ResNum_class();

    register_ResProp_class();

    register_ResStringProperty_class();

    register_ResVariantProperty_class();

    register_ResFloatProperty_class();

    register_ResIntProperty_class();

    register_ResStructureEditor_class();

    register_ResWithAtoms_class();

    register_ResidueBeading_class();

    register_ResidueCutting_class();

    register_SegEditor_class();

    register_SegIdx_class();

    register_SegName_class();

    register_SegProp_class();

    register_SegStringProperty_class();

    register_SegVariantProperty_class();

    register_SegFloatProperty_class();

    register_SegIntProperty_class();

    register_SegStructureEditor_class();

    register_SegsWithAtoms_class();

    register_SpecifyMol_class();

    register_UserBeading_class();

    register_VolumeMap_class();

    register_Within_class();

    register_SireMol_properties();

    bp::implicitly_convertible< SireMol::AtomID, SireMol::AtomIdentifier >();

    bp::implicitly_convertible< SireMol::CGID, SireMol::CGIdentifier >();

    bp::implicitly_convertible< SireMol::ChainID, SireMol::ChainIdentifier >();

    bp::implicitly_convertible< SireMol::ResID, SireMol::ResIdentifier >();

    bp::implicitly_convertible< SireMol::SegID, SireMol::SegIdentifier >();

    bp::implicitly_convertible< SireMol::MolID, SireMol::MolIdentifier >();

    bp::implicitly_convertible< SireMol::MGID, SireMol::MGIdentifier >();

    bp::implicitly_convertible< SireMol::MoleculeView, SireMol::MoleculeData >();

    bp::implicitly_convertible< SireMol::MoleculeView, SireMol::PartialMolecule >();

    register_free_functions();
}

