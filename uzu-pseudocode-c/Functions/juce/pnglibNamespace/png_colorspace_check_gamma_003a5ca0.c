// Function : png_colorspace_check_gamma
// Namespace: juce:pnglibNamespace
// Entry    : 003a5ca0
// Prototype: bool png_colorspace_check_gamma(pnglibNamespace * param_1, int * param_2, int param_3, int param_4)
// Body     : 003a5ca0 - 003a5db1


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_colorspace_check_gamma(juce::pnglibNamespace::png_struct_def const*,
   juce::pnglibNamespace::png_colorspace*, int, int) */

bool __cdecl
juce::pnglibNamespace::png_colorspace_check_gamma
          (pnglibNamespace *param_1,int *param_2,int param_3,int param_4)

{
  ushort uVar1;
  bool bVar2;
  double dVar3;
  
  uVar1 = *(ushort *)((long)param_2 + 0x4a);
  bVar2 = true;
  if ((uVar1 & 1) != 0) {
    if ((((param_3 != 0) && (*param_2 != 0)) &&
        (dVar3 = floor(((double)*param_2 * DAT_005de6e8) / (double)param_3 + DAT_005db338),
        dVar3 <= DAT_0065a018)) && ((DAT_005de630 <= dVar3 && ((int)dVar3 - 95000U < 0x2711)))) {
      return true;
    }
    if ((param_4 == 2) || ((uVar1 & 0x20) != 0)) {
      if ((*(uint *)(param_1 + 0x4c) & 0x8000) == 0) {
        if ((*(uint *)(param_1 + 0x50) & 0x400000) == 0) {
LAB_003a5daa:
                    /* WARNING: Subroutine does not return */
          png_err(param_1);
        }
        png_warning((long)param_1,"gamma value does not match sRGB");
      }
      else {
        if ((*(uint *)(param_1 + 0x50) & 0x100000) == 0) goto LAB_003a5daa;
        png_chunk_warning((long)param_1,0x5e4e65);
      }
      bVar2 = param_4 == 2;
    }
    else if ((*(uint *)(param_1 + 0x4c) & 0x8000) == 0) {
      if (((byte)param_1[0x52] & 0x20) == 0) goto LAB_003a5daa;
      png_warning((long)param_1,"gamma value does not match libpng estimate");
    }
    else {
      png_chunk_warning((long)param_1,0x5e4e85);
    }
  }
  return bVar2;
}


