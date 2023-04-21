// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: data.proto

#include "data.pb.h"

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

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace Proto {
PROTOBUF_CONSTEXPR Row::Row(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.arr_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct RowDefaultTypeInternal {
  PROTOBUF_CONSTEXPR RowDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~RowDefaultTypeInternal() {}
  union {
    Row _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 RowDefaultTypeInternal _Row_default_instance_;
PROTOBUF_CONSTEXPR Matrix::Matrix(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.rows_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct MatrixDefaultTypeInternal {
  PROTOBUF_CONSTEXPR MatrixDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~MatrixDefaultTypeInternal() {}
  union {
    Matrix _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 MatrixDefaultTypeInternal _Matrix_default_instance_;
PROTOBUF_CONSTEXPR Data::Data(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.marix_)*/nullptr
  , /*decltype(_impl_.action_id_)*/0
  , /*decltype(_impl_.type_id_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct DataDefaultTypeInternal {
  PROTOBUF_CONSTEXPR DataDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~DataDefaultTypeInternal() {}
  union {
    Data _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 DataDefaultTypeInternal _Data_default_instance_;
}  // namespace Proto
static ::_pb::Metadata file_level_metadata_data_2eproto[3];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_data_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_data_2eproto = nullptr;

const uint32_t TableStruct_data_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Proto::Row, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::Proto::Row, _impl_.arr_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Proto::Matrix, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::Proto::Matrix, _impl_.rows_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Proto::Data, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::Proto::Data, _impl_.marix_),
  PROTOBUF_FIELD_OFFSET(::Proto::Data, _impl_.action_id_),
  PROTOBUF_FIELD_OFFSET(::Proto::Data, _impl_.type_id_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::Proto::Row)},
  { 7, -1, -1, sizeof(::Proto::Matrix)},
  { 14, -1, -1, sizeof(::Proto::Data)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::Proto::_Row_default_instance_._instance,
  &::Proto::_Matrix_default_instance_._instance,
  &::Proto::_Data_default_instance_._instance,
};

const char descriptor_table_protodef_data_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\ndata.proto\022\005Proto\"\022\n\003Row\022\013\n\003arr\030\001 \003(\t\""
  "\"\n\006Matrix\022\030\n\004rows\030\001 \003(\0132\n.Proto.Row\"H\n\004D"
  "ata\022\034\n\005marix\030\001 \001(\0132\r.Proto.Matrix\022\021\n\tact"
  "ion_id\030\002 \001(\005\022\017\n\007type_id\030\003 \001(\005b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_data_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_data_2eproto = {
    false, false, 157, descriptor_table_protodef_data_2eproto,
    "data.proto",
    &descriptor_table_data_2eproto_once, nullptr, 0, 3,
    schemas, file_default_instances, TableStruct_data_2eproto::offsets,
    file_level_metadata_data_2eproto, file_level_enum_descriptors_data_2eproto,
    file_level_service_descriptors_data_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_data_2eproto_getter() {
  return &descriptor_table_data_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_data_2eproto(&descriptor_table_data_2eproto);
namespace Proto {

// ===================================================================

class Row::_Internal {
 public:
};

Row::Row(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:Proto.Row)
}
Row::Row(const Row& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Row* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.arr_){from._impl_.arr_}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:Proto.Row)
}

inline void Row::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.arr_){arena}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

Row::~Row() {
  // @@protoc_insertion_point(destructor:Proto.Row)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Row::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.arr_.~RepeatedPtrField();
}

void Row::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Row::Clear() {
// @@protoc_insertion_point(message_clear_start:Proto.Row)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.arr_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Row::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated string arr = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_arr();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            CHK_(::_pbi::VerifyUTF8(str, "Proto.Row.arr"));
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Row::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Proto.Row)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated string arr = 1;
  for (int i = 0, n = this->_internal_arr_size(); i < n; i++) {
    const auto& s = this->_internal_arr(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Proto.Row.arr");
    target = stream->WriteString(1, s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Proto.Row)
  return target;
}

size_t Row::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Proto.Row)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string arr = 1;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(_impl_.arr_.size());
  for (int i = 0, n = _impl_.arr_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      _impl_.arr_.Get(i));
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Row::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Row::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Row::GetClassData() const { return &_class_data_; }


void Row::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Row*>(&to_msg);
  auto& from = static_cast<const Row&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:Proto.Row)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.arr_.MergeFrom(from._impl_.arr_);
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Row::CopyFrom(const Row& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Proto.Row)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Row::IsInitialized() const {
  return true;
}

void Row::InternalSwap(Row* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.arr_.InternalSwap(&other->_impl_.arr_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Row::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_data_2eproto_getter, &descriptor_table_data_2eproto_once,
      file_level_metadata_data_2eproto[0]);
}

// ===================================================================

class Matrix::_Internal {
 public:
};

Matrix::Matrix(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:Proto.Matrix)
}
Matrix::Matrix(const Matrix& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Matrix* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.rows_){from._impl_.rows_}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:Proto.Matrix)
}

inline void Matrix::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.rows_){arena}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

Matrix::~Matrix() {
  // @@protoc_insertion_point(destructor:Proto.Matrix)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Matrix::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.rows_.~RepeatedPtrField();
}

void Matrix::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Matrix::Clear() {
// @@protoc_insertion_point(message_clear_start:Proto.Matrix)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.rows_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Matrix::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .Proto.Row rows = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_rows(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Matrix::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Proto.Matrix)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .Proto.Row rows = 1;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_rows_size()); i < n; i++) {
    const auto& repfield = this->_internal_rows(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Proto.Matrix)
  return target;
}

size_t Matrix::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Proto.Matrix)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .Proto.Row rows = 1;
  total_size += 1UL * this->_internal_rows_size();
  for (const auto& msg : this->_impl_.rows_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Matrix::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Matrix::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Matrix::GetClassData() const { return &_class_data_; }


void Matrix::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Matrix*>(&to_msg);
  auto& from = static_cast<const Matrix&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:Proto.Matrix)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.rows_.MergeFrom(from._impl_.rows_);
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Matrix::CopyFrom(const Matrix& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Proto.Matrix)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Matrix::IsInitialized() const {
  return true;
}

void Matrix::InternalSwap(Matrix* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.rows_.InternalSwap(&other->_impl_.rows_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Matrix::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_data_2eproto_getter, &descriptor_table_data_2eproto_once,
      file_level_metadata_data_2eproto[1]);
}

// ===================================================================

class Data::_Internal {
 public:
  static const ::Proto::Matrix& marix(const Data* msg);
};

const ::Proto::Matrix&
Data::_Internal::marix(const Data* msg) {
  return *msg->_impl_.marix_;
}
Data::Data(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:Proto.Data)
}
Data::Data(const Data& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Data* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.marix_){nullptr}
    , decltype(_impl_.action_id_){}
    , decltype(_impl_.type_id_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_marix()) {
    _this->_impl_.marix_ = new ::Proto::Matrix(*from._impl_.marix_);
  }
  ::memcpy(&_impl_.action_id_, &from._impl_.action_id_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.type_id_) -
    reinterpret_cast<char*>(&_impl_.action_id_)) + sizeof(_impl_.type_id_));
  // @@protoc_insertion_point(copy_constructor:Proto.Data)
}

inline void Data::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.marix_){nullptr}
    , decltype(_impl_.action_id_){0}
    , decltype(_impl_.type_id_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

Data::~Data() {
  // @@protoc_insertion_point(destructor:Proto.Data)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Data::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete _impl_.marix_;
}

void Data::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Data::Clear() {
// @@protoc_insertion_point(message_clear_start:Proto.Data)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaForAllocation() == nullptr && _impl_.marix_ != nullptr) {
    delete _impl_.marix_;
  }
  _impl_.marix_ = nullptr;
  ::memset(&_impl_.action_id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.type_id_) -
      reinterpret_cast<char*>(&_impl_.action_id_)) + sizeof(_impl_.type_id_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Data::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .Proto.Matrix marix = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_marix(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 action_id = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _impl_.action_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 type_id = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _impl_.type_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Data::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Proto.Data)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .Proto.Matrix marix = 1;
  if (this->_internal_has_marix()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::marix(this),
        _Internal::marix(this).GetCachedSize(), target, stream);
  }

  // int32 action_id = 2;
  if (this->_internal_action_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(2, this->_internal_action_id(), target);
  }

  // int32 type_id = 3;
  if (this->_internal_type_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(3, this->_internal_type_id(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Proto.Data)
  return target;
}

size_t Data::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Proto.Data)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .Proto.Matrix marix = 1;
  if (this->_internal_has_marix()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.marix_);
  }

  // int32 action_id = 2;
  if (this->_internal_action_id() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_action_id());
  }

  // int32 type_id = 3;
  if (this->_internal_type_id() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_type_id());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Data::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Data::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Data::GetClassData() const { return &_class_data_; }


void Data::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Data*>(&to_msg);
  auto& from = static_cast<const Data&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:Proto.Data)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_marix()) {
    _this->_internal_mutable_marix()->::Proto::Matrix::MergeFrom(
        from._internal_marix());
  }
  if (from._internal_action_id() != 0) {
    _this->_internal_set_action_id(from._internal_action_id());
  }
  if (from._internal_type_id() != 0) {
    _this->_internal_set_type_id(from._internal_type_id());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Data::CopyFrom(const Data& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Proto.Data)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Data::IsInitialized() const {
  return true;
}

void Data::InternalSwap(Data* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Data, _impl_.type_id_)
      + sizeof(Data::_impl_.type_id_)
      - PROTOBUF_FIELD_OFFSET(Data, _impl_.marix_)>(
          reinterpret_cast<char*>(&_impl_.marix_),
          reinterpret_cast<char*>(&other->_impl_.marix_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Data::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_data_2eproto_getter, &descriptor_table_data_2eproto_once,
      file_level_metadata_data_2eproto[2]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Proto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Proto::Row*
Arena::CreateMaybeMessage< ::Proto::Row >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Proto::Row >(arena);
}
template<> PROTOBUF_NOINLINE ::Proto::Matrix*
Arena::CreateMaybeMessage< ::Proto::Matrix >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Proto::Matrix >(arena);
}
template<> PROTOBUF_NOINLINE ::Proto::Data*
Arena::CreateMaybeMessage< ::Proto::Data >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Proto::Data >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
