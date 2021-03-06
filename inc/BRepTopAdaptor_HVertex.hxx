// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepTopAdaptor_HVertex_HeaderFile
#define _BRepTopAdaptor_HVertex_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_BRepTopAdaptor_HVertex_HeaderFile
#include <Handle_BRepTopAdaptor_HVertex.hxx>
#endif

#ifndef _TopoDS_Vertex_HeaderFile
#include <TopoDS_Vertex.hxx>
#endif
#ifndef _Handle_BRepAdaptor_HCurve2d_HeaderFile
#include <Handle_BRepAdaptor_HCurve2d.hxx>
#endif
#ifndef _Adaptor3d_HVertex_HeaderFile
#include <Adaptor3d_HVertex.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_Adaptor2d_HCurve2d_HeaderFile
#include <Handle_Adaptor2d_HCurve2d.hxx>
#endif
#ifndef _TopAbs_Orientation_HeaderFile
#include <TopAbs_Orientation.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Adaptor3d_HVertex_HeaderFile
#include <Handle_Adaptor3d_HVertex.hxx>
#endif
class BRepAdaptor_HCurve2d;
class TopoDS_Vertex;
class gp_Pnt2d;
class Adaptor2d_HCurve2d;
class Adaptor3d_HVertex;



class BRepTopAdaptor_HVertex : public Adaptor3d_HVertex {

public:

  
  Standard_EXPORT   BRepTopAdaptor_HVertex(const TopoDS_Vertex& Vtx,const Handle(BRepAdaptor_HCurve2d)& Curve);
  
       const TopoDS_Vertex& Vertex() const;
  
        TopoDS_Vertex& ChangeVertex() ;
  
  Standard_EXPORT   virtual  gp_Pnt2d Value() ;
  
  Standard_EXPORT   virtual  Standard_Real Parameter(const Handle(Adaptor2d_HCurve2d)& C) ;
  //! Parametric resolution (2d). <br>
  Standard_EXPORT   virtual  Standard_Real Resolution(const Handle(Adaptor2d_HCurve2d)& C) ;
  
  Standard_EXPORT   virtual  TopAbs_Orientation Orientation() ;
  
  Standard_EXPORT   virtual  Standard_Boolean IsSame(const Handle(Adaptor3d_HVertex)& Other) ;




  DEFINE_STANDARD_RTTI(BRepTopAdaptor_HVertex)

protected:




private: 


TopoDS_Vertex myVtx;
Handle_BRepAdaptor_HCurve2d myCurve;


};


#include <BRepTopAdaptor_HVertex.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
