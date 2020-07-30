// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:15 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: WriteState
  struct WriteState;
  // Forward declaring type: XmlWriterSettings
  class XmlWriterSettings;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
  // Forward declaring type: TextWriter
  class TextWriter;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Autogenerated type: System.Xml.XmlWriter
  class XmlWriter : public ::Il2CppObject, public System::IDisposable {
    public:
    // public System.Void WriteStartDocument()
    // Offset: 0xFFFFFFFF
    void WriteStartDocument();
    // public System.Void WriteDocType(System.String name, System.String pubid, System.String sysid, System.String subset)
    // Offset: 0xFFFFFFFF
    void WriteDocType(::Il2CppString* name, ::Il2CppString* pubid, ::Il2CppString* sysid, ::Il2CppString* subset);
    // public System.Void WriteStartElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0xFFFFFFFF
    void WriteStartElement(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // public System.Void WriteStartElement(System.String localName)
    // Offset: 0x192AE88
    void WriteStartElement(::Il2CppString* localName);
    // public System.Void WriteEndElement()
    // Offset: 0xFFFFFFFF
    void WriteEndElement();
    // public System.Void WriteFullEndElement()
    // Offset: 0xFFFFFFFF
    void WriteFullEndElement();
    // public System.Void WriteAttributeString(System.String localName, System.String value)
    // Offset: 0x192AEA0
    void WriteAttributeString(::Il2CppString* localName, ::Il2CppString* value);
    // public System.Void WriteAttributeString(System.String prefix, System.String localName, System.String ns, System.String value)
    // Offset: 0x192AEFC
    void WriteAttributeString(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns, ::Il2CppString* value);
    // public System.Void WriteStartAttribute(System.String prefix, System.String localName, System.String ns)
    // Offset: 0xFFFFFFFF
    void WriteStartAttribute(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // public System.Void WriteEndAttribute()
    // Offset: 0xFFFFFFFF
    void WriteEndAttribute();
    // public System.Void WriteCData(System.String text)
    // Offset: 0xFFFFFFFF
    void WriteCData(::Il2CppString* text);
    // public System.Void WriteComment(System.String text)
    // Offset: 0xFFFFFFFF
    void WriteComment(::Il2CppString* text);
    // public System.Void WriteProcessingInstruction(System.String name, System.String text)
    // Offset: 0xFFFFFFFF
    void WriteProcessingInstruction(::Il2CppString* name, ::Il2CppString* text);
    // public System.Void WriteEntityRef(System.String name)
    // Offset: 0xFFFFFFFF
    void WriteEntityRef(::Il2CppString* name);
    // public System.Void WriteCharEntity(System.Char ch)
    // Offset: 0xFFFFFFFF
    void WriteCharEntity(::Il2CppChar ch);
    // public System.Void WriteWhitespace(System.String ws)
    // Offset: 0xFFFFFFFF
    void WriteWhitespace(::Il2CppString* ws);
    // public System.Void WriteString(System.String text)
    // Offset: 0xFFFFFFFF
    void WriteString(::Il2CppString* text);
    // public System.Void WriteSurrogateCharEntity(System.Char lowChar, System.Char highChar)
    // Offset: 0xFFFFFFFF
    void WriteSurrogateCharEntity(::Il2CppChar lowChar, ::Il2CppChar highChar);
    // public System.Void WriteChars(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0xFFFFFFFF
    void WriteChars(::Array<::Il2CppChar>* buffer, int index, int count);
    // public System.Void WriteRaw(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0xFFFFFFFF
    void WriteRaw(::Array<::Il2CppChar>* buffer, int index, int count);
    // public System.Void WriteRaw(System.String data)
    // Offset: 0xFFFFFFFF
    void WriteRaw(::Il2CppString* data);
    // public System.Void WriteBase64(System.Byte[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0xFFFFFFFF
    void WriteBase64(::Array<uint8_t>* buffer, int index, int count);
    // public System.Void WriteBinHex(System.Byte[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x192AF4C
    void WriteBinHex(::Array<uint8_t>* buffer, int index, int count);
    // public System.Xml.WriteState get_WriteState()
    // Offset: 0xFFFFFFFF
    System::Xml::WriteState get_WriteState();
    // public System.Void Close()
    // Offset: 0x192AF68
    void Close();
    // public System.Void Flush()
    // Offset: 0xFFFFFFFF
    void Flush();
    // public System.String LookupPrefix(System.String ns)
    // Offset: 0xFFFFFFFF
    ::Il2CppString* LookupPrefix(::Il2CppString* ns);
    // public System.Void WriteValue(System.String value)
    // Offset: 0x192AF6C
    void WriteValue(::Il2CppString* value);
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x192AF98
    void Dispose(bool disposing);
    // static public System.Xml.XmlWriter Create(System.IO.Stream output, System.Xml.XmlWriterSettings settings)
    // Offset: 0x192AFEC
    static System::Xml::XmlWriter* Create(System::IO::Stream* output, System::Xml::XmlWriterSettings* settings);
    // static public System.Xml.XmlWriter Create(System.IO.TextWriter output, System.Xml.XmlWriterSettings settings)
    // Offset: 0x192B4A8
    static System::Xml::XmlWriter* Create(System::IO::TextWriter* output, System::Xml::XmlWriterSettings* settings);
    // public System.Void Dispose()
    // Offset: 0x192AF84
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
    // protected System.Void .ctor()
    // Offset: 0x192B7B0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static XmlWriter* New_ctor();
  }; // System.Xml.XmlWriter
}
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlWriter*, "System.Xml", "XmlWriter");
#pragma pack(pop)
