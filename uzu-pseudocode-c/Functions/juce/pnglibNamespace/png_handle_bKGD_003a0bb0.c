// Function : png_handle_bKGD
// Namespace: juce:pnglibNamespace
// Entry    : 003a0bb0
// Prototype: undefined png_handle_bKGD(pnglibNamespace * param_1, long param_2, uint param_3)
// Body     : 003a0bb0 - 003a0e92


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_handle_bKGD(juce::pnglibNamespace::png_struct_def*,
   juce::pnglibNamespace::png_info_def*, unsigned int) */

void __cdecl
juce::pnglibNamespace::png_handle_bKGD(pnglibNamespace *param_1,long param_2,uint param_3)

{
  pnglibNamespace pVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  ushort uVar5;
  undefined8 in_RAX;
  ulong uVar6;
  undefined8 uVar7;
  ushort uVar8;
  uint uVar9;
  ushort uVar10;
  ulong uVar11;
  char *pcVar12;
  ushort uVar13;
  ulong *puVar14;
  ulong uVar15;
  undefined8 uStack_38;
  
  uVar9 = *(uint *)(param_1 + 0x4c);
  if ((uVar9 & 1) != 0) {
    if (((uVar9 & 4) == 0) &&
       ((pVar1 = param_1[0x187], pVar1 != (pnglibNamespace)0x3 || ((uVar9 & 2) != 0)))) {
      if ((param_2 == 0) || ((*(byte *)(param_2 + 8) & 0x20) == 0)) {
        uVar9 = 1;
        if (pVar1 != (pnglibNamespace)0x3) {
          uVar9 = (uint)(((byte)pVar1 & 2) >> 1) * 4 + 2;
        }
        if (uVar9 == param_3) {
          if (*(code **)(param_1 + 0x20) != (code *)0x0) {
            uVar15 = (ulong)param_3;
            puVar14 = (ulong *)((long)&uStack_38 + 2);
            uStack_38 = in_RAX;
            (**(code **)(param_1 + 0x20))(param_1,puVar14,uVar15);
            bVar3 = (~*(uint *)(param_1 + 0x50) & 0x300) != 0;
            if (((byte)param_1[0x13b] & 0x20) == 0) {
              bVar3 = (*(uint *)(param_1 + 0x50) & 0x800) == 0;
            }
            if (bVar3) {
              uVar6 = (ulong)*(uint *)(param_1 + 0x16c);
              do {
                uVar11 = uVar15 & 0xffffffff;
                if ((int)uVar15 == 0) {
                  uVar11 = 0xffffffff;
                }
                uVar6 = zlibNamespace::crc32_z((uint)uVar6,puVar14,uVar11);
                puVar14 = (ulong *)((long)puVar14 + uVar11);
                uVar15 = uVar15 - uVar11;
              } while (uVar15 != 0);
              *(int *)(param_1 + 0x16c) = (int)uVar6;
            }
            uVar7 = png_crc_finish(param_1,0);
            if ((int)uVar7 != 0) {
              return;
            }
            if (param_1[0x187] == (pnglibNamespace)0x3) {
              if (param_2 == 0) {
                return;
              }
              if (*(ushort *)(param_2 + 0x20) == 0) {
                uVar13 = 0;
                uVar8 = 0;
                uVar10 = 0;
                uVar5 = 0;
              }
              else {
                if (*(ushort *)(param_2 + 0x20) <= (ushort)uStack_38._2_1_) {
                  pcVar12 = "invalid index";
                  goto LAB_003a0e6d;
                }
                lVar2 = *(long *)(param_1 + 0x170);
                lVar4 = (ulong)uStack_38._2_1_ * 3;
                uVar8 = (ushort)*(byte *)(lVar2 + lVar4);
                uVar10 = (ushort)*(byte *)(lVar2 + 1 + lVar4);
                uVar5 = (ushort)*(byte *)(lVar2 + 2 + lVar4);
                uVar13 = 0;
              }
            }
            else {
              pVar1 = param_1[0x188];
              if (((byte)param_1[0x187] & 2) == 0) {
                if ((byte)pVar1 < 9) {
                  if ((uStack_38._2_1_ != 0) || (uStack_38._3_1_ >> ((byte)pVar1 & 0x1f) != 0)) {
                    pcVar12 = "invalid gray level";
LAB_003a0e6d:
                    png_chunk_benign_error(param_1,(long)pcVar12);
                    return;
                  }
                  uVar8 = 0;
                }
                else {
                  uVar8 = (ushort)uStack_38._2_1_ << 8;
                }
                uVar8 = uVar8 | uStack_38._3_1_;
                uVar5 = uVar8;
                uVar10 = uVar8;
                uVar13 = uVar8;
              }
              else {
                if ((byte)pVar1 < 9) {
                  if (((uStack_38._2_1_ != 0) || (uStack_38._4_1_ != 0)) || (uStack_38._6_1_ != 0))
                  {
                    pcVar12 = "invalid color";
                    goto LAB_003a0e6d;
                  }
                  uVar5 = 0;
                  uVar10 = 0;
                  uVar8 = 0;
                }
                else {
                  uVar8 = (ushort)uStack_38._2_1_ << 8;
                  uVar10 = (ushort)uStack_38._4_1_ << 8;
                  uVar5 = (ushort)uStack_38._6_1_ << 8;
                }
                uVar8 = uVar8 | uStack_38._3_1_;
                uVar10 = uVar10 | uStack_38._5_1_;
                uVar5 = uVar5 | uStack_38._7_1_;
                uVar13 = 0;
              }
              if (param_2 == 0) {
                return;
              }
              uStack_38._2_1_ = 0;
            }
            *(byte *)(param_2 + 0xca) = uStack_38._2_1_;
            *(ushort *)(param_2 + 0xcc) = uVar8;
            *(ushort *)(param_2 + 0xce) = uVar10;
            *(ushort *)(param_2 + 0xd0) = uVar5;
            *(ushort *)(param_2 + 0xd2) = uVar13;
            *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 0x20;
            return;
          }
        }
        else {
          png_crc_finish(param_1,param_3);
          if (((byte)param_1[0x52] & 0x10) != 0) {
            pcVar12 = "invalid";
            goto LAB_003a0bfe;
          }
        }
      }
      else {
        png_crc_finish(param_1,param_3);
        if (((byte)param_1[0x52] & 0x10) != 0) {
          pcVar12 = "duplicate";
          goto LAB_003a0bfe;
        }
      }
    }
    else {
      png_crc_finish(param_1,param_3);
      if (((byte)param_1[0x52] & 0x10) != 0) {
        pcVar12 = "out of place";
LAB_003a0bfe:
        png_chunk_warning((long)param_1,(long)pcVar12);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  png_err(param_1);
}


