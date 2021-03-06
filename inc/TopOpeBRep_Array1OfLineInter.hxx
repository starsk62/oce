// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRep_Array1OfLineInter_HeaderFile
#define _TopOpeBRep_Array1OfLineInter_HeaderFile

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
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class TopOpeBRep_LineInter;



class TopOpeBRep_Array1OfLineInter  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   TopOpeBRep_Array1OfLineInter(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   TopOpeBRep_Array1OfLineInter(const TopOpeBRep_LineInter& Item,const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT     void Init(const TopOpeBRep_LineInter& V) ;
  
  Standard_EXPORT     void Destroy() ;
~TopOpeBRep_Array1OfLineInter()
{
  Destroy();
}
  
        Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT    const TopOpeBRep_Array1OfLineInter& Assign(const TopOpeBRep_Array1OfLineInter& Other) ;
   const TopOpeBRep_Array1OfLineInter& operator =(const TopOpeBRep_Array1OfLineInter& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const TopOpeBRep_LineInter& Value) ;
  
       const TopOpeBRep_LineInter& Value(const Standard_Integer Index) const;
     const TopOpeBRep_LineInter& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
        TopOpeBRep_LineInter& ChangeValue(const Standard_Integer Index) ;
      TopOpeBRep_LineInter& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}





protected:





private:

  
  Standard_EXPORT   TopOpeBRep_Array1OfLineInter(const TopOpeBRep_Array1OfLineInter& AnArray);


Standard_Integer myLowerBound;
Standard_Integer myUpperBound;
Standard_Address myStart;
Standard_Boolean isAllocated;


};

#define Array1Item TopOpeBRep_LineInter
#define Array1Item_hxx <TopOpeBRep_LineInter.hxx>
#define TCollection_Array1 TopOpeBRep_Array1OfLineInter
#define TCollection_Array1_hxx <TopOpeBRep_Array1OfLineInter.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
