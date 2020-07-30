// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:32 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: StreamWriter
  class StreamWriter;
  // Forward declaring type: FileStream
  class FileStream;
  // Forward declaring type: FileAttributes
  struct FileAttributes;
  // Forward declaring type: FileMode
  struct FileMode;
  // Forward declaring type: StreamReader
  class StreamReader;
  // Forward declaring type: MonoIOStat
  struct MonoIOStat;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Autogenerated type: System.IO.File
  class File : public ::Il2CppObject {
    public:
    // Get static field: static private System.Nullable`1<System.DateTime> defaultLocalFileTime
    static System::Nullable_1<System::DateTime> _get_defaultLocalFileTime();
    // Set static field: static private System.Nullable`1<System.DateTime> defaultLocalFileTime
    static void _set_defaultLocalFileTime(System::Nullable_1<System::DateTime> value);
    // static public System.IO.StreamWriter AppendText(System.String path)
    // Offset: 0x111CC04
    static System::IO::StreamWriter* AppendText(::Il2CppString* path);
    // static public System.IO.FileStream Create(System.String path)
    // Offset: 0x111CC6C
    static System::IO::FileStream* Create(::Il2CppString* path);
    // static public System.IO.FileStream Create(System.String path, System.Int32 bufferSize)
    // Offset: 0x111CC74
    static System::IO::FileStream* Create(::Il2CppString* path, int bufferSize);
    // static public System.IO.StreamWriter CreateText(System.String path)
    // Offset: 0x111CD24
    static System::IO::StreamWriter* CreateText(::Il2CppString* path);
    // static public System.Void Delete(System.String path)
    // Offset: 0x111B840
    static void Delete(::Il2CppString* path);
    // static public System.Boolean Exists(System.String path)
    // Offset: 0x111A7B0
    static bool Exists(::Il2CppString* path);
    // static public System.IO.FileAttributes GetAttributes(System.String path)
    // Offset: 0x111CE1C
    static System::IO::FileAttributes GetAttributes(::Il2CppString* path);
    // static public System.DateTime GetCreationTime(System.String path)
    // Offset: 0x111CF8C
    static System::DateTime GetCreationTime(::Il2CppString* path);
    // static public System.DateTime GetLastWriteTime(System.String path)
    // Offset: 0x111D228
    static System::DateTime GetLastWriteTime(::Il2CppString* path);
    // static public System.IO.FileStream Open(System.String path, System.IO.FileMode mode)
    // Offset: 0x111D364
    static System::IO::FileStream* Open(::Il2CppString* path, System::IO::FileMode mode);
    // static public System.IO.FileStream OpenRead(System.String path)
    // Offset: 0x111D424
    static System::IO::FileStream* OpenRead(::Il2CppString* path);
    // static public System.IO.StreamReader OpenText(System.String path)
    // Offset: 0x111D4A4
    static System::IO::StreamReader* OpenText(::Il2CppString* path);
    // static public System.Void Replace(System.String sourceFileName, System.String destinationFileName, System.String destinationBackupFileName)
    // Offset: 0x111D508
    static void Replace(::Il2CppString* sourceFileName, ::Il2CppString* destinationFileName, ::Il2CppString* destinationBackupFileName);
    // static public System.Void Replace(System.String sourceFileName, System.String destinationFileName, System.String destinationBackupFileName, System.Boolean ignoreMetadataErrors)
    // Offset: 0x111D510
    static void Replace(::Il2CppString* sourceFileName, ::Il2CppString* destinationFileName, ::Il2CppString* destinationBackupFileName, bool ignoreMetadataErrors);
    // static public System.String[] ReadAllLines(System.String path)
    // Offset: 0x111DC54
    static ::Array<::Il2CppString*>* ReadAllLines(::Il2CppString* path);
    // static private System.String[] ReadAllLines(System.IO.StreamReader reader)
    // Offset: 0x111DD68
    static ::Array<::Il2CppString*>* ReadAllLines(System::IO::StreamReader* reader);
    // static public System.String ReadAllText(System.String path)
    // Offset: 0x111DE40
    static ::Il2CppString* ReadAllText(::Il2CppString* path);
    // static public System.Void WriteAllBytes(System.String path, System.Byte[] bytes)
    // Offset: 0x111DF7C
    static void WriteAllBytes(::Il2CppString* path, ::Array<uint8_t>* bytes);
    // static public System.Void WriteAllLines(System.String path, System.String[] contents)
    // Offset: 0x111E0B4
    static void WriteAllLines(::Il2CppString* path, ::Array<::Il2CppString*>* contents);
    // static private System.Void WriteAllLines(System.IO.StreamWriter writer, System.String[] contents)
    // Offset: 0x111E1DC
    static void WriteAllLines(System::IO::StreamWriter* writer, ::Array<::Il2CppString*>* contents);
    // static public System.Void WriteAllText(System.String path, System.String contents)
    // Offset: 0x111E264
    static void WriteAllText(::Il2CppString* path, ::Il2CppString* contents);
    // static public System.Void WriteAllText(System.String path, System.String contents, System.Text.Encoding encoding)
    // Offset: 0x111E2E4
    static void WriteAllText(::Il2CppString* path, ::Il2CppString* contents, System::Text::Encoding* encoding);
    // static private System.DateTime get_DefaultLocalFileTime()
    // Offset: 0x111D154
    static System::DateTime get_DefaultLocalFileTime();
    // static public System.Void AppendAllLines(System.String path, System.Collections.Generic.IEnumerable`1<System.String> contents)
    // Offset: 0x111E428
    static void AppendAllLines(::Il2CppString* path, System::Collections::Generic::IEnumerable_1<::Il2CppString*>* contents);
    // static System.Int32 FillAttributeInfo(System.String path, System.IO.MonoIOStat data, System.Boolean tryagain, System.Boolean returnErrorOnNotFound)
    // Offset: 0x111E7A8
    static int FillAttributeInfo(::Il2CppString* path, System::IO::MonoIOStat& data, bool tryagain, bool returnErrorOnNotFound);
  }; // System.IO.File
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::File*, "System.IO", "File");
#pragma pack(pop)
