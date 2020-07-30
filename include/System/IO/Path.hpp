// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:32 PM
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
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Autogenerated type: System.IO.Path
  class Path : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Char[] InvalidPathChars
    static ::Array<::Il2CppChar>* _get_InvalidPathChars();
    // Set static field: static public readonly System.Char[] InvalidPathChars
    static void _set_InvalidPathChars(::Array<::Il2CppChar>* value);
    // Get static field: static public readonly System.Char AltDirectorySeparatorChar
    static ::Il2CppChar _get_AltDirectorySeparatorChar();
    // Set static field: static public readonly System.Char AltDirectorySeparatorChar
    static void _set_AltDirectorySeparatorChar(::Il2CppChar value);
    // Get static field: static public readonly System.Char DirectorySeparatorChar
    static ::Il2CppChar _get_DirectorySeparatorChar();
    // Set static field: static public readonly System.Char DirectorySeparatorChar
    static void _set_DirectorySeparatorChar(::Il2CppChar value);
    // Get static field: static public readonly System.Char PathSeparator
    static ::Il2CppChar _get_PathSeparator();
    // Set static field: static public readonly System.Char PathSeparator
    static void _set_PathSeparator(::Il2CppChar value);
    // Get static field: static readonly System.String DirectorySeparatorStr
    static ::Il2CppString* _get_DirectorySeparatorStr();
    // Set static field: static readonly System.String DirectorySeparatorStr
    static void _set_DirectorySeparatorStr(::Il2CppString* value);
    // Get static field: static public readonly System.Char VolumeSeparatorChar
    static ::Il2CppChar _get_VolumeSeparatorChar();
    // Set static field: static public readonly System.Char VolumeSeparatorChar
    static void _set_VolumeSeparatorChar(::Il2CppChar value);
    // Get static field: static readonly System.Char[] PathSeparatorChars
    static ::Array<::Il2CppChar>* _get_PathSeparatorChars();
    // Set static field: static readonly System.Char[] PathSeparatorChars
    static void _set_PathSeparatorChars(::Array<::Il2CppChar>* value);
    // Get static field: static private readonly System.Boolean dirEqualsVolume
    static bool _get_dirEqualsVolume();
    // Set static field: static private readonly System.Boolean dirEqualsVolume
    static void _set_dirEqualsVolume(bool value);
    // Get static field: static readonly System.Char[] trimEndCharsWindows
    static ::Array<::Il2CppChar>* _get_trimEndCharsWindows();
    // Set static field: static readonly System.Char[] trimEndCharsWindows
    static void _set_trimEndCharsWindows(::Array<::Il2CppChar>* value);
    // Get static field: static readonly System.Char[] trimEndCharsUnix
    static ::Array<::Il2CppChar>* _get_trimEndCharsUnix();
    // Set static field: static readonly System.Char[] trimEndCharsUnix
    static void _set_trimEndCharsUnix(::Array<::Il2CppChar>* value);
    // static public System.String ChangeExtension(System.String path, System.String extension)
    // Offset: 0xFECD14
    static ::Il2CppString* ChangeExtension(::Il2CppString* path, ::Il2CppString* extension);
    // static public System.String Combine(System.String path1, System.String path2)
    // Offset: 0xFECFB4
    static ::Il2CppString* Combine(::Il2CppString* path1, ::Il2CppString* path2);
    // static System.String CleanPath(System.String s)
    // Offset: 0xFED41C
    static ::Il2CppString* CleanPath(::Il2CppString* s);
    // static public System.String GetDirectoryName(System.String path)
    // Offset: 0xFED908
    static ::Il2CppString* GetDirectoryName(::Il2CppString* path);
    // static public System.String GetExtension(System.String path)
    // Offset: 0xFEE128
    static ::Il2CppString* GetExtension(::Il2CppString* path);
    // static public System.String GetFileName(System.String path)
    // Offset: 0xFEE250
    static ::Il2CppString* GetFileName(::Il2CppString* path);
    // static public System.String GetFileNameWithoutExtension(System.String path)
    // Offset: 0xFEE368
    static ::Il2CppString* GetFileNameWithoutExtension(::Il2CppString* path);
    // static public System.String GetFullPath(System.String path)
    // Offset: 0xFEE3D4
    static ::Il2CppString* GetFullPath(::Il2CppString* path);
    // static System.String GetFullPathInternal(System.String path)
    // Offset: 0xFEEB88
    static ::Il2CppString* GetFullPathInternal(::Il2CppString* path);
    // static private System.Int32 GetFullPathName(System.String path, System.Int32 numBufferChars, System.Text.StringBuilder buffer, System.IntPtr lpFilePartOrNull)
    // Offset: 0xFEEBEC
    static int GetFullPathName(::Il2CppString* path, int numBufferChars, System::Text::StringBuilder* buffer, System::IntPtr& lpFilePartOrNull);
    // static System.String GetFullPathName(System.String path)
    // Offset: 0xFEECCC
    static ::Il2CppString* GetFullPathName(::Il2CppString* path);
    // static System.String WindowsDriveAdjustment(System.String path)
    // Offset: 0xFEEE84
    static ::Il2CppString* WindowsDriveAdjustment(::Il2CppString* path);
    // static System.String InsecureGetFullPath(System.String path)
    // Offset: 0xFEE44C
    static ::Il2CppString* InsecureGetFullPath(::Il2CppString* path);
    // static System.Boolean IsDirectorySeparator(System.Char c)
    // Offset: 0xFEF16C
    static bool IsDirectorySeparator(::Il2CppChar c);
    // static public System.String GetPathRoot(System.String path)
    // Offset: 0xFEDCA0
    static ::Il2CppString* GetPathRoot(::Il2CppString* path);
    // static public System.Boolean IsPathRooted(System.String path)
    // Offset: 0xFED248
    static bool IsPathRooted(::Il2CppString* path);
    // static public System.Char[] GetInvalidFileNameChars()
    // Offset: 0xFEF9D8
    static ::Array<::Il2CppChar>* GetInvalidFileNameChars();
    // static public System.Char[] GetInvalidPathChars()
    // Offset: 0xFEFA90
    static ::Array<::Il2CppChar>* GetInvalidPathChars();
    // static private System.Int32 findExtension(System.String path)
    // Offset: 0xFECF08
    static int findExtension(::Il2CppString* path);
    // static private System.Void .cctor()
    // Offset: 0xFEFB20
    static void _cctor();
    // static private System.String GetServerAndShare(System.String path)
    // Offset: 0xFEFD20
    static ::Il2CppString* GetServerAndShare(::Il2CppString* path);
    // static private System.Boolean SameRoot(System.String root, System.String path)
    // Offset: 0xFEFE9C
    static bool SameRoot(::Il2CppString* root, ::Il2CppString* path);
    // static private System.String CanonicalizePath(System.String path)
    // Offset: 0xFEF210
    static ::Il2CppString* CanonicalizePath(::Il2CppString* path);
    // static public System.String Combine(System.String[] paths)
    // Offset: 0xFF01B8
    static ::Il2CppString* Combine(::Array<::Il2CppString*>* paths);
    // static public System.String Combine(System.String path1, System.String path2, System.String path3)
    // Offset: 0xFF04C4
    static ::Il2CppString* Combine(::Il2CppString* path1, ::Il2CppString* path2, ::Il2CppString* path3);
    // static System.Void Validate(System.String path)
    // Offset: 0xFF067C
    static void Validate(::Il2CppString* path);
    // static System.Void Validate(System.String path, System.String parameterName)
    // Offset: 0xFF06EC
    static void Validate(::Il2CppString* path, ::Il2CppString* parameterName);
    // static System.String get_DirectorySeparatorCharAsString()
    // Offset: 0xFF0844
    static ::Il2CppString* get_DirectorySeparatorCharAsString();
    // static System.Char[] get_TrimEndChars()
    // Offset: 0xFF08AC
    static ::Array<::Il2CppChar>* get_TrimEndChars();
    // static System.Void CheckSearchPattern(System.String searchPattern)
    // Offset: 0xFF094C
    static void CheckSearchPattern(::Il2CppString* searchPattern);
    // static System.Void CheckInvalidPathChars(System.String path, System.Boolean checkAdditional)
    // Offset: 0xFF0AD8
    static void CheckInvalidPathChars(::Il2CppString* path, bool checkAdditional);
    // static System.String InternalCombine(System.String path1, System.String path2)
    // Offset: 0xFF0C40
    static ::Il2CppString* InternalCombine(::Il2CppString* path1, ::Il2CppString* path2);
  }; // System.IO.Path
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::Path*, "System.IO", "Path");
#pragma pack(pop)
