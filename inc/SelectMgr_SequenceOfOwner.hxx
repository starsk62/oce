// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _SelectMgr_SequenceOfOwner_HeaderFile
#define _SelectMgr_SequenceOfOwner_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_SelectMgr_EntityOwner_HeaderFile
#include <Handle_SelectMgr_EntityOwner.hxx>
#endif
#ifndef _Handle_SelectMgr_SequenceNodeOfSequenceOfOwner_HeaderFile
#include <Handle_SelectMgr_SequenceNodeOfSequenceOfOwner.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class SelectMgr_EntityOwner;
class SelectMgr_SequenceNodeOfSequenceOfOwner;



class SelectMgr_SequenceOfOwner  : public TCollection_BaseSequence {
public:

  DEFINE_STANDARD_ALLOC

  
      SelectMgr_SequenceOfOwner();
  
  Standard_EXPORT     void Clear() ;
~SelectMgr_SequenceOfOwner()
{
  Clear();
}
  
  Standard_EXPORT    const SelectMgr_SequenceOfOwner& Assign(const SelectMgr_SequenceOfOwner& Other) ;
   const SelectMgr_SequenceOfOwner& operator =(const SelectMgr_SequenceOfOwner& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const Handle(SelectMgr_EntityOwner)& T) ;
  
        void Append(SelectMgr_SequenceOfOwner& S) ;
  
  Standard_EXPORT     void Prepend(const Handle(SelectMgr_EntityOwner)& T) ;
  
        void Prepend(SelectMgr_SequenceOfOwner& S) ;
  
        void InsertBefore(const Standard_Integer Index,const Handle(SelectMgr_EntityOwner)& T) ;
  
        void InsertBefore(const Standard_Integer Index,SelectMgr_SequenceOfOwner& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const Handle(SelectMgr_EntityOwner)& T) ;
  
        void InsertAfter(const Standard_Integer Index,SelectMgr_SequenceOfOwner& S) ;
  
  Standard_EXPORT    const Handle_SelectMgr_EntityOwner& First() const;
  
  Standard_EXPORT    const Handle_SelectMgr_EntityOwner& Last() const;
  
        void Split(const Standard_Integer Index,SelectMgr_SequenceOfOwner& Sub) ;
  
  Standard_EXPORT    const Handle_SelectMgr_EntityOwner& Value(const Standard_Integer Index) const;
   const Handle_SelectMgr_EntityOwner& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Handle(SelectMgr_EntityOwner)& I) ;
  
  Standard_EXPORT     Handle_SelectMgr_EntityOwner& ChangeValue(const Standard_Integer Index) ;
    Handle_SelectMgr_EntityOwner& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   SelectMgr_SequenceOfOwner(const SelectMgr_SequenceOfOwner& Other);




};

#define SeqItem Handle_SelectMgr_EntityOwner
#define SeqItem_hxx <SelectMgr_EntityOwner.hxx>
#define TCollection_SequenceNode SelectMgr_SequenceNodeOfSequenceOfOwner
#define TCollection_SequenceNode_hxx <SelectMgr_SequenceNodeOfSequenceOfOwner.hxx>
#define Handle_TCollection_SequenceNode Handle_SelectMgr_SequenceNodeOfSequenceOfOwner
#define TCollection_SequenceNode_Type_() SelectMgr_SequenceNodeOfSequenceOfOwner_Type_()
#define TCollection_Sequence SelectMgr_SequenceOfOwner
#define TCollection_Sequence_hxx <SelectMgr_SequenceOfOwner.hxx>

#include <TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
