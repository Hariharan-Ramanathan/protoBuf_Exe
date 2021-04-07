// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: studentSchema.proto

#include "studentSchema.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace Q1 {
constexpr student_guideBy::student_guideBy(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : number_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , name_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , gtype_(0)

  , ptype_(0)
{}
struct student_guideByDefaultTypeInternal {
  constexpr student_guideByDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~student_guideByDefaultTypeInternal() {}
  union {
    student_guideBy _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT student_guideByDefaultTypeInternal _student_guideBy_default_instance_;
constexpr student::student(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : guide_by_()
  , name_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , sec_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , rollnum_(0)
  , class__(0){}
struct studentDefaultTypeInternal {
  constexpr studentDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~studentDefaultTypeInternal() {}
  union {
    student _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT studentDefaultTypeInternal _student_default_instance_;
constexpr allStudents::allStudents(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : all_student_(){}
struct allStudentsDefaultTypeInternal {
  constexpr allStudentsDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~allStudentsDefaultTypeInternal() {}
  union {
    allStudents _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT allStudentsDefaultTypeInternal _allStudents_default_instance_;
}  // namespace Q1
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_studentSchema_2eproto[3];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_studentSchema_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_studentSchema_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_studentSchema_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Q1::student_guideBy, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::Q1::student_guideBy, number_),
  PROTOBUF_FIELD_OFFSET(::Q1::student_guideBy, name_),
  PROTOBUF_FIELD_OFFSET(::Q1::student_guideBy, gtype_),
  PROTOBUF_FIELD_OFFSET(::Q1::student_guideBy, ptype_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Q1::student, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::Q1::student, name_),
  PROTOBUF_FIELD_OFFSET(::Q1::student, rollnum_),
  PROTOBUF_FIELD_OFFSET(::Q1::student, class__),
  PROTOBUF_FIELD_OFFSET(::Q1::student, sec_),
  PROTOBUF_FIELD_OFFSET(::Q1::student, guide_by_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Q1::allStudents, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::Q1::allStudents, all_student_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::Q1::student_guideBy)},
  { 9, -1, sizeof(::Q1::student)},
  { 19, -1, sizeof(::Q1::allStudents)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::Q1::_student_guideBy_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::Q1::_student_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::Q1::_allStudents_default_instance_),
};

const char descriptor_table_protodef_studentSchema_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\023studentSchema.proto\022\002Q1\"\240\002\n\007student\022\014\n"
  "\004name\030\001 \001(\t\022\017\n\007rollNum\030\002 \001(\005\022\r\n\005class\030\003 "
  "\001(\005\022\013\n\003sec\030\004 \001(\t\022%\n\010guide_by\030\005 \003(\0132\023.Q1."
  "student.guideBy\032m\n\007guideBy\022\016\n\006number\030\001 \001"
  "(\t\022\014\n\004name\030\002 \001(\t\022 \n\005gType\030\003 \001(\0162\021.Q1.stu"
  "dent.guide\022\"\n\005pType\030\004 \001(\0162\023.Q1.student.p"
  "arents\"!\n\005guide\022\n\n\006PARENT\020\000\022\014\n\010GUARDIAN\020"
  "\001\"!\n\007parents\022\n\n\006FATHER\020\000\022\n\n\006MOTHER\020\001\"/\n\013"
  "allStudents\022 \n\013all_student\030\001 \003(\0132\013.Q1.st"
  "udentb\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_studentSchema_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_studentSchema_2eproto = {
  false, false, 373, descriptor_table_protodef_studentSchema_2eproto, "studentSchema.proto", 
  &descriptor_table_studentSchema_2eproto_once, nullptr, 0, 3,
  schemas, file_default_instances, TableStruct_studentSchema_2eproto::offsets,
  file_level_metadata_studentSchema_2eproto, file_level_enum_descriptors_studentSchema_2eproto, file_level_service_descriptors_studentSchema_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK ::PROTOBUF_NAMESPACE_ID::Metadata
descriptor_table_studentSchema_2eproto_metadata_getter(int index) {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_studentSchema_2eproto);
  return descriptor_table_studentSchema_2eproto.file_level_metadata[index];
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_studentSchema_2eproto(&descriptor_table_studentSchema_2eproto);
namespace Q1 {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* student_guide_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_studentSchema_2eproto);
  return file_level_enum_descriptors_studentSchema_2eproto[0];
}
bool student_guide_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr student_guide student::PARENT;
constexpr student_guide student::GUARDIAN;
constexpr student_guide student::guide_MIN;
constexpr student_guide student::guide_MAX;
constexpr int student::guide_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* student_parents_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_studentSchema_2eproto);
  return file_level_enum_descriptors_studentSchema_2eproto[1];
}
bool student_parents_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr student_parents student::FATHER;
constexpr student_parents student::MOTHER;
constexpr student_parents student::parents_MIN;
constexpr student_parents student::parents_MAX;
constexpr int student::parents_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

class student_guideBy::_Internal {
 public:
};

student_guideBy::student_guideBy(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:Q1.student.guideBy)
}
student_guideBy::student_guideBy(const student_guideBy& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  number_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_number().empty()) {
    number_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_number(), 
      GetArena());
  }
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_name().empty()) {
    name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_name(), 
      GetArena());
  }
  ::memcpy(&gtype_, &from.gtype_,
    static_cast<size_t>(reinterpret_cast<char*>(&ptype_) -
    reinterpret_cast<char*>(&gtype_)) + sizeof(ptype_));
  // @@protoc_insertion_point(copy_constructor:Q1.student.guideBy)
}

void student_guideBy::SharedCtor() {
number_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&gtype_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&ptype_) -
    reinterpret_cast<char*>(&gtype_)) + sizeof(ptype_));
}

student_guideBy::~student_guideBy() {
  // @@protoc_insertion_point(destructor:Q1.student.guideBy)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void student_guideBy::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  number_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void student_guideBy::ArenaDtor(void* object) {
  student_guideBy* _this = reinterpret_cast< student_guideBy* >(object);
  (void)_this;
}
void student_guideBy::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void student_guideBy::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void student_guideBy::Clear() {
// @@protoc_insertion_point(message_clear_start:Q1.student.guideBy)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  number_.ClearToEmpty();
  name_.ClearToEmpty();
  ::memset(&gtype_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&ptype_) -
      reinterpret_cast<char*>(&gtype_)) + sizeof(ptype_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* student_guideBy::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string number = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_number();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "Q1.student.guideBy.number"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string name = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "Q1.student.guideBy.name"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .Q1.student.guide gType = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_gtype(static_cast<::Q1::student_guide>(val));
        } else goto handle_unusual;
        continue;
      // .Q1.student.parents pType = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_ptype(static_cast<::Q1::student_parents>(val));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* student_guideBy::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Q1.student.guideBy)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string number = 1;
  if (this->number().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_number().data(), static_cast<int>(this->_internal_number().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Q1.student.guideBy.number");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_number(), target);
  }

  // string name = 2;
  if (this->name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Q1.student.guideBy.name");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_name(), target);
  }

  // .Q1.student.guide gType = 3;
  if (this->gtype() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      3, this->_internal_gtype(), target);
  }

  // .Q1.student.parents pType = 4;
  if (this->ptype() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      4, this->_internal_ptype(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Q1.student.guideBy)
  return target;
}

size_t student_guideBy::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Q1.student.guideBy)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string number = 1;
  if (this->number().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_number());
  }

  // string name = 2;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  // .Q1.student.guide gType = 3;
  if (this->gtype() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_gtype());
  }

  // .Q1.student.parents pType = 4;
  if (this->ptype() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_ptype());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void student_guideBy::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Q1.student.guideBy)
  GOOGLE_DCHECK_NE(&from, this);
  const student_guideBy* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<student_guideBy>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Q1.student.guideBy)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Q1.student.guideBy)
    MergeFrom(*source);
  }
}

void student_guideBy::MergeFrom(const student_guideBy& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Q1.student.guideBy)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.number().size() > 0) {
    _internal_set_number(from._internal_number());
  }
  if (from.name().size() > 0) {
    _internal_set_name(from._internal_name());
  }
  if (from.gtype() != 0) {
    _internal_set_gtype(from._internal_gtype());
  }
  if (from.ptype() != 0) {
    _internal_set_ptype(from._internal_ptype());
  }
}

void student_guideBy::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Q1.student.guideBy)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void student_guideBy::CopyFrom(const student_guideBy& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Q1.student.guideBy)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool student_guideBy::IsInitialized() const {
  return true;
}

void student_guideBy::InternalSwap(student_guideBy* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  number_.Swap(&other->number_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  name_.Swap(&other->name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(student_guideBy, ptype_)
      + sizeof(student_guideBy::ptype_)
      - PROTOBUF_FIELD_OFFSET(student_guideBy, gtype_)>(
          reinterpret_cast<char*>(&gtype_),
          reinterpret_cast<char*>(&other->gtype_));
}

::PROTOBUF_NAMESPACE_ID::Metadata student_guideBy::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

class student::_Internal {
 public:
};

student::student(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  guide_by_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:Q1.student)
}
student::student(const student& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      guide_by_(from.guide_by_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_name().empty()) {
    name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_name(), 
      GetArena());
  }
  sec_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_sec().empty()) {
    sec_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_sec(), 
      GetArena());
  }
  ::memcpy(&rollnum_, &from.rollnum_,
    static_cast<size_t>(reinterpret_cast<char*>(&class__) -
    reinterpret_cast<char*>(&rollnum_)) + sizeof(class__));
  // @@protoc_insertion_point(copy_constructor:Q1.student)
}

void student::SharedCtor() {
name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
sec_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&rollnum_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&class__) -
    reinterpret_cast<char*>(&rollnum_)) + sizeof(class__));
}

student::~student() {
  // @@protoc_insertion_point(destructor:Q1.student)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void student::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  sec_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void student::ArenaDtor(void* object) {
  student* _this = reinterpret_cast< student* >(object);
  (void)_this;
}
void student::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void student::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void student::Clear() {
// @@protoc_insertion_point(message_clear_start:Q1.student)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  guide_by_.Clear();
  name_.ClearToEmpty();
  sec_.ClearToEmpty();
  ::memset(&rollnum_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&class__) -
      reinterpret_cast<char*>(&rollnum_)) + sizeof(class__));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* student::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "Q1.student.name"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 rollNum = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          rollnum_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 class = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          class__ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string sec = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          auto str = _internal_mutable_sec();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "Q1.student.sec"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .Q1.student.guideBy guide_by = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_guide_by(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<42>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* student::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Q1.student)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Q1.student.name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_name(), target);
  }

  // int32 rollNum = 2;
  if (this->rollnum() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_rollnum(), target);
  }

  // int32 class = 3;
  if (this->class_() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(3, this->_internal_class_(), target);
  }

  // string sec = 4;
  if (this->sec().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_sec().data(), static_cast<int>(this->_internal_sec().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Q1.student.sec");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_sec(), target);
  }

  // repeated .Q1.student.guideBy guide_by = 5;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_guide_by_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(5, this->_internal_guide_by(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Q1.student)
  return target;
}

size_t student::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Q1.student)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .Q1.student.guideBy guide_by = 5;
  total_size += 1UL * this->_internal_guide_by_size();
  for (const auto& msg : this->guide_by_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  // string sec = 4;
  if (this->sec().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_sec());
  }

  // int32 rollNum = 2;
  if (this->rollnum() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_rollnum());
  }

  // int32 class = 3;
  if (this->class_() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_class_());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void student::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Q1.student)
  GOOGLE_DCHECK_NE(&from, this);
  const student* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<student>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Q1.student)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Q1.student)
    MergeFrom(*source);
  }
}

void student::MergeFrom(const student& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Q1.student)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  guide_by_.MergeFrom(from.guide_by_);
  if (from.name().size() > 0) {
    _internal_set_name(from._internal_name());
  }
  if (from.sec().size() > 0) {
    _internal_set_sec(from._internal_sec());
  }
  if (from.rollnum() != 0) {
    _internal_set_rollnum(from._internal_rollnum());
  }
  if (from.class_() != 0) {
    _internal_set_class_(from._internal_class_());
  }
}

void student::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Q1.student)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void student::CopyFrom(const student& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Q1.student)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool student::IsInitialized() const {
  return true;
}

void student::InternalSwap(student* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  guide_by_.InternalSwap(&other->guide_by_);
  name_.Swap(&other->name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  sec_.Swap(&other->sec_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(student, class__)
      + sizeof(student::class__)
      - PROTOBUF_FIELD_OFFSET(student, rollnum_)>(
          reinterpret_cast<char*>(&rollnum_),
          reinterpret_cast<char*>(&other->rollnum_));
}

::PROTOBUF_NAMESPACE_ID::Metadata student::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

class allStudents::_Internal {
 public:
};

allStudents::allStudents(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  all_student_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:Q1.allStudents)
}
allStudents::allStudents(const allStudents& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      all_student_(from.all_student_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:Q1.allStudents)
}

void allStudents::SharedCtor() {
}

allStudents::~allStudents() {
  // @@protoc_insertion_point(destructor:Q1.allStudents)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void allStudents::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void allStudents::ArenaDtor(void* object) {
  allStudents* _this = reinterpret_cast< allStudents* >(object);
  (void)_this;
}
void allStudents::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void allStudents::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void allStudents::Clear() {
// @@protoc_insertion_point(message_clear_start:Q1.allStudents)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  all_student_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* allStudents::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated .Q1.student all_student = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_all_student(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* allStudents::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Q1.allStudents)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .Q1.student all_student = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_all_student_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, this->_internal_all_student(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Q1.allStudents)
  return target;
}

size_t allStudents::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Q1.allStudents)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .Q1.student all_student = 1;
  total_size += 1UL * this->_internal_all_student_size();
  for (const auto& msg : this->all_student_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void allStudents::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Q1.allStudents)
  GOOGLE_DCHECK_NE(&from, this);
  const allStudents* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<allStudents>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Q1.allStudents)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Q1.allStudents)
    MergeFrom(*source);
  }
}

void allStudents::MergeFrom(const allStudents& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Q1.allStudents)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  all_student_.MergeFrom(from.all_student_);
}

void allStudents::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Q1.allStudents)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void allStudents::CopyFrom(const allStudents& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Q1.allStudents)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool allStudents::IsInitialized() const {
  return true;
}

void allStudents::InternalSwap(allStudents* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  all_student_.InternalSwap(&other->all_student_);
}

::PROTOBUF_NAMESPACE_ID::Metadata allStudents::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace Q1
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Q1::student_guideBy* Arena::CreateMaybeMessage< ::Q1::student_guideBy >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Q1::student_guideBy >(arena);
}
template<> PROTOBUF_NOINLINE ::Q1::student* Arena::CreateMaybeMessage< ::Q1::student >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Q1::student >(arena);
}
template<> PROTOBUF_NOINLINE ::Q1::allStudents* Arena::CreateMaybeMessage< ::Q1::allStudents >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Q1::allStudents >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
