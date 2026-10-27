// Function : getName
// Namespace: Steinberg:Vst:HostApplication
// Entry    : 00187bf0
// Prototype: long getName(undefined8 param_1_00, undefined2 * param_2)
// Body     : 00187bf0 - 00187cce


/* Steinberg::Vst::HostApplication::getName(char16_t*) */

long __thiscall Steinberg::Vst::HostApplication::getName(undefined8 param_1_00,undefined2 *param_2)

{
  undefined8 uVar1;
  undefined2 **local_58;
  undefined2 *local_50;
  undefined2 *local_48 [2];
  undefined2 *local_38;
  ulong local_30;
  undefined2 local_28 [8];
  
  local_38 = (undefined2 *)&DAT_00000017;
  local_58 = local_48;
  local_58 = (undefined2 **)std::__cxx11::string::_M_create((ulong *)&local_58,(ulong)&local_38);
  uVar1 = s_My_VST3_HostApplication_005db495._8_8_;
  local_48[0] = local_38;
  *local_58 = (undefined2 *)s_My_VST3_HostApplication_005db495._0_8_;
  local_58[1] = (undefined2 *)uVar1;
  builtin_strncpy((char *)((long)local_58 + 0xf),"lication",8);
  local_50 = local_38;
  *(char *)((long)local_58 + (long)local_38) = '\0';
                    /* try { // try from 00187c53 to 00187c5f has its CatchHandler @ 00187ccf */
  Steinberg::StringConvert::convert(&local_38,(long *)&local_58);
  if (local_30 < 0x80) {
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
  if (local_58 != local_48) {
    operator_delete(local_58);
  }
  return (ulong)(0x7f < local_30) << 2;
}


