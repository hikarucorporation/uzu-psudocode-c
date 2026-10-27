// Function : parse_error
// Namespace: Steinberg:ModuleInfoLib:_anonymous_namespace_:parse_error
// Entry    : 001998b0
// Prototype: undefined parse_error(parse_error * this, undefined8 * param_1, long * param_2)
// Body     : 001998b0 - 00199969


/* Steinberg::ModuleInfoLib::(anonymous namespace)::parse_error::parse_error(std::__cxx11::string
   const&, JSON::Value const&) */

void __thiscall
Steinberg::ModuleInfoLib::(anonymous_namespace)::parse_error::parse_error
          (parse_error *this,undefined8 *param_1,long *param_2)

{
  parse_error *__src;
  ulong __n;
  long lVar1;
  undefined8 uVar2;
  parse_error *__dest;
  ulong local_38;
  
  *(undefined ***)this = &PTR__parse_error_00704a00;
  __dest = this + 0x18;
  *(parse_error **)(this + 8) = __dest;
  __src = (parse_error *)*param_1;
  __n = param_1[1];
  local_38 = __n;
  if (0xf < __n) {
                    /* try { // try from 001998e8 to 001998f4 has its CatchHandler @ 0019996a */
    __dest = (parse_error *)std::__cxx11::string::_M_create((ulong *)(this + 8),(ulong)&local_38);
    *(parse_error **)(this + 8) = __dest;
    *(ulong *)(this + 0x18) = local_38;
  }
  if (__n != 0) {
    if (__n == 1) {
      *__dest = *__src;
    }
    else {
      memcpy(__dest,__src,__n);
    }
  }
  *(ulong *)(this + 0x10) = local_38;
  *(undefined1 *)(*(long *)(this + 8) + local_38) = 0;
  lVar1 = *param_2;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)(this + 0x30) = uVar2;
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(lVar1 + 0x20);
                    /* try { // try from 00199953 to 0019995a has its CatchHandler @ 0019996f */
  addLocation(this,(ulong *)(this + 0x28));
  return;
}


