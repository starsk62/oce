// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic3d_SetOfGroup_HeaderFile
#define _Graphic3d_SetOfGroup_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Graphic3d_SetListOfSetOfGroup_HeaderFile
#include <Graphic3d_SetListOfSetOfGroup.hxx>
#endif
#ifndef _Handle_Graphic3d_Group_HeaderFile
#include <Handle_Graphic3d_Group.hxx>
#endif
#ifndef _Handle_Graphic3d_ListNodeOfSetListOfSetOfGroup_HeaderFile
#include <Handle_Graphic3d_ListNodeOfSetListOfSetOfGroup.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoSuchObject;
class Graphic3d_SetIteratorOfSetOfGroup;
class Graphic3d_Group;
class Graphic3d_SetListOfSetOfGroup;
class Graphic3d_ListNodeOfSetListOfSetOfGroup;
class Graphic3d_ListIteratorOfSetListOfSetOfGroup;



class Graphic3d_SetOfGroup  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   Graphic3d_SetOfGroup();
  
        Standard_Integer Extent() const;
  
        Standard_Boolean IsEmpty() const;
  
        void Clear() ;
  
  Standard_EXPORT     Standard_Boolean Add(const Handle(Graphic3d_Group)& T) ;
  
  Standard_EXPORT     Standard_Boolean Remove(const Handle(Graphic3d_Group)& T) ;
  
  Standard_EXPORT     void Union(const Graphic3d_SetOfGroup& B) ;
  
  Standard_EXPORT     void Intersection(const Graphic3d_SetOfGroup& B) ;
  
  Standard_EXPORT     void Difference(const Graphic3d_SetOfGroup& B) ;
  
  Standard_EXPORT     Standard_Boolean Contains(const Handle(Graphic3d_Group)& T) const;
  
  Standard_EXPORT     Standard_Boolean IsASubset(const Graphic3d_SetOfGroup& S) const;
  
  Standard_EXPORT     Standard_Boolean IsAProperSubset(const Graphic3d_SetOfGroup& S) const;


friend class Graphic3d_SetIteratorOfSetOfGroup;



protected:





private:

  
  Standard_EXPORT   Graphic3d_SetOfGroup(const Graphic3d_SetOfGroup& Other);


Graphic3d_SetListOfSetOfGroup myItems;


};

#define Item Handle_Graphic3d_Group
#define Item_hxx <Graphic3d_Group.hxx>
#define TCollection_SetList Graphic3d_SetListOfSetOfGroup
#define TCollection_SetList_hxx <Graphic3d_SetListOfSetOfGroup.hxx>
#define TCollection_ListNodeOfSetList Graphic3d_ListNodeOfSetListOfSetOfGroup
#define TCollection_ListNodeOfSetList_hxx <Graphic3d_ListNodeOfSetListOfSetOfGroup.hxx>
#define TCollection_ListIteratorOfSetList Graphic3d_ListIteratorOfSetListOfSetOfGroup
#define TCollection_ListIteratorOfSetList_hxx <Graphic3d_ListIteratorOfSetListOfSetOfGroup.hxx>
#define TCollection_ListNodeOfSetList Graphic3d_ListNodeOfSetListOfSetOfGroup
#define TCollection_ListNodeOfSetList_hxx <Graphic3d_ListNodeOfSetListOfSetOfGroup.hxx>
#define TCollection_ListIteratorOfSetList Graphic3d_ListIteratorOfSetListOfSetOfGroup
#define TCollection_ListIteratorOfSetList_hxx <Graphic3d_ListIteratorOfSetListOfSetOfGroup.hxx>
#define TCollection_SetIterator Graphic3d_SetIteratorOfSetOfGroup
#define TCollection_SetIterator_hxx <Graphic3d_SetIteratorOfSetOfGroup.hxx>
#define Handle_TCollection_ListNodeOfSetList Handle_Graphic3d_ListNodeOfSetListOfSetOfGroup
#define TCollection_ListNodeOfSetList_Type_() Graphic3d_ListNodeOfSetListOfSetOfGroup_Type_()
#define Handle_TCollection_ListNodeOfSetList Handle_Graphic3d_ListNodeOfSetListOfSetOfGroup
#define TCollection_ListNodeOfSetList_Type_() Graphic3d_ListNodeOfSetListOfSetOfGroup_Type_()
#define TCollection_Set Graphic3d_SetOfGroup
#define TCollection_Set_hxx <Graphic3d_SetOfGroup.hxx>

#include <TCollection_Set.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_SetList
#undef TCollection_SetList_hxx
#undef TCollection_ListNodeOfSetList
#undef TCollection_ListNodeOfSetList_hxx
#undef TCollection_ListIteratorOfSetList
#undef TCollection_ListIteratorOfSetList_hxx
#undef TCollection_ListNodeOfSetList
#undef TCollection_ListNodeOfSetList_hxx
#undef TCollection_ListIteratorOfSetList
#undef TCollection_ListIteratorOfSetList_hxx
#undef TCollection_SetIterator
#undef TCollection_SetIterator_hxx
#undef Handle_TCollection_ListNodeOfSetList
#undef TCollection_ListNodeOfSetList_Type_
#undef Handle_TCollection_ListNodeOfSetList
#undef TCollection_ListNodeOfSetList_Type_
#undef TCollection_Set
#undef TCollection_Set_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
