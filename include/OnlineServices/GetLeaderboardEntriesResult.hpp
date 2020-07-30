// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:22 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OnlineServices
namespace OnlineServices {
  // Forward declaring type: LeaderboardEntryData
  class LeaderboardEntryData;
}
// Completed forward declares
// Type namespace: OnlineServices
namespace OnlineServices {
  // Autogenerated type: OnlineServices.GetLeaderboardEntriesResult
  struct GetLeaderboardEntriesResult : public System::ValueType {
    public:
    // public readonly System.Boolean isError
    // Offset: 0x0
    bool isError;
    // public readonly OnlineServices.LeaderboardEntryData[] leaderboardEntries
    // Offset: 0x8
    ::Array<OnlineServices::LeaderboardEntryData*>* leaderboardEntries;
    // public readonly System.Int32 referencePlayerScoreIndex
    // Offset: 0x10
    int referencePlayerScoreIndex;
    // Creating value type constructor for type: GetLeaderboardEntriesResult
    GetLeaderboardEntriesResult(bool isError_ = {}, ::Array<OnlineServices::LeaderboardEntryData*>* leaderboardEntries_ = {}, int referencePlayerScoreIndex_ = {}) : isError{isError_}, leaderboardEntries{leaderboardEntries_}, referencePlayerScoreIndex{referencePlayerScoreIndex_} {}
    // public System.Void .ctor(System.Boolean isError, OnlineServices.LeaderboardEntryData[] leaderboardEntries, System.Int32 referencePlayerScoreIndex)
    // Offset: 0xA27EB4
    static GetLeaderboardEntriesResult* New_ctor(bool isError, ::Array<OnlineServices::LeaderboardEntryData*>* leaderboardEntries, int referencePlayerScoreIndex);
    // static public OnlineServices.GetLeaderboardEntriesResult get_resultWithError()
    // Offset: 0xC2E7AC
    static OnlineServices::GetLeaderboardEntriesResult get_resultWithError();
  }; // OnlineServices.GetLeaderboardEntriesResult
}
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::GetLeaderboardEntriesResult, "OnlineServices", "GetLeaderboardEntriesResult");
#pragma pack(pop)
