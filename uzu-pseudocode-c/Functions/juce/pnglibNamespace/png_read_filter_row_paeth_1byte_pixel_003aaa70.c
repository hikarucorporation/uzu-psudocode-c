// Function : png_read_filter_row_paeth_1byte_pixel
// Namespace: juce:pnglibNamespace
// Entry    : 003aaa70
// Prototype: undefined png_read_filter_row_paeth_1byte_pixel(long param_1, byte * param_2, byte * param_3)
// Body     : 003aaa70 - 003aaaf7


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_read_filter_row_paeth_1byte_pixel(juce::pnglibNamespace::png_row_info_struct*,
   unsigned char*, unsigned char const*) */

void __cdecl
juce::pnglibNamespace::png_read_filter_row_paeth_1byte_pixel
          (long param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  lVar2 = *(long *)(param_1 + 8);
  bVar1 = *param_3;
  uVar8 = (uint)*param_2 + (uint)bVar1;
  *param_2 = (byte)uVar8;
  if (1 < lVar2) {
    pbVar7 = param_2 + 1;
    uVar11 = (uint)bVar1;
    do {
      param_3 = param_3 + 1;
      uVar8 = uVar8 & 0xff;
      uVar10 = (uint)*param_3;
      uVar4 = uVar10 - uVar11;
      uVar9 = uVar8 - uVar11;
      uVar3 = -uVar4;
      if ((int)-uVar4 < 0) {
        uVar3 = uVar4;
      }
      uVar6 = -uVar9;
      if ((int)-uVar9 < 0) {
        uVar6 = uVar9;
      }
      uVar5 = -(uVar9 + uVar4);
      if ((int)uVar5 < 0) {
        uVar5 = uVar9 + uVar4;
      }
      if (uVar6 < uVar3) {
        uVar3 = uVar6;
        uVar8 = uVar10;
      }
      if (uVar3 <= uVar5) {
        uVar11 = uVar8;
      }
      uVar8 = *pbVar7 + uVar11;
      *pbVar7 = (byte)uVar8;
      pbVar7 = pbVar7 + 1;
      uVar11 = uVar10;
    } while (pbVar7 < param_2 + lVar2);
  }
  return;
}


