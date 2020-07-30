// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:20 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_Text
  class TMP_Text;
  // Forward declaring type: TMP_CharacterInfo
  struct TMP_CharacterInfo;
  // Forward declaring type: TMP_WordInfo
  struct TMP_WordInfo;
  // Forward declaring type: TMP_LinkInfo
  struct TMP_LinkInfo;
  // Forward declaring type: TMP_LineInfo
  struct TMP_LineInfo;
  // Forward declaring type: TMP_PageInfo
  struct TMP_PageInfo;
  // Forward declaring type: TMP_MeshInfo
  struct TMP_MeshInfo;
  // Forward declaring type: MaterialReference
  struct MaterialReference;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TMP_TextInfo
  class TMP_TextInfo : public ::Il2CppObject {
    public:
    // Get static field: static private UnityEngine.Vector2 k_InfinityVectorPositive
    static UnityEngine::Vector2 _get_k_InfinityVectorPositive();
    // Set static field: static private UnityEngine.Vector2 k_InfinityVectorPositive
    static void _set_k_InfinityVectorPositive(UnityEngine::Vector2 value);
    // Get static field: static private UnityEngine.Vector2 k_InfinityVectorNegative
    static UnityEngine::Vector2 _get_k_InfinityVectorNegative();
    // Set static field: static private UnityEngine.Vector2 k_InfinityVectorNegative
    static void _set_k_InfinityVectorNegative(UnityEngine::Vector2 value);
    // public TMPro.TMP_Text textComponent
    // Offset: 0x10
    TMPro::TMP_Text* textComponent;
    // public System.Int32 characterCount
    // Offset: 0x18
    int characterCount;
    // public System.Int32 spriteCount
    // Offset: 0x1C
    int spriteCount;
    // public System.Int32 spaceCount
    // Offset: 0x20
    int spaceCount;
    // public System.Int32 wordCount
    // Offset: 0x24
    int wordCount;
    // public System.Int32 linkCount
    // Offset: 0x28
    int linkCount;
    // public System.Int32 lineCount
    // Offset: 0x2C
    int lineCount;
    // public System.Int32 pageCount
    // Offset: 0x30
    int pageCount;
    // public System.Int32 materialCount
    // Offset: 0x34
    int materialCount;
    // public TMPro.TMP_CharacterInfo[] characterInfo
    // Offset: 0x38
    ::Array<TMPro::TMP_CharacterInfo>* characterInfo;
    // public TMPro.TMP_WordInfo[] wordInfo
    // Offset: 0x40
    ::Array<TMPro::TMP_WordInfo>* wordInfo;
    // public TMPro.TMP_LinkInfo[] linkInfo
    // Offset: 0x48
    ::Array<TMPro::TMP_LinkInfo>* linkInfo;
    // public TMPro.TMP_LineInfo[] lineInfo
    // Offset: 0x50
    ::Array<TMPro::TMP_LineInfo>* lineInfo;
    // public TMPro.TMP_PageInfo[] pageInfo
    // Offset: 0x58
    ::Array<TMPro::TMP_PageInfo>* pageInfo;
    // public TMPro.TMP_MeshInfo[] meshInfo
    // Offset: 0x60
    ::Array<TMPro::TMP_MeshInfo>* meshInfo;
    // private TMPro.TMP_MeshInfo[] m_CachedMeshInfo
    // Offset: 0x68
    ::Array<TMPro::TMP_MeshInfo>* m_CachedMeshInfo;
    // public System.Void .ctor(TMPro.TMP_Text textComponent)
    // Offset: 0xDAAF20
    static TMP_TextInfo* New_ctor(TMPro::TMP_Text* textComponent);
    // public System.Void Clear()
    // Offset: 0xDAB0B4
    void Clear();
    // public System.Void ClearMeshInfo(System.Boolean updateMesh)
    // Offset: 0xDAB118
    void ClearMeshInfo(bool updateMesh);
    // public System.Void ClearAllMeshInfo()
    // Offset: 0xDAB198
    void ClearAllMeshInfo();
    // public System.Void ResetVertexLayout(System.Boolean isVolumetric)
    // Offset: 0xDAB214
    void ResetVertexLayout(bool isVolumetric);
    // public System.Void ClearUnusedVertices(TMPro.MaterialReference[] materials)
    // Offset: 0xDAB298
    void ClearUnusedVertices(::Array<TMPro::MaterialReference>* materials);
    // public System.Void ClearLineInfo()
    // Offset: 0xDAB314
    void ClearLineInfo();
    // public TMPro.TMP_MeshInfo[] CopyMeshInfoVertexData()
    // Offset: 0xDAB524
    ::Array<TMPro::TMP_MeshInfo>* CopyMeshInfoVertexData();
    // static public System.Void Resize(T[] array, System.Int32 size)
    // Offset: 0xC46EB0
    template<class T>
    static void Resize(::Array<T>*& array, int size) {
      CRASH_UNLESS(il2cpp_utils::RunGenericMethod("TMPro", "TMP_TextInfo", "Resize", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, array, size));
    }
    // static public System.Void Resize(T[] array, System.Int32 size, System.Boolean isBlockAllocated)
    // Offset: 0xC46F50
    template<class T>
    static void Resize(::Array<T>*& array, int size, bool isBlockAllocated) {
      CRASH_UNLESS(il2cpp_utils::RunGenericMethod("TMPro", "TMP_TextInfo", "Resize", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, array, size, isBlockAllocated));
    }
    // static private System.Void .cctor()
    // Offset: 0xDAB950
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0xDAAE00
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TMP_TextInfo* New_ctor();
  }; // TMPro.TMP_TextInfo
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_TextInfo*, "TMPro", "TMP_TextInfo");
#pragma pack(pop)
