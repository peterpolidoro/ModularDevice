// ----------------------------------------------------------------------------
// ClientStream.h
//
//
// Authors:
// Peter Polidoro polidorop@janelia.hhmi.org
// ----------------------------------------------------------------------------
#ifndef _CLIENT_STREAM_H_
#define _CLIENT_STREAM_H_
#include "JsonStream.h"
#include "ConstantVariable.h"


namespace modular_device_base
{
class ClientStream
{
public:
  void setStream(Stream & stream);
  JsonStream & getJsonStream();

  void setId(const size_t id);
  size_t getId();

  void setName(const ConstantString & name);
  const ConstantString & getName();

private:
  JsonStream json_stream_;
  size_t id_;
  const ConstantString * name_ptr_;

};

bool operator==(const size_t lhs, ClientStream & rhs);
bool operator==(ClientStream & lhs, const size_t rhs);

}
#endif