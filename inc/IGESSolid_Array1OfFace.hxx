// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESSolid_Array1OfFace_HeaderFile
#define _IGESSolid_Array1OfFace_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_IGESSolid_Face_HeaderFile
#include <Handle_IGESSolid_Face.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class IGESSolid_Face;



class IGESSolid_Array1OfFace  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   IGESSolid_Array1OfFace(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   IGESSolid_Array1OfFace(const Handle(IGESSolid_Face)& Item,const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT     void Init(const Handle(IGESSolid_Face)& V) ;
  
  Standard_EXPORT     void Destroy() ;
~IGESSolid_Array1OfFace()
{
  Destroy();
}
  
        Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT    const IGESSolid_Array1OfFace& Assign(const IGESSolid_Array1OfFace& Other) ;
   const IGESSolid_Array1OfFace& operator =(const IGESSolid_Array1OfFace& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const Handle(IGESSolid_Face)& Value) ;
  
       const Handle_IGESSolid_Face& Value(const Standard_Integer Index) const;
     const Handle_IGESSolid_Face& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
        Handle_IGESSolid_Face& ChangeValue(const Standard_Integer Index) ;
      Handle_IGESSolid_Face& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}





protected:





private:

  
  Standard_EXPORT   IGESSolid_Array1OfFace(const IGESSolid_Array1OfFace& AnArray);


Standard_Integer myLowerBound;
Standard_Integer myUpperBound;
Standard_Address myStart;
Standard_Boolean isAllocated;


};

#define Array1Item Handle_IGESSolid_Face
#define Array1Item_hxx <IGESSolid_Face.hxx>
#define TCollection_Array1 IGESSolid_Array1OfFace
#define TCollection_Array1_hxx <IGESSolid_Array1OfFace.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
