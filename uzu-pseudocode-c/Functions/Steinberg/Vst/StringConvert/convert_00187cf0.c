// Function : convert
// Namespace: Steinberg:Vst:StringConvert
// Entry    : 00187cf0
// Prototype: bool convert(long * param_1, undefined2 * param_2)
// Body     : 00187cf0 - 00187d63


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::Vst::StringConvert::convert(std::__cxx11::string const&, char16_t*) */

bool __cdecl Steinberg::Vst::StringConvert::convert(long *param_1,undefined2 *param_2)

{
  undefined2 *local_30;
  ulong local_28;
  undefined2 local_20 [8];
  
  Steinberg::StringConvert::convert(&local_30,param_1);
  if (local_28 < 0x80) {
    if (local_28 != 0) {
      if (local_28 == 1) {
        *param_2 = *local_30;
      }
      else {
        memcpy(param_2,local_30,local_28 * 2);
      }
    }
    param_2[local_28] = 0;
  }
  if (local_30 != local_20) {
    operator_delete(local_30);
  }
  return local_28 < 0x80;
}


