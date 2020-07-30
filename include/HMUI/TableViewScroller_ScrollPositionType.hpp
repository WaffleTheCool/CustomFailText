// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:05 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
// Including type: HMUI.TableViewScroller
#include "HMUI/TableViewScroller.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.TableViewScroller/ScrollPositionType
  struct TableViewScroller::ScrollPositionType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public HMUI.TableViewScroller/ScrollPositionType Beginning
    static constexpr const int Beginning = 0;
    // Get static field: static public HMUI.TableViewScroller/ScrollPositionType Beginning
    static HMUI::TableViewScroller::ScrollPositionType _get_Beginning();
    // Set static field: static public HMUI.TableViewScroller/ScrollPositionType Beginning
    static void _set_Beginning(HMUI::TableViewScroller::ScrollPositionType value);
    // static field const value: static public HMUI.TableViewScroller/ScrollPositionType Center
    static constexpr const int Center = 1;
    // Get static field: static public HMUI.TableViewScroller/ScrollPositionType Center
    static HMUI::TableViewScroller::ScrollPositionType _get_Center();
    // Set static field: static public HMUI.TableViewScroller/ScrollPositionType Center
    static void _set_Center(HMUI::TableViewScroller::ScrollPositionType value);
    // static field const value: static public HMUI.TableViewScroller/ScrollPositionType End
    static constexpr const int End = 2;
    // Get static field: static public HMUI.TableViewScroller/ScrollPositionType End
    static HMUI::TableViewScroller::ScrollPositionType _get_End();
    // Set static field: static public HMUI.TableViewScroller/ScrollPositionType End
    static void _set_End(HMUI::TableViewScroller::ScrollPositionType value);
    // Creating value type constructor for type: ScrollPositionType
    ScrollPositionType(int value_ = {}) : value{value_} {}
  }; // HMUI.TableViewScroller/ScrollPositionType
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::TableViewScroller::ScrollPositionType, "HMUI", "TableViewScroller/ScrollPositionType");
#pragma pack(pop)
