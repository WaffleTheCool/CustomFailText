// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:41 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Collections.ICollection
#include "System/Collections/ICollection.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Autogenerated type: System.Collections.IList
  class IList : public System::Collections::ICollection, public System::Collections::IEnumerable {
    public:
    // public System.Object get_Item(System.Int32 index)
    // Offset: 0xFFFFFFFF
    ::Il2CppObject* System_Collections_IList_get_Item(int index);
    // public System.Void set_Item(System.Int32 index, System.Object value)
    // Offset: 0xFFFFFFFF
    void System_Collections_IList_set_Item(int index, ::Il2CppObject* value);
    // public System.Int32 Add(System.Object value)
    // Offset: 0xFFFFFFFF
    int System_Collections_IList_Add(::Il2CppObject* value);
    // public System.Boolean Contains(System.Object value)
    // Offset: 0xFFFFFFFF
    bool System_Collections_IList_Contains(::Il2CppObject* value);
    // public System.Void Clear()
    // Offset: 0xFFFFFFFF
    void System_Collections_IList_Clear();
    // public System.Boolean get_IsReadOnly()
    // Offset: 0xFFFFFFFF
    bool System_Collections_IList_get_IsReadOnly();
    // public System.Int32 IndexOf(System.Object value)
    // Offset: 0xFFFFFFFF
    int System_Collections_IList_IndexOf(::Il2CppObject* value);
    // public System.Void Insert(System.Int32 index, System.Object value)
    // Offset: 0xFFFFFFFF
    void System_Collections_IList_Insert(int index, ::Il2CppObject* value);
    // public System.Void Remove(System.Object value)
    // Offset: 0xFFFFFFFF
    void System_Collections_IList_Remove(::Il2CppObject* value);
    // public System.Void RemoveAt(System.Int32 index)
    // Offset: 0xFFFFFFFF
    void System_Collections_IList_RemoveAt(int index);
  }; // System.Collections.IList
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::IList*, "System.Collections", "IList");
#pragma pack(pop)
