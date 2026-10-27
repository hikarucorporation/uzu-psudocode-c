// Function : png_icc_check_header
// Namespace: juce:pnglibNamespace
// Entry    : 003a5060
// Prototype: undefined8 png_icc_check_header(pnglibNamespace * param_1, long param_2, char * param_3, uint param_4, uint * param_5, uint param_6)
// Body     : 003a5060 - 003a529d


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_icc_check_header(juce::pnglibNamespace::png_struct_def const*,
   juce::pnglibNamespace::png_colorspace*, char const*, unsigned int, unsigned char const*, int) */

undefined8 __cdecl
juce::pnglibNamespace::png_icc_check_header
          (pnglibNamespace *param_1,long param_2,char *param_3,uint param_4,uint *param_5,
          uint param_6)

{
  ulong uVar1;
  int iVar2;
  char *pcVar3;
  
  uVar1 = (ulong)*param_5 << 0x20;
  uVar1 = (ulong)(*param_5 >> 0x18) | (uVar1 & 0xff000000000000) >> 0x28 |
          (uVar1 & 0xff0000000000) >> 0x18 | (uVar1 & 0xff00000000) >> 8;
  if ((uint)uVar1 != param_4) {
    pcVar3 = "length does not match profile";
    goto LAB_003a50e2;
  }
  if (((param_4 & 3) != 0) && (3 < (byte)param_5[2])) {
    uVar1 = (ulong)param_4;
    pcVar3 = "invalid length";
    goto LAB_003a50e2;
  }
  uVar1 = (ulong)param_5[0x20] << 0x20;
  uVar1 = (ulong)(param_5[0x20] >> 0x18) | (uVar1 & 0xff000000000000) >> 0x28 |
          (uVar1 & 0xff0000000000) >> 0x18 | (uVar1 & 0xff00000000) >> 8;
  if ((0x1555554a < (uint)uVar1) || (param_4 < (uint)uVar1 * 0xc + 0x84)) {
    pcVar3 = "tag count too large";
    goto LAB_003a50e2;
  }
  uVar1 = (ulong)param_5[0x10] << 0x20;
  uVar1 = (ulong)(param_5[0x10] >> 0x18) | (uVar1 & 0xff000000000000) >> 0x28 |
          (uVar1 & 0xff0000000000) >> 0x18 | (uVar1 & 0xff00000000) >> 8;
  if (0xfffe < (uint)uVar1) {
    pcVar3 = "invalid rendering intent";
    goto LAB_003a50e2;
  }
  if (3 < (uint)uVar1) {
    png_icc_profile_error(param_1,0,param_3,uVar1,"intent outside defined range");
  }
  uVar1 = (ulong)param_5[9] << 0x20;
  uVar1 = (ulong)(param_5[9] >> 0x18) | (uVar1 & 0xff000000000000) >> 0x28 |
          (uVar1 & 0xff0000000000) >> 0x18 | (uVar1 & 0xff00000000) >> 8;
  if ((int)uVar1 != 0x61637370) {
    pcVar3 = "invalid signature";
    goto LAB_003a50e2;
  }
  if (param_5[0x13] != 0x2dd30000 || *(long *)(param_5 + 0x11) != 0x100d6f60000) {
    png_icc_profile_error(param_1,0,param_3,0,"PCS illuminant is not D50");
  }
  uVar1 = (ulong)param_5[4] << 0x20;
  uVar1 = (ulong)(param_5[4] >> 0x18) | (uVar1 & 0xff000000000000) >> 0x28 |
          (uVar1 & 0xff0000000000) >> 0x18 | (uVar1 & 0xff00000000) >> 8;
  if ((int)uVar1 == 0x47524159) {
    if ((param_6 & 2) != 0) {
      pcVar3 = "Gray color space not permitted on RGB PNG";
      uVar1 = 0x47524159;
      goto LAB_003a50e2;
    }
  }
  else {
    if ((int)uVar1 != 0x52474220) {
      pcVar3 = "invalid ICC profile color space";
      goto LAB_003a50e2;
    }
    if ((param_6 & 2) == 0) {
      pcVar3 = "RGB color space not permitted on grayscale PNG";
      uVar1 = 0x52474220;
      goto LAB_003a50e2;
    }
  }
  uVar1 = (ulong)param_5[3] << 0x20;
  uVar1 = (ulong)(param_5[3] >> 0x18) | (uVar1 & 0xff000000000000) >> 0x28 |
          (uVar1 & 0xff0000000000) >> 0x18 | (uVar1 & 0xff00000000) >> 8;
  iVar2 = (int)uVar1;
  if (iVar2 < 0x6e6d636c) {
    if (iVar2 == 0x61627374) {
      pcVar3 = "invalid embedded Abstract ICC profile";
      uVar1 = 0x61627374;
      goto LAB_003a50e2;
    }
    if (iVar2 == 0x6c696e6b) {
      pcVar3 = "unexpected DeviceLink ICC profile class";
      uVar1 = 0x6c696e6b;
      goto LAB_003a50e2;
    }
    if (iVar2 != 0x6d6e7472) goto LAB_003a5227;
  }
  else if (iVar2 < 0x73636e72) {
    if (iVar2 == 0x6e6d636c) {
      pcVar3 = "unexpected NamedColor ICC profile class";
      uVar1 = 0x6e6d636c;
      goto LAB_003a523c;
    }
    if (iVar2 != 0x70727472) goto LAB_003a5227;
  }
  else if ((iVar2 != 0x73636e72) && (iVar2 != 0x73706163)) {
LAB_003a5227:
    pcVar3 = "unrecognized ICC profile class";
LAB_003a523c:
    png_icc_profile_error(param_1,0,param_3,uVar1,pcVar3);
  }
  uVar1 = (ulong)param_5[5] << 0x20;
  uVar1 = (ulong)(param_5[5] >> 0x18) | (uVar1 & 0xff000000000000) >> 0x28 |
          (uVar1 & 0xff0000000000) >> 0x18 | (uVar1 & 0xff00000000) >> 8;
  if ((int)uVar1 == 0x4c616220) {
    return 1;
  }
  if ((int)uVar1 == 0x58595a20) {
    return 1;
  }
  pcVar3 = "unexpected ICC PCS encoding";
LAB_003a50e2:
  png_icc_profile_error(param_1,param_2,param_3,uVar1,pcVar3);
  return 0;
}


