// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: proto/hello.proto
// Protobuf C++ Version: 5.27.2

#ifndef GOOGLE_PROTOBUF_INCLUDED_proto_2fhello_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_proto_2fhello_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/runtime_version.h"
#if PROTOBUF_VERSION != 5027002
#error "Protobuf C++ gencode is built with an incompatible version of"
#error "Protobuf C++ headers/runtime. See"
#error "https://protobuf.dev/support/cross-version-runtime-guarantee/#cpp"
#endif
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_proto_2fhello_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_proto_2fhello_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_proto_2fhello_2eproto;
class Numeric;
struct NumericDefaultTypeInternal;
extern NumericDefaultTypeInternal _Numeric_default_instance_;
class Point3;
struct Point3DefaultTypeInternal;
extern Point3DefaultTypeInternal _Point3_default_instance_;
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google


// ===================================================================


// -------------------------------------------------------------------

class Point3 final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:Point3) */ {
 public:
  inline Point3() : Point3(nullptr) {}
  ~Point3() override;
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR Point3(
      ::google::protobuf::internal::ConstantInitialized);

  inline Point3(const Point3& from) : Point3(nullptr, from) {}
  inline Point3(Point3&& from) noexcept
      : Point3(nullptr, std::move(from)) {}
  inline Point3& operator=(const Point3& from) {
    CopyFrom(from);
    return *this;
  }
  inline Point3& operator=(Point3&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
#ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
#endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Point3& default_instance() {
    return *internal_default_instance();
  }
  static inline const Point3* internal_default_instance() {
    return reinterpret_cast<const Point3*>(
        &_Point3_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 0;
  friend void swap(Point3& a, Point3& b) { a.Swap(&b); }
  inline void Swap(Point3* other) {
    if (other == this) return;
#ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr && GetArena() == other->GetArena()) {
#else   // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
#endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Point3* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Point3* New(::google::protobuf::Arena* arena = nullptr) const final {
    return ::google::protobuf::Message::DefaultConstruct<Point3>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const Point3& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const Point3& from) { Point3::MergeImpl(*this, from); }

  private:
  static void MergeImpl(
      ::google::protobuf::MessageLite& to_msg,
      const ::google::protobuf::MessageLite& from_msg);

  public:
  bool IsInitialized() const {
    return true;
  }
  ABSL_ATTRIBUTE_REINITIALIZES void Clear() final;
  ::size_t ByteSizeLong() const final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(Point3* other);
 private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() { return "Point3"; }

 protected:
  explicit Point3(::google::protobuf::Arena* arena);
  Point3(::google::protobuf::Arena* arena, const Point3& from);
  Point3(::google::protobuf::Arena* arena, Point3&& from) noexcept
      : Point3(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::Message::ClassData* GetClassData() const final;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kXFieldNumber = 1,
    kYFieldNumber = 2,
    kZFieldNumber = 3,
  };
  // float x = 1;
  void clear_x() ;
  float x() const;
  void set_x(float value);

  private:
  float _internal_x() const;
  void _internal_set_x(float value);

  public:
  // float y = 2;
  void clear_y() ;
  float y() const;
  void set_y(float value);

  private:
  float _internal_y() const;
  void _internal_set_y(float value);

  public:
  // float z = 3;
  void clear_z() ;
  float z() const;
  void set_z(float value);

  private:
  float _internal_z() const;
  void _internal_set_z(float value);

  public:
  // @@protoc_insertion_point(class_scope:Point3)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      2, 3, 0,
      0, 2>
      _table_;

  static constexpr const void* _raw_default_instance_ =
      &_Point3_default_instance_;

  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {
    inline explicit constexpr Impl_(
        ::google::protobuf::internal::ConstantInitialized) noexcept;
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena);
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena, const Impl_& from,
                          const Point3& from_msg);
    float x_;
    float y_;
    float z_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_proto_2fhello_2eproto;
};
// -------------------------------------------------------------------

class Numeric final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:Numeric) */ {
 public:
  inline Numeric() : Numeric(nullptr) {}
  ~Numeric() override;
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR Numeric(
      ::google::protobuf::internal::ConstantInitialized);

  inline Numeric(const Numeric& from) : Numeric(nullptr, from) {}
  inline Numeric(Numeric&& from) noexcept
      : Numeric(nullptr, std::move(from)) {}
  inline Numeric& operator=(const Numeric& from) {
    CopyFrom(from);
    return *this;
  }
  inline Numeric& operator=(Numeric&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
#ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
#endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Numeric& default_instance() {
    return *internal_default_instance();
  }
  static inline const Numeric* internal_default_instance() {
    return reinterpret_cast<const Numeric*>(
        &_Numeric_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 1;
  friend void swap(Numeric& a, Numeric& b) { a.Swap(&b); }
  inline void Swap(Numeric* other) {
    if (other == this) return;
#ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr && GetArena() == other->GetArena()) {
#else   // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
#endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Numeric* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Numeric* New(::google::protobuf::Arena* arena = nullptr) const final {
    return ::google::protobuf::Message::DefaultConstruct<Numeric>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const Numeric& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const Numeric& from) { Numeric::MergeImpl(*this, from); }

  private:
  static void MergeImpl(
      ::google::protobuf::MessageLite& to_msg,
      const ::google::protobuf::MessageLite& from_msg);

  public:
  bool IsInitialized() const {
    return true;
  }
  ABSL_ATTRIBUTE_REINITIALIZES void Clear() final;
  ::size_t ByteSizeLong() const final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(Numeric* other);
 private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() { return "Numeric"; }

 protected:
  explicit Numeric(::google::protobuf::Arena* arena);
  Numeric(::google::protobuf::Arena* arena, const Numeric& from);
  Numeric(::google::protobuf::Arena* arena, Numeric&& from) noexcept
      : Numeric(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::Message::ClassData* GetClassData() const final;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kValueFieldNumber = 1,
  };
  // float value = 1;
  void clear_value() ;
  float value() const;
  void set_value(float value);

  private:
  float _internal_value() const;
  void _internal_set_value(float value);

  public:
  // @@protoc_insertion_point(class_scope:Numeric)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      0, 1, 0,
      0, 2>
      _table_;

  static constexpr const void* _raw_default_instance_ =
      &_Numeric_default_instance_;

  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {
    inline explicit constexpr Impl_(
        ::google::protobuf::internal::ConstantInitialized) noexcept;
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena);
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena, const Impl_& from,
                          const Numeric& from_msg);
    float value_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_proto_2fhello_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Point3

// float x = 1;
inline void Point3::clear_x() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.x_ = 0;
}
inline float Point3::x() const {
  // @@protoc_insertion_point(field_get:Point3.x)
  return _internal_x();
}
inline void Point3::set_x(float value) {
  _internal_set_x(value);
  // @@protoc_insertion_point(field_set:Point3.x)
}
inline float Point3::_internal_x() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.x_;
}
inline void Point3::_internal_set_x(float value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.x_ = value;
}

// float y = 2;
inline void Point3::clear_y() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.y_ = 0;
}
inline float Point3::y() const {
  // @@protoc_insertion_point(field_get:Point3.y)
  return _internal_y();
}
inline void Point3::set_y(float value) {
  _internal_set_y(value);
  // @@protoc_insertion_point(field_set:Point3.y)
}
inline float Point3::_internal_y() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.y_;
}
inline void Point3::_internal_set_y(float value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.y_ = value;
}

// float z = 3;
inline void Point3::clear_z() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.z_ = 0;
}
inline float Point3::z() const {
  // @@protoc_insertion_point(field_get:Point3.z)
  return _internal_z();
}
inline void Point3::set_z(float value) {
  _internal_set_z(value);
  // @@protoc_insertion_point(field_set:Point3.z)
}
inline float Point3::_internal_z() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.z_;
}
inline void Point3::_internal_set_z(float value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.z_ = value;
}

// -------------------------------------------------------------------

// Numeric

// float value = 1;
inline void Numeric::clear_value() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.value_ = 0;
}
inline float Numeric::value() const {
  // @@protoc_insertion_point(field_get:Numeric.value)
  return _internal_value();
}
inline void Numeric::set_value(float value) {
  _internal_set_value(value);
  // @@protoc_insertion_point(field_set:Numeric.value)
}
inline float Numeric::_internal_value() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.value_;
}
inline void Numeric::_internal_set_value(float value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.value_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_proto_2fhello_2eproto_2epb_2eh
