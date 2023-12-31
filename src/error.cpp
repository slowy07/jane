#include "include/error.hpp"

const char *err_str(int err) {
  switch ((enum Error)err) {
  case ErrorNone:
    return "(no error)";
  case ErrorNoMem:
    return "out of memory";
  case ErrorInvalidFormat:
    return "invalid format";
  case ErrorSemanticAnalyzeFail:
    return "semantic analyze failed";
  }
  return "(invalid error!)";
}