// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:29 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: EncoderFallback
  class EncoderFallback;
  // Forward declaring type: DecoderFallback
  class DecoderFallback;
  // Forward declaring type: EncoderNLS
  class EncoderNLS;
  // Forward declaring type: DecoderNLS
  class DecoderNLS;
  // Forward declaring type: Decoder
  class Decoder;
  // Forward declaring type: Encoder
  class Encoder;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CodePageDataItem
  class CodePageDataItem;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: StreamingContext
  struct StreamingContext;
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Autogenerated type: System.Text.Encoding
  class Encoding : public ::Il2CppObject, public System::ICloneable {
    public:
    // Nested type: System::Text::Encoding::DefaultEncoder
    class DefaultEncoder;
    // Nested type: System::Text::Encoding::DefaultDecoder
    class DefaultDecoder;
    // Nested type: System::Text::Encoding::EncodingCharBuffer
    class EncodingCharBuffer;
    // Nested type: System::Text::Encoding::EncodingByteBuffer
    class EncodingByteBuffer;
    // Get static field: static private System.Text.Encoding defaultEncoding
    static System::Text::Encoding* _get_defaultEncoding();
    // Set static field: static private System.Text.Encoding defaultEncoding
    static void _set_defaultEncoding(System::Text::Encoding* value);
    // Get static field: static private System.Text.Encoding unicodeEncoding
    static System::Text::Encoding* _get_unicodeEncoding();
    // Set static field: static private System.Text.Encoding unicodeEncoding
    static void _set_unicodeEncoding(System::Text::Encoding* value);
    // Get static field: static private System.Text.Encoding bigEndianUnicode
    static System::Text::Encoding* _get_bigEndianUnicode();
    // Set static field: static private System.Text.Encoding bigEndianUnicode
    static void _set_bigEndianUnicode(System::Text::Encoding* value);
    // Get static field: static private System.Text.Encoding utf7Encoding
    static System::Text::Encoding* _get_utf7Encoding();
    // Set static field: static private System.Text.Encoding utf7Encoding
    static void _set_utf7Encoding(System::Text::Encoding* value);
    // Get static field: static private System.Text.Encoding utf8Encoding
    static System::Text::Encoding* _get_utf8Encoding();
    // Set static field: static private System.Text.Encoding utf8Encoding
    static void _set_utf8Encoding(System::Text::Encoding* value);
    // Get static field: static private System.Text.Encoding utf32Encoding
    static System::Text::Encoding* _get_utf32Encoding();
    // Set static field: static private System.Text.Encoding utf32Encoding
    static void _set_utf32Encoding(System::Text::Encoding* value);
    // Get static field: static private System.Text.Encoding asciiEncoding
    static System::Text::Encoding* _get_asciiEncoding();
    // Set static field: static private System.Text.Encoding asciiEncoding
    static void _set_asciiEncoding(System::Text::Encoding* value);
    // Get static field: static private System.Text.Encoding latin1Encoding
    static System::Text::Encoding* _get_latin1Encoding();
    // Set static field: static private System.Text.Encoding latin1Encoding
    static void _set_latin1Encoding(System::Text::Encoding* value);
    // Get static field: static private System.Collections.Hashtable encodings
    static System::Collections::Hashtable* _get_encodings();
    // Set static field: static private System.Collections.Hashtable encodings
    static void _set_encodings(System::Collections::Hashtable* value);
    // System.Int32 m_codePage
    // Offset: 0x10
    int m_codePage;
    // System.Globalization.CodePageDataItem dataItem
    // Offset: 0x18
    System::Globalization::CodePageDataItem* dataItem;
    // System.Boolean m_deserializedFromEverett
    // Offset: 0x20
    bool m_deserializedFromEverett;
    // private System.Boolean m_isReadOnly
    // Offset: 0x21
    bool m_isReadOnly;
    // System.Text.EncoderFallback encoderFallback
    // Offset: 0x28
    System::Text::EncoderFallback* encoderFallback;
    // System.Text.DecoderFallback decoderFallback
    // Offset: 0x30
    System::Text::DecoderFallback* decoderFallback;
    // Get static field: static private System.Object s_InternalSyncObject
    static ::Il2CppObject* _get_s_InternalSyncObject();
    // Set static field: static private System.Object s_InternalSyncObject
    static void _set_s_InternalSyncObject(::Il2CppObject* value);
    // protected System.Void .ctor(System.Int32 codePage)
    // Offset: 0x12D2C80
    static Encoding* New_ctor(int codePage);
    // System.Void SetDefaultFallbacks()
    // Offset: 0x12DA494
    void SetDefaultFallbacks();
    // System.Void OnDeserializing()
    // Offset: 0x12DA5EC
    void OnDeserializing();
    // System.Void OnDeserialized()
    // Offset: 0x12DA62C
    void OnDeserialized();
    // private System.Void OnDeserializing(System.Runtime.Serialization.StreamingContext ctx)
    // Offset: 0x12DA67C
    void OnDeserializing(System::Runtime::Serialization::StreamingContext ctx);
    // private System.Void OnDeserialized(System.Runtime.Serialization.StreamingContext ctx)
    // Offset: 0x12DA6BC
    void OnDeserialized(System::Runtime::Serialization::StreamingContext ctx);
    // private System.Void OnSerializing(System.Runtime.Serialization.StreamingContext ctx)
    // Offset: 0x12DA6C0
    void OnSerializing(System::Runtime::Serialization::StreamingContext ctx);
    // System.Void DeserializeEncoding(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x12DA6CC
    void DeserializeEncoding(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // System.Void SerializeEncoding(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x12DAA28
    void SerializeEncoding(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // static private System.Object get_InternalSyncObject()
    // Offset: 0x12DAB74
    static ::Il2CppObject* get_InternalSyncObject();
    // static public System.Text.Encoding GetEncoding(System.Int32 codepage)
    // Offset: 0x12DAC08
    static System::Text::Encoding* GetEncoding(int codepage);
    // static public System.Text.Encoding GetEncoding(System.String name)
    // Offset: 0x12DC0E4
    static System::Text::Encoding* GetEncoding(::Il2CppString* name);
    // public System.Byte[] GetPreamble()
    // Offset: 0x12DC28C
    ::Array<uint8_t>* GetPreamble();
    // private System.Void GetDataItem()
    // Offset: 0x12DC2F4
    void GetDataItem();
    // public System.String get_EncodingName()
    // Offset: 0x12DC440
    ::Il2CppString* get_EncodingName();
    // public System.String get_WebName()
    // Offset: 0x12DC44C
    ::Il2CppString* get_WebName();
    // public System.Text.EncoderFallback get_EncoderFallback()
    // Offset: 0x12DC488
    System::Text::EncoderFallback* get_EncoderFallback();
    // public System.Void set_EncoderFallback(System.Text.EncoderFallback value)
    // Offset: 0x12DC490
    void set_EncoderFallback(System::Text::EncoderFallback* value);
    // public System.Text.DecoderFallback get_DecoderFallback()
    // Offset: 0x12DC580
    System::Text::DecoderFallback* get_DecoderFallback();
    // public System.Void set_DecoderFallback(System.Text.DecoderFallback value)
    // Offset: 0x12DC588
    void set_DecoderFallback(System::Text::DecoderFallback* value);
    // public System.Boolean get_IsReadOnly()
    // Offset: 0x12DC708
    bool get_IsReadOnly();
    // static public System.Text.Encoding get_ASCII()
    // Offset: 0x12D2BD8
    static System::Text::Encoding* get_ASCII();
    // static private System.Text.Encoding get_Latin1()
    // Offset: 0x12DB9D0
    static System::Text::Encoding* get_Latin1();
    // public System.Int32 GetByteCount(System.String s)
    // Offset: 0x12DC718
    int GetByteCount(::Il2CppString* s);
    // public System.Int32 GetByteCount(System.Char[] chars, System.Int32 index, System.Int32 count)
    // Offset: 0xFFFFFFFF
    int GetByteCount(::Array<::Il2CppChar>* chars, int index, int count);
    // public System.Int32 GetByteCount(System.Char* chars, System.Int32 count)
    // Offset: 0x12DC7D0
    int GetByteCount(::Il2CppChar* chars, int count);
    // System.Int32 GetByteCount(System.Char* chars, System.Int32 count, System.Text.EncoderNLS encoder)
    // Offset: 0x12DC940
    int GetByteCount(::Il2CppChar* chars, int count, System::Text::EncoderNLS* encoder);
    // public System.Byte[] GetBytes(System.Char[] chars, System.Int32 index, System.Int32 count)
    // Offset: 0x12DC94C
    ::Array<uint8_t>* GetBytes(::Array<::Il2CppChar>* chars, int index, int count);
    // public System.Int32 GetBytes(System.Char[] chars, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex)
    // Offset: 0xFFFFFFFF
    int GetBytes(::Array<::Il2CppChar>* chars, int charIndex, int charCount, ::Array<uint8_t>* bytes, int byteIndex);
    // public System.Byte[] GetBytes(System.String s)
    // Offset: 0x12DCA0C
    ::Array<uint8_t>* GetBytes(::Il2CppString* s);
    // public System.Int32 GetBytes(System.String s, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex)
    // Offset: 0x12DCB14
    int GetBytes(::Il2CppString* s, int charIndex, int charCount, ::Array<uint8_t>* bytes, int byteIndex);
    // System.Int32 GetBytes(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount, System.Text.EncoderNLS encoder)
    // Offset: 0x12DCBF0
    int GetBytes(::Il2CppChar* chars, int charCount, uint8_t* bytes, int byteCount, System::Text::EncoderNLS* encoder);
    // public System.Int32 GetBytes(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount)
    // Offset: 0x12DCC00
    int GetBytes(::Il2CppChar* chars, int charCount, uint8_t* bytes, int byteCount);
    // public System.Int32 GetCharCount(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    // Offset: 0xFFFFFFFF
    int GetCharCount(::Array<uint8_t>* bytes, int index, int count);
    // public System.Int32 GetCharCount(System.Byte* bytes, System.Int32 count)
    // Offset: 0x12DCE20
    int GetCharCount(uint8_t* bytes, int count);
    // System.Int32 GetCharCount(System.Byte* bytes, System.Int32 count, System.Text.DecoderNLS decoder)
    // Offset: 0x12DCF94
    int GetCharCount(uint8_t* bytes, int count, System::Text::DecoderNLS* decoder);
    // public System.Char[] GetChars(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    // Offset: 0x12DCFA4
    ::Array<::Il2CppChar>* GetChars(::Array<uint8_t>* bytes, int index, int count);
    // public System.Int32 GetChars(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Char[] chars, System.Int32 charIndex)
    // Offset: 0xFFFFFFFF
    int GetChars(::Array<uint8_t>* bytes, int byteIndex, int byteCount, ::Array<::Il2CppChar>* chars, int charIndex);
    // public System.Int32 GetChars(System.Byte* bytes, System.Int32 byteCount, System.Char* chars, System.Int32 charCount)
    // Offset: 0x12DD068
    int GetChars(uint8_t* bytes, int byteCount, ::Il2CppChar* chars, int charCount);
    // System.Int32 GetChars(System.Byte* bytes, System.Int32 byteCount, System.Char* chars, System.Int32 charCount, System.Text.DecoderNLS decoder)
    // Offset: 0x12DD288
    int GetChars(uint8_t* bytes, int byteCount, ::Il2CppChar* chars, int charCount, System::Text::DecoderNLS* decoder);
    // public System.Int32 get_CodePage()
    // Offset: 0x12DD298
    int get_CodePage();
    // public System.Text.Decoder GetDecoder()
    // Offset: 0x12DD2A0
    System::Text::Decoder* GetDecoder();
    // static private System.Text.Encoding CreateDefaultEncoding()
    // Offset: 0x12DD358
    static System::Text::Encoding* CreateDefaultEncoding();
    // System.Void setReadOnly(System.Boolean value)
    // Offset: 0x12DD564
    void setReadOnly(bool value);
    // static public System.Text.Encoding get_Default()
    // Offset: 0x12DB608
    static System::Text::Encoding* get_Default();
    // public System.Text.Encoder GetEncoder()
    // Offset: 0x12DD570
    System::Text::Encoder* GetEncoder();
    // public System.Int32 GetMaxByteCount(System.Int32 charCount)
    // Offset: 0xFFFFFFFF
    int GetMaxByteCount(int charCount);
    // public System.Int32 GetMaxCharCount(System.Int32 byteCount)
    // Offset: 0xFFFFFFFF
    int GetMaxCharCount(int byteCount);
    // public System.String GetString(System.Byte[] bytes)
    // Offset: 0x12DD628
    ::Il2CppString* GetString(::Array<uint8_t>* bytes);
    // public System.String GetString(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    // Offset: 0x12DD6F0
    ::Il2CppString* GetString(::Array<uint8_t>* bytes, int index, int count);
    // static public System.Text.Encoding get_Unicode()
    // Offset: 0x12DB694
    static System::Text::Encoding* get_Unicode();
    // static public System.Text.Encoding get_BigEndianUnicode()
    // Offset: 0x12DB73C
    static System::Text::Encoding* get_BigEndianUnicode();
    // static public System.Text.Encoding get_UTF7()
    // Offset: 0x12DB7E4
    static System::Text::Encoding* get_UTF7();
    // static public System.Text.Encoding get_UTF8()
    // Offset: 0x12DB92C
    static System::Text::Encoding* get_UTF8();
    // static public System.Text.Encoding get_UTF32()
    // Offset: 0x12DB884
    static System::Text::Encoding* get_UTF32();
    // System.Char[] GetBestFitUnicodeToBytesData()
    // Offset: 0x12DD85C
    ::Array<::Il2CppChar>* GetBestFitUnicodeToBytesData();
    // System.Char[] GetBestFitBytesToUnicodeData()
    // Offset: 0x12DD8C4
    ::Array<::Il2CppChar>* GetBestFitBytesToUnicodeData();
    // System.Void ThrowBytesOverflow()
    // Offset: 0x12DD92C
    void ThrowBytesOverflow();
    // System.Void ThrowBytesOverflow(System.Text.EncoderNLS encoder, System.Boolean nothingEncoded)
    // Offset: 0x12D4BD8
    void ThrowBytesOverflow(System::Text::EncoderNLS* encoder, bool nothingEncoded);
    // System.Void ThrowCharsOverflow()
    // Offset: 0x12DDA54
    void ThrowCharsOverflow();
    // System.Void ThrowCharsOverflow(System.Text.DecoderNLS decoder, System.Boolean nothingDecoded)
    // Offset: 0x12D50C4
    void ThrowCharsOverflow(System::Text::DecoderNLS* decoder, bool nothingDecoded);
    // protected System.Void .ctor()
    // Offset: 0x12DA48C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Encoding* New_ctor();
    // public System.Object Clone()
    // Offset: 0x12DC678
    // Implemented from: System.ICloneable
    // Base method: System.Object ICloneable::Clone()
    ::Il2CppObject* Clone();
    // public override System.Boolean Equals(System.Object value)
    // Offset: 0x12DD71C
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object value)
    bool Equals(::Il2CppObject* value);
    // public override System.Int32 GetHashCode()
    // Offset: 0x12DD800
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.Text.Encoding
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::Encoding*, "System.Text", "Encoding");
#pragma pack(pop)
