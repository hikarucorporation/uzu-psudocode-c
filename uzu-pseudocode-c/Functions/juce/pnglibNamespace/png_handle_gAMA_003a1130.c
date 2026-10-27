// Function : png_handle_gAMA
// Namespace: juce:pnglibNamespace
// Entry    : 003a1130
// Prototype: undefined png_handle_gAMA(pnglibNamespace * param_1, long param_2, uint param_3)
// Body     : 003a1130 - 003a13cf


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_handle_gAMA(juce::pnglibNamespace::png_struct_def*,
   juce::pnglibNamespace::png_info_def*, unsigned int) */

void __cdecl
juce::pnglibNamespace::png_handle_gAMA(pnglibNamespace *param_1,long param_2,uint param_3)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined7 extraout_var;
  char *pcVar12;
  uint uVar13;
  uint local_2c;
  
  if ((*(uint *)(param_1 + 0x4c) & 1) == 0) {
LAB_003a13c8:
                    /* WARNING: Subroutine does not return */
    png_err(param_1);
  }
  if ((*(uint *)(param_1 + 0x4c) & 6) != 0) {
    png_crc_finish(param_1,param_3);
    if (((byte)param_1[0x52] & 0x10) != 0) {
      pcVar12 = "out of place";
LAB_003a1212:
      png_chunk_warning((long)param_1,(long)pcVar12);
      return;
    }
    goto LAB_003a13c8;
  }
  if (param_3 != 4) {
    png_crc_finish(param_1,param_3);
    if (((byte)param_1[0x52] & 0x10) != 0) {
      pcVar12 = "invalid";
      goto LAB_003a1212;
    }
    goto LAB_003a13c8;
  }
  if (*(code **)(param_1 + 0x20) == (code *)0x0) goto LAB_003a13c8;
  (**(code **)(param_1 + 0x20))(param_1,&local_2c,4);
  bVar8 = (~*(uint *)(param_1 + 0x50) & 0x300) != 0;
  if (((byte)param_1[0x13b] & 0x20) == 0) {
    bVar8 = (*(uint *)(param_1 + 0x50) & 0x800) == 0;
  }
  if (bVar8) {
    uVar10 = zlibNamespace::crc32_z(*(uint *)(param_1 + 0x16c),(ulong *)&local_2c,4);
    *(int *)(param_1 + 0x16c) = (int)uVar10;
  }
  uVar11 = png_crc_finish(param_1,0);
  if ((int)uVar11 != 0) {
    return;
  }
  uVar9 = local_2c >> 0x18 | (local_2c & 0xff0000) >> 8 | (local_2c & 0xff00) << 8 |
          local_2c << 0x18;
  uVar13 = 0xffffffff;
  if (-1 < (int)uVar9) {
    uVar13 = uVar9;
  }
  if (uVar13 + 0xdabf41bf < 0xdabf41cf) {
    uVar9 = *(uint *)(param_1 + 0x4c);
    pcVar12 = "gamma value out of range";
    *(ushort *)(param_1 + 0x3e2) = *(ushort *)(param_1 + 0x3e2) | 0x8000;
  }
  else {
    uVar9 = *(uint *)(param_1 + 0x4c);
    uVar1 = *(ushort *)(param_1 + 0x3e2);
    if (((uVar9 & 0x8000) == 0) || ((uVar1 & 8) == 0)) {
      if ((-1 < (short)uVar1) &&
         (bVar8 = png_colorspace_check_gamma(param_1,(int *)(param_1 + 0x398),uVar13,1),
         (int)CONCAT71(extraout_var,bVar8) != 0)) {
        *(uint *)(param_1 + 0x398) = uVar13;
        *(ushort *)(param_1 + 0x3e2) = uVar1 | 9;
      }
      goto LAB_003a12f4;
    }
    pcVar12 = "duplicate";
    *(ushort *)(param_1 + 0x3e2) = uVar1 | 0x8000;
  }
  if ((uVar9 & 0x8000) == 0) {
    if (((byte)param_1[0x52] & 0x40) == 0) goto LAB_003a13c8;
    png_warning((long)param_1,pcVar12);
  }
  else {
    png_chunk_warning((long)param_1,(long)pcVar12);
  }
LAB_003a12f4:
  if (param_2 != 0) {
    uVar11 = *(undefined8 *)(param_1 + 0x3dc);
    *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_1 + 0x3d4);
    *(undefined8 *)(param_2 + 0x78) = uVar11;
    uVar11 = *(undefined8 *)(param_1 + 0x398);
    uVar2 = *(undefined8 *)(param_1 + 0x3a0);
    uVar3 = *(undefined8 *)(param_1 + 0x3a8);
    uVar4 = *(undefined8 *)(param_1 + 0x3b0);
    uVar5 = *(undefined8 *)(param_1 + 0x3b8);
    uVar6 = *(undefined8 *)(param_1 + 0x3c0);
    uVar7 = *(undefined8 *)(param_1 + 0x3d0);
    *(undefined8 *)(param_2 + 100) = *(undefined8 *)(param_1 + 0x3c8);
    *(undefined8 *)(param_2 + 0x6c) = uVar7;
    *(undefined8 *)(param_2 + 0x54) = uVar5;
    *(undefined8 *)(param_2 + 0x5c) = uVar6;
    *(undefined8 *)(param_2 + 0x44) = uVar3;
    *(undefined8 *)(param_2 + 0x4c) = uVar4;
    *(undefined8 *)(param_2 + 0x34) = uVar11;
    *(undefined8 *)(param_2 + 0x3c) = uVar2;
    uVar1 = *(ushort *)(param_2 + 0x7e);
    if ((uVar1 & 0x8000) == 0) {
      uVar9 = (uVar1 & 0x80) << 4;
      uVar13 = (*(uint *)(param_2 + 8) & 0xfffff7fb) + (uVar1 & 2) * 2;
      if ((uVar1 & 1) == 0) {
        uVar9 = uVar13 & 0xfffffffe | uVar9;
      }
      else {
        uVar9 = uVar13 | uVar9 | 1;
      }
      *(uint *)(param_2 + 8) = uVar9;
    }
    else {
      uVar9 = *(uint *)(param_2 + 8) & 0xffffe7fa;
      *(uint *)(param_2 + 8) = uVar9;
      uVar13 = *(uint *)(param_2 + 0x11c);
      if ((uVar13 & 0x10) != 0) {
        if (*(void **)(param_2 + 0x80) != (void *)0x0) {
          free(*(void **)(param_2 + 0x80));
        }
        if (*(void **)(param_2 + 0x88) != (void *)0x0) {
          free(*(void **)(param_2 + 0x88));
        }
        *(undefined8 *)(param_2 + 0x80) = 0;
        *(undefined8 *)(param_2 + 0x88) = 0;
        *(uint *)(param_2 + 8) = uVar9;
      }
      *(uint *)(param_2 + 0x11c) = uVar13 & 0xffffffef;
    }
  }
  return;
}


