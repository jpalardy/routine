
#include <node.h>
#include <v8.h>

extern "C" {
  #include "code.h"
}

using namespace v8;

Handle<Value> Method(const Arguments& args) {
  HandleScope scope;
  return scope.Close(Number::New(mult(args[0]->NumberValue(),args[1]->NumberValue())));
}

void init(Handle<Object> exports) {
  exports->Set(String::NewSymbol("mult"),
      FunctionTemplate::New(Method)->GetFunction());
}

NODE_MODULE(code, init)

