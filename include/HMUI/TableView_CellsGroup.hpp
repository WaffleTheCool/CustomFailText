// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:05 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: HMUI.TableView
#include "HMUI/TableView.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: TableCell
  class TableCell;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.TableView/CellsGroup
  class TableView::CellsGroup : public ::Il2CppObject {
    public:
    // public System.String reuseIdentifier
    // Offset: 0x10
    ::Il2CppString* reuseIdentifier;
    // public System.Collections.Generic.List`1<HMUI.TableCell> cells
    // Offset: 0x18
    System::Collections::Generic::List_1<HMUI::TableCell*>* cells;
    // public System.Void .ctor()
    // Offset: 0x10D36EC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TableView::CellsGroup* New_ctor();
  }; // HMUI.TableView/CellsGroup
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::TableView::CellsGroup*, "HMUI", "TableView/CellsGroup");
#pragma pack(pop)
