// Created on: 2004-11-22
// Created by: Pavel TELKOV
// Copyright (c) 2004-2012 OPEN CASCADE SAS
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

// The original implementation Copyright: (C) RINA S.p.A

#ifndef TObj_DeletingMode_HeaderFile
#define TObj_DeletingMode_HeaderFile

typedef enum
{
  TObj_FreeOnly = 0,   //!< Delete objects only without dependence.
  TObj_KeepDepending,  //!< Remove object if depending one will be correct elsewhere.
  TObj_Forced          //!< Delete this object and all depenging object.
} TObj_DeletingMode;     

#endif

#ifdef _MSC_VER
#pragma once
#endif
