// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: stt.proto
#ifndef GRPC_stt_2eproto__INCLUDED
#define GRPC_stt_2eproto__INCLUDED

#include "stt.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace SpeechToText {

class Listener final {
 public:
  static constexpr char const* service_full_name() {
    return "SpeechToText.Listener";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status DoConfig(::grpc::ClientContext* context, const ::SpeechToText::ConfigSTT& request, ::SpeechToText::ConfigResult* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::SpeechToText::ConfigResult>> AsyncDoConfig(::grpc::ClientContext* context, const ::SpeechToText::ConfigSTT& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::SpeechToText::ConfigResult>>(AsyncDoConfigRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::SpeechToText::ConfigResult>> PrepareAsyncDoConfig(::grpc::ClientContext* context, const ::SpeechToText::ConfigSTT& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::SpeechToText::ConfigResult>>(PrepareAsyncDoConfigRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::SpeechToText::SpeechChunk, ::SpeechToText::TranscriptChunk>> DoSpeechToText(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::SpeechToText::SpeechChunk, ::SpeechToText::TranscriptChunk>>(DoSpeechToTextRaw(context));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::SpeechToText::SpeechChunk, ::SpeechToText::TranscriptChunk>> AsyncDoSpeechToText(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::SpeechToText::SpeechChunk, ::SpeechToText::TranscriptChunk>>(AsyncDoSpeechToTextRaw(context, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::SpeechToText::SpeechChunk, ::SpeechToText::TranscriptChunk>> PrepareAsyncDoSpeechToText(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::SpeechToText::SpeechChunk, ::SpeechToText::TranscriptChunk>>(PrepareAsyncDoSpeechToTextRaw(context, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void DoConfig(::grpc::ClientContext* context, const ::SpeechToText::ConfigSTT* request, ::SpeechToText::ConfigResult* response, std::function<void(::grpc::Status)>) = 0;
      virtual void DoConfig(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::SpeechToText::ConfigResult* response, std::function<void(::grpc::Status)>) = 0;
      virtual void DoSpeechToText(::grpc::ClientContext* context, ::grpc::experimental::ClientBidiReactor< ::SpeechToText::SpeechChunk,::SpeechToText::TranscriptChunk>* reactor) = 0;
    };
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::SpeechToText::ConfigResult>* AsyncDoConfigRaw(::grpc::ClientContext* context, const ::SpeechToText::ConfigSTT& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::SpeechToText::ConfigResult>* PrepareAsyncDoConfigRaw(::grpc::ClientContext* context, const ::SpeechToText::ConfigSTT& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientReaderWriterInterface< ::SpeechToText::SpeechChunk, ::SpeechToText::TranscriptChunk>* DoSpeechToTextRaw(::grpc::ClientContext* context) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::SpeechToText::SpeechChunk, ::SpeechToText::TranscriptChunk>* AsyncDoSpeechToTextRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::SpeechToText::SpeechChunk, ::SpeechToText::TranscriptChunk>* PrepareAsyncDoSpeechToTextRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status DoConfig(::grpc::ClientContext* context, const ::SpeechToText::ConfigSTT& request, ::SpeechToText::ConfigResult* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::SpeechToText::ConfigResult>> AsyncDoConfig(::grpc::ClientContext* context, const ::SpeechToText::ConfigSTT& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::SpeechToText::ConfigResult>>(AsyncDoConfigRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::SpeechToText::ConfigResult>> PrepareAsyncDoConfig(::grpc::ClientContext* context, const ::SpeechToText::ConfigSTT& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::SpeechToText::ConfigResult>>(PrepareAsyncDoConfigRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReaderWriter< ::SpeechToText::SpeechChunk, ::SpeechToText::TranscriptChunk>> DoSpeechToText(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriter< ::SpeechToText::SpeechChunk, ::SpeechToText::TranscriptChunk>>(DoSpeechToTextRaw(context));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::SpeechToText::SpeechChunk, ::SpeechToText::TranscriptChunk>> AsyncDoSpeechToText(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::SpeechToText::SpeechChunk, ::SpeechToText::TranscriptChunk>>(AsyncDoSpeechToTextRaw(context, cq, tag));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::SpeechToText::SpeechChunk, ::SpeechToText::TranscriptChunk>> PrepareAsyncDoSpeechToText(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::SpeechToText::SpeechChunk, ::SpeechToText::TranscriptChunk>>(PrepareAsyncDoSpeechToTextRaw(context, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void DoConfig(::grpc::ClientContext* context, const ::SpeechToText::ConfigSTT* request, ::SpeechToText::ConfigResult* response, std::function<void(::grpc::Status)>) override;
      void DoConfig(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::SpeechToText::ConfigResult* response, std::function<void(::grpc::Status)>) override;
      void DoSpeechToText(::grpc::ClientContext* context, ::grpc::experimental::ClientBidiReactor< ::SpeechToText::SpeechChunk,::SpeechToText::TranscriptChunk>* reactor) override;
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::SpeechToText::ConfigResult>* AsyncDoConfigRaw(::grpc::ClientContext* context, const ::SpeechToText::ConfigSTT& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::SpeechToText::ConfigResult>* PrepareAsyncDoConfigRaw(::grpc::ClientContext* context, const ::SpeechToText::ConfigSTT& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientReaderWriter< ::SpeechToText::SpeechChunk, ::SpeechToText::TranscriptChunk>* DoSpeechToTextRaw(::grpc::ClientContext* context) override;
    ::grpc::ClientAsyncReaderWriter< ::SpeechToText::SpeechChunk, ::SpeechToText::TranscriptChunk>* AsyncDoSpeechToTextRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncReaderWriter< ::SpeechToText::SpeechChunk, ::SpeechToText::TranscriptChunk>* PrepareAsyncDoSpeechToTextRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_DoConfig_;
    const ::grpc::internal::RpcMethod rpcmethod_DoSpeechToText_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status DoConfig(::grpc::ServerContext* context, const ::SpeechToText::ConfigSTT* request, ::SpeechToText::ConfigResult* response);
    virtual ::grpc::Status DoSpeechToText(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::SpeechToText::TranscriptChunk, ::SpeechToText::SpeechChunk>* stream);
  };
  template <class BaseClass>
  class WithAsyncMethod_DoConfig : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_DoConfig() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_DoConfig() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status DoConfig(::grpc::ServerContext* context, const ::SpeechToText::ConfigSTT* request, ::SpeechToText::ConfigResult* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestDoConfig(::grpc::ServerContext* context, ::SpeechToText::ConfigSTT* request, ::grpc::ServerAsyncResponseWriter< ::SpeechToText::ConfigResult>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_DoSpeechToText : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_DoSpeechToText() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_DoSpeechToText() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status DoSpeechToText(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::SpeechToText::TranscriptChunk, ::SpeechToText::SpeechChunk>* stream)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestDoSpeechToText(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::SpeechToText::TranscriptChunk, ::SpeechToText::SpeechChunk>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(1, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_DoConfig<WithAsyncMethod_DoSpeechToText<Service > > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_DoConfig : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_DoConfig() {
      ::grpc::Service::experimental().MarkMethodCallback(0,
        new ::grpc::internal::CallbackUnaryHandler< ::SpeechToText::ConfigSTT, ::SpeechToText::ConfigResult>(
          [this](::grpc::ServerContext* context,
                 const ::SpeechToText::ConfigSTT* request,
                 ::SpeechToText::ConfigResult* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   return this->DoConfig(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithCallbackMethod_DoConfig() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status DoConfig(::grpc::ServerContext* context, const ::SpeechToText::ConfigSTT* request, ::SpeechToText::ConfigResult* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void DoConfig(::grpc::ServerContext* context, const ::SpeechToText::ConfigSTT* request, ::SpeechToText::ConfigResult* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_DoSpeechToText : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_DoSpeechToText() {
      ::grpc::Service::experimental().MarkMethodCallback(1,
        new ::grpc::internal::CallbackBidiHandler< ::SpeechToText::SpeechChunk, ::SpeechToText::TranscriptChunk>(
          [this] { return this->DoSpeechToText(); }));
    }
    ~ExperimentalWithCallbackMethod_DoSpeechToText() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status DoSpeechToText(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::SpeechToText::TranscriptChunk, ::SpeechToText::SpeechChunk>* stream)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::experimental::ServerBidiReactor< ::SpeechToText::SpeechChunk, ::SpeechToText::TranscriptChunk>* DoSpeechToText() {
      return new ::grpc::internal::UnimplementedBidiReactor<
        ::SpeechToText::SpeechChunk, ::SpeechToText::TranscriptChunk>;}
  };
  typedef ExperimentalWithCallbackMethod_DoConfig<ExperimentalWithCallbackMethod_DoSpeechToText<Service > > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_DoConfig : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_DoConfig() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_DoConfig() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status DoConfig(::grpc::ServerContext* context, const ::SpeechToText::ConfigSTT* request, ::SpeechToText::ConfigResult* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_DoSpeechToText : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_DoSpeechToText() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_DoSpeechToText() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status DoSpeechToText(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::SpeechToText::TranscriptChunk, ::SpeechToText::SpeechChunk>* stream)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_DoConfig : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_DoConfig() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_DoConfig() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status DoConfig(::grpc::ServerContext* context, const ::SpeechToText::ConfigSTT* request, ::SpeechToText::ConfigResult* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestDoConfig(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_DoSpeechToText : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_DoSpeechToText() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_DoSpeechToText() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status DoSpeechToText(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::SpeechToText::TranscriptChunk, ::SpeechToText::SpeechChunk>* stream)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestDoSpeechToText(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::grpc::ByteBuffer, ::grpc::ByteBuffer>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(1, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_DoConfig : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_DoConfig() {
      ::grpc::Service::experimental().MarkMethodRawCallback(0,
        new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this](::grpc::ServerContext* context,
                 const ::grpc::ByteBuffer* request,
                 ::grpc::ByteBuffer* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->DoConfig(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithRawCallbackMethod_DoConfig() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status DoConfig(::grpc::ServerContext* context, const ::SpeechToText::ConfigSTT* request, ::SpeechToText::ConfigResult* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void DoConfig(::grpc::ServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_DoSpeechToText : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_DoSpeechToText() {
      ::grpc::Service::experimental().MarkMethodRawCallback(1,
        new ::grpc::internal::CallbackBidiHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this] { return this->DoSpeechToText(); }));
    }
    ~ExperimentalWithRawCallbackMethod_DoSpeechToText() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status DoSpeechToText(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::SpeechToText::TranscriptChunk, ::SpeechToText::SpeechChunk>* stream)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::experimental::ServerBidiReactor< ::grpc::ByteBuffer, ::grpc::ByteBuffer>* DoSpeechToText() {
      return new ::grpc::internal::UnimplementedBidiReactor<
        ::grpc::ByteBuffer, ::grpc::ByteBuffer>;}
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_DoConfig : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_DoConfig() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::SpeechToText::ConfigSTT, ::SpeechToText::ConfigResult>(std::bind(&WithStreamedUnaryMethod_DoConfig<BaseClass>::StreamedDoConfig, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_DoConfig() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status DoConfig(::grpc::ServerContext* context, const ::SpeechToText::ConfigSTT* request, ::SpeechToText::ConfigResult* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedDoConfig(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::SpeechToText::ConfigSTT,::SpeechToText::ConfigResult>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_DoConfig<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_DoConfig<Service > StreamedService;
};

}  // namespace SpeechToText


#endif  // GRPC_stt_2eproto__INCLUDED
