// Function : png_check_fp_number
// Namespace: juce:pnglibNamespace
// Entry    : 003a5dc0
// Prototype: uint png_check_fp_number(long param_1, ulong param_2, uint * param_3, ulong * param_4)
// Body     : 003a5dc0 - 003a5ee1


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_check_fp_number(char const*, unsigned long, int*, unsigned long*) */

uint __cdecl
juce::pnglibNamespace::png_check_fp_number(long param_1,ulong param_2,uint *param_3,ulong *param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar2 = *param_3;
  uVar3 = *param_4;
  if (uVar3 < param_2) {
    do {
      uVar4 = 4;
      switch(*(undefined1 *)(param_1 + uVar3)) {
      case 0x2b:
        break;
      default:
        goto switchD_003a5e16_caseD_2c;
      case 0x2d:
        uVar4 = 0x84;
        break;
      case 0x2e:
        uVar4 = 0x10;
        break;
      case 0x30:
        uVar4 = 8;
        break;
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
        uVar4 = 0x108;
        break;
      case 0x45:
      case 0x65:
        uVar4 = 0x20;
      }
      switch((uVar4 & 0x3c) + (uVar2 & 3)) {
      case 4:
        if ((uVar2 & 0x3c) != 0) goto switchD_003a5e16_caseD_2c;
LAB_003a5ea7:
        uVar2 = uVar2 | uVar4;
        break;
      default:
        goto switchD_003a5e16_caseD_2c;
      case 6:
        if ((uVar2 & 0x3c) != 0) goto switchD_003a5e16_caseD_2c;
        uVar2 = uVar2 | 4;
        break;
      case 8:
        uVar1 = uVar2 & 0x180 | 0x11;
        if ((uVar2 & 0x10) == 0) {
          uVar1 = uVar2;
        }
        goto LAB_003a5de4;
      case 9:
        uVar1 = uVar2;
LAB_003a5de4:
        uVar2 = uVar4 | uVar1 | 0x40;
        break;
      case 10:
        uVar2 = uVar2 | 0x48;
        break;
      case 0x10:
        if ((uVar2 & 0x10) != 0) goto switchD_003a5e16_caseD_2c;
        if ((uVar2 & 8) != 0) goto LAB_003a5ea7;
        uVar2 = uVar2 & 0x1c0 | uVar4 | 1;
        break;
      case 0x20:
      case 0x21:
        if ((uVar2 & 8) == 0) goto switchD_003a5e16_caseD_2c;
        uVar2 = uVar2 & 0x1c0 | 2;
      }
      uVar3 = uVar3 + 1;
    } while (param_2 != uVar3);
    uVar3 = param_2;
  }
switchD_003a5e16_caseD_2c:
  *param_3 = uVar2;
  *param_4 = uVar3;
  return uVar2 >> 3 & 1;
}


