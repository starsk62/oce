// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepToGeom_MakeParabola2d_HeaderFile
#define _StepToGeom_MakeParabola2d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_StepGeom_Parabola_HeaderFile
#include <Handle_StepGeom_Parabola.hxx>
#endif
#ifndef _Handle_Geom2d_Parabola_HeaderFile
#include <Handle_Geom2d_Parabola.hxx>
#endif
class StepGeom_Parabola;
class Geom2d_Parabola;


//! This class implements the mapping between classes <br>
//!          Parabola from StepGeom which describes a Parabola from <br>
//!          Prostep and Parabola from Geom2d. <br>
class StepToGeom_MakeParabola2d  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   static  Standard_Boolean Convert(const Handle(StepGeom_Parabola)& SC,Handle(Geom2d_Parabola)& CC) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
