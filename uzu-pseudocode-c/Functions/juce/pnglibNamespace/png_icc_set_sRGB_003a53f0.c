// Function : png_icc_set_sRGB
// Namespace: juce:pnglibNamespace
// Entry    : 003a53f0
// Prototype: undefined png_icc_set_sRGB(pnglibNamespace * param_1, int * param_2, ulong * param_3, ulong param_4)
// Body     : 003a53f0 - 003a55ad


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_icc_set_sRGB(juce::pnglibNamespace::png_struct_def const*,
   juce::pnglibNamespace::png_colorspace*, unsigned char const*, unsigned long) */

void __cdecl
juce::pnglibNamespace::png_icc_set_sRGB
          (pnglibNamespace *param_1,int *param_2,ulong *param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  char *pcVar7;
  long lVar8;
  
  uVar1 = *(uint *)((long)param_3 + 0x54);
  lVar8 = 0;
  uVar4 = 0x10000;
  puVar5 = &png_sRGB_checks;
  uVar6 = 0;
  do {
    if (((((uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18) ==
           puVar5[3]) &&
         (uVar2 = (uint)param_3[0xb],
         (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18) ==
         puVar5[4])) &&
        (uVar2 = *(uint *)((long)param_3 + 0x5c),
        (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18) ==
        puVar5[5])) &&
       (uVar2 = (uint)param_3[0xc],
       (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18) ==
       puVar5[6])) {
      if (uVar6 == 0) {
        uVar4 = (uint)*param_3;
        uVar2 = (uint)param_3[8];
        uVar6 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
        uVar4 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
        if (uVar6 == puVar5[2]) goto LAB_003a5478;
      }
      else if (uVar6 == puVar5[2]) {
LAB_003a5478:
        if (uVar4 == *(ushort *)((long)puVar5 + 0x1e)) {
          if (param_4 == 0) {
            param_4 = zlibNamespace::adler32_z(1,(byte *)param_3,(ulong)uVar6);
          }
          if ((param_4 != *puVar5) ||
             (uVar3 = zlibNamespace::crc32_z(0,param_3,(ulong)uVar6), uVar3 != puVar5[1])) {
            if (((byte)param_1[0x4d] & 0x80) != 0) {
              png_chunk_warning((long)param_1,0x5e4f14);
              return;
            }
            if (((byte)param_1[0x52] & 0x20) != 0) {
              png_warning((long)param_1,"Not recognizing known sRGB profile that has been edited");
              return;
            }
            goto LAB_003a55a6;
          }
          if ((uint)lVar8 < 5) {
            if (2 < lVar8 - 4U) goto LAB_003a5586;
            if (((byte)param_1[0x4d] & 0x80) != 0) {
              pcVar7 = "out-of-date sRGB profile with no signature";
              goto LAB_003a557e;
            }
            if (((byte)param_1[0x52] & 0x20) == 0) goto LAB_003a55a6;
            pcVar7 = "out-of-date sRGB profile with no signature";
          }
          else {
            if (((byte)param_1[0x4d] & 0x80) != 0) {
              if ((*(uint *)(param_1 + 0x50) & 0x100000) == 0) goto LAB_003a55a6;
              pcVar7 = "known incorrect sRGB profile";
LAB_003a557e:
              png_chunk_warning((long)param_1,(long)pcVar7);
              goto LAB_003a5586;
            }
            if ((*(uint *)(param_1 + 0x50) & 0x400000) == 0) {
LAB_003a55a6:
                    /* WARNING: Subroutine does not return */
              png_err(param_1);
            }
            pcVar7 = "known incorrect sRGB profile";
          }
          png_warning((long)param_1,pcVar7);
LAB_003a5586:
          uVar1 = (uint)param_3[8];
          png_colorspace_set_sRGB
                    (param_1,param_2,
                     uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18
                    );
          return;
        }
      }
    }
    lVar8 = lVar8 + 1;
    puVar5 = puVar5 + 8;
    if (lVar8 == 7) {
      return;
    }
  } while( true );
}


