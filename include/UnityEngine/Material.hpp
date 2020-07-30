// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:26 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Shader
  class Shader;
  // Forward declaring type: Color
  struct Color;
  // Forward declaring type: Texture
  class Texture;
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
  // Forward declaring type: Vector4
  struct Vector4;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.Material
  class Material : public UnityEngine::Object {
    public:
    // static private System.Void CreateWithShader(UnityEngine.Material self, UnityEngine.Shader shader)
    // Offset: 0x12FBA70
    static void CreateWithShader(UnityEngine::Material* self, UnityEngine::Shader* shader);
    // static private System.Void CreateWithMaterial(UnityEngine.Material self, UnityEngine.Material source)
    // Offset: 0x12FBAC0
    static void CreateWithMaterial(UnityEngine::Material* self, UnityEngine::Material* source);
    // static private System.Void CreateWithString(UnityEngine.Material self)
    // Offset: 0x12FBB10
    static void CreateWithString(UnityEngine::Material* self);
    // public System.Void .ctor(UnityEngine.Shader shader)
    // Offset: 0x12FBB50
    static Material* New_ctor(UnityEngine::Shader* shader);
    // public System.Void .ctor(UnityEngine.Material source)
    // Offset: 0x12FBBF0
    static Material* New_ctor(UnityEngine::Material* source);
    // public System.Void .ctor(System.String contents)
    // Offset: 0x12FBC90
    static Material* New_ctor(::Il2CppString* contents);
    // public UnityEngine.Shader get_shader()
    // Offset: 0x12FBD20
    UnityEngine::Shader* get_shader();
    // public UnityEngine.Color get_color()
    // Offset: 0x12FBD60
    UnityEngine::Color get_color();
    // public System.Void set_color(UnityEngine.Color value)
    // Offset: 0x12FBDEC
    void set_color(UnityEngine::Color value);
    // public UnityEngine.Texture get_mainTexture()
    // Offset: 0x12FBED8
    UnityEngine::Texture* get_mainTexture();
    // public System.Void set_mainTexture(UnityEngine.Texture value)
    // Offset: 0x12FBF84
    void set_mainTexture(UnityEngine::Texture* value);
    // public System.Boolean HasProperty(System.Int32 nameID)
    // Offset: 0x12FC048
    bool HasProperty(int nameID);
    // public System.Boolean HasProperty(System.String name)
    // Offset: 0x12FC098
    bool HasProperty(::Il2CppString* name);
    // public System.Void set_renderQueue(System.Int32 value)
    // Offset: 0x12FC0F4
    void set_renderQueue(int value);
    // public System.Void EnableKeyword(System.String keyword)
    // Offset: 0x12FC144
    void EnableKeyword(::Il2CppString* keyword);
    // public System.Void DisableKeyword(System.String keyword)
    // Offset: 0x12FC194
    void DisableKeyword(::Il2CppString* keyword);
    // public System.Boolean get_enableInstancing()
    // Offset: 0x12F9E38
    bool get_enableInstancing();
    // public System.Int32 get_passCount()
    // Offset: 0x12FC1E4
    int get_passCount();
    // public System.Boolean SetPass(System.Int32 pass)
    // Offset: 0x12FC224
    bool SetPass(int pass);
    // public System.Void CopyPropertiesFromMaterial(UnityEngine.Material mat)
    // Offset: 0x12FC274
    void CopyPropertiesFromMaterial(UnityEngine::Material* mat);
    // private System.String[] GetShaderKeywords()
    // Offset: 0x12FC2C4
    ::Array<::Il2CppString*>* GetShaderKeywords();
    // private System.Void SetShaderKeywords(System.String[] names)
    // Offset: 0x12FC304
    void SetShaderKeywords(::Array<::Il2CppString*>* names);
    // public System.String[] get_shaderKeywords()
    // Offset: 0x12FC354
    ::Array<::Il2CppString*>* get_shaderKeywords();
    // public System.Void set_shaderKeywords(System.String[] value)
    // Offset: 0x12FC394
    void set_shaderKeywords(::Array<::Il2CppString*>* value);
    // private System.Void SetFloatImpl(System.Int32 name, System.Single value)
    // Offset: 0x12FC3E4
    void SetFloatImpl(int name, float value);
    // private System.Void SetColorImpl(System.Int32 name, UnityEngine.Color value)
    // Offset: 0x12FC444
    void SetColorImpl(int name, UnityEngine::Color value);
    // private System.Void SetMatrixImpl(System.Int32 name, UnityEngine.Matrix4x4 value)
    // Offset: 0x12FC504
    void SetMatrixImpl(int name, UnityEngine::Matrix4x4 value);
    // private System.Void SetTextureImpl(System.Int32 name, UnityEngine.Texture value)
    // Offset: 0x12FC5B4
    void SetTextureImpl(int name, UnityEngine::Texture* value);
    // private System.Single GetFloatImpl(System.Int32 name)
    // Offset: 0x12FC60C
    float GetFloatImpl(int name);
    // private UnityEngine.Color GetColorImpl(System.Int32 name)
    // Offset: 0x12FC65C
    UnityEngine::Color GetColorImpl(int name);
    // private UnityEngine.Texture GetTextureImpl(System.Int32 name)
    // Offset: 0x12FC720
    UnityEngine::Texture* GetTextureImpl(int name);
    // public System.Void SetFloat(System.String name, System.Single value)
    // Offset: 0x12FC770
    void SetFloat(::Il2CppString* name, float value);
    // public System.Void SetFloat(System.Int32 nameID, System.Single value)
    // Offset: 0x12FC7DC
    void SetFloat(int nameID, float value);
    // public System.Void SetInt(System.String name, System.Int32 value)
    // Offset: 0x12FC83C
    void SetInt(::Il2CppString* name, int value);
    // public System.Void SetColor(System.String name, UnityEngine.Color value)
    // Offset: 0x12FBE78
    void SetColor(::Il2CppString* name, UnityEngine::Color value);
    // public System.Void SetColor(System.Int32 nameID, UnityEngine.Color value)
    // Offset: 0x12FC8AC
    void SetColor(int nameID, UnityEngine::Color value);
    // public System.Void SetVector(System.String name, UnityEngine.Vector4 value)
    // Offset: 0x12FC8B0
    void SetVector(::Il2CppString* name, UnityEngine::Vector4 value);
    // public System.Void SetVector(System.Int32 nameID, UnityEngine.Vector4 value)
    // Offset: 0x12FC910
    void SetVector(int nameID, UnityEngine::Vector4 value);
    // public System.Void SetMatrix(System.Int32 nameID, UnityEngine.Matrix4x4 value)
    // Offset: 0x12FC914
    void SetMatrix(int nameID, UnityEngine::Matrix4x4 value);
    // public System.Void SetTexture(System.String name, UnityEngine.Texture value)
    // Offset: 0x12FBFE4
    void SetTexture(::Il2CppString* name, UnityEngine::Texture* value);
    // public System.Void SetTexture(System.Int32 nameID, UnityEngine.Texture value)
    // Offset: 0x12FC984
    void SetTexture(int nameID, UnityEngine::Texture* value);
    // public System.Single GetFloat(System.Int32 nameID)
    // Offset: 0x12FC9DC
    float GetFloat(int nameID);
    // public UnityEngine.Color GetColor(System.String name)
    // Offset: 0x12FBDBC
    UnityEngine::Color GetColor(::Il2CppString* name);
    // public UnityEngine.Color GetColor(System.Int32 nameID)
    // Offset: 0x12FCA2C
    UnityEngine::Color GetColor(int nameID);
    // public UnityEngine.Vector4 GetVector(System.Int32 nameID)
    // Offset: 0x12FCA30
    UnityEngine::Vector4 GetVector(int nameID);
    // public UnityEngine.Texture GetTexture(System.String name)
    // Offset: 0x12FBF28
    UnityEngine::Texture* GetTexture(::Il2CppString* name);
    // public UnityEngine.Texture GetTexture(System.Int32 nameID)
    // Offset: 0x12FCA44
    UnityEngine::Texture* GetTexture(int nameID);
    // private System.Void SetColorImpl_Injected(System.Int32 name, UnityEngine.Color value)
    // Offset: 0x12FC4AC
    void SetColorImpl_Injected(int name, UnityEngine::Color& value);
    // private System.Void SetMatrixImpl_Injected(System.Int32 name, UnityEngine.Matrix4x4 value)
    // Offset: 0x12FC55C
    void SetMatrixImpl_Injected(int name, UnityEngine::Matrix4x4& value);
    // private System.Void GetColorImpl_Injected(System.Int32 name, UnityEngine.Color ret)
    // Offset: 0x12FC6C8
    void GetColorImpl_Injected(int name, UnityEngine::Color& ret);
  }; // UnityEngine.Material
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Material*, "UnityEngine", "Material");
#pragma pack(pop)
