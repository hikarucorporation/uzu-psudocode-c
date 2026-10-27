// Function : convert[abi:cxx11]
// Namespace: Steinberg:Vst:StringConvert
// Entry    : 0018e730
// Prototype: StringConvert * convert[abi:cxx11](StringConvert * this, long param_1, int param_2)
// Body     : 0018e730 - 0018e806


/* Steinberg::Vst::StringConvert::convert[abi:cxx11](char16_t const*, unsigned int) */

StringConvert * __thiscall
Steinberg::Vst::StringConvert::convert_abi_cxx11_(StringConvert *this,long param_1,int param_2)

{
  short sVar1;
  long lVar2;
  undefined4 local_5c;
  StringConvert *local_58;
  undefined1 *local_50;
  ulong local_48;
  undefined1 local_40 [16];
  
  local_58 = this + 0x10;
  *(StringConvert **)this = local_58;
  *(undefined8 *)(this + 8) = 0;
  this[0x10] = (StringConvert)0x0;
  if ((param_1 != 0) && (local_5c = 0, param_2 != 0)) {
    lVar2 = 0;
    do {
      sVar1 = *(short *)(param_1 + lVar2 * 2);
      local_5c = CONCAT22(local_5c._2_2_,sVar1);
      if (sVar1 == 0) {
        return this;
      }
                    /* try { // try from 0018e7a8 to 0018e7b4 has its CatchHandler @ 0018e807 */
      convert_abi_cxx11_((StringConvert *)&local_50,(long)&local_5c);
      if (0x3fffffffffffffffU - *(long *)(this + 8) < local_48) {
                    /* try { // try from 0018e7fb to 0018e806 has its CatchHandler @ 0018e816 */
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error("basic_string::append");
      }
                    /* try { // try from 0018e7cb to 0018e7d2 has its CatchHandler @ 0018e818 */
      std::__cxx11::string::_M_append((char *)this,(ulong)local_50);
      if (local_50 != local_40) {
        operator_delete(local_50);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return this;
}


