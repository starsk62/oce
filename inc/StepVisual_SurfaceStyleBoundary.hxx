// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepVisual_SurfaceStyleBoundary_HeaderFile
#define _StepVisual_SurfaceStyleBoundary_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepVisual_SurfaceStyleBoundary_HeaderFile
#include <Handle_StepVisual_SurfaceStyleBoundary.hxx>
#endif

#ifndef _Handle_StepVisual_CurveStyle_HeaderFile
#include <Handle_StepVisual_CurveStyle.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
class StepVisual_CurveStyle;



class StepVisual_SurfaceStyleBoundary : public MMgt_TShared {

public:

  //! Returns a SurfaceStyleBoundary <br>
  Standard_EXPORT   StepVisual_SurfaceStyleBoundary();
  
  Standard_EXPORT   virtual  void Init(const Handle(StepVisual_CurveStyle)& aStyleOfBoundary) ;
  
  Standard_EXPORT     void SetStyleOfBoundary(const Handle(StepVisual_CurveStyle)& aStyleOfBoundary) ;
  
  Standard_EXPORT     Handle_StepVisual_CurveStyle StyleOfBoundary() const;




  DEFINE_STANDARD_RTTI(StepVisual_SurfaceStyleBoundary)

protected:




private: 


Handle_StepVisual_CurveStyle styleOfBoundary;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
