// Function : is_default_ignorable
// Namespace: hb_unicode_funcs_t
// Entry    : 003fee90
// Prototype: bool is_default_ignorable(uint param_1)
// Body     : 003fee90 - 003fef8e


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_unicode_funcs_t::is_default_ignorable(unsigned int) */

bool __cdecl hb_unicode_funcs_t::is_default_ignorable(uint param_1)

{
  uint uVar1;
  short sVar2;
  bool bVar3;
  
  if (param_1 < 0x10000) {
    uVar1 = param_1 >> 8;
    bVar3 = false;
    switch(uVar1) {
    case 0:
      bVar3 = param_1 == 0xad;
      break;
    case 1:
    case 2:
    case 4:
    case 5:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
      break;
    case 3:
      bVar3 = param_1 == 0x34f;
      break;
    case 6:
      bVar3 = param_1 == 0x61c;
      break;
    case 0x17:
      bVar3 = (param_1 & 0xfffffffe) == 0x17b4;
      break;
    case 0x18:
      return param_1 - 0x180b < 4;
    case 0x20:
      if (param_1 - 0x2010 < 0xfffffffb) {
        return (param_1 & 0xfffffff0) == 0x2060 || param_1 - 0x202a < 5;
      }
      return true;
    default:
      if (uVar1 == 0xfe) {
        return param_1 == 0xfeff || (param_1 & 0xfffffff0) == 0xfe00;
      }
      if (uVar1 == 0xff) {
        return param_1 - 0xfff0 < 9;
      }
    }
  }
  else {
    sVar2 = (short)(param_1 >> 0x10);
    if (sVar2 != 0xe) {
      if (sVar2 == 1) {
        return param_1 - 0x1d173 < 8;
      }
      return false;
    }
    bVar3 = (param_1 & 0xfffff000) == 0xe0000;
  }
  return bVar3;
}


