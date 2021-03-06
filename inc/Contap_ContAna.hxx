// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Contap_ContAna_HeaderFile
#define _Contap_ContAna_HeaderFile

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
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _GeomAbs_CurveType_HeaderFile
#include <GeomAbs_CurveType.hxx>
#endif
#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _gp_Dir_HeaderFile
#include <gp_Dir.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _gp_Circ_HeaderFile
#include <gp_Circ.hxx>
#endif
class StdFail_NotDone;
class Standard_DomainError;
class Standard_OutOfRange;
class gp_Sphere;
class gp_Dir;
class gp_Pnt;
class gp_Cylinder;
class gp_Cone;
class gp_Lin;


//! This class provides the computation of the contours <br>
//!          for quadric surfaces. <br>
class Contap_ContAna  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   Contap_ContAna();
  
  Standard_EXPORT     void Perform(const gp_Sphere& S,const gp_Dir& D) ;
  
  Standard_EXPORT     void Perform(const gp_Sphere& S,const gp_Dir& D,const Standard_Real Ang) ;
  
  Standard_EXPORT     void Perform(const gp_Sphere& S,const gp_Pnt& Eye) ;
  
  Standard_EXPORT     void Perform(const gp_Cylinder& C,const gp_Dir& D) ;
  
  Standard_EXPORT     void Perform(const gp_Cylinder& C,const gp_Dir& D,const Standard_Real Ang) ;
  
  Standard_EXPORT     void Perform(const gp_Cylinder& C,const gp_Pnt& Eye) ;
  
  Standard_EXPORT     void Perform(const gp_Cone& C,const gp_Dir& D) ;
  
  Standard_EXPORT     void Perform(const gp_Cone& C,const gp_Dir& D,const Standard_Real Ang) ;
  
  Standard_EXPORT     void Perform(const gp_Cone& C,const gp_Pnt& Eye) ;
  
        Standard_Boolean IsDone() const;
  
        Standard_Integer NbContours() const;
  //! Returns GeomAbs_Line or GeomAbs_Circle, when <br>
//!          IsDone() returns True. <br>
        GeomAbs_CurveType TypeContour() const;
  
        gp_Circ Circle() const;
  
  Standard_EXPORT     gp_Lin Line(const Standard_Integer Index) const;





protected:





private:



Standard_Boolean done;
Standard_Integer nbSol;
GeomAbs_CurveType typL;
gp_Pnt pt1;
gp_Pnt pt2;
gp_Pnt pt3;
gp_Pnt pt4;
gp_Dir dir1;
gp_Dir dir2;
gp_Dir dir3;
gp_Dir dir4;
Standard_Real prm;


};


#include <Contap_ContAna.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
