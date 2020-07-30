// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:11 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Linq.IGrouping`2
#include "System/Linq/IGrouping_2.hpp"
// Including type: System.Collections.Generic.IList`1
#include "System/Collections/Generic/IList_1.hpp"
// Including type: System.Collections.Generic.ICollection`1
#include "System/Collections/Generic/ICollection_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Linq
namespace System::Linq {
  // Skipping declaration: Grouping because it is already included!
  // Skipping declaration: <GetEnumerator>d__12 because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEqualityComparer`1<T>
  template<typename T>
  class IEqualityComparer_1;
  // Skipping declaration: IEnumerable`1 because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<TResult, T>
  template<typename TResult, typename T>
  class Func_2;
  // Forward declaring type: Func`2<TResult, T>
  template<typename TResult, typename T>
  class Func_2;
}
// Completed forward declares
// Type namespace: System.Linq
namespace System::Linq {
  // Autogenerated type: System.Linq.Lookup`2
  template<typename TKey, typename TElement>
  class Lookup_2 : public ::Il2CppObject, public System::Collections::Generic::IEnumerable_1<System::Linq::IGrouping_2<TKey, TElement>*>, public System::Collections::IEnumerable {
    public:
    // Nested type: System::Linq::Lookup_2::Grouping<TKey, TElement>
    class Grouping;
    // Nested type: System::Linq::Lookup_2::$GetEnumerator$d__12<TKey, TElement>
    class $GetEnumerator$d__12;
    // Autogenerated type: System.Linq.Lookup`2/Grouping
    class Grouping : public ::Il2CppObject, public ::il2cpp_utils::il2cpp_type_check::NestedType, public System::Linq::IGrouping_2<TKey, TElement>, public System::Collections::Generic::IEnumerable_1<TElement>, public System::Collections::IEnumerable, public System::Collections::Generic::IList_1<TElement>, public System::Collections::Generic::ICollection_1<TElement> {
      public:
      using declaring_type = Lookup_2<TKey, TElement>*;
      // Nested type: System::Linq::Lookup_2::Grouping::$GetEnumerator$d__7<TElement, TKey>
      class $GetEnumerator$d__7;
      // Autogenerated type: System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7
      class $GetEnumerator$d__7 : public ::Il2CppObject, public ::il2cpp_utils::il2cpp_type_check::NestedType, public System::Collections::Generic::IEnumerator_1<TElement>, public System::IDisposable, public System::Collections::IEnumerator {
        public:
        using declaring_type = typename Lookup_2<TKey, TElement>::Grouping*;
        // private System.Int32 <>1__state
        // Offset: 0x0
        int $$1__state;
        // private TElement <>2__current
        // Offset: 0x0
        TElement $$2__current;
        // public System.Linq.Lookup`2/Grouping<TKey,TElement> <>4__this
        // Offset: 0x0
        typename System::Linq::Lookup_2<TKey, TElement>::Grouping* $$4__this;
        // private System.Int32 <i>5__1
        // Offset: 0x0
        int $i$5__1;
        // public System.Void .ctor(System.Int32 $$1__state)
        // Offset: 0x12C46A0
        static typename Lookup_2<TElement, TKey>::Grouping::$GetEnumerator$d__7* New_ctor(int $$1__state) {
          return (typename Lookup_2<TElement, TKey>::Grouping::$GetEnumerator$d__7*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename Lookup_2<TElement, TKey>::Grouping::$GetEnumerator$d__7*>::get(), $$1__state));
        }
        // private System.Void System.IDisposable.Dispose()
        // Offset: 0x12C46D4
        // Implemented from: System.IDisposable
        // Base method: System.Void IDisposable::Dispose()
        void System_IDisposable_Dispose() {
          CRASH_UNLESS(il2cpp_utils::RunMethod(this, "System.IDisposable.Dispose"));
        }
        // private System.Boolean MoveNext()
        // Offset: 0x12C46D8
        // Implemented from: System.Collections.IEnumerator
        // Base method: System.Boolean IEnumerator::MoveNext()
        bool MoveNext() {
          return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(this, "MoveNext"));
        }
        // private TElement System.Collections.Generic.IEnumerator<TElement>.get_Current()
        // Offset: 0x12C4788
        // Implemented from: System.Collections.Generic.IEnumerator`1
        // Base method: T IEnumerator`1::get_Current()
        TElement System_Collections_Generic_IEnumerator_1_get_Current() {
          return CRASH_UNLESS(il2cpp_utils::RunMethod<TElement>(this, "System.Collections.Generic.IEnumerator<TElement>.get_Current"));
        }
        // private System.Void System.Collections.IEnumerator.Reset()
        // Offset: 0x12C4790
        // Implemented from: System.Collections.IEnumerator
        // Base method: System.Void IEnumerator::Reset()
        void System_Collections_IEnumerator_Reset() {
          CRASH_UNLESS(il2cpp_utils::RunMethod(this, "System.Collections.IEnumerator.Reset"));
        }
        // private System.Object System.Collections.IEnumerator.get_Current()
        // Offset: 0x12C47F0
        // Implemented from: System.Collections.IEnumerator
        // Base method: System.Object IEnumerator::get_Current()
        ::Il2CppObject* System_Collections_IEnumerator_get_Current() {
          return CRASH_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "System.Collections.IEnumerator.get_Current"));
        }
      }; // System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7
      // TKey key
      // Offset: 0x0
      TKey key;
      // System.Int32 hashCode
      // Offset: 0x0
      int hashCode;
      // TElement[] elements
      // Offset: 0x0
      ::Array<TElement>* elements;
      // System.Int32 count
      // Offset: 0x0
      int count;
      // System.Linq.Lookup`2/Grouping<TKey,TElement> hashNext
      // Offset: 0x0
      typename System::Linq::Lookup_2<TKey, TElement>::Grouping* hashNext;
      // System.Linq.Lookup`2/Grouping<TKey,TElement> next
      // Offset: 0x0
      typename System::Linq::Lookup_2<TKey, TElement>::Grouping* next;
      // System.Void Add(TElement element)
      // Offset: 0x12C47F8
      void Add(TElement element) {
        CRASH_UNLESS(il2cpp_utils::RunMethod(this, "Add", element));
      }
      // public System.Collections.Generic.IEnumerator`1<TElement> GetEnumerator()
      // Offset: 0x12C48E0
      System::Collections::Generic::IEnumerator_1<TElement>* GetEnumerator() {
        return CRASH_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerator_1<TElement>*>(this, "GetEnumerator"));
      }
      // public TKey get_Key()
      // Offset: 0x12C4988
      TKey get_Key() {
        return CRASH_UNLESS(il2cpp_utils::RunMethod<TKey>(this, "get_Key"));
      }
      // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
      // Offset: 0x12C4964
      // Implemented from: System.Collections.IEnumerable
      // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
      System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
        return CRASH_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "System.Collections.IEnumerable.GetEnumerator"));
      }
      // private System.Int32 System.Collections.Generic.ICollection<TElement>.get_Count()
      // Offset: 0x12C4990
      // Implemented from: System.Collections.Generic.ICollection`1
      // Base method: System.Int32 ICollection`1::get_Count()
      int System_Collections_Generic_ICollection_1_get_Count() {
        return CRASH_UNLESS(il2cpp_utils::RunMethod<int>(this, "System.Collections.Generic.ICollection<TElement>.get_Count"));
      }
      // private System.Boolean System.Collections.Generic.ICollection<TElement>.get_IsReadOnly()
      // Offset: 0x12C4998
      // Implemented from: System.Collections.Generic.ICollection`1
      // Base method: System.Boolean ICollection`1::get_IsReadOnly()
      bool System_Collections_Generic_ICollection_1_get_IsReadOnly() {
        return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(this, "System.Collections.Generic.ICollection<TElement>.get_IsReadOnly"));
      }
      // private System.Void System.Collections.Generic.ICollection<TElement>.Add(TElement item)
      // Offset: 0x12C49A0
      // Implemented from: System.Collections.Generic.ICollection`1
      // Base method: System.Void ICollection`1::Add(TElement item)
      void System_Collections_Generic_ICollection_1_Add(TElement item) {
        CRASH_UNLESS(il2cpp_utils::RunMethod(this, "System.Collections.Generic.ICollection<TElement>.Add", item));
      }
      // private System.Void System.Collections.Generic.ICollection<TElement>.Clear()
      // Offset: 0x12C49E8
      // Implemented from: System.Collections.Generic.ICollection`1
      // Base method: System.Void ICollection`1::Clear()
      void System_Collections_Generic_ICollection_1_Clear() {
        CRASH_UNLESS(il2cpp_utils::RunMethod(this, "System.Collections.Generic.ICollection<TElement>.Clear"));
      }
      // private System.Boolean System.Collections.Generic.ICollection<TElement>.Contains(TElement item)
      // Offset: 0x12C4A30
      // Implemented from: System.Collections.Generic.ICollection`1
      // Base method: System.Boolean ICollection`1::Contains(TElement item)
      bool System_Collections_Generic_ICollection_1_Contains(TElement item) {
        return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(this, "System.Collections.Generic.ICollection<TElement>.Contains", item));
      }
      // private System.Void System.Collections.Generic.ICollection<TElement>.CopyTo(TElement[] array, System.Int32 arrayIndex)
      // Offset: 0x12C4A6C
      // Implemented from: System.Collections.Generic.ICollection`1
      // Base method: System.Void ICollection`1::CopyTo(TElement[] array, System.Int32 arrayIndex)
      void System_Collections_Generic_ICollection_1_CopyTo(::Array<TElement>* array, int arrayIndex) {
        CRASH_UNLESS(il2cpp_utils::RunMethod(this, "System.Collections.Generic.ICollection<TElement>.CopyTo", array, arrayIndex));
      }
      // private System.Boolean System.Collections.Generic.ICollection<TElement>.Remove(TElement item)
      // Offset: 0x12C4A8C
      // Implemented from: System.Collections.Generic.ICollection`1
      // Base method: System.Boolean ICollection`1::Remove(TElement item)
      bool System_Collections_Generic_ICollection_1_Remove(TElement item) {
        return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(this, "System.Collections.Generic.ICollection<TElement>.Remove", item));
      }
      // private System.Int32 System.Collections.Generic.IList<TElement>.IndexOf(TElement item)
      // Offset: 0x12C4AD4
      // Implemented from: System.Collections.Generic.IList`1
      // Base method: System.Int32 IList`1::IndexOf(TElement item)
      int System_Collections_Generic_IList_1_IndexOf(TElement item) {
        return CRASH_UNLESS(il2cpp_utils::RunMethod<int>(this, "System.Collections.Generic.IList<TElement>.IndexOf", item));
      }
      // private System.Void System.Collections.Generic.IList<TElement>.Insert(System.Int32 index, TElement item)
      // Offset: 0x12C4AF8
      // Implemented from: System.Collections.Generic.IList`1
      // Base method: System.Void IList`1::Insert(System.Int32 index, TElement item)
      void System_Collections_Generic_IList_1_Insert(int index, TElement item) {
        CRASH_UNLESS(il2cpp_utils::RunMethod(this, "System.Collections.Generic.IList<TElement>.Insert", index, item));
      }
      // private System.Void System.Collections.Generic.IList<TElement>.RemoveAt(System.Int32 index)
      // Offset: 0x12C4B40
      // Implemented from: System.Collections.Generic.IList`1
      // Base method: System.Void IList`1::RemoveAt(System.Int32 index)
      void System_Collections_Generic_IList_1_RemoveAt(int index) {
        CRASH_UNLESS(il2cpp_utils::RunMethod(this, "System.Collections.Generic.IList<TElement>.RemoveAt", index));
      }
      // private TElement System.Collections.Generic.IList<TElement>.get_Item(System.Int32 index)
      // Offset: 0x12C4B88
      // Implemented from: System.Collections.Generic.IList`1
      // Base method: T IList`1::get_Item(System.Int32 index)
      TElement System_Collections_Generic_IList_1_get_Item(int index) {
        return CRASH_UNLESS(il2cpp_utils::RunMethod<TElement>(this, "System.Collections.Generic.IList<TElement>.get_Item", index));
      }
      // private System.Void System.Collections.Generic.IList<TElement>.set_Item(System.Int32 index, TElement value)
      // Offset: 0x12C4C34
      // Implemented from: System.Collections.Generic.IList`1
      // Base method: System.Void IList`1::set_Item(System.Int32 index, TElement value)
      void System_Collections_Generic_IList_1_set_Item(int index, TElement value) {
        CRASH_UNLESS(il2cpp_utils::RunMethod(this, "System.Collections.Generic.IList<TElement>.set_Item", index, value));
      }
      // public System.Void .ctor()
      // Offset: 0x12C4C7C
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      static typename Lookup_2<TKey, TElement>::Grouping* New_ctor() {
        return (typename Lookup_2<TKey, TElement>::Grouping*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename Lookup_2<TKey, TElement>::Grouping*>::get()));
      }
    }; // System.Linq.Lookup`2/Grouping
    // Autogenerated type: System.Linq.Lookup`2/<GetEnumerator>d__12
    class $GetEnumerator$d__12 : public ::Il2CppObject, public ::il2cpp_utils::il2cpp_type_check::NestedType, public System::Collections::Generic::IEnumerator_1<System::Linq::IGrouping_2<TKey, TElement>*>, public System::IDisposable, public System::Collections::IEnumerator {
      public:
      using declaring_type = Lookup_2<TKey, TElement>*;
      // private System.Int32 <>1__state
      // Offset: 0x0
      int $$1__state;
      // private System.Linq.IGrouping`2<TKey,TElement> <>2__current
      // Offset: 0x0
      System::Linq::IGrouping_2<TKey, TElement>* $$2__current;
      // public System.Linq.Lookup`2<TKey,TElement> <>4__this
      // Offset: 0x0
      System::Linq::Lookup_2<TKey, TElement>* $$4__this;
      // private System.Linq.Lookup`2/Grouping<TKey,TElement> <g>5__1
      // Offset: 0x0
      typename System::Linq::Lookup_2<TKey, TElement>::Grouping* $g$5__1;
      // public System.Void .ctor(System.Int32 $$1__state)
      // Offset: 0x12C4544
      static typename Lookup_2<TKey, TElement>::$GetEnumerator$d__12* New_ctor(int $$1__state) {
        return (typename Lookup_2<TKey, TElement>::$GetEnumerator$d__12*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename Lookup_2<TKey, TElement>::$GetEnumerator$d__12*>::get(), $$1__state));
      }
      // private System.Void System.IDisposable.Dispose()
      // Offset: 0x12C4578
      // Implemented from: System.IDisposable
      // Base method: System.Void IDisposable::Dispose()
      void System_IDisposable_Dispose() {
        CRASH_UNLESS(il2cpp_utils::RunMethod(this, "System.IDisposable.Dispose"));
      }
      // private System.Boolean MoveNext()
      // Offset: 0x12C457C
      // Implemented from: System.Collections.IEnumerator
      // Base method: System.Boolean IEnumerator::MoveNext()
      bool MoveNext() {
        return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(this, "MoveNext"));
      }
      // private System.Linq.IGrouping`2<TKey,TElement> System.Collections.Generic.IEnumerator<System.Linq.IGrouping<TKey,TElement>>.get_Current()
      // Offset: 0x12C4630
      // Implemented from: System.Collections.Generic.IEnumerator`1
      // Base method: T IEnumerator`1::get_Current()
      System::Linq::IGrouping_2<TKey, TElement>* System_Collections_Generic_IEnumerator_1_get_Current() {
        return CRASH_UNLESS((il2cpp_utils::RunMethod<System::Linq::IGrouping_2<TKey, TElement>*>(this, "System.Collections.Generic.IEnumerator<System.Linq.IGrouping<TKey,TElement>>.get_Current")));
      }
      // private System.Void System.Collections.IEnumerator.Reset()
      // Offset: 0x12C4638
      // Implemented from: System.Collections.IEnumerator
      // Base method: System.Void IEnumerator::Reset()
      void System_Collections_IEnumerator_Reset() {
        CRASH_UNLESS(il2cpp_utils::RunMethod(this, "System.Collections.IEnumerator.Reset"));
      }
      // private System.Object System.Collections.IEnumerator.get_Current()
      // Offset: 0x12C4698
      // Implemented from: System.Collections.IEnumerator
      // Base method: System.Object IEnumerator::get_Current()
      ::Il2CppObject* System_Collections_IEnumerator_get_Current() {
        return CRASH_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "System.Collections.IEnumerator.get_Current"));
      }
    }; // System.Linq.Lookup`2/<GetEnumerator>d__12
    // private System.Collections.Generic.IEqualityComparer`1<TKey> comparer
    // Offset: 0x0
    System::Collections::Generic::IEqualityComparer_1<TKey>* comparer;
    // private System.Linq.Lookup`2/Grouping<TKey,TElement>[] groupings
    // Offset: 0x0
    ::Array<typename System::Linq::Lookup_2<TKey, TElement>::Grouping*>* groupings;
    // private System.Linq.Lookup`2/Grouping<TKey,TElement> lastGrouping
    // Offset: 0x0
    typename System::Linq::Lookup_2<TKey, TElement>::Grouping* lastGrouping;
    // private System.Int32 count
    // Offset: 0x0
    int count;
    // static System.Linq.Lookup`2<TKey,TElement> Create(System.Collections.Generic.IEnumerable`1<TSource> source, System.Func`2<TSource,TKey> keySelector, System.Func`2<TSource,TElement> elementSelector, System.Collections.Generic.IEqualityComparer`1<TKey> comparer)
    // Offset: 0x11CCF40
    template<class TSource>
    static System::Linq::Lookup_2<TKey, TElement>* Create(System::Collections::Generic::IEnumerable_1<TSource>* source, System::Func_2<TSource, TKey>* keySelector, System::Func_2<TSource, TElement>* elementSelector, System::Collections::Generic::IEqualityComparer_1<TKey>* comparer) {
      return CRASH_UNLESS((il2cpp_utils::RunGenericMethod<System::Linq::Lookup_2<TKey, TElement>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Lookup_2<TKey, TElement>*>::get(), "Create", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}, source, keySelector, elementSelector, comparer)));
    }
    // private System.Void .ctor(System.Collections.Generic.IEqualityComparer`1<TKey> comparer)
    // Offset: 0x12C4C94
    static Lookup_2<TKey, TElement>* New_ctor(System::Collections::Generic::IEqualityComparer_1<TKey>* comparer) {
      return (Lookup_2<TKey, TElement>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Lookup_2<TKey, TElement>*>::get(), comparer));
    }
    // public System.Collections.Generic.IEnumerator`1<System.Linq.IGrouping`2<TKey,TElement>> GetEnumerator()
    // Offset: 0x12C4D30
    System::Collections::Generic::IEnumerator_1<System::Linq::IGrouping_2<TKey, TElement>*>* GetEnumerator() {
      return CRASH_UNLESS((il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerator_1<System::Linq::IGrouping_2<TKey, TElement>*>*>(this, "GetEnumerator")));
    }
    // System.Int32 InternalGetHashCode(TKey key)
    // Offset: 0x12C4DD8
    int InternalGetHashCode(TKey key) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<int>(this, "InternalGetHashCode", key));
    }
    // System.Linq.Lookup`2/Grouping<TKey,TElement> GetGrouping(TKey key, System.Boolean create)
    // Offset: 0x12C4E9C
    typename System::Linq::Lookup_2<TKey, TElement>::Grouping* GetGrouping(TKey key, bool create) {
      return CRASH_UNLESS((il2cpp_utils::RunMethod<typename System::Linq::Lookup_2<TKey, TElement>::Grouping*>(this, "GetGrouping", key, create)));
    }
    // private System.Void Resize()
    // Offset: 0x12C518C
    void Resize() {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "Resize"));
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x12C4DB4
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "System.Collections.IEnumerable.GetEnumerator"));
    }
  }; // System.Linq.Lookup`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Linq::Lookup_2, "System.Linq", "Lookup`2");
#pragma pack(pop)
