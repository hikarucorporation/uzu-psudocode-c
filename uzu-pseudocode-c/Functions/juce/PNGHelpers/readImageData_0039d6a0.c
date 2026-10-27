// Function : readImageData
// Namespace: juce:PNGHelpers
// Entry    : 0039d6a0
// Prototype: bool readImageData(pnglibNamespace * param_1, uint * param_2, __jmp_buf_tag * param_3, undefined8 * param_4)
// Body     : 0039d6a0 - 0039f68c


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::PNGHelpers::readImageData(juce::pnglibNamespace::png_struct_def*,
   juce::pnglibNamespace::png_info_def*, __jmp_buf_tag (&) [1], unsigned char**) */

bool __cdecl
juce::PNGHelpers::readImageData
          (pnglibNamespace *param_1,uint *param_2,__jmp_buf_tag *param_3,undefined8 *param_4)

{
  pnglibNamespace pVar1;
  undefined1 uVar2;
  void *__dest;
  size_t __n;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  void *pvVar10;
  ulong uVar11;
  undefined1 *puVar12;
  pnglibNamespace pVar13;
  int iVar14;
  code *pcVar15;
  long lVar16;
  void *__dest_00;
  ulong uVar17;
  int iVar18;
  undefined1 *__src;
  ulong uVar19;
  ulong uVar20;
  void *pvVar21;
  long lVar22;
  undefined1 *__dest_01;
  uint uVar23;
  uint uVar24;
  byte *pbVar25;
  undefined1 *puVar26;
  uint uVar27;
  uint uVar28;
  byte bVar29;
  int iVar30;
  byte bVar31;
  ulong uVar32;
  bool bVar33;
  uint local_158 [2];
  ulong local_150;
  pnglibNamespace local_148;
  pnglibNamespace local_147;
  pnglibNamespace local_146;
  pnglibNamespace local_145;
  uint local_140;
  uint local_13c;
  uint local_138;
  uint local_134;
  long local_130;
  size_t local_128;
  uint local_11c;
  uint local_118;
  uint local_114;
  uint local_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  ulong local_d0;
  byte *local_c8;
  ulong local_c0;
  undefined1 local_b8 [8];
  undefined1 *local_b0;
  undefined1 *local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  ulong local_80;
  ulong local_78;
  void *local_70;
  void *local_68;
  long local_60;
  ulong local_58;
  byte *local_50;
  byte *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  
  local_38 = param_4;
  local_d4 = _setjmp(param_3);
  if (local_d4 != 0) goto LAB_0039d6d3;
  if ((param_1 == (pnglibNamespace *)0x0) || (param_2 == (uint *)0x0)) {
    if (param_1 == (pnglibNamespace *)0x0) goto LAB_0039d6d3;
  }
  else if ((param_2[2] & 0x10) != 0) {
    uVar4 = *(uint *)(param_1 + 0x50);
    if ((uVar4 & 0x40) == 0) {
      *(uint *)(param_1 + 0x50) = uVar4 | 0x4000;
      *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) | 0x2001000;
    }
    else {
      if ((uVar4 & 0x400000) == 0) {
                    /* WARNING: Subroutine does not return */
        pnglibNamespace::png_err(param_1);
      }
                    /* try { // try from 0039d732 to 0039d7f7 has its CatchHandler @ 0039f69d */
      pnglibNamespace::png_warning
                ((long)param_1,"invalid after png_start_read_image or png_read_update_info");
    }
  }
  if (((byte)param_1[0x4d] & 0x80) == 0) {
    if (param_1[0x187] == (pnglibNamespace)0x0) {
      if (7 < (byte)param_1[0x188]) {
        param_1[0x18c] = (pnglibNamespace)0x2;
        goto LAB_0039d76f;
      }
      if (((byte)param_1[0x52] & 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        pnglibNamespace::png_err(param_1);
      }
                    /* try { // try from 0039f5c0 to 0039f68c has its CatchHandler @ 0039f69d */
      pnglibNamespace::png_warning
                ((long)param_1,"png_set_filler is invalid for low bit depth gray output");
    }
    else {
      if (param_1[0x187] == (pnglibNamespace)0x2) {
        param_1[0x18c] = (pnglibNamespace)0x4;
        goto LAB_0039d76f;
      }
      if (((byte)param_1[0x52] & 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        pnglibNamespace::png_err(param_1);
      }
      pnglibNamespace::png_warning((long)param_1,"png_set_filler: inappropriate color type");
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x192) = 0xff;
LAB_0039d76f:
    param_1[0x55] = (pnglibNamespace)((byte)param_1[0x55] | 0x80);
    param_1[0x50] = (pnglibNamespace)((byte)param_1[0x50] | 0x80);
  }
  uVar4 = *(uint *)(param_1 + 0x54);
  if ((uVar4 & 0x8000) != 0) {
    uVar4 = uVar4 | 0x1000000;
    *(uint *)(param_1 + 0x54) = uVar4;
  }
  if (((byte)param_1[0x50] & 0x40) == 0) {
    if (param_1[0x184] == (pnglibNamespace)0x0) {
      iVar14 = 1;
    }
    else {
      *(uint *)(param_1 + 0x54) = uVar4 | 2;
      iVar14 = 7;
    }
    pnglibNamespace::png_read_start_row(param_1);
  }
  else {
    iVar14 = 1;
    if (param_1[0x184] != (pnglibNamespace)0x0) {
      if ((uVar4 & 2) == 0) {
        pnglibNamespace::png_warning
                  ((long)param_1,"Interlace handling should be turned on when using png_read_image")
        ;
        *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 0x11c);
        if (param_1[0x184] == (pnglibNamespace)0x0) goto LAB_0039d7f8;
        uVar4 = *(uint *)(param_1 + 0x54);
      }
      *(uint *)(param_1 + 0x54) = uVar4 | 2;
      iVar14 = 7;
    }
  }
LAB_0039d7f8:
  iVar30 = *(int *)(param_1 + 0x11c);
  local_d8 = iVar14;
  if (iVar30 != 0) {
    iVar14 = 0;
    local_dc = iVar30;
    do {
      iVar18 = 0;
      puVar8 = local_38;
      local_e0 = iVar14;
      do {
        if (param_1 == (pnglibNamespace *)0x0) goto LAB_0039d860;
        __dest = (void *)*puVar8;
        if (((byte)param_1[0x50] & 0x40) == 0) {
          pnglibNamespace::png_read_start_row(param_1);
        }
        local_158[0] = *(uint *)(param_1 + 0x130);
        local_148 = param_1[0x187];
        local_147 = param_1[0x188];
        local_146 = param_1[0x18b];
        local_145 = param_1[0x18a];
        if ((ulong)(byte)local_145 < 8) {
          local_150 = (ulong)(byte)local_145 * (ulong)local_158[0] + 7 >> 3;
          if (param_1[0x184] != (pnglibNamespace)0x0) goto LAB_0039d90d;
LAB_0039d917:
          if (((byte)param_1[0x4c] & 4) == 0) {
                    /* WARNING: Subroutine does not return */
            pnglibNamespace::png_err(param_1);
          }
          **(undefined1 **)(param_1 + 0x148) = 0xff;
          uVar19 = local_150 + 1;
          pnglibNamespace::png_read_IDAT_data(param_1,*(long *)(param_1 + 0x148),uVar19);
          pbVar25 = *(byte **)(param_1 + 0x148);
          bVar31 = *pbVar25;
          if (bVar31 == 0) {
LAB_0039da10:
            memcpy(*(void **)(param_1 + 0x140),pbVar25,uVar19);
            iVar14 = *(int *)(param_1 + 0x54);
          }
          else {
            pcVar15 = (code *)(ulong)(uint)bVar31;
            if (4 < bVar31) {
                    /* WARNING: Subroutine does not return */
              pnglibNamespace::png_err(param_1);
            }
            uVar4 = bVar31 - 1;
            if (3 < uVar4) goto LAB_0039da10;
            if (*(long *)(param_1 + 0x378) == 0) {
              *(code **)(param_1 + 0x378) = pnglibNamespace::png_read_filter_row_sub;
              *(code **)(param_1 + 0x380) = pnglibNamespace::png_read_filter_row_up;
              *(code **)(param_1 + 0x388) = pnglibNamespace::png_read_filter_row_avg;
              pcVar15 = pnglibNamespace::png_read_filter_row_paeth_multibyte_pixel;
              if (((byte)param_1[0x18a] + 7 & 0xfffffff8) == 8) {
                pcVar15 = pnglibNamespace::png_read_filter_row_paeth_1byte_pixel;
              }
              *(code **)(param_1 + 0x390) = pcVar15;
            }
            (**(code **)(param_1 + (ulong)uVar4 * 8 + 0x378))
                      (local_158,pbVar25 + 1,*(long *)(param_1 + 0x140) + 1,pcVar15);
            memcpy(*(void **)(param_1 + 0x140),*(void **)(param_1 + 0x148),local_150 + 1);
            iVar14 = *(int *)(param_1 + 0x54);
          }
          if (iVar14 != 0) {
                    /* try { // try from 0039da25 to 0039da81 has its CatchHandler @ 0039f6a5 */
            pnglibNamespace::png_do_read_transformations(param_1,local_158);
          }
          pVar13 = param_1[399];
          if (pVar13 == (pnglibNamespace)0x0) {
            param_1[399] = local_145;
            pVar13 = local_145;
            if ((byte)param_1[0x18e] < (byte)local_145) {
                    /* WARNING: Subroutine does not return */
              pnglibNamespace::png_err(param_1);
            }
          }
          else if (pVar13 != local_145) {
                    /* WARNING: Subroutine does not return */
            pnglibNamespace::png_err(param_1);
          }
          local_e4 = iVar18;
          local_40 = puVar8;
          if ((param_1[0x184] == (pnglibNamespace)0x0) ||
             (uVar4 = *(uint *)(param_1 + 0x54), (uVar4 & 2) == 0)) {
            if (__dest != (void *)0x0) {
              if (pVar13 == (pnglibNamespace)0x0) {
                    /* WARNING: Subroutine does not return */
                pnglibNamespace::png_err(param_1);
              }
              uVar19 = (ulong)*(uint *)(param_1 + 0x118);
              if (*(ulong *)(param_1 + 0x160) != 0) {
                if ((byte)pVar13 < 8) {
                  uVar9 = uVar19 * (byte)pVar13 + 7 >> 3;
                }
                else {
                  uVar9 = ((byte)pVar13 >> 3) * uVar19;
                }
                if (*(ulong *)(param_1 + 0x160) != uVar9) {
                    /* WARNING: Subroutine does not return */
                  pnglibNamespace::png_err(param_1);
                }
              }
              if (uVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                pnglibNamespace::png_err(param_1);
              }
              uVar9 = uVar19 * (byte)pVar13;
              if ((uVar9 & 7) == 0) {
                pbVar25 = (byte *)0x0;
                bVar29 = 0;
                bVar31 = 0;
              }
              else {
                uVar17 = uVar9 + 7 >> 3;
                if (7 < (byte)pVar13) {
                  uVar17 = ((byte)pVar13 >> 3) * uVar19;
                }
                pbVar25 = (byte *)((long)__dest + (uVar17 - 1));
                bVar31 = *(byte *)((long)__dest + (uVar17 - 1));
                if (((byte)param_1[0x56] & 1) == 0) {
                  bVar29 = (byte)(0xff >> ((byte)uVar9 & 7));
                }
                else {
                  bVar29 = (byte)(0xff << ((byte)uVar9 & 7));
                }
              }
              uVar9 = uVar9 + 7 >> 3;
              if (7 < (byte)pVar13) {
                uVar9 = ((byte)pVar13 >> 3) * uVar19;
              }
              memcpy(__dest,(void *)(*(long *)(param_1 + 0x148) + 1),uVar9);
              if (pbVar25 != (byte *)0x0) {
                *pbVar25 = (bVar31 ^ *pbVar25) & bVar29 ^ *pbVar25;
              }
            }
          }
          else {
            if ((ulong)(byte)param_1[0x185] < 6) {
              lVar16 = *(long *)(param_1 + 0x148) + 1;
              uVar7 = *(uint *)(pnglibNamespace::
                                png_do_read_interlace(juce::pnglibNamespace::png_row_info_struct*,unsigned_char*,int,unsigned_int)
                                ::png_pass_inc + (ulong)(byte)param_1[0x185] * 4);
              uVar5 = uVar7 * local_158[0];
              if (local_145 == (pnglibNamespace)0x4) {
                uVar23 = local_158[0] * 4 & 4;
                if ((uVar4 & 0x10000) == 0) {
                  uVar4 = uVar5 * 4;
                  uVar28 = 4;
                  uVar24 = 0;
                  iVar14 = 4;
                }
                else {
                  uVar23 = uVar23 ^ 4;
                  uVar4 = ~(uVar5 * 4);
                  iVar14 = -4;
                  uVar28 = 0;
                  uVar24 = 4;
                }
                if (local_158[0] != 0) {
                  uVar4 = uVar4 & 4;
                  pbVar25 = (byte *)((ulong)(uVar5 - 1 >> 1) + lVar16);
                  if ((int)uVar7 < 2) {
                    uVar7 = 1;
                  }
                  local_fc = uVar7 & 0x7ffffffe;
                  pbVar3 = (byte *)((ulong)(local_158[0] - 1 >> 1) + lVar16);
                  uVar27 = 0;
                  do {
                    local_108 = uVar27;
                    local_110 = uVar23;
                    local_48 = pbVar3;
                    uVar27 = *local_48 >> ((byte)local_110 & 0x1f) & 0xf;
                    uVar23 = local_fc;
                    do {
                      *pbVar25 = (byte)(uVar27 << ((byte)uVar4 & 0x1f)) |
                                 (byte)(0xf0f >> (4 - (byte)uVar4 & 0x1f)) & *pbVar25;
                      uVar19 = (ulong)(uVar4 == uVar28);
                      uVar6 = uVar4 + iVar14;
                      if (uVar4 == uVar28) {
                        uVar6 = uVar24;
                      }
                      pbVar25[-uVar19] =
                           (byte)(uVar27 << ((byte)uVar6 & 0x1f)) |
                           (byte)(0xf0f >> (4 - (byte)uVar6 & 0x1f)) & pbVar25[-uVar19];
                      uVar4 = uVar6 + iVar14;
                      if (uVar6 == uVar28) {
                        uVar4 = uVar24;
                      }
                      pbVar25 = pbVar25 + -uVar19 + -(ulong)(uVar6 == uVar28);
                      uVar23 = uVar23 - 2;
                    } while (uVar23 != 0);
                    if ((uVar7 & 1) != 0) {
                      *pbVar25 = (byte)(uVar27 << ((byte)uVar4 & 0x1f)) |
                                 (byte)(0xf0f >> (4 - (byte)uVar4 & 0x1f)) & *pbVar25;
                      bVar33 = uVar4 == uVar28;
                      uVar4 = iVar14 + uVar4;
                      if (bVar33) {
                        uVar4 = uVar24;
                      }
                      pbVar25 = pbVar25 + -(ulong)bVar33;
                    }
                    uVar23 = iVar14 + local_110;
                    if (local_110 == uVar28) {
                      uVar23 = uVar24;
                    }
                    pbVar3 = local_48 + -(ulong)(local_110 == uVar28);
                    local_f0 = uVar7;
                    uVar27 = local_108 + 1;
                  } while (local_108 + 1 < local_158[0]);
                }
LAB_0039e4f9:
                if (7 < (byte)local_145) goto LAB_0039e511;
LAB_0039e52a:
                local_150 = (ulong)(byte)local_145 * (ulong)uVar5 + 7 >> 3;
              }
              else {
                if (local_145 == (pnglibNamespace)0x2) {
                  uVar23 = local_158[0] * 2 + 6 & 6;
                  if ((uVar4 & 0x10000) == 0) {
                    uVar23 = uVar23 ^ 6;
                    uVar4 = ~(uVar5 * 2 + 6);
                    iVar14 = 2;
                    uVar28 = 6;
                    uVar24 = 0;
                  }
                  else {
                    uVar4 = uVar5 * 2 + 6;
                    iVar14 = -2;
                    uVar28 = 0;
                    uVar24 = 6;
                  }
                  if (local_158[0] != 0) {
                    uVar4 = uVar4 & 6;
                    pbVar25 = (byte *)((ulong)(uVar5 - 1 >> 2) + lVar16);
                    if ((int)uVar7 < 2) {
                      uVar7 = 1;
                    }
                    local_f8 = uVar7 & 0x7ffffffe;
                    pbVar3 = (byte *)((ulong)(local_158[0] - 1 >> 2) + lVar16);
                    uVar27 = 0;
                    do {
                      local_134 = uVar27;
                      local_138 = uVar23;
                      local_c8 = pbVar3;
                      uVar27 = *local_c8 >> ((byte)local_138 & 0x1f) & 3;
                      uVar23 = local_f8;
                      do {
                        *pbVar25 = (byte)(uVar27 << ((byte)uVar4 & 0x1f)) |
                                   (byte)(0x3f3f >> (6 - (byte)uVar4 & 0x1f)) & *pbVar25;
                        uVar19 = (ulong)(uVar4 == uVar28);
                        uVar6 = uVar4 + iVar14;
                        if (uVar4 == uVar28) {
                          uVar6 = uVar24;
                        }
                        pbVar25[-uVar19] =
                             (byte)(uVar27 << ((byte)uVar6 & 0x1f)) |
                             (byte)(0x3f3f >> (6 - (byte)uVar6 & 0x1f)) & pbVar25[-uVar19];
                        uVar4 = uVar6 + iVar14;
                        if (uVar6 == uVar28) {
                          uVar4 = uVar24;
                        }
                        pbVar25 = pbVar25 + -uVar19 + -(ulong)(uVar6 == uVar28);
                        uVar23 = uVar23 - 2;
                      } while (uVar23 != 0);
                      if ((uVar7 & 1) != 0) {
                        *pbVar25 = (byte)(uVar27 << ((byte)uVar4 & 0x1f)) |
                                   (byte)(0x3f3f >> (6 - (byte)uVar4 & 0x1f)) & *pbVar25;
                        bVar33 = uVar4 == uVar28;
                        uVar4 = iVar14 + uVar4;
                        if (bVar33) {
                          uVar4 = uVar24;
                        }
                        pbVar25 = pbVar25 + -(ulong)bVar33;
                      }
                      uVar23 = iVar14 + local_138;
                      if (local_138 == uVar28) {
                        uVar23 = uVar24;
                      }
                      pbVar3 = local_c8 + -(ulong)(local_138 == uVar28);
                      local_ec = uVar7;
                      uVar27 = local_134 + 1;
                    } while (local_134 + 1 < local_158[0]);
                  }
                  goto LAB_0039e4f9;
                }
                if (local_145 == (pnglibNamespace)0x1) {
                  uVar23 = local_158[0] - 1 & 7;
                  if ((uVar4 & 0x10000) == 0) {
                    uVar23 = uVar23 ^ 7;
                    uVar4 = -uVar5;
                    uVar24 = 0;
                    uVar28 = 7;
                    iVar14 = 1;
                  }
                  else {
                    uVar24 = 7;
                    uVar28 = 0;
                    iVar14 = -1;
                    uVar4 = uVar5 - 1;
                  }
                  if (local_158[0] != 0) {
                    uVar4 = uVar4 & 7;
                    pbVar25 = (byte *)((ulong)(uVar5 - 1 >> 3) + lVar16);
                    if ((int)uVar7 < 2) {
                      uVar7 = 1;
                    }
                    local_f4 = uVar7 & 0x7ffffffe;
                    pbVar3 = (byte *)((ulong)(local_158[0] - 1 >> 3) + lVar16);
                    uVar27 = 0;
                    do {
                      local_104 = uVar27;
                      local_10c = uVar23;
                      local_50 = pbVar3;
                      uVar27 = *local_50 >> ((byte)local_10c & 0x1f) & 1;
                      uVar23 = local_f4;
                      do {
                        *pbVar25 = (byte)(uVar27 << ((byte)uVar4 & 0x1f)) |
                                   (byte)(0x7f7f >> (7 - (byte)uVar4 & 0x1f)) & *pbVar25;
                        uVar6 = uVar4 + iVar14;
                        if (uVar4 == uVar28) {
                          uVar6 = uVar24;
                        }
                        uVar19 = (ulong)(uVar4 == uVar28);
                        pbVar25[-uVar19] =
                             (byte)(uVar27 << ((byte)uVar6 & 0x1f)) |
                             (byte)(0x7f7f >> (7 - (byte)uVar6 & 0x1f)) & pbVar25[-uVar19];
                        uVar4 = uVar6 + iVar14;
                        if (uVar6 == uVar28) {
                          uVar4 = uVar24;
                        }
                        pbVar25 = pbVar25 + -uVar19 + -(ulong)(uVar6 == uVar28);
                        uVar23 = uVar23 - 2;
                      } while (uVar23 != 0);
                      if ((uVar7 & 1) != 0) {
                        *pbVar25 = (byte)(uVar27 << ((byte)uVar4 & 0x1f)) |
                                   (byte)(0x7f7f >> (7 - (byte)uVar4 & 0x1f)) & *pbVar25;
                        bVar33 = uVar4 == uVar28;
                        uVar4 = iVar14 + uVar4;
                        if (bVar33) {
                          uVar4 = uVar24;
                        }
                        pbVar25 = pbVar25 + -(ulong)bVar33;
                      }
                      uVar23 = local_10c + iVar14;
                      if (local_10c == uVar28) {
                        uVar23 = uVar24;
                      }
                      pbVar3 = local_50 + -(ulong)(local_10c == uVar28);
                      local_e8 = uVar7;
                      uVar27 = local_104 + 1;
                    } while (local_104 + 1 < local_158[0]);
                  }
                  goto LAB_0039e4f9;
                }
                if (local_158[0] != 0) {
                  local_128 = (size_t)((byte)local_145 >> 3);
                  local_130 = -local_128;
                  pvVar21 = (void *)((local_158[0] - 1) * local_128 + lVar16);
                  if ((int)uVar7 < 2) {
                    uVar7 = 1;
                  }
                  local_118 = uVar7 - 1;
                  local_13c = uVar7 & 3;
                  local_114 = uVar7 & 0x7ffffffc;
                  local_98 = local_128 * -3;
                  local_60 = local_128 * -2;
                  uVar4 = 0;
                  __dest_00 = (void *)((uVar5 - 1) * local_128 + lVar16);
                  do {
                    local_11c = uVar4;
                    local_68 = pvVar21;
                    pvVar10 = memcpy(local_b8,pvVar21,local_128);
                    __n = local_128;
                    if (local_118 < 3) {
                    }
                    else {
                      uVar4 = local_114;
                      do {
                        memcpy(__dest_00,local_b8,__n);
                        lVar16 = local_130;
                        pvVar10 = (void *)(local_130 + (long)__dest_00);
                        memcpy(pvVar10,local_b8,__n);
                        pvVar10 = (void *)((long)pvVar10 + lVar16 * 3);
                        memcpy((void *)(local_60 + (long)__dest_00),local_b8,__n);
                        memcpy((void *)((long)__dest_00 + local_98),local_b8,__n);
                        uVar4 = uVar4 - 4;
                        __dest_00 = pvVar10;
                      } while (uVar4 != 0);
                    }
                    if (local_13c != 0) {
                      pvVar10 = __dest_00;
                      uVar4 = local_13c;
                      do {
                        memcpy(pvVar10,local_b8,__n);
                        pvVar10 = (void *)((long)pvVar10 + local_130);
                        uVar4 = uVar4 - 1;
                      } while (uVar4 != 0);
                    }
                    pvVar21 = (void *)((long)local_68 + local_130);
                    uVar4 = local_11c + 1;
                    __dest_00 = pvVar10;
                  } while (uVar4 < local_158[0]);
                  goto LAB_0039e4f9;
                }
                if ((byte)local_145 < 8) goto LAB_0039e52a;
LAB_0039e511:
                local_150 = (ulong)((byte)local_145 >> 3) * (ulong)uVar5;
              }
              local_158[0] = uVar5;
            }
            if (__dest != (void *)0x0) {
              pVar13 = param_1[399];
              uVar19 = (ulong)(byte)pVar13;
              if (pVar13 == (pnglibNamespace)0x0) {
                    /* WARNING: Subroutine does not return */
                pnglibNamespace::png_err(param_1);
              }
              lVar16 = *(long *)(param_1 + 0x148);
              uVar4 = *(uint *)(param_1 + 0x118);
              uVar9 = (ulong)uVar4;
              pVar1 = param_1[0x185];
              if (*(ulong *)(param_1 + 0x160) != 0) {
                if ((byte)pVar13 < 8) {
                  uVar17 = uVar9 * uVar19 + 7 >> 3;
                }
                else {
                  uVar17 = ((byte)pVar13 >> 3) * uVar9;
                }
                if (*(ulong *)(param_1 + 0x160) != uVar17) {
                    /* WARNING: Subroutine does not return */
                  pnglibNamespace::png_err(param_1);
                }
              }
              if (uVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                pnglibNamespace::png_err(param_1);
              }
              uVar17 = uVar9 * uVar19;
              if ((uVar17 & 7) == 0) {
                local_100 = 0;
                pbVar25 = (byte *)0x0;
                uVar7 = local_100;
              }
              else {
                uVar11 = uVar17 + 7 >> 3;
                if (7 < (byte)pVar13) {
                  uVar11 = ((byte)pVar13 >> 3) * uVar9;
                }
                pbVar25 = (byte *)((long)__dest + (uVar11 - 1));
                if (((byte)param_1[0x56] & 1) == 0) {
                  local_100 = 0xff >> ((byte)uVar17 & 7);
                }
                else {
                  local_100 = 0xff << ((byte)uVar17 & 7);
                }
                uVar7 = (uint)*(byte *)((long)__dest + (uVar11 - 1));
              }
              pvVar21 = (void *)(lVar16 + 1);
              local_58 = uVar19;
              if (((param_1[0x184] == (pnglibNamespace)0x0) ||
                  ((*(uint *)(param_1 + 0x54) & 2) == 0)) || (5 < (byte)pVar1)) {
                uVar19 = uVar17 + 7 >> 3;
                if (7 < (byte)pVar13) {
                  uVar19 = ((byte)pVar13 >> 3) * uVar9;
                }
                memcpy(__dest,pvVar21,uVar19);
                uVar19 = local_58;
joined_r0x0039e78e:
                local_58 = uVar19;
                if (pbVar25 != (byte *)0x0) {
                  *pbVar25 = ((byte)uVar7 ^ *pbVar25) & (byte)local_100 ^ *pbVar25;
                }
              }
              else {
                uVar23 = (uint)(byte)pVar1;
                uVar5 = ((byte)pVar1 & 1) << (3U - (char)(uVar23 + 1 >> 1) & 0x1f) & 7;
                if (uVar5 < uVar4) {
                  if ((byte)pVar13 < 8) {
                    lVar22 = 2 - (ulong)(pVar13 == (pnglibNamespace)0x2);
                    lVar16 = 0;
                    if (pVar13 == (pnglibNamespace)0x1) {
                      lVar22 = 0;
                    }
                    uVar4 = *(uint *)(pnglibNamespace::
                                      png_combine_row(juce::pnglibNamespace::png_struct_def_const*,unsigned_char*,int)
                                      ::row_mask +
                                     (ulong)uVar23 * 4 +
                                     lVar22 * 0x18 +
                                     (ulong)((*(uint *)(param_1 + 0x54) & 0x10000) == 0) * 0x48);
                    uVar17 = (ulong)(byte)(8 / (byte)pVar13);
                    if ((char)uVar4 != -1) goto LAB_0039e72c;
LAB_0039e750:
                    uVar5 = (uint)*(byte *)((long)pvVar21 + lVar16);
                    do {
                      *(char *)((long)__dest + lVar16) = (char)uVar5;
                      uVar5 = uVar4;
                      do {
                        bVar33 = uVar9 < uVar17;
                        uVar9 = uVar9 - uVar17;
                        if (bVar33 || uVar9 == 0) goto joined_r0x0039e78e;
                        uVar4 = uVar5 << 0x18 | uVar5 >> 8;
                        lVar16 = lVar16 + 1;
                        if ((char)(uVar5 >> 8) == -1) goto LAB_0039e750;
LAB_0039e72c:
                        uVar5 = uVar4;
                      } while ((char)uVar4 == '\0');
                      uVar5 = (*(byte *)((long)pvVar21 + lVar16) ^ *(byte *)((long)__dest + lVar16))
                              & uVar4 ^ (uint)*(byte *)((long)__dest + lVar16);
                    } while( true );
                  }
                  if (((byte)pVar13 & 7) != 0) {
                    /* WARNING: Subroutine does not return */
                    pnglibNamespace::png_err(param_1);
                  }
                  bVar31 = (byte)pVar13 >> 3;
                  uVar17 = (ulong)bVar31;
                  lVar22 = uVar9 * uVar17;
                  uVar5 = uVar5 * bVar31;
                  uVar19 = (ulong)uVar5;
                  uVar9 = lVar22 - uVar19;
                  __dest_01 = (undefined1 *)((long)__dest + uVar19);
                  __src = (undefined1 *)((long)pvVar21 + uVar19);
                  uVar23 = (uint)bVar31 << ((byte)(7 - uVar23 >> 1) & 0x1f);
                  uVar7 = (uint)bVar31;
                  if (uVar7 == 1) {
                    uVar17 = (ulong)uVar23;
                    *__dest_01 = *__src;
                    if (uVar17 < uVar9) {
                      do {
                        uVar19 = uVar19 + uVar17;
                        uVar9 = uVar9 - uVar17;
                        *(undefined1 *)((long)__dest + uVar19) =
                             *(undefined1 *)((long)pvVar21 + uVar19);
                      } while (uVar17 < uVar9);
                    }
                  }
                  else {
                    uVar11 = (ulong)uVar23;
                    if (uVar7 == 2) {
                      do {
                        *(undefined1 *)((long)__dest + uVar19) =
                             *(undefined1 *)(lVar16 + 1 + uVar19);
                        *(undefined1 *)((long)__dest + uVar19 + 1) =
                             *(undefined1 *)(lVar16 + 2 + uVar19);
                        bVar33 = uVar9 < uVar11;
                        uVar9 = uVar9 - uVar11;
                        if (bVar33 || uVar9 == 0) goto LAB_0039e7b0;
                        uVar19 = uVar19 + uVar11;
                      } while (1 < uVar9);
                      *(undefined1 *)((long)__dest + uVar19) = *(undefined1 *)(lVar16 + 1 + uVar19);
                    }
                    else if (uVar7 == 3) {
                      *__dest_01 = *__src;
                      __dest_01[1] = __src[1];
                      __dest_01[2] = __src[2];
                      if (uVar11 < uVar9) {
                        do {
                          uVar19 = uVar19 + uVar11;
                          uVar9 = uVar9 - uVar11;
                          *(undefined1 *)((long)__dest + uVar19) =
                               *(undefined1 *)(lVar16 + 1 + uVar19);
                          *(undefined1 *)((long)__dest + uVar19 + 1) =
                               *(undefined1 *)(lVar16 + 2 + uVar19);
                          *(undefined1 *)((long)__dest + uVar19 + 2) =
                               *(undefined1 *)(lVar16 + 3 + uVar19);
                        } while (uVar11 < uVar9);
                      }
                    }
                    else if ((((char)pVar13 < '\0') || (((ulong)__dest_01 & 1) != 0)) ||
                            (((((uint)__src | uVar7) & 1) != 0 || ((uVar23 & 1) != 0)))) {
                      local_140 = uVar23;
                      memcpy(__dest_01,__src,uVar17);
                      local_d0 = uVar11;
                      if (uVar11 < uVar9) {
                        lVar16 = uVar19 + uVar11;
                        uVar4 = (uVar4 * uVar7 - uVar5) - local_140;
                        local_a0 = -uVar11;
                        local_70 = pvVar21;
                        do {
                          uVar19 = local_d0;
                          uVar11 = local_a0 + uVar9;
                          uVar9 = uVar9 - local_d0;
                          if (uVar11 < uVar17) {
                            uVar7 = uVar4;
                          }
                          uVar17 = (ulong)uVar7;
                          memcpy((void *)((long)__dest + lVar16),(void *)((long)local_70 + lVar16),
                                 uVar17);
                          lVar16 = lVar16 + uVar19;
                          uVar4 = uVar4 - local_140;
                        } while (uVar19 < uVar9);
                      }
                    }
                    else {
                      local_c0 = uVar11;
                      if (((((ulong)__dest_01 & 3) == 0) && (((ulong)__src & 3) == 0)) &&
                         (((bVar31 & 3) == 0 && ((uVar23 & 3) == 0)))) {
                        local_78 = (ulong)(uVar23 - uVar7 >> 2);
                        local_88 = local_78 * 4 + 4;
                        uVar19 = (lVar22 - uVar11) - uVar19;
                        do {
                          puVar26 = __src;
                          puVar12 = __dest_01;
                          uVar20 = uVar19;
                          uVar32 = 0;
                          lVar16 = local_88;
                          do {
                            lVar22 = lVar16;
                            *(undefined4 *)(puVar12 + uVar32) = *(undefined4 *)(puVar26 + uVar32);
                            uVar32 = uVar32 + 4;
                            lVar16 = lVar22 + 4;
                          } while (uVar17 != uVar32);
                          bVar33 = uVar9 < uVar11;
                          uVar9 = uVar9 - uVar11;
                          if (bVar33 || uVar9 == 0) goto LAB_0039e7b0;
                          local_a8 = puVar12 + local_78 * 4;
                          __dest_01 = local_a8 + uVar32;
                          __src = puVar26 + uVar32 + local_78 * 4;
                          uVar19 = uVar20 - uVar11;
                        } while (uVar17 <= uVar9);
                        if ((7 < uVar9) &&
                           ((puVar26 + uVar32 + uVar9 + local_78 * 4 <= __dest_01 ||
                            (local_a8 + uVar32 + uVar9 <= __src)))) {
                          uVar19 = uVar9 & 0xfffffffffffffff8;
                          __src = puVar26 + uVar32 + uVar19 + local_78 * 4;
                          uVar20 = uVar20 & 0xfffffffffffffff8;
                          do {
                            *(undefined8 *)(puVar12 + lVar22) = *(undefined8 *)(puVar26 + lVar22);
                            lVar22 = lVar22 + 8;
                            uVar20 = uVar20 - 8;
                          } while (uVar20 != 0);
                          if (uVar9 == uVar19) goto LAB_0039e7b0;
                          uVar9 = (ulong)((uint)uVar9 & 7);
                          __dest_01 = local_a8 + uVar32 + uVar19;
                        }
                        uVar19 = uVar9 - 1;
                        uVar17 = uVar9 & 7;
                        if (uVar17 != 0) {
                          uVar9 = uVar9 & 0xfffffffffffffff8;
                          do {
                            uVar2 = *__src;
                            __src = __src + 1;
                            *__dest_01 = uVar2;
                            __dest_01 = __dest_01 + 1;
                            uVar17 = uVar17 - 1;
                          } while (uVar17 != 0);
                        }
                        if (6 < uVar19) {
                          uVar19 = 0;
                          do {
                            __dest_01[uVar19] = __src[uVar19];
                            __dest_01[uVar19 + 1] = __src[uVar19 + 1];
                            __dest_01[uVar19 + 2] = __src[uVar19 + 2];
                            __dest_01[uVar19 + 3] = __src[uVar19 + 3];
                            __dest_01[uVar19 + 4] = __src[uVar19 + 4];
                            __dest_01[uVar19 + 5] = __src[uVar19 + 5];
                            __dest_01[uVar19 + 6] = __src[uVar19 + 6];
                            __dest_01[uVar19 + 7] = __src[uVar19 + 7];
                            uVar19 = uVar19 + 8;
                          } while (uVar9 != uVar19);
                        }
                      }
                      else {
                        local_80 = (ulong)(uVar23 - uVar7 >> 1);
                        local_90 = local_80 * 2 + 2;
                        uVar19 = (lVar22 - uVar11) - uVar19;
                        do {
                          puVar26 = __dest_01;
                          uVar20 = uVar19;
                          puVar12 = __src;
                          uVar32 = 0;
                          lVar16 = local_90;
                          do {
                            lVar22 = lVar16;
                            *(undefined2 *)(puVar26 + uVar32) = *(undefined2 *)(puVar12 + uVar32);
                            uVar32 = uVar32 + 2;
                            lVar16 = lVar22 + 2;
                          } while (uVar17 != uVar32);
                          bVar33 = uVar9 < uVar11;
                          uVar9 = uVar9 - uVar11;
                          if (bVar33 || uVar9 == 0) goto LAB_0039e7b0;
                          local_b0 = puVar26 + local_80 * 2;
                          __dest_01 = local_b0 + uVar32;
                          __src = puVar12 + uVar32 + local_80 * 2;
                          uVar19 = uVar20 - uVar11;
                        } while (uVar17 <= uVar9);
                        if ((7 < uVar9) &&
                           ((puVar12 + uVar32 + uVar9 + local_80 * 2 <= __dest_01 ||
                            (local_b0 + uVar32 + uVar9 <= __src)))) {
                          uVar19 = uVar9 & 0xfffffffffffffff8;
                          __src = puVar12 + uVar32 + uVar19 + local_80 * 2;
                          uVar20 = uVar20 & 0xfffffffffffffff8;
                          do {
                            *(undefined8 *)(puVar26 + lVar22) = *(undefined8 *)(puVar12 + lVar22);
                            lVar22 = lVar22 + 8;
                            uVar20 = uVar20 - 8;
                          } while (uVar20 != 0);
                          if (uVar9 == uVar19) goto LAB_0039e7b0;
                          uVar9 = (ulong)((uint)uVar9 & 7);
                          __dest_01 = local_b0 + uVar32 + uVar19;
                        }
                        uVar19 = uVar9 - 1;
                        uVar17 = uVar9 & 7;
                        if (uVar17 != 0) {
                          uVar9 = uVar9 & 0xfffffffffffffff8;
                          do {
                            uVar2 = *__src;
                            __src = __src + 1;
                            *__dest_01 = uVar2;
                            __dest_01 = __dest_01 + 1;
                            uVar17 = uVar17 - 1;
                          } while (uVar17 != 0);
                        }
                        if (6 < uVar19) {
                          uVar19 = 0;
                          do {
                            __dest_01[uVar19] = __src[uVar19];
                            __dest_01[uVar19 + 1] = __src[uVar19 + 1];
                            __dest_01[uVar19 + 2] = __src[uVar19 + 2];
                            __dest_01[uVar19 + 3] = __src[uVar19 + 3];
                            __dest_01[uVar19 + 4] = __src[uVar19 + 4];
                            __dest_01[uVar19 + 5] = __src[uVar19 + 5];
                            __dest_01[uVar19 + 6] = __src[uVar19 + 6];
                            __dest_01[uVar19 + 7] = __src[uVar19 + 7];
                            uVar19 = uVar19 + 8;
                          } while (uVar9 != uVar19);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LAB_0039e7b0:
                    /* try { // try from 0039e7b0 to 0039e7f6 has its CatchHandler @ 0039f6a5 */
          pnglibNamespace::png_read_finish_row(param_1);
          puVar8 = local_40;
          iVar30 = local_dc;
          iVar18 = local_e4;
          if (*(code **)(param_1 + 0x220) != (code *)0x0) {
            (**(code **)(param_1 + 0x220))(param_1,*(undefined4 *)(param_1 + 0x134),param_1[0x185]);
          }
        }
        else {
          local_150 = (ulong)((byte)local_145 >> 3) * (ulong)local_158[0];
          if (param_1[0x184] == (pnglibNamespace)0x0) goto LAB_0039d917;
LAB_0039d90d:
          if (((byte)param_1[0x54] & 2) == 0) goto LAB_0039d917;
          uVar4 = *(uint *)(param_1 + 0x134);
          switch(param_1[0x185]) {
          case (pnglibNamespace)0x0:
            if ((uVar4 & 7) == 0) goto LAB_0039d917;
            pnglibNamespace::png_read_finish_row(param_1);
            break;
          case (pnglibNamespace)0x1:
            if (((uVar4 & 7) == 0) && (4 < *(uint *)(param_1 + 0x118))) goto LAB_0039d917;
            pnglibNamespace::png_read_finish_row(param_1);
            break;
          case (pnglibNamespace)0x2:
            if ((uVar4 & 7) == 4) goto LAB_0039d917;
            pnglibNamespace::png_read_finish_row(param_1);
            break;
          case (pnglibNamespace)0x3:
            if (((uVar4 & 3) == 0) && (2 < *(uint *)(param_1 + 0x118))) goto LAB_0039d917;
            pnglibNamespace::png_read_finish_row(param_1);
            break;
          case (pnglibNamespace)0x4:
            if ((uVar4 & 3) == 2) goto LAB_0039d917;
                    /* try { // try from 0039dc9c to 0039dd27 has its CatchHandler @ 0039f6a5 */
            pnglibNamespace::png_read_finish_row(param_1);
            break;
          case (pnglibNamespace)0x5:
            if (((uVar4 & 1) == 0) && (1 < *(uint *)(param_1 + 0x118))) goto LAB_0039d917;
                    /* try { // try from 0039d84c to 0039d9e7 has its CatchHandler @ 0039f6a5 */
            pnglibNamespace::png_read_finish_row(param_1);
            break;
          default:
            if ((uVar4 & 1) != 0) goto LAB_0039d917;
            pnglibNamespace::png_read_finish_row(param_1);
          }
        }
LAB_0039d860:
        puVar8 = puVar8 + 1;
        iVar18 = iVar18 + 1;
      } while (iVar18 != iVar30);
      iVar14 = local_e0 + 1;
    } while (iVar14 != local_d8);
    if (param_1 == (pnglibNamespace *)0x0) goto LAB_0039d6d3;
  }
  local_158[0] = 0x54414449;
  if (*(int *)(param_1 + 0x2e4) != 0) {
    uVar19 = (ulong)(uint)(*(int *)(param_1 + 0x2e4) * 5) + *(ulong *)(param_1 + 0x2e8);
    do {
      if (*(int *)(uVar19 - 5) == 0x54414449) {
        if (*(char *)(uVar19 - 1) != '\0') goto LAB_0039ef5d;
        break;
      }
      uVar19 = uVar19 - 5;
    } while (*(ulong *)(param_1 + 0x2e8) < uVar19);
  }
  if (((byte)param_1[0x50] & 8) == 0) {
                    /* try { // try from 0039ef06 to 0039efec has its CatchHandler @ 0039f69d */
    pnglibNamespace::png_read_IDAT_data(param_1,0,0);
    *(undefined8 *)(param_1 + 0x78) = 0;
    if ((*(uint *)(param_1 + 0x50) & 8) == 0) {
      param_1[0x4c] = (pnglibNamespace)((byte)param_1[0x4c] | 8);
      *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | 8;
    }
  }
  if (*(int *)(param_1 + 0x58) == 0x49444154) {
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    pnglibNamespace::png_crc_finish(param_1,*(uint *)(param_1 + 0x168));
  }
LAB_0039ef5d:
  if ((param_1[0x187] == (pnglibNamespace)0x3) &&
     ((int)(uint)*(ushort *)(param_1 + 0x178) < *(int *)(param_1 + 0x17c))) {
    if (((byte)param_1[0x52] & 0x10) == 0) {
      if (((*(uint *)(param_1 + 0x4c) & 0x8000) == 0) || (*(int *)(param_1 + 0x138) == 0)) {
                    /* WARNING: Subroutine does not return */
        pnglibNamespace::png_err(param_1);
      }
                    /* WARNING: Subroutine does not return */
      pnglibNamespace::png_err(param_1);
    }
    if (((*(uint *)(param_1 + 0x4c) & 0x8000) == 0) || (*(int *)(param_1 + 0x138) == 0)) {
      pnglibNamespace::png_warning((long)param_1,"Read palette index exceeding num_palette");
    }
    else {
      pnglibNamespace::png_chunk_warning((long)param_1,0x5e4336);
    }
  }
  if (param_2 == (uint *)0x0) {
    do {
      uVar19 = pnglibNamespace::png_read_chunk_header(param_1);
      uVar4 = (uint)uVar19;
      iVar14 = *(int *)(param_1 + 0x138);
      if (iVar14 == 0x49444154) {
LAB_0039f520:
                    /* try { // try from 0039f520 to 0039f5b0 has its CatchHandler @ 0039f68d */
        pnglibNamespace::png_crc_finish(param_1,uVar4);
      }
      else {
        uVar7 = *(uint *)(param_1 + 0x4c);
        *(uint *)(param_1 + 0x4c) = uVar7 | 0x2000;
        if (iVar14 == 0x49454e44) {
          if ((~uVar7 & 5) != 0) goto LAB_0039f62a;
          *(uint *)(param_1 + 0x4c) = uVar7 | 0x2018;
          pnglibNamespace::png_crc_finish(param_1,uVar4);
          if (uVar4 != 0) {
            if (((byte)param_1[0x52] & 0x10) == 0) goto LAB_0039f632;
            pnglibNamespace::png_chunk_warning((long)param_1,0x5e4488);
          }
        }
        else {
          if (iVar14 != 0x49484452) goto LAB_0039f520;
          pnglibNamespace::png_handle_IHDR(param_1,(uint *)0x0,uVar4);
        }
      }
    } while (((byte)param_1[0x4c] & 0x10) == 0);
  }
  else {
    do {
      uVar19 = pnglibNamespace::png_read_chunk_header(param_1);
      uVar7 = (uint)uVar19;
      uVar4 = *(uint *)(param_1 + 0x138);
      if (uVar4 == 0x49444154) {
LAB_0039f0a0:
        local_158[0] = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                       uVar4 << 0x18;
        if (*(int *)(param_1 + 0x2e4) != 0) {
          uVar19 = (ulong)(uint)(*(int *)(param_1 + 0x2e4) * 5) + *(ulong *)(param_1 + 0x2e8);
          do {
            if (local_158[0] == *(uint *)(uVar19 - 5)) {
              bVar31 = *(byte *)(uVar19 - 1);
              if (bVar31 != 0) {
                if (uVar4 == 0x49444154) {
                  if ((uVar7 == 0) || (uVar4 = *(uint *)(param_1 + 0x50), (uVar4 & 8) != 0)) {
                    uVar5 = *(uint *)(param_1 + 0x4c);
                    if ((uVar5 & 0x2000) != 0) {
                      uVar4 = *(uint *)(param_1 + 0x50);
                      goto LAB_0039f36a;
                    }
                  }
                  else {
                    uVar5 = *(uint *)(param_1 + 0x4c);
LAB_0039f36a:
                    if ((uVar4 & 0x100000) == 0) {
                    /* WARNING: Subroutine does not return */
                      pnglibNamespace::png_err(param_1);
                    }
                    if ((uVar5 & 0x8000) == 0) {
                      pnglibNamespace::png_warning((long)param_1,".Too many IDATs found");
                    }
                    else {
                      pnglibNamespace::png_chunk_warning((long)param_1,0x5e4360);
                    }
                  }
                  pnglibNamespace::png_handle_unknown(param_1,(long)param_2,uVar7,(uint)bVar31);
                }
                else {
                  pnglibNamespace::png_handle_unknown(param_1,(long)param_2,uVar7,(uint)bVar31);
                  if (uVar4 == 0x504c5445) {
                    param_1[0x4c] = (pnglibNamespace)((byte)param_1[0x4c] | 2);
                  }
                }
                goto LAB_0039f010;
              }
              break;
            }
            uVar19 = uVar19 - 5;
          } while (*(ulong *)(param_1 + 0x2e8) < uVar19);
        }
        if ((int)uVar4 < 0x7043414c) {
          if ((int)uVar4 < 0x67414d41) {
            if ((int)uVar4 < 0x624b4744) {
              if (uVar4 == 0x49444154) {
                if ((uVar7 == 0) || (uVar4 = *(uint *)(param_1 + 0x50), (uVar4 & 8) != 0)) {
                  uVar5 = *(uint *)(param_1 + 0x4c);
                  if ((uVar5 & 0x2000) != 0) {
                    uVar4 = *(uint *)(param_1 + 0x50);
                    goto LAB_0039f4ce;
                  }
                }
                else {
                  uVar5 = *(uint *)(param_1 + 0x4c);
LAB_0039f4ce:
                  if ((uVar4 & 0x100000) == 0) {
                    /* WARNING: Subroutine does not return */
                    pnglibNamespace::png_err(param_1);
                  }
                  if ((uVar5 & 0x8000) == 0) {
                    pnglibNamespace::png_warning((long)param_1,"..Too many IDATs found");
                  }
                  else {
                    pnglibNamespace::png_chunk_warning((long)param_1,0x5e435f);
                  }
                }
                pnglibNamespace::png_crc_finish(param_1,uVar7);
              }
              else {
                if (uVar4 != 0x504c5445) goto LAB_0039f47f;
                pnglibNamespace::png_handle_PLTE(param_1,(long)param_2,uVar7);
              }
            }
            else if (uVar4 == 0x624b4744) {
              pnglibNamespace::png_handle_bKGD(param_1,(long)param_2,uVar7);
            }
            else if (uVar4 == 0x6348524d) {
              pnglibNamespace::png_handle_cHRM(param_1,(long)param_2,uVar7);
            }
            else {
LAB_0039f47f:
              pnglibNamespace::png_handle_unknown(param_1,(long)param_2,uVar7,0);
            }
          }
          else if ((int)uVar4 < 0x69434350) {
            if (uVar4 == 0x67414d41) {
              pnglibNamespace::png_handle_gAMA(param_1,(long)param_2,uVar7);
            }
            else {
              if (uVar4 != 0x68495354) goto LAB_0039f47f;
              pnglibNamespace::png_handle_hIST(param_1,(long)param_2,uVar7);
            }
          }
          else if (uVar4 == 0x69434350) {
            pnglibNamespace::png_handle_iCCP(param_1,(long)param_2,uVar7);
          }
          else if (uVar4 == 0x69545874) {
            pnglibNamespace::png_handle_iTXt(param_1,(long)param_2,uVar7);
          }
          else {
            if (uVar4 != 0x6f464673) goto LAB_0039f47f;
            pnglibNamespace::png_handle_oFFs(param_1,(long)param_2,uVar7);
          }
        }
        else if ((int)uVar4 < 0x73524742) {
          if ((int)uVar4 < 0x73424954) {
            if (uVar4 == 0x7043414c) {
              pnglibNamespace::png_handle_pCAL(param_1,(long)param_2,uVar7);
            }
            else {
              if (uVar4 != 0x70485973) goto LAB_0039f47f;
              pnglibNamespace::png_handle_pHYs(param_1,(long)param_2,uVar7);
            }
          }
          else if (uVar4 == 0x73424954) {
            pnglibNamespace::png_handle_sBIT(param_1,(long)param_2,uVar7);
          }
          else if (uVar4 == 0x7343414c) {
            pnglibNamespace::png_handle_sCAL(param_1,(long)param_2,uVar7);
          }
          else {
            if (uVar4 != 0x73504c54) goto LAB_0039f47f;
            pnglibNamespace::png_handle_sPLT(param_1,(long)param_2,uVar7);
          }
        }
        else if ((int)uVar4 < 0x74494d45) {
          if (uVar4 == 0x73524742) {
            pnglibNamespace::png_handle_sRGB(param_1,(long)param_2,uVar7);
          }
          else {
            if (uVar4 != 0x74455874) goto LAB_0039f47f;
            pnglibNamespace::png_handle_tEXt(param_1,(long)param_2,uVar7);
          }
        }
        else if (uVar4 == 0x74494d45) {
          pnglibNamespace::png_handle_tIME(param_1,(long)param_2,uVar7);
        }
        else if (uVar4 == 0x74524e53) {
          pnglibNamespace::png_handle_tRNS(param_1,(long)param_2,uVar7);
        }
        else {
          if (uVar4 != 0x7a545874) goto LAB_0039f47f;
          pnglibNamespace::png_handle_zTXt(param_1,(long)param_2,uVar7);
        }
      }
      else {
        uVar5 = *(uint *)(param_1 + 0x4c);
        *(uint *)(param_1 + 0x4c) = uVar5 | 0x2000;
        if (uVar4 == 0x49484452) {
                    /* try { // try from 0039f001 to 0039f50b has its CatchHandler @ 0039f695 */
          pnglibNamespace::png_handle_IHDR(param_1,param_2,uVar7);
        }
        else {
          if (uVar4 != 0x49454e44) goto LAB_0039f0a0;
          if ((~uVar5 & 5) != 0) {
LAB_0039f62a:
                    /* WARNING: Subroutine does not return */
            pnglibNamespace::png_err(param_1);
          }
          *(uint *)(param_1 + 0x4c) = uVar5 | 0x2018;
          pnglibNamespace::png_crc_finish(param_1,uVar7);
          if (uVar7 != 0) {
            if (((byte)param_1[0x52] & 0x10) == 0) {
LAB_0039f632:
                    /* WARNING: Subroutine does not return */
              pnglibNamespace::png_err(param_1);
            }
            pnglibNamespace::png_chunk_warning((long)param_1,0x5e4488);
          }
        }
      }
LAB_0039f010:
    } while (((byte)param_1[0x4c] & 0x10) == 0);
  }
LAB_0039d6d3:
  return local_d4 == 0;
}


