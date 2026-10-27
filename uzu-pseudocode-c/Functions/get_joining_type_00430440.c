// Function : get_joining_type
// Namespace: 
// Entry    : 00430440
// Prototype: char get_joining_type(uint param_1, uint param_2)
// Body     : 00430440 - 00430579


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* get_joining_type(unsigned int, hb_unicode_general_category_t) */

char __cdecl get_joining_type(uint param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  
  switch(param_1 >> 0xc) {
  case 0:
    uVar2 = param_1 - 0x600;
    if (0x2e2 < uVar2) goto switchD_0043045c_caseD_3;
    break;
  case 1:
    if (0xa4 < param_1 - 0x1806) goto switchD_0043045c_caseD_3;
    uVar2 = param_1 - 0x1523;
    break;
  case 2:
    if (0x5d < param_1 - 0x200c) goto switchD_0043045c_caseD_3;
    uVar2 = param_1 - 0x1c84;
    break;
  default:
    goto switchD_0043045c_caseD_3;
  case 10:
    if (0x33 < param_1 - 0xa840) goto switchD_0043045c_caseD_3;
    uVar2 = param_1 - 0xa45a;
    break;
  case 0x10:
    if (param_1 - 0x10ac0 < 0x30) {
      uVar2 = param_1 - 0x106a6;
    }
    else if (param_1 - 0x10b80 < 0x30) {
      uVar2 = param_1 - 0x10736;
    }
    else if (param_1 - 0x10d00 < 0x24) {
      uVar2 = param_1 - 0x10886;
    }
    else if (param_1 - 0x10ec2 < 3) {
      uVar2 = param_1 - 0x10a24;
    }
    else {
      if (0x9b < param_1 - 0x10f30) goto switchD_0043045c_caseD_3;
      uVar2 = param_1 - 0x10a8f;
    }
    break;
  case 0x11:
    if (0x10 < param_1 - 0x110bd) goto switchD_0043045c_caseD_3;
    uVar2 = param_1 - 0x10b80;
    break;
  case 0x1e:
    if (0x4b < param_1 - 0x1e900) goto switchD_0043045c_caseD_3;
    uVar2 = param_1 - 0x1e3b2;
  }
  if (joining_table[uVar2] != '\b') {
    return joining_table[uVar2];
  }
switchD_0043045c_caseD_3:
  cVar1 = '\a';
  if ((0x1802U >> (param_2 & 0x1f) & 1) == 0) {
    cVar1 = '\0';
  }
  if (0x1f < param_2) {
    cVar1 = '\0';
  }
  return cVar1;
}


