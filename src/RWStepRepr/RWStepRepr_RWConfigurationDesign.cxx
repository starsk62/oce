// Created on: 1999-11-26
// Created by: Andrey BETENEV
// Copyright (c) 1999 Matra Datavision
// Copyright (c) 1999-2012 OPEN CASCADE SAS
//
// The content of this file is subject to the Open CASCADE Technology Public
// License Version 6.5 (the "License"). You may not use the content of this file
// except in compliance with the License. Please obtain a copy of the License
// at http://www.opencascade.org and read it completely before using this file.
//
// The Initial Developer of the Original Code is Open CASCADE S.A.S., having its
// main offices at: 1, place des Freres Montgolfier, 78280 Guyancourt, France.
//
// The Original Code and all software distributed under the License is
// distributed on an "AS IS" basis, without warranty of any kind, and the
// Initial Developer hereby disclaims all such warranties, including without
// limitation, any warranties of merchantability, fitness for a particular
// purpose or non-infringement. Please see the License for the specific terms
// and conditions governing the rights and limitations under the License.

// Generator:	ExpToCas (EXPRESS -> CASCADE/XSTEP Translator) V1.0

#include <RWStepRepr_RWConfigurationDesign.ixx>

//=======================================================================
//function : RWStepRepr_RWConfigurationDesign
//purpose  : 
//=======================================================================

RWStepRepr_RWConfigurationDesign::RWStepRepr_RWConfigurationDesign ()
{
}

//=======================================================================
//function : ReadStep
//purpose  : 
//=======================================================================

void RWStepRepr_RWConfigurationDesign::ReadStep (const Handle(StepData_StepReaderData)& data,
                                                 const Standard_Integer num,
                                                 Handle(Interface_Check)& ach,
                                                 const Handle(StepRepr_ConfigurationDesign) &ent) const
{
  // Check number of parameters
  if ( ! data->CheckNbParams(num,2,ach,"configuration_design") ) return;

  // Own fields of ConfigurationDesign

  Handle(StepRepr_ConfigurationItem) aConfiguration;
  data->ReadEntity (num, 1, "configuration", ach, STANDARD_TYPE(StepRepr_ConfigurationItem), aConfiguration);

  StepRepr_ConfigurationDesignItem aDesign;
  data->ReadEntity (num, 2, "design", ach, aDesign);

  // Initialize entity
  ent->Init(aConfiguration,
            aDesign);
}

//=======================================================================
//function : WriteStep
//purpose  : 
//=======================================================================

void RWStepRepr_RWConfigurationDesign::WriteStep (StepData_StepWriter& SW,
                                                  const Handle(StepRepr_ConfigurationDesign) &ent) const
{

  // Own fields of ConfigurationDesign

  SW.Send (ent->Configuration());

  SW.Send (ent->Design().Value());
}

//=======================================================================
//function : Share
//purpose  : 
//=======================================================================

void RWStepRepr_RWConfigurationDesign::Share (const Handle(StepRepr_ConfigurationDesign) &ent,
                                              Interface_EntityIterator& iter) const
{

  // Own fields of ConfigurationDesign

  iter.AddItem (ent->Configuration());

  iter.AddItem (ent->Design().Value());
}
