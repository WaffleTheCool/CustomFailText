// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:18 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.ProBuilder.MeshOperations.MergeElements
#include "UnityEngine/ProBuilder/MeshOperations/MergeElements.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<TResult, T>
  template<typename TResult, typename T>
  class Func_2;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Face
  class Face;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.MergeElements/<>c
  class MergeElements::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.ProBuilder.MeshOperations.MergeElements/<>c <>9
    static UnityEngine::ProBuilder::MeshOperations::MergeElements::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.ProBuilder.MeshOperations.MergeElements/<>c <>9
    static void _set_$$9(UnityEngine::ProBuilder::MeshOperations::MergeElements::$$c* value);
    // Get static field: static public System.Func`2<UnityEngine.ProBuilder.Face,System.Collections.Generic.IEnumerable`1<System.Int32>> <>9__1_0
    static System::Func_2<UnityEngine::ProBuilder::Face*, System::Collections::Generic::IEnumerable_1<int>*>* _get_$$9__1_0();
    // Set static field: static public System.Func`2<UnityEngine.ProBuilder.Face,System.Collections.Generic.IEnumerable`1<System.Int32>> <>9__1_0
    static void _set_$$9__1_0(System::Func_2<UnityEngine::ProBuilder::Face*, System::Collections::Generic::IEnumerable_1<int>*>* value);
    // static private System.Void .cctor()
    // Offset: 0x1007A88
    static void _cctor();
    // System.Collections.Generic.IEnumerable`1<System.Int32> <Merge>b__1_0(UnityEngine.ProBuilder.Face x)
    // Offset: 0x1007AF8
    System::Collections::Generic::IEnumerable_1<int>* $Merge$b__1_0(UnityEngine::ProBuilder::Face* x);
    // public System.Void .ctor()
    // Offset: 0x1007AF0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static MergeElements::$$c* New_ctor();
  }; // UnityEngine.ProBuilder.MeshOperations.MergeElements/<>c
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::MergeElements::$$c*, "UnityEngine.ProBuilder.MeshOperations", "MergeElements/<>c");
#pragma pack(pop)
