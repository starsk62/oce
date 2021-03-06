// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRep_HArray1OfLineInter_HeaderFile
#define _TopOpeBRep_HArray1OfLineInter_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TopOpeBRep_HArray1OfLineInter_HeaderFile
#include <Handle_TopOpeBRep_HArray1OfLineInter.hxx>
#endif

#ifndef _TopOpeBRep_Array1OfLineInter_HeaderFile
#include <TopOpeBRep_Array1OfLineInter.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class TopOpeBRep_LineInter;
class TopOpeBRep_Array1OfLineInter;



class TopOpeBRep_HArray1OfLineInter : public MMgt_TShared {

public:

  
  Standard_EXPORT   TopOpeBRep_HArray1OfLineInter(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   TopOpeBRep_HArray1OfLineInter(const Standard_Integer Low,const Standard_Integer Up,const TopOpeBRep_LineInter& V);
  
  Standard_EXPORT     void Init(const TopOpeBRep_LineInter& V) ;
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const TopOpeBRep_LineInter& Value) ;
  
       const TopOpeBRep_LineInter& Value(const Standard_Integer Index) const;
  
        TopOpeBRep_LineInter& ChangeValue(const Standard_Integer Index) ;
  
       const TopOpeBRep_Array1OfLineInter& Array1() const;
  
        TopOpeBRep_Array1OfLineInter& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(TopOpeBRep_HArray1OfLineInter)

protected:




private: 


TopOpeBRep_Array1OfLineInter myArray;


};

#define ItemHArray1 TopOpeBRep_LineInter
#define ItemHArray1_hxx <TopOpeBRep_LineInter.hxx>
#define TheArray1 TopOpeBRep_Array1OfLineInter
#define TheArray1_hxx <TopOpeBRep_Array1OfLineInter.hxx>
#define TCollection_HArray1 TopOpeBRep_HArray1OfLineInter
#define TCollection_HArray1_hxx <TopOpeBRep_HArray1OfLineInter.hxx>
#define Handle_TCollection_HArray1 Handle_TopOpeBRep_HArray1OfLineInter
#define TCollection_HArray1_Type_() TopOpeBRep_HArray1OfLineInter_Type_()

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
