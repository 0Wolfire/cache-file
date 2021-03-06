// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: file_description.proto

#include "file_description.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

namespace description {
class DescriptionDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Description> _instance;
} _Description_default_instance_;
}  // namespace description
static void InitDefaultsDescription_file_5fdescription_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::description::_Description_default_instance_;
    new (ptr) ::description::Description();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::description::Description::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_Description_file_5fdescription_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsDescription_file_5fdescription_2eproto}, {}};

void InitDefaults_file_5fdescription_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_Description_file_5fdescription_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_file_5fdescription_2eproto[1];
constexpr ::google::protobuf::EnumDescriptor const** file_level_enum_descriptors_file_5fdescription_2eproto = nullptr;
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_file_5fdescription_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_file_5fdescription_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::description::Description, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::description::Description, headers_),
  PROTOBUF_FIELD_OFFSET(::description::Description, content_hash_),
  PROTOBUF_FIELD_OFFSET(::description::Description, uri_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::description::Description)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::description::_Description_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_file_5fdescription_2eproto = {
  {}, AddDescriptors_file_5fdescription_2eproto, "file_description.proto", schemas,
  file_default_instances, TableStruct_file_5fdescription_2eproto::offsets,
  file_level_metadata_file_5fdescription_2eproto, 1, file_level_enum_descriptors_file_5fdescription_2eproto, file_level_service_descriptors_file_5fdescription_2eproto,
};

const char descriptor_table_protodef_file_5fdescription_2eproto[] =
  "\n\026file_description.proto\022\013description\"A\n"
  "\013Description\022\017\n\007headers\030\001 \003(\t\022\024\n\014content"
  "_hash\030\002 \001(\t\022\013\n\003uri\030\003 \001(\tB6Z4github.com/g"
  "ladiusio/cache-file/proto/go/description"
  "b\006proto3"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_file_5fdescription_2eproto = {
  false, InitDefaults_file_5fdescription_2eproto, 
  descriptor_table_protodef_file_5fdescription_2eproto,
  "file_description.proto", &assign_descriptors_table_file_5fdescription_2eproto, 168,
};

void AddDescriptors_file_5fdescription_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_file_5fdescription_2eproto, deps, 0);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_file_5fdescription_2eproto = []() { AddDescriptors_file_5fdescription_2eproto(); return true; }();
namespace description {

// ===================================================================

void Description::InitAsDefaultInstance() {
}
class Description::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Description::kHeadersFieldNumber;
const int Description::kContentHashFieldNumber;
const int Description::kUriFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Description::Description()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:description.Description)
}
Description::Description(const Description& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr),
      headers_(from.headers_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  content_hash_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.content_hash().size() > 0) {
    content_hash_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.content_hash_);
  }
  uri_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.uri().size() > 0) {
    uri_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.uri_);
  }
  // @@protoc_insertion_point(copy_constructor:description.Description)
}

void Description::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_Description_file_5fdescription_2eproto.base);
  content_hash_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  uri_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

Description::~Description() {
  // @@protoc_insertion_point(destructor:description.Description)
  SharedDtor();
}

void Description::SharedDtor() {
  content_hash_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  uri_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Description::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Description& Description::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_Description_file_5fdescription_2eproto.base);
  return *internal_default_instance();
}


void Description::Clear() {
// @@protoc_insertion_point(message_clear_start:description.Description)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  headers_.Clear();
  content_hash_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  uri_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* Description::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<Description*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // repeated string headers = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 10) goto handle_unusual;
        do {
          ptr = ::google::protobuf::io::ReadSize(ptr, &size);
          GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
          ctx->extra_parse_data().SetFieldName("description.Description.headers");
          object = msg->add_headers();
          if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
            parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8;
            goto string_till_end;
          }
          GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8(ptr, size, ctx));
          ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
          ptr += size;
          if (ptr >= end) break;
        } while ((::google::protobuf::io::UnalignedLoad<::google::protobuf::uint64>(ptr) & 255) == 10 && (ptr += 1));
        break;
      }
      // string content_hash = 2;
      case 2: {
        if (static_cast<::google::protobuf::uint8>(tag) != 18) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("description.Description.content_hash");
        object = msg->mutable_content_hash();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
        ptr += size;
        break;
      }
      // string uri = 3;
      case 3: {
        if (static_cast<::google::protobuf::uint8>(tag) != 26) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("description.Description.uri");
        object = msg->mutable_uri();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
        ptr += size;
        break;
      }
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
string_till_end:
  static_cast<::std::string*>(object)->clear();
  static_cast<::std::string*>(object)->reserve(size);
  goto len_delim_till_end;
len_delim_till_end:
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                               {parser_till_end, object}, size);
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool Description::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:description.Description)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated string headers = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_headers()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->headers(this->headers_size() - 1).data(),
            static_cast<int>(this->headers(this->headers_size() - 1).length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "description.Description.headers"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string content_hash = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (18 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_content_hash()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->content_hash().data(), static_cast<int>(this->content_hash().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "description.Description.content_hash"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string uri = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (26 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_uri()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->uri().data(), static_cast<int>(this->uri().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "description.Description.uri"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:description.Description)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:description.Description)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void Description::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:description.Description)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated string headers = 1;
  for (int i = 0, n = this->headers_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->headers(i).data(), static_cast<int>(this->headers(i).length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "description.Description.headers");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->headers(i), output);
  }

  // string content_hash = 2;
  if (this->content_hash().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->content_hash().data(), static_cast<int>(this->content_hash().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "description.Description.content_hash");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->content_hash(), output);
  }

  // string uri = 3;
  if (this->uri().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->uri().data(), static_cast<int>(this->uri().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "description.Description.uri");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->uri(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:description.Description)
}

::google::protobuf::uint8* Description::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:description.Description)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated string headers = 1;
  for (int i = 0, n = this->headers_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->headers(i).data(), static_cast<int>(this->headers(i).length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "description.Description.headers");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(1, this->headers(i), target);
  }

  // string content_hash = 2;
  if (this->content_hash().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->content_hash().data(), static_cast<int>(this->content_hash().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "description.Description.content_hash");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->content_hash(), target);
  }

  // string uri = 3;
  if (this->uri().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->uri().data(), static_cast<int>(this->uri().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "description.Description.uri");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->uri(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:description.Description)
  return target;
}

size_t Description::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:description.Description)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string headers = 1;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->headers_size());
  for (int i = 0, n = this->headers_size(); i < n; i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->headers(i));
  }

  // string content_hash = 2;
  if (this->content_hash().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->content_hash());
  }

  // string uri = 3;
  if (this->uri().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->uri());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Description::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:description.Description)
  GOOGLE_DCHECK_NE(&from, this);
  const Description* source =
      ::google::protobuf::DynamicCastToGenerated<Description>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:description.Description)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:description.Description)
    MergeFrom(*source);
  }
}

void Description::MergeFrom(const Description& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:description.Description)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  headers_.MergeFrom(from.headers_);
  if (from.content_hash().size() > 0) {

    content_hash_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.content_hash_);
  }
  if (from.uri().size() > 0) {

    uri_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.uri_);
  }
}

void Description::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:description.Description)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Description::CopyFrom(const Description& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:description.Description)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Description::IsInitialized() const {
  return true;
}

void Description::Swap(Description* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Description::InternalSwap(Description* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  headers_.InternalSwap(CastToBase(&other->headers_));
  content_hash_.Swap(&other->content_hash_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  uri_.Swap(&other->uri_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::google::protobuf::Metadata Description::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_file_5fdescription_2eproto);
  return ::file_level_metadata_file_5fdescription_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace description
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::description::Description* Arena::CreateMaybeMessage< ::description::Description >(Arena* arena) {
  return Arena::CreateInternal< ::description::Description >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
