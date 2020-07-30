// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:18 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::KdTree
namespace UnityEngine::ProBuilder::KdTree {
  // Forward declaring type: ITypeMath`1<T>
  template<typename T>
  class ITypeMath_1;
  // Forward declaring type: ItemPriority`2<TItem, TPriority>
  template<typename TItem, typename TPriority>
  struct ItemPriority_2;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.KdTree
namespace UnityEngine::ProBuilder::KdTree {
  // Autogenerated type: UnityEngine.ProBuilder.KdTree.PriorityQueue`2
  template<typename TPriority, typename TItem>
  class PriorityQueue_2 : public ::Il2CppObject {
    public:
    // private UnityEngine.ProBuilder.KdTree.ITypeMath`1<TPriority> priorityMath
    // Offset: 0x0
    UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority>* priorityMath;
    // private UnityEngine.ProBuilder.KdTree.ItemPriority`2<TItem,TPriority>[] queue
    // Offset: 0x0
    ::Array<UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem, TPriority>>* queue;
    // private System.Int32 capacity
    // Offset: 0x0
    int capacity;
    // private System.Int32 count
    // Offset: 0x0
    int count;
    // public System.Void .ctor(System.Int32 capacity, UnityEngine.ProBuilder.KdTree.ITypeMath`1<TPriority> priorityMath)
    // Offset: 0x11729F4
    static PriorityQueue_2<TPriority, TItem>* New_ctor(int capacity, UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority>* priorityMath) {
      return (PriorityQueue_2<TPriority, TItem>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PriorityQueue_2<TPriority, TItem>*>::get(), capacity, priorityMath));
    }
    // public System.Int32 get_Count()
    // Offset: 0x1172AF0
    int get_Count() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_Count"));
    }
    // private System.Void ExpandCapacity()
    // Offset: 0x1172AF8
    void ExpandCapacity() {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "ExpandCapacity"));
    }
    // public System.Void Enqueue(TItem item, TPriority priority)
    // Offset: 0x1172B80
    void Enqueue(TItem item, TPriority priority) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "Enqueue", item, priority));
    }
    // public TItem Dequeue()
    // Offset: 0x1172C84
    TItem Dequeue() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<TItem>(this, "Dequeue"));
    }
    // private System.Void ReorderItem(System.Int32 index, System.Int32 direction)
    // Offset: 0x1172DB8
    void ReorderItem(int index, int direction) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "ReorderItem", index, direction));
    }
    // public TPriority GetHighestPriority()
    // Offset: 0x1173008
    TPriority GetHighestPriority() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<TPriority>(this, "GetHighestPriority"));
    }
  }; // UnityEngine.ProBuilder.KdTree.PriorityQueue`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::ProBuilder::KdTree::PriorityQueue_2, "UnityEngine.ProBuilder.KdTree", "PriorityQueue`2");
#pragma pack(pop)
