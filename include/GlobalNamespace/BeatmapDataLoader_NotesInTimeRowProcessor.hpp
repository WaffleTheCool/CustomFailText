// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:09 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: BeatmapDataLoader
#include "GlobalNamespace/BeatmapDataLoader.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteData
  class NoteData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapDataLoader/NotesInTimeRowProcessor
  class BeatmapDataLoader::NotesInTimeRowProcessor : public ::Il2CppObject {
    public:
    // private System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> _numberOfNotesInLines
    // Offset: 0x10
    System::Collections::Generic::Dictionary_2<int, int>* numberOfNotesInLines;
    // public System.Void ProcessBasicNotesInTimeRow(System.Collections.Generic.List`1<NoteData> basicNotes, System.Single nextBasicNoteTimeSlice)
    // Offset: 0x197979C
    void ProcessBasicNotesInTimeRow(System::Collections::Generic::List_1<GlobalNamespace::NoteData*>* basicNotes, float nextBasicNoteTimeSlice);
    // public System.Void ProcessNotesInTimeRow(System.Collections.Generic.List`1<NoteData> notes)
    // Offset: 0x19798C0
    void ProcessNotesInTimeRow(System::Collections::Generic::List_1<GlobalNamespace::NoteData*>* notes);
    // public System.Void .ctor()
    // Offset: 0x1979B88
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static BeatmapDataLoader::NotesInTimeRowProcessor* New_ctor();
  }; // BeatmapDataLoader/NotesInTimeRowProcessor
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDataLoader::NotesInTimeRowProcessor*, "", "BeatmapDataLoader/NotesInTimeRowProcessor");
#pragma pack(pop)
