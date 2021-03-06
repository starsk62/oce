// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_HArray1OfFace_HeaderFile
#define _StepShape_HArray1OfFace_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepShape_HArray1OfFace_HeaderFile
#include <Handle_StepShape_HArray1OfFace.hxx>
#endif

#ifndef _StepShape_Array1OfFace_HeaderFile
#include <StepShape_Array1OfFace.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_StepShape_Face_HeaderFile
#include <Handle_StepShape_Face.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepShape_Face;
class StepShape_Array1OfFace;



class StepShape_HArray1OfFace : public MMgt_TShared {

public:

  
  Standard_EXPORT   StepShape_HArray1OfFace(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   StepShape_HArray1OfFace(const Standard_Integer Low,const Standard_Integer Up,const Handle(StepShape_Face)& V);
  
  Standard_EXPORT     void Init(const Handle(StepShape_Face)& V) ;
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const Handle(StepShape_Face)& Value) ;
  
       const Handle_StepShape_Face& Value(const Standard_Integer Index) const;
  
        Handle_StepShape_Face& ChangeValue(const Standard_Integer Index) ;
  
       const StepShape_Array1OfFace& Array1() const;
  
        StepShape_Array1OfFace& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(StepShape_HArray1OfFace)

protected:




private: 


StepShape_Array1OfFace myArray;


};

#define ItemHArray1 Handle_StepShape_Face
#define ItemHArray1_hxx <StepShape_Face.hxx>
#define TheArray1 StepShape_Array1OfFace
#define TheArray1_hxx <StepShape_Array1OfFace.hxx>
#define TCollection_HArray1 StepShape_HArray1OfFace
#define TCollection_HArray1_hxx <StepShape_HArray1OfFace.hxx>
#define Handle_TCollection_HArray1 Handle_StepShape_HArray1OfFace
#define TCollection_HArray1_Type_() StepShape_HArray1OfFace_Type_()

#include <TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_


// other Inline functions and methods (like "C++: function call" methods)


#endif
