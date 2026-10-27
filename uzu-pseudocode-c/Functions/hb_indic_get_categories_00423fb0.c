// Function : hb_indic_get_categories
// Namespace: 
// Entry    : 00423fb0
// Prototype: undefined2 hb_indic_get_categories(uint param_1)
// Body     : 00423fb0 - 0042415d


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_indic_get_categories(unsigned int) */

undefined2 __cdecl hb_indic_get_categories(uint param_1)

{
  undefined2 uVar1;
  uint uVar2;
  
  uVar1 = 0xe00;
  switch(param_1 >> 0xc) {
  case 0:
    if (param_1 == 0xa0) {
      return 0x40a;
    }
    uVar2 = param_1 - 0x28;
    if (0x17 < uVar2) {
      if (param_1 - 0xb0 < 0x28) {
        uVar2 = param_1 - 0x98;
      }
      else {
        if (0x47f < param_1 - 0x900) {
          return 0xe00;
        }
        uVar2 = param_1 - 0x8c0;
      }
    }
    break;
  case 1:
    if (param_1 - 0x1000 < 0xa0) {
      uVar2 = param_1 - 0xb40;
    }
    else if (param_1 - 0x1780 < 0x70) {
      uVar2 = param_1 - 0x1220;
    }
    else {
      if (0x2f < param_1 - 0x1cd0) {
        return 0xe00;
      }
      uVar2 = param_1 - 0x1700;
    }
    break;
  case 2:
    if (param_1 == 0x25cc) {
      return 0x40b;
    }
    if (param_1 - 0x2008 < 0x20) {
      uVar2 = param_1 - 0x1a08;
    }
    else if (param_1 - 0x2070 < 0x18) {
      uVar2 = param_1 - 0x1a50;
    }
    else {
      if ((param_1 & 0xfffffff8) != 0x25f8) {
        return 0xe00;
      }
      uVar2 = param_1 - 0x1fc0;
    }
    break;
  default:
    goto switchD_00423fd0_caseD_3;
  case 10:
    uVar2 = param_1 & 0xffffffe0;
    if (uVar2 == 0xaa60) {
      uVar2 = param_1 - 0xa3e0;
    }
    else if (uVar2 == 0xa9e0) {
      uVar2 = param_1 - 0xa380;
    }
    else {
      if (uVar2 != 0xa8e0) {
        return 0xe00;
      }
      uVar2 = param_1 - 0xa2a0;
    }
    break;
  case 0xf:
    if ((param_1 & 0xfffffff0) != 0xfe00) {
      return 0xe00;
    }
    uVar2 = param_1 - 0xf760;
    break;
  case 0x11:
    if ((param_1 & 0xfffffff8) == 0x11338) {
      uVar2 = param_1 - 0x10c80;
    }
    else if ((param_1 & 0xfffffff8) == 0x11300) {
      uVar2 = param_1 - 0x10c50;
    }
    else {
      if (0x17 < param_1 - 0x116d0) {
        return 0xe00;
      }
      uVar2 = param_1 - 0x11010;
    }
  }
  uVar1 = *(undefined2 *)(indic_table + (ulong)uVar2 * 2);
switchD_00423fd0_caseD_3:
  return uVar1;
}


