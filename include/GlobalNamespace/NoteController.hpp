// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:13 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: INoteController
#include "GlobalNamespace/INoteController.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteMovement
  class NoteMovement;
  // Forward declaring type: NoteCutInfo
  class NoteCutInfo;
  // Forward declaring type: NoteData
  class NoteData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: NoteController
  class NoteController : public UnityEngine::MonoBehaviour, public GlobalNamespace::INoteController {
    public:
    // Nested type: GlobalNamespace::NoteController::Pool
    class Pool;
    // Nested type: GlobalNamespace::NoteController::$DissolveCoroutine$d__64
    class $DissolveCoroutine$d__64;
    // protected NoteMovement _noteMovement
    // Offset: 0x18
    GlobalNamespace::NoteMovement* noteMovement;
    // private UnityEngine.Transform _noteTransform
    // Offset: 0x20
    UnityEngine::Transform* noteTransform;
    // private System.Action`1<NoteController> didInitEvent
    // Offset: 0x28
    System::Action_1<GlobalNamespace::NoteController*>* didInitEvent;
    // private System.Action`1<NoteController> noteDidStartJumpEvent
    // Offset: 0x30
    System::Action_1<GlobalNamespace::NoteController*>* noteDidStartJumpEvent;
    // private System.Action`1<NoteController> noteDidFinishJumpEvent
    // Offset: 0x38
    System::Action_1<GlobalNamespace::NoteController*>* noteDidFinishJumpEvent;
    // private System.Action`1<NoteController> noteDidPassJumpThreeQuartersEvent
    // Offset: 0x40
    System::Action_1<GlobalNamespace::NoteController*>* noteDidPassJumpThreeQuartersEvent;
    // private System.Action`2<NoteController,NoteCutInfo> noteWasCutEvent
    // Offset: 0x48
    System::Action_2<GlobalNamespace::NoteController*, GlobalNamespace::NoteCutInfo*>* noteWasCutEvent;
    // private System.Action`1<NoteController> noteWasMissedEvent
    // Offset: 0x50
    System::Action_1<GlobalNamespace::NoteController*>* noteWasMissedEvent;
    // private System.Action`2<NoteController,System.Single> noteDidStartDissolvingEvent
    // Offset: 0x58
    System::Action_2<GlobalNamespace::NoteController*, float>* noteDidStartDissolvingEvent;
    // private System.Action`1<NoteController> noteDidDissolveEvent
    // Offset: 0x60
    System::Action_1<GlobalNamespace::NoteController*>* noteDidDissolveEvent;
    // private NoteData _noteData
    // Offset: 0x68
    GlobalNamespace::NoteData* noteData;
    // private System.Boolean _dissolving
    // Offset: 0x70
    bool dissolving;
    // public System.Void add_didInitEvent(System.Action`1<NoteController> value)
    // Offset: 0xBFE7E4
    void add_didInitEvent(System::Action_1<GlobalNamespace::NoteController*>* value);
    // public System.Void remove_didInitEvent(System.Action`1<NoteController> value)
    // Offset: 0xBFE888
    void remove_didInitEvent(System::Action_1<GlobalNamespace::NoteController*>* value);
    // public System.Void add_noteDidStartJumpEvent(System.Action`1<NoteController> value)
    // Offset: 0xBFE92C
    void add_noteDidStartJumpEvent(System::Action_1<GlobalNamespace::NoteController*>* value);
    // public System.Void remove_noteDidStartJumpEvent(System.Action`1<NoteController> value)
    // Offset: 0xBFE9D0
    void remove_noteDidStartJumpEvent(System::Action_1<GlobalNamespace::NoteController*>* value);
    // public System.Void add_noteDidFinishJumpEvent(System.Action`1<NoteController> value)
    // Offset: 0xBFEA74
    void add_noteDidFinishJumpEvent(System::Action_1<GlobalNamespace::NoteController*>* value);
    // public System.Void remove_noteDidFinishJumpEvent(System.Action`1<NoteController> value)
    // Offset: 0xBFEB18
    void remove_noteDidFinishJumpEvent(System::Action_1<GlobalNamespace::NoteController*>* value);
    // public System.Void add_noteDidPassJumpThreeQuartersEvent(System.Action`1<NoteController> value)
    // Offset: 0xBFEBBC
    void add_noteDidPassJumpThreeQuartersEvent(System::Action_1<GlobalNamespace::NoteController*>* value);
    // public System.Void remove_noteDidPassJumpThreeQuartersEvent(System.Action`1<NoteController> value)
    // Offset: 0xBFEC60
    void remove_noteDidPassJumpThreeQuartersEvent(System::Action_1<GlobalNamespace::NoteController*>* value);
    // public System.Void add_noteWasCutEvent(System.Action`2<NoteController,NoteCutInfo> value)
    // Offset: 0xBFED04
    void add_noteWasCutEvent(System::Action_2<GlobalNamespace::NoteController*, GlobalNamespace::NoteCutInfo*>* value);
    // public System.Void remove_noteWasCutEvent(System.Action`2<NoteController,NoteCutInfo> value)
    // Offset: 0xBFEDA8
    void remove_noteWasCutEvent(System::Action_2<GlobalNamespace::NoteController*, GlobalNamespace::NoteCutInfo*>* value);
    // public System.Void add_noteWasMissedEvent(System.Action`1<NoteController> value)
    // Offset: 0xBFEE4C
    void add_noteWasMissedEvent(System::Action_1<GlobalNamespace::NoteController*>* value);
    // public System.Void remove_noteWasMissedEvent(System.Action`1<NoteController> value)
    // Offset: 0xBFEEF0
    void remove_noteWasMissedEvent(System::Action_1<GlobalNamespace::NoteController*>* value);
    // public System.Void add_noteDidStartDissolvingEvent(System.Action`2<NoteController,System.Single> value)
    // Offset: 0xBFEF94
    void add_noteDidStartDissolvingEvent(System::Action_2<GlobalNamespace::NoteController*, float>* value);
    // public System.Void remove_noteDidStartDissolvingEvent(System.Action`2<NoteController,System.Single> value)
    // Offset: 0xBFF038
    void remove_noteDidStartDissolvingEvent(System::Action_2<GlobalNamespace::NoteController*, float>* value);
    // public System.Void add_noteDidDissolveEvent(System.Action`1<NoteController> value)
    // Offset: 0xBFF0DC
    void add_noteDidDissolveEvent(System::Action_1<GlobalNamespace::NoteController*>* value);
    // public System.Void remove_noteDidDissolveEvent(System.Action`1<NoteController> value)
    // Offset: 0xBFF180
    void remove_noteDidDissolveEvent(System::Action_1<GlobalNamespace::NoteController*>* value);
    // public System.Single get_moveStartTime()
    // Offset: 0xBFF26C
    float get_moveStartTime();
    // public System.Single get_moveDuration()
    // Offset: 0xBFF288
    float get_moveDuration();
    // public System.Single get_jumpDuration()
    // Offset: 0xBFF2A4
    float get_jumpDuration();
    // public UnityEngine.Vector3 get_beatPos()
    // Offset: 0xBFF2DC
    UnityEngine::Vector3 get_beatPos();
    // public System.Void set_hide(System.Boolean value)
    // Offset: 0xFFFFFFFF
    void set_hide(bool value);
    // protected System.Void Awake()
    // Offset: 0xBFF2F8
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0xBFF448
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0xBFF5E0
    void Update();
    // private System.Void HandleNoteDidStartJumpEvent()
    // Offset: 0xBFF5FC
    void HandleNoteDidStartJumpEvent();
    // private System.Void HandleNoteDidFinishJumpEvent()
    // Offset: 0xBFF674
    void HandleNoteDidFinishJumpEvent();
    // private System.Void HandleNoteDidPassJumpThreeQuartersEvent(NoteMovement noteMovement)
    // Offset: 0xBFF6F4
    void HandleNoteDidPassJumpThreeQuartersEvent(GlobalNamespace::NoteMovement* noteMovement);
    // private System.Void HandleNoteDidPassMissedMarkerEvent()
    // Offset: 0xBFF788
    void HandleNoteDidPassMissedMarkerEvent();
    // protected System.Void NoteDidStartJump()
    // Offset: 0xBFF7A4
    void NoteDidStartJump();
    // protected System.Void NoteDidFinishJump()
    // Offset: 0xBFF7A8
    void NoteDidFinishJump();
    // protected System.Void NoteDidPassJumpThreeQuarters(NoteMovement noteMovement)
    // Offset: 0xBFF7AC
    void NoteDidPassJumpThreeQuarters(GlobalNamespace::NoteMovement* noteMovement);
    // protected System.Void NoteDidPassMissedMarker()
    // Offset: 0xBFF7B0
    void NoteDidPassMissedMarker();
    // protected System.Void NoteDidStartDissolving()
    // Offset: 0xBFF7B4
    void NoteDidStartDissolving();
    // protected System.Void SendNoteWasMissedEvent()
    // Offset: 0xBFF7B8
    void SendNoteWasMissedEvent();
    // protected System.Void SendNoteWasCutEvent(NoteCutInfo noteCutInfo)
    // Offset: 0xBFF81C
    void SendNoteWasCutEvent(GlobalNamespace::NoteCutInfo* noteCutInfo);
    // public System.Void Init(NoteData noteData, System.Single worldRotation, UnityEngine.Vector3 moveStartPos, UnityEngine.Vector3 moveEndPos, UnityEngine.Vector3 jumpEndPos, System.Single moveDuration, System.Single jumpDuration, System.Single jumpGravity, System.Single cutDirectionAngleOffset)
    // Offset: 0xBFF894
    void Init(GlobalNamespace::NoteData* noteData, float worldRotation, UnityEngine::Vector3 moveStartPos, UnityEngine::Vector3 moveEndPos, UnityEngine::Vector3 jumpEndPos, float moveDuration, float jumpDuration, float jumpGravity, float cutDirectionAngleOffset);
    // private System.Collections.IEnumerator DissolveCoroutine(System.Single duration)
    // Offset: 0xBFF9D8
    System::Collections::IEnumerator* DissolveCoroutine(float duration);
    // public System.Void Dissolve(System.Single duration)
    // Offset: 0xBFFA90
    void Dissolve(float duration);
    // public NoteData get_noteData()
    // Offset: 0xBFF224
    // Implemented from: INoteController
    // Base method: NoteData INoteController::get_noteData()
    GlobalNamespace::NoteData* get_noteData();
    // public UnityEngine.Transform get_noteTransform()
    // Offset: 0xBFF22C
    // Implemented from: INoteController
    // Base method: UnityEngine.Transform INoteController::get_noteTransform()
    UnityEngine::Transform* get_noteTransform();
    // public UnityEngine.Quaternion get_worldRotation()
    // Offset: 0xBFF234
    // Implemented from: INoteController
    // Base method: UnityEngine.Quaternion INoteController::get_worldRotation()
    UnityEngine::Quaternion get_worldRotation();
    // public UnityEngine.Quaternion get_inverseWorldRotation()
    // Offset: 0xBFF250
    // Implemented from: INoteController
    // Base method: UnityEngine.Quaternion INoteController::get_inverseWorldRotation()
    UnityEngine::Quaternion get_inverseWorldRotation();
    // public UnityEngine.Vector3 get_jumpMoveVec()
    // Offset: 0xBFF2C0
    // Implemented from: INoteController
    // Base method: UnityEngine.Vector3 INoteController::get_jumpMoveVec()
    UnityEngine::Vector3 get_jumpMoveVec();
    // protected System.Void .ctor()
    // Offset: 0xBFFAF4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static NoteController* New_ctor();
  }; // NoteController
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteController*, "", "NoteController");
#pragma pack(pop)
