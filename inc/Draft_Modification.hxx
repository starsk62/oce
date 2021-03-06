// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Draft_Modification_HeaderFile
#define _Draft_Modification_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Draft_Modification_HeaderFile
#include <Handle_Draft_Modification.hxx>
#endif

#ifndef _Draft_DataMapOfFaceFaceInfo_HeaderFile
#include <Draft_DataMapOfFaceFaceInfo.hxx>
#endif
#ifndef _Draft_DataMapOfEdgeEdgeInfo_HeaderFile
#include <Draft_DataMapOfEdgeEdgeInfo.hxx>
#endif
#ifndef _Draft_DataMapOfVertexVertexInfo_HeaderFile
#include <Draft_DataMapOfVertexVertexInfo.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _Draft_ErrorStatus_HeaderFile
#include <Draft_ErrorStatus.hxx>
#endif
#ifndef _TopoDS_Face_HeaderFile
#include <TopoDS_Face.hxx>
#endif
#ifndef _TopTools_ListOfShape_HeaderFile
#include <TopTools_ListOfShape.hxx>
#endif
#ifndef _TopTools_IndexedDataMapOfShapeListOfShape_HeaderFile
#include <TopTools_IndexedDataMapOfShapeListOfShape.hxx>
#endif
#ifndef _BRepTools_Modification_HeaderFile
#include <BRepTools_Modification.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_Geom_Surface_HeaderFile
#include <Handle_Geom_Surface.hxx>
#endif
#ifndef _Handle_Geom_Curve_HeaderFile
#include <Handle_Geom_Curve.hxx>
#endif
#ifndef _Handle_Geom2d_Curve_HeaderFile
#include <Handle_Geom2d_Curve.hxx>
#endif
#ifndef _GeomAbs_Shape_HeaderFile
#include <GeomAbs_Shape.hxx>
#endif
#ifndef _TopAbs_Orientation_HeaderFile
#include <TopAbs_Orientation.hxx>
#endif
class StdFail_NotDone;
class Standard_NoSuchObject;
class Standard_ConstructionError;
class TopoDS_Shape;
class TopoDS_Face;
class gp_Dir;
class gp_Pln;
class TopTools_ListOfShape;
class Geom_Surface;
class TopLoc_Location;
class TopoDS_Edge;
class Geom_Curve;
class TopoDS_Vertex;
class gp_Pnt;
class Geom2d_Curve;



class Draft_Modification : public BRepTools_Modification {

public:

  
  Standard_EXPORT   Draft_Modification(const TopoDS_Shape& S);
  //! Resets on the same shape. <br>
  Standard_EXPORT     void Clear() ;
  //! Changes the basis shape and resets. <br>
  Standard_EXPORT     void Init(const TopoDS_Shape& S) ;
  //! Adds  the  face  F    and propagates    the  draft <br>
//!          modification to  its  neighbour faces if they  are <br>
//!          tangent. If an error occurs, will return False and <br>
//!          ProblematicShape  will  return the "bad" face. <br>
  Standard_EXPORT     Standard_Boolean Add(const TopoDS_Face& F,const gp_Dir& Direction,const Standard_Real Angle,const gp_Pln& NeutralPlane,const Standard_Boolean Flag = Standard_True) ;
  //! Removes the face F and the neighbour faces if they <br>
//!          are tangent.   It will be  necessary to  call this <br>
//!          method if  the  method Add returns Standard_False, <br>
//!          to unset ProblematicFace. <br>
  Standard_EXPORT     void Remove(const TopoDS_Face& F) ;
  //! Performs the draft angle modification and sets the <br>
//!          value returned by the method  IsDone.  If an error <br>
//!          occurs, IsDone  will return Standard_False, and an <br>
//!          error status will  be  given by the  method Error, <br>
//!          and the  shape on which  the problem appeared will <br>
//!          be given by ProblematicShape <br>
  Standard_EXPORT     void Perform() ;
  //! Returns  True  if   Perform has  been  succesfully <br>
//!          called. Otherwise more information can be obtained <br>
//!          using the methods Error() and ProblematicShape(). <br>
  Standard_EXPORT     Standard_Boolean IsDone() const;
  
  Standard_EXPORT     Draft_ErrorStatus Error() const;
  //! Returns the shape (Face,  Edge or Vertex) on which <br>
//!          an error occured. <br>
  Standard_EXPORT    const TopoDS_Shape& ProblematicShape() const;
  //! Returns all  the  faces   which  have been   added <br>
//!          together with the face <F>. <br>
//! <br>
  Standard_EXPORT    const TopTools_ListOfShape& ConnectedFaces(const TopoDS_Face& F) ;
  //! Returns all the faces  on which a modification has <br>
//!          been given. <br>
//! <br>
  Standard_EXPORT    const TopTools_ListOfShape& ModifiedFaces() ;
  //! Returns Standard_True if   the face <F>  has  been <br>
//!          modified.  In this case,  <S> is the new geometric <br>
//!          support of the  face,  <L> the new  location,<Tol> <br>
//!          the   new tolerance.<RevWires>  has  to  be set to <br>
//!          Standard_True when   the modification reverses the <br>
//!          normal   of  the  surface.(the  wires   have to be <br>
//!          reversed).  <RevFace>    has    to  be   set    to <br>
//!          Standard_True  if  the orientation of the modified <br>
//!          face changes in  the shells which contain it. Here <br>
//!          it will be set to Standard_False. <br>
//! <br>
//!          Otherwise, returns Standard_False, and <S>,   <L>, <br>
//!          <Tol> , <RevWires> ,<RevFace> are not  significant. <br>
  Standard_EXPORT     Standard_Boolean NewSurface(const TopoDS_Face& F,Handle(Geom_Surface)& S,TopLoc_Location& L,Standard_Real& Tol,Standard_Boolean& RevWires,Standard_Boolean& RevFace) ;
  //! Returns Standard_True  if  the edge  <E> has  been <br>
//!          modified.  In this case,  <C> is the new geometric <br>
//!          support of the  edge, <L> the  new location, <Tol> <br>
//!          the         new    tolerance.   Otherwise, returns <br>
//!          Standard_False,    and  <C>,  <L>,   <Tol> are not <br>
//!          significant. <br>
  Standard_EXPORT     Standard_Boolean NewCurve(const TopoDS_Edge& E,Handle(Geom_Curve)& C,TopLoc_Location& L,Standard_Real& Tol) ;
  //! Returns  Standard_True if the  vertex <V> has been <br>
//!          modified.  In this  case, <P> is the new geometric <br>
//!          support of the vertex,   <Tol> the new  tolerance. <br>
//!          Otherwise, returns Standard_False, and <P>,  <Tol> <br>
//!          are not significant. <br>
  Standard_EXPORT     Standard_Boolean NewPoint(const TopoDS_Vertex& V,gp_Pnt& P,Standard_Real& Tol) ;
  //! Returns Standard_True if  the edge  <E> has a  new <br>
//!          curve on surface on the face <F>.In this case, <C> <br>
//!          is the new geometric support of  the edge, <L> the <br>
//!          new location, <Tol> the new tolerance. <br>
//! <br>
//!          Otherwise, returns  Standard_False, and <C>,  <L>, <br>
//!          <Tol> are not significant. <br>
//! <br>
//!          <NewE> is the new  edge created from  <E>.  <NewF> <br>
//!          is the new face created from <F>. They may be usefull. <br>
  Standard_EXPORT     Standard_Boolean NewCurve2d(const TopoDS_Edge& E,const TopoDS_Face& F,const TopoDS_Edge& NewE,const TopoDS_Face& NewF,Handle(Geom2d_Curve)& C,Standard_Real& Tol) ;
  //! Returns Standard_True if the Vertex  <V> has a new <br>
//!          parameter on the  edge <E>. In  this case,  <P> is <br>
//!          the parameter,    <Tol>  the     new    tolerance. <br>
//!          Otherwise, returns Standard_False, and <P>,  <Tol> <br>
//!          are not significant. <br>
  Standard_EXPORT     Standard_Boolean NewParameter(const TopoDS_Vertex& V,const TopoDS_Edge& E,Standard_Real& P,Standard_Real& Tol) ;
  //! Returns the  continuity of  <NewE> between <NewF1> <br>
//!          and <NewF2>. <br>
//! <br>
//!          <NewE> is the new  edge created from <E>.  <NewF1> <br>
//!          (resp. <NewF2>) is the new  face created from <F1> <br>
//!          (resp. <F2>). <br>
  Standard_EXPORT     GeomAbs_Shape Continuity(const TopoDS_Edge& E,const TopoDS_Face& F1,const TopoDS_Face& F2,const TopoDS_Edge& NewE,const TopoDS_Face& NewF1,const TopoDS_Face& NewF2) ;




  DEFINE_STANDARD_RTTI(Draft_Modification)

protected:




private: 

  
  Standard_EXPORT     Standard_Boolean InternalAdd(const TopoDS_Face& F,const gp_Dir& Direction,const Standard_Real Angle,const gp_Pln& NeutralPlane,const Standard_Boolean Flag = Standard_True) ;
  
  Standard_EXPORT     Standard_Boolean Propagate() ;
  
  Standard_EXPORT     Handle_Geom_Curve NewCurve(const Handle(Geom_Curve)& C,const Handle(Geom_Surface)& S,const TopAbs_Orientation OriS,const gp_Dir& Direction,const Standard_Real Angle,const gp_Pln& NeutralPlane,const Standard_Boolean Flag = Standard_True) ;
  
  Standard_EXPORT     Handle_Geom_Surface NewSurface(const Handle(Geom_Surface)& S,const TopAbs_Orientation OriS,const gp_Dir& Direction,const Standard_Real Angle,const gp_Pln& NeutralPlane) ;

Draft_DataMapOfFaceFaceInfo myFMap;
Draft_DataMapOfEdgeEdgeInfo myEMap;
Draft_DataMapOfVertexVertexInfo myVMap;
Standard_Boolean myComp;
TopoDS_Shape myShape;
TopoDS_Shape badShape;
Draft_ErrorStatus errStat;
TopoDS_Face curFace;
TopTools_ListOfShape conneF;
TopTools_IndexedDataMapOfShapeListOfShape myEFMap;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
