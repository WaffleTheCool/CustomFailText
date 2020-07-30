// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:39 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Collections.IDictionary
#include "System/Collections/IDictionary.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMethodMessage
  class IMethodMessage;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
  // Forward declaring type: IDictionaryEnumerator
  class IDictionaryEnumerator;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Autogenerated type: System.Runtime.Remoting.Messaging.MessageDictionary
  class MessageDictionary : public ::Il2CppObject, public System::Collections::IDictionary, public System::Collections::ICollection, public System::Collections::IEnumerable {
    public:
    // Nested type: System::Runtime::Remoting::Messaging::MessageDictionary::DictionaryEnumerator
    class DictionaryEnumerator;
    // private System.Collections.IDictionary _internalProperties
    // Offset: 0x10
    System::Collections::IDictionary* internalProperties;
    // protected System.Runtime.Remoting.Messaging.IMethodMessage _message
    // Offset: 0x18
    System::Runtime::Remoting::Messaging::IMethodMessage* message;
    // private System.String[] _methodKeys
    // Offset: 0x20
    ::Array<::Il2CppString*>* methodKeys;
    // private System.Boolean _ownProperties
    // Offset: 0x28
    bool ownProperties;
    // public System.Void .ctor(System.Runtime.Remoting.Messaging.IMethodMessage message)
    // Offset: 0x10528C8
    static MessageDictionary* New_ctor(System::Runtime::Remoting::Messaging::IMethodMessage* message);
    // System.Boolean HasUserData()
    // Offset: 0x104F2C0
    bool HasUserData();
    // System.Collections.IDictionary get_InternalDictionary()
    // Offset: 0x104F3D0
    System::Collections::IDictionary* get_InternalDictionary();
    // public System.Void set_MethodKeys(System.String[] value)
    // Offset: 0x1055A9C
    void set_MethodKeys(::Array<::Il2CppString*>* value);
    // protected System.Collections.IDictionary AllocInternalProperties()
    // Offset: 0x1055AA4
    System::Collections::IDictionary* AllocInternalProperties();
    // public System.Collections.IDictionary GetInternalProperties()
    // Offset: 0x1051BC0
    System::Collections::IDictionary* GetInternalProperties();
    // private System.Boolean IsOverridenKey(System.String key)
    // Offset: 0x1055B0C
    bool IsOverridenKey(::Il2CppString* key);
    // protected System.Object GetMethodProperty(System.String key)
    // Offset: 0x1052CE8
    ::Il2CppObject* GetMethodProperty(::Il2CppString* key);
    // protected System.Void SetMethodProperty(System.String key, System.Object value)
    // Offset: 0x10534D4
    void SetMethodProperty(::Il2CppString* key, ::Il2CppObject* value);
    // public System.Collections.ICollection get_Values()
    // Offset: 0x1056244
    System::Collections::ICollection* get_Values();
    // public System.Void Add(System.Object key, System.Object value)
    // Offset: 0x1055D00
    void Add(::Il2CppObject* key, ::Il2CppObject* value);
    // public System.Object get_Item(System.Object key)
    // Offset: 0x1055BA4
    // Implemented from: System.Collections.IDictionary
    // Base method: System.Object IDictionary::get_Item(System.Object key)
    ::Il2CppObject* get_Item(::Il2CppObject* key);
    // Creating proxy method: System_Collections_IDictionary_get_Item
    // Maps to method: get_Item
    ::Il2CppObject* System_Collections_IDictionary_get_Item(::Il2CppObject* key);
    // public System.Void set_Item(System.Object key, System.Object value)
    // Offset: 0x1055CFC
    // Implemented from: System.Collections.IDictionary
    // Base method: System.Void IDictionary::set_Item(System.Object key, System.Object value)
    void set_Item(::Il2CppObject* key, ::Il2CppObject* value);
    // Creating proxy method: System_Collections_IDictionary_set_Item
    // Maps to method: set_Item
    void System_Collections_IDictionary_set_Item(::Il2CppObject* key, ::Il2CppObject* value);
    // public System.Collections.ICollection get_Keys()
    // Offset: 0x1055E88
    // Implemented from: System.Collections.IDictionary
    // Base method: System.Collections.ICollection IDictionary::get_Keys()
    System::Collections::ICollection* get_Keys();
    // Creating proxy method: System_Collections_IDictionary_get_Keys
    // Maps to method: get_Keys
    System::Collections::ICollection* System_Collections_IDictionary_get_Keys();
    // public System.Boolean Contains(System.Object key)
    // Offset: 0x10565E4
    // Implemented from: System.Collections.IDictionary
    // Base method: System.Boolean IDictionary::Contains(System.Object key)
    bool Contains(::Il2CppObject* key);
    // Creating proxy method: System_Collections_IDictionary_Contains
    // Maps to method: Contains
    bool System_Collections_IDictionary_Contains(::Il2CppObject* key);
    // public System.Int32 get_Count()
    // Offset: 0x1056738
    // Implemented from: System.Collections.ICollection
    // Base method: System.Int32 ICollection::get_Count()
    int get_Count();
    // Creating proxy method: System_Collections_ICollection_get_Count
    // Maps to method: get_Count
    int System_Collections_ICollection_get_Count();
    // public System.Void CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x1056810
    // Implemented from: System.Collections.ICollection
    // Base method: System.Void ICollection::CopyTo(System.Array array, System.Int32 index)
    void CopyTo(System::Array* array, int index);
    // Creating proxy method: System_Collections_ICollection_CopyTo
    // Maps to method: CopyTo
    void System_Collections_ICollection_CopyTo(System::Array* array, int index);
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x10568E0
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public System.Collections.IDictionaryEnumerator GetEnumerator()
    // Offset: 0x1056A5C
    // Implemented from: System.Collections.IDictionary
    // Base method: System.Collections.IDictionaryEnumerator IDictionary::GetEnumerator()
    System::Collections::IDictionaryEnumerator* GetEnumerator();
    // Creating proxy method: System_Collections_IDictionary_GetEnumerator
    // Maps to method: GetEnumerator
    System::Collections::IDictionaryEnumerator* System_Collections_IDictionary_GetEnumerator();
  }; // System.Runtime.Remoting.Messaging.MessageDictionary
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::MessageDictionary*, "System.Runtime.Remoting.Messaging", "MessageDictionary");
#pragma pack(pop)
