// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:27 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
// Including type: System.IComparable`1
#include "System/IComparable_1.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.IFormattable
#include "System/IFormattable.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.TimeSpan
  struct TimeSpan : public System::ValueType, public System::IComparable, public System::IComparable_1<System::TimeSpan>, public System::IEquatable_1<System::TimeSpan>, public System::IFormattable {
    public:
    // Get static field: static public readonly System.TimeSpan Zero
    static System::TimeSpan _get_Zero();
    // Set static field: static public readonly System.TimeSpan Zero
    static void _set_Zero(System::TimeSpan value);
    // Get static field: static public readonly System.TimeSpan MaxValue
    static System::TimeSpan _get_MaxValue();
    // Set static field: static public readonly System.TimeSpan MaxValue
    static void _set_MaxValue(System::TimeSpan value);
    // Get static field: static public readonly System.TimeSpan MinValue
    static System::TimeSpan _get_MinValue();
    // Set static field: static public readonly System.TimeSpan MinValue
    static void _set_MinValue(System::TimeSpan value);
    // System.Int64 _ticks
    // Offset: 0x0
    int64_t ticks;
    // Get static field: static private System.Boolean _legacyConfigChecked
    static bool _get__legacyConfigChecked();
    // Set static field: static private System.Boolean _legacyConfigChecked
    static void _set__legacyConfigChecked(bool value);
    // Get static field: static private System.Boolean _legacyMode
    static bool _get__legacyMode();
    // Set static field: static private System.Boolean _legacyMode
    static void _set__legacyMode(bool value);
    // Creating value type constructor for type: TimeSpan
    TimeSpan(int64_t ticks_ = {}) : ticks{ticks_} {}
    // public System.Void .ctor(System.Int64 ticks)
    // Offset: 0xA2932C
    static TimeSpan* New_ctor(int64_t ticks);
    // public System.Void .ctor(System.Int32 hours, System.Int32 minutes, System.Int32 seconds)
    // Offset: 0xA29334
    static TimeSpan* New_ctor(int hours, int minutes, int seconds);
    // public System.Void .ctor(System.Int32 days, System.Int32 hours, System.Int32 minutes, System.Int32 seconds, System.Int32 milliseconds)
    // Offset: 0xA2933C
    static TimeSpan* New_ctor(int days, int hours, int minutes, int seconds, int milliseconds);
    // public System.Int64 get_Ticks()
    // Offset: 0xA29344
    int64_t get_Ticks();
    // public System.Int32 get_Hours()
    // Offset: 0xA2934C
    int get_Hours();
    // public System.Int32 get_Minutes()
    // Offset: 0xA29394
    int get_Minutes();
    // public System.Int32 get_Seconds()
    // Offset: 0xA293DC
    int get_Seconds();
    // public System.Double get_TotalHours()
    // Offset: 0xA29428
    double get_TotalHours();
    // public System.Double get_TotalMilliseconds()
    // Offset: 0xA29440
    double get_TotalMilliseconds();
    // public System.Double get_TotalMinutes()
    // Offset: 0xA29474
    double get_TotalMinutes();
    // public System.Double get_TotalSeconds()
    // Offset: 0xA2948C
    double get_TotalSeconds();
    // public System.TimeSpan Add(System.TimeSpan ts)
    // Offset: 0xA294A4
    System::TimeSpan Add(System::TimeSpan ts);
    // static public System.TimeSpan FromDays(System.Double value)
    // Offset: 0xCD9CC0
    static System::TimeSpan FromDays(double value);
    // public System.TimeSpan Duration()
    // Offset: 0xA294C8
    System::TimeSpan Duration();
    // static public System.TimeSpan FromHours(System.Double value)
    // Offset: 0xCDA008
    static System::TimeSpan FromHours(double value);
    // static private System.TimeSpan Interval(System.Double value, System.Int32 scale)
    // Offset: 0xCD9D34
    static System::TimeSpan Interval(double value, int scale);
    // static public System.TimeSpan FromMilliseconds(System.Double value)
    // Offset: 0xCDA07C
    static System::TimeSpan FromMilliseconds(double value);
    // static public System.TimeSpan FromMinutes(System.Double value)
    // Offset: 0xCDA0EC
    static System::TimeSpan FromMinutes(double value);
    // public System.TimeSpan Negate()
    // Offset: 0xA294F4
    System::TimeSpan Negate();
    // static public System.TimeSpan FromSeconds(System.Double value)
    // Offset: 0xCDA234
    static System::TimeSpan FromSeconds(double value);
    // public System.TimeSpan Subtract(System.TimeSpan ts)
    // Offset: 0xA294FC
    System::TimeSpan Subtract(System::TimeSpan ts);
    // static public System.TimeSpan FromTicks(System.Int64 value)
    // Offset: 0xCDA358
    static System::TimeSpan FromTicks(int64_t value);
    // static System.Int64 TimeToTicks(System.Int32 hour, System.Int32 minute, System.Int32 second)
    // Offset: 0xCD9900
    static int64_t TimeToTicks(int hour, int minute, int second);
    // public System.String ToString(System.String format)
    // Offset: 0xA2950C
    ::Il2CppString* ToString(::Il2CppString* format);
    // static private System.Boolean GetLegacyFormatMode()
    // Offset: 0xCDA6C0
    static bool GetLegacyFormatMode();
    // static private System.Boolean get_LegacyMode()
    // Offset: 0xCDA524
    static bool get_LegacyMode();
    // static private System.Void .cctor()
    // Offset: 0xCDA710
    static void _cctor();
    // public System.Int32 CompareTo(System.Object value)
    // Offset: 0xA294AC
    // Implemented from: System.IComparable
    // Base method: System.Int32 IComparable::CompareTo(System.Object value)
    int CompareTo(::Il2CppObject* value);
    // Creating proxy method: System_IComparable_CompareTo
    // Maps to method: CompareTo
    int System_IComparable_CompareTo(::Il2CppObject* value);
    // public System.Int32 CompareTo(System.TimeSpan value)
    // Offset: 0xA294B4
    // Implemented from: System.IComparable`1
    // Base method: System.Int32 IComparable`1::CompareTo(System.TimeSpan value)
    int CompareTo(System::TimeSpan value);
    // public override System.Boolean Equals(System.Object value)
    // Offset: 0xA294D0
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object value)
    bool Equals(::Il2CppObject* value);
    // public System.Boolean Equals(System.TimeSpan obj)
    // Offset: 0xA294D8
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable`1::Equals(System.TimeSpan obj)
    bool Equals(System::TimeSpan obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xA294E8
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0xA29504
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // public System.String ToString(System.String format, System.IFormatProvider formatProvider)
    // Offset: 0xA29514
    // Implemented from: System.IFormattable
    // Base method: System.String IFormattable::ToString(System.String format, System.IFormatProvider formatProvider)
    ::Il2CppString* ToString(::Il2CppString* format, System::IFormatProvider* formatProvider);
  }; // System.TimeSpan
  // static public System.TimeSpan op_Subtraction(System.TimeSpan t1, System.TimeSpan t2)
  // Offset: 0xCDA630
  System::TimeSpan operator-(const System::TimeSpan& t1, const System::TimeSpan& t2);
  // static public System.TimeSpan op_Addition(System.TimeSpan t1, System.TimeSpan t2)
  // Offset: 0xCDA654
  System::TimeSpan operator+(const System::TimeSpan& t1, const System::TimeSpan& t2);
  // static public System.Boolean op_Equality(System.TimeSpan t1, System.TimeSpan t2)
  // Offset: 0xCDA678
  bool operator ==(const System::TimeSpan& t1, const System::TimeSpan& t2);
  // static public System.Boolean op_Inequality(System.TimeSpan t1, System.TimeSpan t2)
  // Offset: 0xCDA684
  bool operator !=(const System::TimeSpan& t1, const System::TimeSpan& t2);
  // static public System.Boolean op_LessThan(System.TimeSpan t1, System.TimeSpan t2)
  // Offset: 0xCDA690
  bool operator <(const System::TimeSpan& t1, const System::TimeSpan& t2);
  // static public System.Boolean op_LessThanOrEqual(System.TimeSpan t1, System.TimeSpan t2)
  // Offset: 0xCDA69C
  bool operator <=(const System::TimeSpan& t1, const System::TimeSpan& t2);
  // static public System.Boolean op_GreaterThan(System.TimeSpan t1, System.TimeSpan t2)
  // Offset: 0xCDA6A8
  bool operator >(const System::TimeSpan& t1, const System::TimeSpan& t2);
  // static public System.Boolean op_GreaterThanOrEqual(System.TimeSpan t1, System.TimeSpan t2)
  // Offset: 0xCDA6B4
  bool operator >=(const System::TimeSpan& t1, const System::TimeSpan& t2);
}
DEFINE_IL2CPP_ARG_TYPE(System::TimeSpan, "System", "TimeSpan");
#pragma pack(pop)
