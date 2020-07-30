// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:12 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Text.RegularExpressions.Group
#include "System/Text/RegularExpressions/Group.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: GroupCollection
  class GroupCollection;
  // Forward declaring type: Regex
  class Regex;
}
// Completed forward declares
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Autogenerated type: System.Text.RegularExpressions.Match
  class Match : public System::Text::RegularExpressions::Group {
    public:
    // Get static field: static System.Text.RegularExpressions.Match _empty
    static System::Text::RegularExpressions::Match* _get__empty();
    // Set static field: static System.Text.RegularExpressions.Match _empty
    static void _set__empty(System::Text::RegularExpressions::Match* value);
    // System.Text.RegularExpressions.GroupCollection _groupcoll
    // Offset: 0x38
    System::Text::RegularExpressions::GroupCollection* groupcoll;
    // System.Text.RegularExpressions.Regex _regex
    // Offset: 0x40
    System::Text::RegularExpressions::Regex* regex;
    // System.Int32 _textbeg
    // Offset: 0x48
    int textbeg;
    // System.Int32 _textpos
    // Offset: 0x4C
    int textpos;
    // System.Int32 _textend
    // Offset: 0x50
    int textend;
    // System.Int32 _textstart
    // Offset: 0x54
    int textstart;
    // System.Int32[][] _matches
    // Offset: 0x58
    ::Array<::Array<int>*>* matches;
    // System.Int32[] _matchcount
    // Offset: 0x60
    ::Array<int>* matchcount;
    // System.Boolean _balancing
    // Offset: 0x68
    bool balancing;
    // static public System.Text.RegularExpressions.Match get_Empty()
    // Offset: 0x1207860
    static System::Text::RegularExpressions::Match* get_Empty();
    // System.Void .ctor(System.Text.RegularExpressions.Regex regex, System.Int32 capcount, System.String text, System.Int32 begpos, System.Int32 len, System.Int32 startpos)
    // Offset: 0x12078C8
    static Match* New_ctor(System::Text::RegularExpressions::Regex* regex, int capcount, ::Il2CppString* text, int begpos, int len, int startpos);
    // System.Void Reset(System.Text.RegularExpressions.Regex regex, System.String text, System.Int32 textbeg, System.Int32 textend, System.Int32 textstart)
    // Offset: 0x1207A58
    void Reset(System::Text::RegularExpressions::Regex* regex, ::Il2CppString* text, int textbeg, int textend, int textstart);
    // public System.Text.RegularExpressions.GroupCollection get_Groups()
    // Offset: 0x1207B00
    System::Text::RegularExpressions::GroupCollection* get_Groups();
    // public System.Text.RegularExpressions.Match NextMatch()
    // Offset: 0x1207B88
    System::Text::RegularExpressions::Match* NextMatch();
    // System.Void AddMatch(System.Int32 cap, System.Int32 start, System.Int32 len)
    // Offset: 0x1207E6C
    void AddMatch(int cap, int start, int len);
    // System.Void BalanceMatch(System.Int32 cap)
    // Offset: 0x12080E0
    void BalanceMatch(int cap);
    // System.Void RemoveMatch(System.Int32 cap)
    // Offset: 0x12081C4
    void RemoveMatch(int cap);
    // System.Boolean IsMatched(System.Int32 cap)
    // Offset: 0x1208208
    bool IsMatched(int cap);
    // System.Int32 MatchIndex(System.Int32 cap)
    // Offset: 0x12082A4
    int MatchIndex(int cap);
    // System.Int32 MatchLength(System.Int32 cap)
    // Offset: 0x120833C
    int MatchLength(int cap);
    // System.Void Tidy(System.Int32 textpos)
    // Offset: 0x12083D4
    void Tidy(int textpos);
    // static private System.Void .cctor()
    // Offset: 0x1208568
    // Implemented from: System.Text.RegularExpressions.Group
    // Base method: System.Void Group::.cctor()
    static void _cctor();
    // System.Void .ctor()
    // Offset: 0x1208600
    // Implemented from: System.Text.RegularExpressions.Group
    // Base method: System.Void Group::.ctor()
    // Base method: System.Void Capture::.ctor()
    // Base method: System.Void Object::.ctor()
    static Match* New_ctor();
  }; // System.Text.RegularExpressions.Match
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::Match*, "System.Text.RegularExpressions", "Match");
#pragma pack(pop)
