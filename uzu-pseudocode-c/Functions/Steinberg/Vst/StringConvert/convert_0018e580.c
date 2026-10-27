// Function : convert
// Namespace: Steinberg:Vst:StringConvert
// Entry    : 0018e580
// Prototype: bool convert(long * param_1, undefined2 * param_2, uint param_3)
// Body     : 0018e580 - 0018e5f0


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::Vst::StringConvert::convert(std::__cxx11::string const&, char16_t*, unsigned int) */

bool __cdecl Steinberg::Vst::StringConvert::convert(long *param_1,undefined2 *param_2,uint param_3)

{
  undefined2 *local_38;
  ulong local_30;
  undefined2 local_28 [8];
  
  Steinberg::StringConvert::convert(&local_38,param_1);
  if (local_30 < param_3) {
    if (local_30 != 0) {
      if (local_30 == 1) {
        *param_2 = *local_38;
      }
      else {
        memcpy(param_2,local_38,local_30 * 2);
      }
    }
    param_2[local_30] = 0;
  }
  if (local_38 != local_28) {
    operator_delete(local_38);
  }
  return local_30 < param_3;
}


