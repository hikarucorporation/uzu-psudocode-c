// Function : ~parse_error
// Namespace: Steinberg:ModuleInfoLib:_anonymous_namespace_:parse_error
// Entry    : 00199990
// Prototype: undefined ~parse_error(parse_error * this)
// Body     : 00199990 - 001999b8


/* Steinberg::ModuleInfoLib::(anonymous namespace)::parse_error::~parse_error() */

void __thiscall
Steinberg::ModuleInfoLib::(anonymous_namespace)::parse_error::~parse_error(parse_error *this)

{
  *(undefined ***)this = &PTR__parse_error_00704a00;
  if (*(parse_error **)(this + 8) != this + 0x18) {
    operator_delete(*(parse_error **)(this + 8));
  }
  std::exception::~exception((exception *)this);
  return;
}


