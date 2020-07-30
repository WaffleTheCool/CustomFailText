// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:11 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: OnlineServices.ILeaderboardsModel
#include "OnlineServices/ILeaderboardsModel.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlatformUserModelSO
  class PlatformUserModelSO;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: OnlineServices::API
namespace OnlineServices::API {
  // Forward declaring type: IApiLeaderboardsModel
  class IApiLeaderboardsModel;
  // Forward declaring type: IUserLoginDtoDataSource
  class IUserLoginDtoDataSource;
}
// Forward declaring namespace: OnlineServices
namespace OnlineServices {
  // Forward declaring type: PlatformUserNamesLoader
  class PlatformUserNamesLoader;
  // Forward declaring type: GetLeaderboardFilterData
  struct GetLeaderboardFilterData;
  // Forward declaring type: LevelScoreResultsData
  struct LevelScoreResultsData;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: HTTPLeaderboardsModel
  class HTTPLeaderboardsModel : public ::Il2CppObject, public OnlineServices::ILeaderboardsModel {
    public:
    // Nested type: GlobalNamespace::HTTPLeaderboardsModel::$$c
    class $$c;
    // Nested type: GlobalNamespace::HTTPLeaderboardsModel::$GetLeaderboardEntriesAsync$d__12
    struct $GetLeaderboardEntriesAsync$d__12;
    // Nested type: GlobalNamespace::HTTPLeaderboardsModel::$SendLevelScoreResultAsync$d__13
    struct $SendLevelScoreResultAsync$d__13;
    // private System.Action`1<System.String> scoreForLeaderboardDidUploadEvent
    // Offset: 0x10
    System::Action_1<::Il2CppString*>* scoreForLeaderboardDidUploadEvent;
    // private OnlineServices.API.IApiLeaderboardsModel _apiLeaderboardsModel
    // Offset: 0x18
    OnlineServices::API::IApiLeaderboardsModel* apiLeaderboardsModel;
    // private OnlineServices.API.IUserLoginDtoDataSource _userLoginDataSource
    // Offset: 0x20
    OnlineServices::API::IUserLoginDtoDataSource* userLoginDataSource;
    // private System.String _guid
    // Offset: 0x28
    ::Il2CppString* guid;
    // private System.String[] _friendsUserIds
    // Offset: 0x30
    ::Array<::Il2CppString*>* friendsUserIds;
    // private System.String _platformUserId
    // Offset: 0x38
    ::Il2CppString* platformUserId;
    // private OnlineServices.PlatformUserNamesLoader _platformUserNamesLoader
    // Offset: 0x40
    OnlineServices::PlatformUserNamesLoader* platformUserNamesLoader;
    // public System.Void add_scoreForLeaderboardDidUploadEvent(System.Action`1<System.String> value)
    // Offset: 0xB412E0
    void add_scoreForLeaderboardDidUploadEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void remove_scoreForLeaderboardDidUploadEvent(System.Action`1<System.String> value)
    // Offset: 0xB41384
    void remove_scoreForLeaderboardDidUploadEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void .ctor(System.String hostName, PlatformUserModelSO platformUserModel, OnlineServices.PlatformUserNamesLoader platformUserNamesLoader)
    // Offset: 0xB41428
    static HTTPLeaderboardsModel* New_ctor(::Il2CppString* hostName, GlobalNamespace::PlatformUserModelSO* platformUserModel, OnlineServices::PlatformUserNamesLoader* platformUserNamesLoader);
    // public System.Void LogoutAsync()
    // Offset: 0xB41560
    void LogoutAsync();
    // public System.String GetLeaderboardId(IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0xB41614
    // Implemented from: OnlineServices.ILeaderboardsModel
    // Base method: System.String ILeaderboardsModel::GetLeaderboardId(IDifficultyBeatmap difficultyBeatmap)
    ::Il2CppString* GetLeaderboardId(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
    // public System.Threading.Tasks.Task`1<OnlineServices.GetLeaderboardEntriesResult> GetLeaderboardEntriesAsync(OnlineServices.GetLeaderboardFilterData leaderboardFilterData, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xB418F4
    // Implemented from: OnlineServices.ILeaderboardsModel
    // Base method: System.Threading.Tasks.Task`1<OnlineServices.GetLeaderboardEntriesResult> ILeaderboardsModel::GetLeaderboardEntriesAsync(OnlineServices.GetLeaderboardFilterData leaderboardFilterData, System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<OnlineServices::GetLeaderboardEntriesResult>* GetLeaderboardEntriesAsync(OnlineServices::GetLeaderboardFilterData leaderboardFilterData, System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<OnlineServices.SendLeaderboardEntryResult> SendLevelScoreResultAsync(OnlineServices.LevelScoreResultsData levelResultsData, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xB41A58
    // Implemented from: OnlineServices.ILeaderboardsModel
    // Base method: System.Threading.Tasks.Task`1<OnlineServices.SendLeaderboardEntryResult> ILeaderboardsModel::SendLevelScoreResultAsync(OnlineServices.LevelScoreResultsData levelResultsData, System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<OnlineServices::SendLeaderboardEntryResult>* SendLevelScoreResultAsync(OnlineServices::LevelScoreResultsData levelResultsData, System::Threading::CancellationToken cancellationToken);
  }; // HTTPLeaderboardsModel
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HTTPLeaderboardsModel*, "", "HTTPLeaderboardsModel");
#pragma pack(pop)
