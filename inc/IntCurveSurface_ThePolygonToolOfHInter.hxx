// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntCurveSurface_ThePolygonToolOfHInter_HeaderFile
#define _IntCurveSurface_ThePolygonToolOfHInter_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_OutOfRange;
class gp_Pnt;
class IntCurveSurface_ThePolygonOfHInter;
class Bnd_Box;



class IntCurveSurface_ThePolygonToolOfHInter  {
public:

  DEFINE_STANDARD_ALLOC

  
      static const Bnd_Box& Bounding(const IntCurveSurface_ThePolygonOfHInter& thePolygon) ;
  
      static  Standard_Real DeflectionOverEstimation(const IntCurveSurface_ThePolygonOfHInter& thePolygon) ;
  
      static  Standard_Boolean Closed(const IntCurveSurface_ThePolygonOfHInter& thePolygon) ;
  
      static  Standard_Integer NbSegments(const IntCurveSurface_ThePolygonOfHInter& thePolygon) ;
  
      static const gp_Pnt& BeginOfSeg(const IntCurveSurface_ThePolygonOfHInter& thePolygon,const Standard_Integer Index) ;
  
      static const gp_Pnt& EndOfSeg(const IntCurveSurface_ThePolygonOfHInter& thePolygon,const Standard_Integer Index) ;
  
  Standard_EXPORT   static  void Dump(const IntCurveSurface_ThePolygonOfHInter& thePolygon) ;





protected:





private:





};

#define ThePoint gp_Pnt
#define ThePoint_hxx <gp_Pnt.hxx>
#define ThePolygon IntCurveSurface_ThePolygonOfHInter
#define ThePolygon_hxx <IntCurveSurface_ThePolygonOfHInter.hxx>
#define TheBoundingBox Bnd_Box
#define TheBoundingBox_hxx <Bnd_Box.hxx>
#define IntCurveSurface_PolygonTool IntCurveSurface_ThePolygonToolOfHInter
#define IntCurveSurface_PolygonTool_hxx <IntCurveSurface_ThePolygonToolOfHInter.hxx>

#include <IntCurveSurface_PolygonTool.lxx>

#undef ThePoint
#undef ThePoint_hxx
#undef ThePolygon
#undef ThePolygon_hxx
#undef TheBoundingBox
#undef TheBoundingBox_hxx
#undef IntCurveSurface_PolygonTool
#undef IntCurveSurface_PolygonTool_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
