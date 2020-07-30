// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:43 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Diagnostics.Tracing.TraceLoggingTypeInfo`1
#include "System/Diagnostics/Tracing/TraceLoggingTypeInfo_1.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
// Including type: System.Diagnostics.Tracing.EventFieldFormat
#include "System/Diagnostics/Tracing/EventFieldFormat.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Skipping declaration: TraceLoggingTypeInfo`1 because it is already included!
  // Skipping declaration: TraceLoggingTypeInfo`1 because it is already included!
  // Forward declaring type: TraceLoggingDataCollector
  class TraceLoggingDataCollector;
  // Forward declaring type: TraceLoggingMetadataCollector
  class TraceLoggingMetadataCollector;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Autogenerated type: System.Diagnostics.Tracing.KeyValuePairTypeInfo`2
  template<typename K, typename V>
  class KeyValuePairTypeInfo_2 : public System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<System::Collections::Generic::KeyValuePair_2<K, V>> {
    public:
    // private readonly System.Diagnostics.Tracing.TraceLoggingTypeInfo`1<K> keyInfo
    // Offset: 0x0
    System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<K>* keyInfo;
    // private readonly System.Diagnostics.Tracing.TraceLoggingTypeInfo`1<V> valueInfo
    // Offset: 0x0
    System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<V>* valueInfo;
    // public System.Void WriteData(System.Diagnostics.Tracing.TraceLoggingDataCollector collector, System.Collections.Generic.KeyValuePair`2<K,V> value)
    // Offset: 0x15536F8
    void WriteData(System::Diagnostics::Tracing::TraceLoggingDataCollector* collector, System::Collections::Generic::KeyValuePair_2<K, V>& value) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "WriteData", collector, value));
    }
    // public override System.Void WriteMetadata(System.Diagnostics.Tracing.TraceLoggingMetadataCollector collector, System.String name, System.Diagnostics.Tracing.EventFieldFormat format)
    // Offset: 0x1553630
    // Implemented from: System.Diagnostics.Tracing.TraceLoggingTypeInfo
    // Base method: System.Void TraceLoggingTypeInfo::WriteMetadata(System.Diagnostics.Tracing.TraceLoggingMetadataCollector collector, System.String name, System.Diagnostics.Tracing.EventFieldFormat format)
    void WriteMetadata(System::Diagnostics::Tracing::TraceLoggingMetadataCollector* collector, ::Il2CppString* name, System::Diagnostics::Tracing::EventFieldFormat format) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "WriteMetadata", collector, name, format));
    }
  }; // System.Diagnostics.Tracing.KeyValuePairTypeInfo`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Diagnostics::Tracing::KeyValuePairTypeInfo_2, "System.Diagnostics.Tracing", "KeyValuePairTypeInfo`2");
#pragma pack(pop)
