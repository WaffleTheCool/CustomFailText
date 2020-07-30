// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:12 PM
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
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: RegexFC
  class RegexFC;
  // Forward declaring type: RegexPrefix
  class RegexPrefix;
  // Forward declaring type: RegexTree
  class RegexTree;
  // Forward declaring type: RegexNode
  class RegexNode;
}
// Completed forward declares
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Autogenerated type: System.Text.RegularExpressions.RegexFCD
  class RegexFCD : public ::Il2CppObject {
    public:
    // private System.Int32[] _intStack
    // Offset: 0x10
    ::Array<int>* intStack;
    // private System.Int32 _intDepth
    // Offset: 0x18
    int intDepth;
    // private System.Text.RegularExpressions.RegexFC[] _fcStack
    // Offset: 0x20
    ::Array<System::Text::RegularExpressions::RegexFC*>* fcStack;
    // private System.Int32 _fcDepth
    // Offset: 0x28
    int fcDepth;
    // private System.Boolean _skipAllChildren
    // Offset: 0x2C
    bool skipAllChildren;
    // private System.Boolean _skipchild
    // Offset: 0x2D
    bool skipchild;
    // private System.Boolean _failed
    // Offset: 0x2E
    bool failed;
    // static System.Text.RegularExpressions.RegexPrefix FirstChars(System.Text.RegularExpressions.RegexTree t)
    // Offset: 0x1212604
    static System::Text::RegularExpressions::RegexPrefix* FirstChars(System::Text::RegularExpressions::RegexTree* t);
    // static System.Text.RegularExpressions.RegexPrefix Prefix(System.Text.RegularExpressions.RegexTree tree)
    // Offset: 0x121291C
    static System::Text::RegularExpressions::RegexPrefix* Prefix(System::Text::RegularExpressions::RegexTree* tree);
    // static System.Int32 Anchors(System.Text.RegularExpressions.RegexTree tree)
    // Offset: 0x1212C54
    static int Anchors(System::Text::RegularExpressions::RegexTree* tree);
    // static private System.Int32 AnchorFromType(System.Int32 type)
    // Offset: 0x1212D88
    static int AnchorFromType(int type);
    // private System.Void PushInt(System.Int32 I)
    // Offset: 0x1212DF4
    void PushInt(int I);
    // private System.Boolean IntIsEmpty()
    // Offset: 0x1212EE8
    bool IntIsEmpty();
    // private System.Int32 PopInt()
    // Offset: 0x1212EF8
    int PopInt();
    // private System.Void PushFC(System.Text.RegularExpressions.RegexFC fc)
    // Offset: 0x1212F40
    void PushFC(System::Text::RegularExpressions::RegexFC* fc);
    // private System.Boolean FCIsEmpty()
    // Offset: 0x1213068
    bool FCIsEmpty();
    // private System.Text.RegularExpressions.RegexFC PopFC()
    // Offset: 0x1213078
    System::Text::RegularExpressions::RegexFC* PopFC();
    // private System.Text.RegularExpressions.RegexFC TopFC()
    // Offset: 0x12130C0
    System::Text::RegularExpressions::RegexFC* TopFC();
    // private System.Text.RegularExpressions.RegexFC RegexFCFromRegexTree(System.Text.RegularExpressions.RegexTree tree)
    // Offset: 0x12127B0
    System::Text::RegularExpressions::RegexFC* RegexFCFromRegexTree(System::Text::RegularExpressions::RegexTree* tree);
    // private System.Void SkipChild()
    // Offset: 0x1213570
    void SkipChild();
    // private System.Void CalculateFC(System.Int32 NodeType, System.Text.RegularExpressions.RegexNode node, System.Int32 CurIndex)
    // Offset: 0x1213104
    void CalculateFC(int NodeType, System::Text::RegularExpressions::RegexNode* node, int CurIndex);
    // private System.Void .ctor()
    // Offset: 0x1212720
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static RegexFCD* New_ctor();
  }; // System.Text.RegularExpressions.RegexFCD
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::RegexFCD*, "System.Text.RegularExpressions", "RegexFCD");
#pragma pack(pop)
