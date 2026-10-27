// Function : png_colorspace_set_sRGB
// Namespace: juce:pnglibNamespace
// Entry    : 003a56a0
// Prototype: undefined png_colorspace_set_sRGB(pnglibNamespace * param_1, int * param_2, uint param_3)
// Body     : 003a56a0 - 003a581f


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_colorspace_set_sRGB(juce::pnglibNamespace::png_struct_def const*,
   juce::pnglibNamespace::png_colorspace*, int) */

void __cdecl
juce::pnglibNamespace::png_colorspace_set_sRGB(pnglibNamespace *param_1,int *param_2,uint param_3)

{
  ushort uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined7 extraout_var;
  ulong uVar4;
  char *pcVar5;
  
  uVar1 = *(ushort *)((long)param_2 + 0x4a);
  if ((uVar1 & 0x8000) != 0) {
    return;
  }
  if (param_3 < 4) {
    if (((uVar1 & 4) == 0) || (*(ushort *)(param_2 + 0x12) == param_3)) {
      if ((uVar1 & 0x20) == 0) {
        if (((uVar1 & 2) != 0) &&
           (bVar3 = png_colorspace_endpoints_match((int *)sRGB_xy,param_2 + 1,100),
           (int)CONCAT71(extraout_var,bVar3) == 0)) {
          png_chunk_report(param_1,"cHRM chunk does not match sRGB",2);
        }
        png_colorspace_check_gamma(param_1,param_2,0xb18f,2);
        *(short *)(param_2 + 0x12) = (short)param_3;
        uVar2 = sRGB_xy._8_8_;
        *(undefined8 *)(param_2 + 1) = sRGB_xy._0_8_;
        *(undefined8 *)(param_2 + 3) = uVar2;
        uVar2 = sRGB_xy._24_8_;
        *(undefined8 *)(param_2 + 5) = sRGB_xy._16_8_;
        *(undefined8 *)(param_2 + 7) = uVar2;
        uVar2 = png_colorspace_set_sRGB(juce::pnglibNamespace::png_struct_def_const*,juce::pnglibNamespace::png_colorspace*,int)
                ::sRGB_XYZ._24_8_;
        *(undefined8 *)(param_2 + 0xd) =
             png_colorspace_set_sRGB(juce::pnglibNamespace::png_struct_def_const*,juce::pnglibNamespace::png_colorspace*,int)
             ::sRGB_XYZ._16_8_;
        *(undefined8 *)(param_2 + 0xf) = uVar2;
        uVar2 = png_colorspace_set_sRGB(juce::pnglibNamespace::png_struct_def_const*,juce::pnglibNamespace::png_colorspace*,int)
                ::sRGB_XYZ._8_8_;
        *(undefined8 *)(param_2 + 9) =
             png_colorspace_set_sRGB(juce::pnglibNamespace::png_struct_def_const*,juce::pnglibNamespace::png_colorspace*,int)
             ::sRGB_XYZ._0_8_;
        *(undefined8 *)(param_2 + 0xb) = uVar2;
        param_2[0x11] =
             png_colorspace_set_sRGB(juce::pnglibNamespace::png_struct_def_const*,juce::pnglibNamespace::png_colorspace*,int)
             ::sRGB_XYZ._32_4_;
        *param_2 = 0xb18f;
        *(ushort *)((long)param_2 + 0x4a) = uVar1 | 0xe7;
        return;
      }
      if (((byte)param_1[0x52] & 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        png_err(param_1);
      }
      if (((*(uint *)(param_1 + 0x4c) & 0x8000) == 0) || (*(int *)(param_1 + 0x138) == 0)) {
        png_warning((long)param_1,"duplicate sRGB information ignored");
        return;
      }
      png_chunk_warning((long)param_1,0x5e3ed0);
      return;
    }
    uVar4 = (ulong)param_3;
    pcVar5 = "inconsistent rendering intents";
  }
  else {
    uVar4 = (ulong)(int)param_3;
    pcVar5 = "invalid sRGB rendering intent";
  }
  png_icc_profile_error(param_1,(long)param_2,"sRGB",uVar4,pcVar5);
  return;
}


