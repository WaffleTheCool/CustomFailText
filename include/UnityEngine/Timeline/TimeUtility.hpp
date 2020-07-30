// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:23 PM
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
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationClip
  class AnimationClip;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<TResult, T>
  template<typename TResult, typename T>
  class Func_2;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Autogenerated type: UnityEngine.Timeline.TimeUtility
  class TimeUtility : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::Timeline::TimeUtility::$$c
    class $$c;
    // Get static field: static public readonly System.Double kTimeEpsilon
    static double _get_kTimeEpsilon();
    // Set static field: static public readonly System.Double kTimeEpsilon
    static void _set_kTimeEpsilon(double value);
    // Get static field: static public readonly System.Double kFrameRateEpsilon
    static double _get_kFrameRateEpsilon();
    // Set static field: static public readonly System.Double kFrameRateEpsilon
    static void _set_kFrameRateEpsilon(double value);
    // Get static field: static public readonly System.Double k_MaxTimelineDurationInSeconds
    static double _get_k_MaxTimelineDurationInSeconds();
    // Set static field: static public readonly System.Double k_MaxTimelineDurationInSeconds
    static void _set_k_MaxTimelineDurationInSeconds(double value);
    // static private System.Void ValidateFrameRate(System.Double frameRate)
    // Offset: 0x108B408
    static void ValidateFrameRate(double frameRate);
    // static public System.Int32 ToFrames(System.Double time, System.Double frameRate)
    // Offset: 0x108B4C0
    static int ToFrames(double time, double frameRate);
    // static public System.Double ToExactFrames(System.Double time, System.Double frameRate)
    // Offset: 0x108B6A4
    static double ToExactFrames(double time, double frameRate);
    // static public System.Double FromFrames(System.Int32 frames, System.Double frameRate)
    // Offset: 0x108B71C
    static double FromFrames(int frames, double frameRate);
    // static public System.Double FromFrames(System.Double frames, System.Double frameRate)
    // Offset: 0x108B798
    static double FromFrames(double frames, double frameRate);
    // static public System.Boolean OnFrameBoundary(System.Double time, System.Double frameRate)
    // Offset: 0x108B810
    static bool OnFrameBoundary(double time, double frameRate);
    // static public System.Double GetEpsilon(System.Double time, System.Double frameRate)
    // Offset: 0x108B5F0
    static double GetEpsilon(double time, double frameRate);
    // static public System.Boolean OnFrameBoundary(System.Double time, System.Double frameRate, System.Double epsilon)
    // Offset: 0x108B894
    static bool OnFrameBoundary(double time, double frameRate, double epsilon);
    // static public System.Double RoundToFrame(System.Double time, System.Double frameRate)
    // Offset: 0x108B9C0
    static double RoundToFrame(double time, double frameRate);
    // static public System.String TimeAsFrames(System.Double timeValue, System.Double frameRate, System.String format)
    // Offset: 0x108BA80
    static ::Il2CppString* TimeAsFrames(double timeValue, double frameRate, ::Il2CppString* format);
    // static public System.String TimeAsTimeCode(System.Double timeValue, System.Double frameRate, System.String format)
    // Offset: 0x108BB80
    static ::Il2CppString* TimeAsTimeCode(double timeValue, double frameRate, ::Il2CppString* format);
    // static public System.Double ParseTimeCode(System.String timeCode, System.Double frameRate, System.Double defaultValue)
    // Offset: 0x108C04C
    static double ParseTimeCode(::Il2CppString* timeCode, double frameRate, double defaultValue);
    // static public System.Double GetAnimationClipLength(UnityEngine.AnimationClip clip)
    // Offset: 0x107A39C
    static double GetAnimationClipLength(UnityEngine::AnimationClip* clip);
    // static private System.String RemoveChar(System.String str, System.Func`2<System.Char,System.Boolean> charToRemoveFunc)
    // Offset: 0x108C5F0
    static ::Il2CppString* RemoveChar(::Il2CppString* str, System::Func_2<::Il2CppChar, bool>* charToRemoveFunc);
    // static private System.Void .cctor()
    // Offset: 0x108C704
    static void _cctor();
  }; // UnityEngine.Timeline.TimeUtility
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TimeUtility*, "UnityEngine.Timeline", "TimeUtility");
#pragma pack(pop)
