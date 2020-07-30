// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:15 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Xml.XmlRawWriter
#include "System/Xml/XmlRawWriter.hpp"
// Including type: System.Xml.XmlCharType
#include "System/Xml/XmlCharType.hpp"
// Including type: System.Xml.NewLineHandling
#include "System/Xml/NewLineHandling.hpp"
// Including type: System.Xml.XmlStandalone
#include "System/Xml/XmlStandalone.hpp"
// Including type: System.Xml.XmlOutputMethod
#include "System/Xml/XmlOutputMethod.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
  // Forward declaring type: TextWriter
  class TextWriter;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
  // Forward declaring type: Encoder
  class Encoder;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: CharEntityEncoderFallback
  class CharEntityEncoderFallback;
  // Forward declaring type: XmlWriterSettings
  class XmlWriterSettings;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Autogenerated type: System.Xml.XmlEncodedRawTextWriter
  class XmlEncodedRawTextWriter : public System::Xml::XmlRawWriter {
    public:
    // private readonly System.Boolean useAsync
    // Offset: 0x20
    bool useAsync;
    // protected System.Byte[] bufBytes
    // Offset: 0x28
    ::Array<uint8_t>* bufBytes;
    // protected System.IO.Stream stream
    // Offset: 0x30
    System::IO::Stream* stream;
    // protected System.Text.Encoding encoding
    // Offset: 0x38
    System::Text::Encoding* encoding;
    // protected System.Xml.XmlCharType xmlCharType
    // Offset: 0x40
    System::Xml::XmlCharType xmlCharType;
    // protected System.Int32 bufPos
    // Offset: 0x48
    int bufPos;
    // protected System.Int32 textPos
    // Offset: 0x4C
    int textPos;
    // protected System.Int32 contentPos
    // Offset: 0x50
    int contentPos;
    // protected System.Int32 cdataPos
    // Offset: 0x54
    int cdataPos;
    // protected System.Int32 attrEndPos
    // Offset: 0x58
    int attrEndPos;
    // protected System.Int32 bufLen
    // Offset: 0x5C
    int bufLen;
    // protected System.Boolean writeToNull
    // Offset: 0x60
    bool writeToNull;
    // protected System.Boolean hadDoubleBracket
    // Offset: 0x61
    bool hadDoubleBracket;
    // protected System.Boolean inAttributeValue
    // Offset: 0x62
    bool inAttributeValue;
    // protected System.Int32 bufBytesUsed
    // Offset: 0x64
    int bufBytesUsed;
    // protected System.Char[] bufChars
    // Offset: 0x68
    ::Array<::Il2CppChar>* bufChars;
    // protected System.Text.Encoder encoder
    // Offset: 0x70
    System::Text::Encoder* encoder;
    // protected System.IO.TextWriter writer
    // Offset: 0x78
    System::IO::TextWriter* writer;
    // protected System.Boolean trackTextContent
    // Offset: 0x80
    bool trackTextContent;
    // protected System.Boolean inTextContent
    // Offset: 0x81
    bool inTextContent;
    // private System.Int32 lastMarkPos
    // Offset: 0x84
    int lastMarkPos;
    // private System.Int32[] textContentMarks
    // Offset: 0x88
    ::Array<int>* textContentMarks;
    // private System.Xml.CharEntityEncoderFallback charEntityFallback
    // Offset: 0x90
    System::Xml::CharEntityEncoderFallback* charEntityFallback;
    // protected System.Xml.NewLineHandling newLineHandling
    // Offset: 0x98
    System::Xml::NewLineHandling newLineHandling;
    // protected System.Boolean closeOutput
    // Offset: 0x9C
    bool closeOutput;
    // protected System.Boolean omitXmlDeclaration
    // Offset: 0x9D
    bool omitXmlDeclaration;
    // protected System.String newLineChars
    // Offset: 0xA0
    ::Il2CppString* newLineChars;
    // protected System.Boolean checkCharacters
    // Offset: 0xA8
    bool checkCharacters;
    // protected System.Xml.XmlStandalone standalone
    // Offset: 0xAC
    System::Xml::XmlStandalone standalone;
    // protected System.Xml.XmlOutputMethod outputMethod
    // Offset: 0xB0
    System::Xml::XmlOutputMethod outputMethod;
    // protected System.Boolean autoXmlDeclaration
    // Offset: 0xB4
    bool autoXmlDeclaration;
    // protected System.Boolean mergeCDataSections
    // Offset: 0xB5
    bool mergeCDataSections;
    // protected System.Void .ctor(System.Xml.XmlWriterSettings settings)
    // Offset: 0x118DECC
    static XmlEncodedRawTextWriter* New_ctor(System::Xml::XmlWriterSettings* settings);
    // public System.Void .ctor(System.IO.TextWriter writer, System.Xml.XmlWriterSettings settings)
    // Offset: 0x1182BCC
    static XmlEncodedRawTextWriter* New_ctor(System::IO::TextWriter* writer, System::Xml::XmlWriterSettings* settings);
    // public System.Void .ctor(System.IO.Stream stream, System.Xml.XmlWriterSettings settings)
    // Offset: 0x1182E98
    static XmlEncodedRawTextWriter* New_ctor(System::IO::Stream* stream, System::Xml::XmlWriterSettings* settings);
    // protected System.Void FlushBuffer()
    // Offset: 0x1185D94
    void FlushBuffer();
    // private System.Void EncodeChars(System.Int32 startOffset, System.Int32 endOffset, System.Boolean writeAllToStream)
    // Offset: 0x118FE48
    void EncodeChars(int startOffset, int endOffset, bool writeAllToStream);
    // private System.Void FlushEncoder()
    // Offset: 0x118FD38
    void FlushEncoder();
    // protected System.Void WriteAttributeTextBlock(System.Char* pSrc, System.Char* pSrcEnd)
    // Offset: 0x1184924
    void WriteAttributeTextBlock(::Il2CppChar* pSrc, ::Il2CppChar* pSrcEnd);
    // protected System.Void WriteElementTextBlock(System.Char* pSrc, System.Char* pSrcEnd)
    // Offset: 0x1184C18
    void WriteElementTextBlock(::Il2CppChar* pSrc, ::Il2CppChar* pSrcEnd);
    // protected System.Void RawText(System.String s)
    // Offset: 0x1183414
    void RawText(::Il2CppString* s);
    // protected System.Void RawText(System.Char* pSrcBegin, System.Char* pSrcEnd)
    // Offset: 0x1184EFC
    void RawText(::Il2CppChar* pSrcBegin, ::Il2CppChar* pSrcEnd);
    // protected System.Void WriteRawWithCharChecking(System.Char* pSrcBegin, System.Char* pSrcEnd)
    // Offset: 0x118F88C
    void WriteRawWithCharChecking(::Il2CppChar* pSrcBegin, ::Il2CppChar* pSrcEnd);
    // protected System.Void WriteCommentOrPi(System.String text, System.Int32 stopChar)
    // Offset: 0x1184368
    void WriteCommentOrPi(::Il2CppString* text, int stopChar);
    // protected System.Void WriteCDataSection(System.String text)
    // Offset: 0x118ECBC
    void WriteCDataSection(::Il2CppString* text);
    // static private System.Char* EncodeSurrogate(System.Char* pSrc, System.Char* pSrcEnd, System.Char* pDst)
    // Offset: 0x118FFDC
    static ::Il2CppChar* EncodeSurrogate(::Il2CppChar* pSrc, ::Il2CppChar* pSrcEnd, ::Il2CppChar* pDst);
    // private System.Char* InvalidXmlChar(System.Int32 ch, System.Char* pDst, System.Boolean entitize)
    // Offset: 0x1190134
    ::Il2CppChar* InvalidXmlChar(int ch, ::Il2CppChar* pDst, bool entitize);
    // System.Void EncodeChar(System.Char* pSrc, System.Char* pSrcEnd, System.Char* pDst)
    // Offset: 0x1185784
    void EncodeChar(::Il2CppChar*& pSrc, ::Il2CppChar* pSrcEnd, ::Il2CppChar*& pDst);
    // protected System.Void ChangeTextContentMark(System.Boolean value)
    // Offset: 0x118338C
    void ChangeTextContentMark(bool value);
    // private System.Void GrowTextContentMarks()
    // Offset: 0x119036C
    void GrowTextContentMarks();
    // protected System.Char* WriteNewLine(System.Char* pDst)
    // Offset: 0x11901FC
    ::Il2CppChar* WriteNewLine(::Il2CppChar* pDst);
    // static protected System.Char* LtEntity(System.Char* pDst)
    // Offset: 0x118FF84
    static ::Il2CppChar* LtEntity(::Il2CppChar* pDst);
    // static protected System.Char* GtEntity(System.Char* pDst)
    // Offset: 0x118FF9C
    static ::Il2CppChar* GtEntity(::Il2CppChar* pDst);
    // static protected System.Char* AmpEntity(System.Char* pDst)
    // Offset: 0x11856E0
    static ::Il2CppChar* AmpEntity(::Il2CppChar* pDst);
    // static protected System.Char* QuoteEntity(System.Char* pDst)
    // Offset: 0x1185708
    static ::Il2CppChar* QuoteEntity(::Il2CppChar* pDst);
    // static protected System.Char* TabEntity(System.Char* pDst)
    // Offset: 0x118FFB4
    static ::Il2CppChar* TabEntity(::Il2CppChar* pDst);
    // static protected System.Char* LineFeedEntity(System.Char* pDst)
    // Offset: 0x118575C
    static ::Il2CppChar* LineFeedEntity(::Il2CppChar* pDst);
    // static protected System.Char* CarriageReturnEntity(System.Char* pDst)
    // Offset: 0x1185734
    static ::Il2CppChar* CarriageReturnEntity(::Il2CppChar* pDst);
    // static private System.Char* CharEntity(System.Char* pDst, System.Char ch)
    // Offset: 0x11902B4
    static ::Il2CppChar* CharEntity(::Il2CppChar* pDst, ::Il2CppChar ch);
    // static protected System.Char* RawStartCData(System.Char* pDst)
    // Offset: 0x119027C
    static ::Il2CppChar* RawStartCData(::Il2CppChar* pDst);
    // static protected System.Char* RawEndCData(System.Char* pDst)
    // Offset: 0x119025C
    static ::Il2CppChar* RawEndCData(::Il2CppChar* pDst);
    // protected System.Void ValidateContentChars(System.String chars, System.String propertyName, System.Boolean allowOnlyWhitespace)
    // Offset: 0x118DFD8
    void ValidateContentChars(::Il2CppString* chars, ::Il2CppString* propertyName, bool allowOnlyWhitespace);
    // override System.Void WriteXmlDeclaration(System.Xml.XmlStandalone standalone)
    // Offset: 0x118E35C
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteXmlDeclaration(System.Xml.XmlStandalone standalone)
    void WriteXmlDeclaration(System::Xml::XmlStandalone standalone);
    // override System.Void WriteXmlDeclaration(System.String xmldecl)
    // Offset: 0x118E498
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteXmlDeclaration(System.String xmldecl)
    void WriteXmlDeclaration(::Il2CppString* xmldecl);
    // public override System.Void WriteDocType(System.String name, System.String pubid, System.String sysid, System.String subset)
    // Offset: 0x118E524
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteDocType(System.String name, System.String pubid, System.String sysid, System.String subset)
    void WriteDocType(::Il2CppString* name, ::Il2CppString* pubid, ::Il2CppString* sysid, ::Il2CppString* subset);
    // public override System.Void WriteStartElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x11836C0
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteStartElement(System.String prefix, System.String localName, System.String ns)
    void WriteStartElement(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // override System.Void StartElementContent()
    // Offset: 0x118E71C
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::StartElementContent()
    void StartElementContent();
    // override System.Void WriteEndElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x11839F0
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteEndElement(System.String prefix, System.String localName, System.String ns)
    void WriteEndElement(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // override System.Void WriteFullEndElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x1183C94
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteFullEndElement(System.String prefix, System.String localName, System.String ns)
    void WriteFullEndElement(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // public override System.Void WriteStartAttribute(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x1183F58
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteStartAttribute(System.String prefix, System.String localName, System.String ns)
    void WriteStartAttribute(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // public override System.Void WriteEndAttribute()
    // Offset: 0x118E770
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteEndAttribute()
    void WriteEndAttribute();
    // override System.Void WriteNamespaceDeclaration(System.String prefix, System.String namespaceName)
    // Offset: 0x118E7F0
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteNamespaceDeclaration(System.String prefix, System.String namespaceName)
    void WriteNamespaceDeclaration(::Il2CppString* prefix, ::Il2CppString* namespaceName);
    // override System.Boolean get_SupportsNamespaceDeclarationInChunks()
    // Offset: 0x118E848
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Boolean XmlRawWriter::get_SupportsNamespaceDeclarationInChunks()
    bool get_SupportsNamespaceDeclarationInChunks();
    // override System.Void WriteStartNamespaceDeclaration(System.String prefix)
    // Offset: 0x118E850
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteStartNamespaceDeclaration(System.String prefix)
    void WriteStartNamespaceDeclaration(::Il2CppString* prefix);
    // override System.Void WriteEndNamespaceDeclaration()
    // Offset: 0x118E994
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteEndNamespaceDeclaration()
    void WriteEndNamespaceDeclaration();
    // public override System.Void WriteCData(System.String text)
    // Offset: 0x118EA14
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteCData(System.String text)
    void WriteCData(::Il2CppString* text);
    // public override System.Void WriteComment(System.String text)
    // Offset: 0x118EFCC
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteComment(System.String text)
    void WriteComment(::Il2CppString* text);
    // public override System.Void WriteProcessingInstruction(System.String name, System.String text)
    // Offset: 0x118F15C
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteProcessingInstruction(System.String name, System.String text)
    void WriteProcessingInstruction(::Il2CppString* name, ::Il2CppString* text);
    // public override System.Void WriteEntityRef(System.String name)
    // Offset: 0x118F2BC
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteEntityRef(System.String name)
    void WriteEntityRef(::Il2CppString* name);
    // public override System.Void WriteCharEntity(System.Char ch)
    // Offset: 0x118F398
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteCharEntity(System.Char ch)
    void WriteCharEntity(::Il2CppChar ch);
    // public override System.Void WriteWhitespace(System.String ws)
    // Offset: 0x118F58C
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteWhitespace(System.String ws)
    void WriteWhitespace(::Il2CppString* ws);
    // public override System.Void WriteString(System.String text)
    // Offset: 0x118F5FC
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteString(System.String text)
    void WriteString(::Il2CppString* text);
    // public override System.Void WriteSurrogateCharEntity(System.Char lowChar, System.Char highChar)
    // Offset: 0x118F66C
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteSurrogateCharEntity(System.Char lowChar, System.Char highChar)
    void WriteSurrogateCharEntity(::Il2CppChar lowChar, ::Il2CppChar highChar);
    // public override System.Void WriteChars(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x118F7F8
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteChars(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void WriteChars(::Array<::Il2CppChar>* buffer, int index, int count);
    // public override System.Void WriteRaw(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x118A760
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteRaw(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void WriteRaw(::Array<::Il2CppChar>* buffer, int index, int count);
    // public override System.Void WriteRaw(System.String data)
    // Offset: 0x118A6B4
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteRaw(System.String data)
    void WriteRaw(::Il2CppString* data);
    // public override System.Void Close()
    // Offset: 0x118FAB0
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::Close()
    void Close();
    // public override System.Void Flush()
    // Offset: 0x118FDE0
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::Flush()
    void Flush();
  }; // System.Xml.XmlEncodedRawTextWriter
}
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlEncodedRawTextWriter*, "System.Xml", "XmlEncodedRawTextWriter");
#pragma pack(pop)
