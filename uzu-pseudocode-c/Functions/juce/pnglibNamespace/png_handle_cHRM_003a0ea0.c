// Function : png_handle_cHRM
// Namespace: juce:pnglibNamespace
// Entry    : 003a0ea0
// Prototype: undefined png_handle_cHRM(pnglibNamespace * param_1, long param_2, uint param_3)
// Body     : 003a0ea0 - 003a1125


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_handle_cHRM(juce::pnglibNamespace::png_struct_def*,
   juce::pnglibNamespace::png_info_def*, unsigned int) */

void __cdecl
juce::pnglibNamespace::png_handle_cHRM(pnglibNamespace *param_1,long param_2,uint param_3)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  long local_38;
  
  if ((*(uint *)(param_1 + 0x4c) & 1) != 0) {
    if ((*(uint *)(param_1 + 0x4c) & 6) == 0) {
      if (param_3 == 0x20) {
        if (*(code **)(param_1 + 0x20) != (code *)0x0) {
          (**(code **)(param_1 + 0x20))(param_1,&local_78,0x20);
          bVar2 = (~*(uint *)(param_1 + 0x50) & 0x300) != 0;
          if (((byte)param_1[0x13b] & 0x20) == 0) {
            bVar2 = (*(uint *)(param_1 + 0x50) & 0x800) == 0;
          }
          if (bVar2) {
            uVar4 = zlibNamespace::crc32_z(*(uint *)(param_1 + 0x16c),(ulong *)&local_78,0x20);
            *(int *)(param_1 + 0x16c) = (int)uVar4;
          }
          uVar5 = png_crc_finish(param_1,0);
          if ((int)uVar5 == 0) {
            local_40 = local_78 >> 0x18 | (local_78 & 0xff0000) >> 8 | (local_78 & 0xff00) << 8 |
                       local_78 << 0x18;
            uVar10 = local_74 >> 0x18 | (local_74 & 0xff0000) >> 8 | (local_74 & 0xff00) << 8 |
                     local_74 << 0x18;
            local_3c = 0xffffffff;
            if (-1 < (int)uVar10) {
              local_3c = uVar10;
            }
            uVar11 = local_70 >> 0x18 | (local_70 & 0xff0000) >> 8 | (local_70 & 0xff00) << 8 |
                     local_70 << 0x18;
            local_58 = 0xffffffff;
            if (-1 < (int)uVar11) {
              local_58 = uVar11;
            }
            uVar12 = local_6c >> 0x18 | (local_6c & 0xff0000) >> 8 | (local_6c & 0xff00) << 8 |
                     local_6c << 0x18;
            local_54 = 0xffffffff;
            if (-1 < (int)uVar12) {
              local_54 = uVar12;
            }
            uVar8 = local_68 >> 0x18 | (local_68 & 0xff0000) >> 8 | (local_68 & 0xff00) << 8 |
                    local_68 << 0x18;
            local_50 = 0xffffffff;
            if (-1 < (int)uVar8) {
              local_50 = uVar8;
            }
            uVar3 = local_64 >> 0x18 | (local_64 & 0xff0000) >> 8 | (local_64 & 0xff00) << 8 |
                    local_64 << 0x18;
            local_4c = 0xffffffff;
            if (-1 < (int)uVar3) {
              local_4c = uVar3;
            }
            uVar6 = local_60 >> 0x18 | (local_60 & 0xff0000) >> 8 | (local_60 & 0xff00) << 8 |
                    local_60 << 0x18;
            local_48 = 0xffffffff;
            if (-1 < (int)uVar6) {
              local_48 = uVar6;
            }
            uVar7 = local_5c >> 0x18 | (local_5c & 0xff0000) >> 8 | (local_5c & 0xff00) << 8 |
                    local_5c << 0x18;
            local_44 = 0xffffffff;
            if (-1 < (int)uVar7) {
              local_44 = uVar7;
            }
            local_38 = param_2;
            if ((int)local_40 < 0) {
              local_40 = 0xffffffff;
            }
            else if ((((-1 < (int)uVar10) && (-1 < (int)uVar11)) && (-1 < (int)uVar12)) &&
                    (((-1 < (int)uVar8 && (-1 < (int)uVar3)) &&
                     ((-1 < (int)uVar6 && (-1 < (int)uVar7)))))) {
              uVar1 = *(ushort *)(param_1 + 0x3e2);
              if ((uVar1 & 0x8000) != 0) {
                return;
              }
              if ((uVar1 & 0x10) == 0) {
                *(ushort *)(param_1 + 0x3e2) = uVar1 | 0x10;
                png_colorspace_set_chromaticities(param_1,(long)(param_1 + 0x398),&local_58);
                png_colorspace_sync((long)param_1,param_2);
                return;
              }
              *(ushort *)(param_1 + 0x3e2) = uVar1 | 0x8000;
              png_colorspace_sync((long)param_1,param_2);
              png_chunk_benign_error(param_1,0x6549a6);
              return;
            }
            if (((byte)param_1[0x52] & 0x10) == 0) goto LAB_003a111e;
            png_chunk_warning((long)param_1,0x5e44c9);
          }
          return;
        }
      }
      else {
        png_crc_finish(param_1,param_3);
        if (((byte)param_1[0x52] & 0x10) != 0) {
          pcVar9 = "invalid";
          goto LAB_003a10bc;
        }
      }
    }
    else {
      png_crc_finish(param_1,param_3);
      if (((byte)param_1[0x52] & 0x10) != 0) {
        pcVar9 = "out of place";
LAB_003a10bc:
        png_chunk_warning((long)param_1,(long)pcVar9);
        return;
      }
    }
  }
LAB_003a111e:
                    /* WARNING: Subroutine does not return */
  png_err(param_1);
}


