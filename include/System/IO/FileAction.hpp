// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:13 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Autogenerated type: System.IO.FileAction
  struct FileAction : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public System.IO.FileAction Added
    static constexpr const int Added = 1;
    // Get static field: static public System.IO.FileAction Added
    static System::IO::FileAction _get_Added();
    // Set static field: static public System.IO.FileAction Added
    static void _set_Added(System::IO::FileAction value);
    // static field const value: static public System.IO.FileAction Removed
    static constexpr const int Removed = 2;
    // Get static field: static public System.IO.FileAction Removed
    static System::IO::FileAction _get_Removed();
    // Set static field: static public System.IO.FileAction Removed
    static void _set_Removed(System::IO::FileAction value);
    // static field const value: static public System.IO.FileAction Modified
    static constexpr const int Modified = 3;
    // Get static field: static public System.IO.FileAction Modified
    static System::IO::FileAction _get_Modified();
    // Set static field: static public System.IO.FileAction Modified
    static void _set_Modified(System::IO::FileAction value);
    // static field const value: static public System.IO.FileAction RenamedOldName
    static constexpr const int RenamedOldName = 4;
    // Get static field: static public System.IO.FileAction RenamedOldName
    static System::IO::FileAction _get_RenamedOldName();
    // Set static field: static public System.IO.FileAction RenamedOldName
    static void _set_RenamedOldName(System::IO::FileAction value);
    // static field const value: static public System.IO.FileAction RenamedNewName
    static constexpr const int RenamedNewName = 5;
    // Get static field: static public System.IO.FileAction RenamedNewName
    static System::IO::FileAction _get_RenamedNewName();
    // Set static field: static public System.IO.FileAction RenamedNewName
    static void _set_RenamedNewName(System::IO::FileAction value);
    // Creating value type constructor for type: FileAction
    FileAction(int value_ = {}) : value{value_} {}
  }; // System.IO.FileAction
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::FileAction, "System.IO", "FileAction");
#pragma pack(pop)
