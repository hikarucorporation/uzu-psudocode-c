// Function : readHeader
// Namespace: juce:PNGHelpers
// Entry    : 0039cf60
// Prototype: bool readHeader(undefined8 param_1, pnglibNamespace * param_2, uint * param_3, __jmp_buf_tag * param_4, uint * param_5, uint * param_6, uint * param_7, uint * param_8, uint * param_9)
// Body     : 0039cf60 - 0039d68d


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::PNGHelpers::readHeader(juce::InputStream&, juce::pnglibNamespace::png_struct_def*,
   juce::pnglibNamespace::png_info_def*, __jmp_buf_tag (&) [1], unsigned int&, unsigned int&, int&,
   int&, int&) */

bool __cdecl
juce::PNGHelpers::readHeader
          (undefined8 param_1,pnglibNamespace *param_2,uint *param_3,__jmp_buf_tag *param_4,
          uint *param_5,uint *param_6,uint *param_7,uint *param_8,uint *param_9)

{
  pnglibNamespace pVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong __n;
  void *__s1;
  size_t __n_00;
  
  iVar5 = _setjmp(param_4);
  if (iVar5 != 0) goto LAB_0039cf91;
  if (param_2 != (pnglibNamespace *)0x0) {
    *(undefined8 *)(param_2 + 0x28) = param_1;
    *(code **)(param_2 + 0x20) = readCallback;
    if (*(long *)(param_2 + 0x18) != 0) {
      *(undefined8 *)(param_2 + 0x18) = 0;
                    /* try { // try from 0039cfcf to 0039d038 has its CatchHandler @ 0039d68e */
      pnglibNamespace::png_warning
                ((long)param_2,
                 "Can\'t set both read_data_fn and write_data_fn in the same structure");
    }
    *(undefined8 *)(param_2 + 0x1b0) = 0;
    if (param_3 != (uint *)0x0) {
      pVar1 = param_2[0x18d];
      uVar9 = (ulong)(byte)pVar1;
      if (uVar9 < 8) {
        *(undefined4 *)(param_2 + 0x36c) = 0x11;
        if (*(code **)(param_2 + 0x20) == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
          pnglibNamespace::png_err(param_2);
        }
        __n_00 = 8 - uVar9;
        __s1 = (void *)((long)param_3 + uVar9 + 0x2c);
        (**(code **)(param_2 + 0x20))(param_2,__s1,__n_00);
        param_2[0x18d] = (pnglibNamespace)0x8;
        iVar6 = bcmp(__s1,&DAT_005de768 + uVar9,__n_00);
        if (iVar6 != 0) {
          if ((byte)pVar1 < 4) {
            __n = 8;
            if (4 - uVar9 < 8) {
              __n = 4 - uVar9;
            }
            if (8 < uVar9 + __n) {
              __n = __n_00;
            }
            iVar5 = bcmp(__s1,&DAT_005de768 + uVar9,__n);
            if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
              pnglibNamespace::png_err(param_2);
            }
          }
                    /* WARNING: Subroutine does not return */
          pnglibNamespace::png_err(param_2);
        }
        if ((byte)pVar1 < 3) {
          param_2[0x4d] = (pnglibNamespace)((byte)param_2[0x4d] | 0x10);
        }
      }
LAB_0039d08e:
      uVar9 = pnglibNamespace::png_read_chunk_header(param_2);
      uVar7 = (uint)uVar9;
      uVar8 = *(uint *)(param_2 + 0x4c);
      uVar3 = *(uint *)(param_2 + 0x138);
      if (uVar3 == 0x49444154) {
        if ((uVar8 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          pnglibNamespace::png_err(param_2);
        }
        if ((param_2[0x187] == (pnglibNamespace)0x3) && ((uVar8 & 2) == 0)) {
                    /* WARNING: Subroutine does not return */
          pnglibNamespace::png_err(param_2);
        }
        if ((uVar8 & 8) != 0) {
          if (((byte)param_2[0x52] & 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            pnglibNamespace::png_err(param_2);
          }
          pnglibNamespace::png_chunk_warning((long)param_2,0x5e4361);
          uVar8 = *(uint *)(param_2 + 0x4c);
        }
        *(uint *)(param_2 + 0x4c) = uVar8 | 4;
      }
      else {
        if ((uVar8 & 4) != 0) {
          uVar8 = uVar8 | 0x2008;
          *(uint *)(param_2 + 0x4c) = uVar8;
        }
        if (uVar3 == 0x49454e44) {
          if ((~uVar8 & 5) != 0) {
                    /* WARNING: Subroutine does not return */
            pnglibNamespace::png_err(param_2);
          }
          *(uint *)(param_2 + 0x4c) = uVar8 | 0x18;
          pnglibNamespace::png_crc_finish(param_2,uVar7);
          if (uVar7 != 0) {
            if (((byte)param_2[0x52] & 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              pnglibNamespace::png_err(param_2);
            }
            pnglibNamespace::png_chunk_warning((long)param_2,0x5e4488);
          }
          goto LAB_0039d08e;
        }
        if (uVar3 == 0x49484452) {
          pnglibNamespace::png_handle_IHDR(param_2,param_3,uVar7);
          goto LAB_0039d08e;
        }
      }
      if (*(int *)(param_2 + 0x2e4) != 0) {
        uVar9 = (ulong)(uint)(*(int *)(param_2 + 0x2e4) * 5) + *(ulong *)(param_2 + 0x2e8);
        do {
          if ((uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18) ==
              *(uint *)(uVar9 - 5)) {
            if (*(byte *)(uVar9 - 1) != 0) {
              pnglibNamespace::png_handle_unknown
                        (param_2,(long)param_3,uVar7,(uint)*(byte *)(uVar9 - 1));
              if (uVar3 == 0x504c5445) {
                param_2[0x4c] = (pnglibNamespace)((byte)param_2[0x4c] | 2);
                goto LAB_0039d08e;
              }
              if (uVar3 != 0x49444154) goto LAB_0039d08e;
              uVar7 = 0;
              goto LAB_0039d491;
            }
            break;
          }
          uVar9 = uVar9 - 5;
        } while (*(ulong *)(param_2 + 0x2e8) < uVar9);
      }
      if (uVar3 == 0x504c5445) {
                    /* try { // try from 0039d080 to 0039d488 has its CatchHandler @ 0039d696 */
        pnglibNamespace::png_handle_PLTE(param_2,(long)param_3,uVar7);
        goto LAB_0039d08e;
      }
      if (uVar3 == 0x49444154) goto LAB_0039d491;
      if ((int)uVar3 < 0x70485973) {
        if ((int)uVar3 < 0x69434350) {
          if ((int)uVar3 < 0x67414d41) {
            if (uVar3 == 0x624b4744) {
              pnglibNamespace::png_handle_bKGD(param_2,(long)param_3,uVar7);
              goto LAB_0039d08e;
            }
            if (uVar3 == 0x6348524d) {
              pnglibNamespace::png_handle_cHRM(param_2,(long)param_3,uVar7);
              goto LAB_0039d08e;
            }
          }
          else {
            if (uVar3 == 0x67414d41) {
              pnglibNamespace::png_handle_gAMA(param_2,(long)param_3,uVar7);
              goto LAB_0039d08e;
            }
            if (uVar3 == 0x68495354) {
              pnglibNamespace::png_handle_hIST(param_2,(long)param_3,uVar7);
              goto LAB_0039d08e;
            }
          }
        }
        else if ((int)uVar3 < 0x6f464673) {
          if (uVar3 == 0x69434350) {
            pnglibNamespace::png_handle_iCCP(param_2,(long)param_3,uVar7);
            goto LAB_0039d08e;
          }
          if (uVar3 == 0x69545874) {
            pnglibNamespace::png_handle_iTXt(param_2,(long)param_3,uVar7);
            goto LAB_0039d08e;
          }
        }
        else {
          if (uVar3 == 0x6f464673) {
            pnglibNamespace::png_handle_oFFs(param_2,(long)param_3,uVar7);
            goto LAB_0039d08e;
          }
          if (uVar3 == 0x7043414c) {
            pnglibNamespace::png_handle_pCAL(param_2,(long)param_3,uVar7);
            goto LAB_0039d08e;
          }
        }
      }
      else if ((int)uVar3 < 0x73524742) {
        if ((int)uVar3 < 0x7343414c) {
          if (uVar3 == 0x70485973) {
            pnglibNamespace::png_handle_pHYs(param_2,(long)param_3,uVar7);
            goto LAB_0039d08e;
          }
          if (uVar3 == 0x73424954) {
            pnglibNamespace::png_handle_sBIT(param_2,(long)param_3,uVar7);
            goto LAB_0039d08e;
          }
        }
        else {
          if (uVar3 == 0x7343414c) {
            pnglibNamespace::png_handle_sCAL(param_2,(long)param_3,uVar7);
            goto LAB_0039d08e;
          }
          if (uVar3 == 0x73504c54) {
            pnglibNamespace::png_handle_sPLT(param_2,(long)param_3,uVar7);
            goto LAB_0039d08e;
          }
        }
      }
      else if ((int)uVar3 < 0x74494d45) {
        if (uVar3 == 0x73524742) {
          pnglibNamespace::png_handle_sRGB(param_2,(long)param_3,uVar7);
          goto LAB_0039d08e;
        }
        if (uVar3 == 0x74455874) {
          pnglibNamespace::png_handle_tEXt(param_2,(long)param_3,uVar7);
          goto LAB_0039d08e;
        }
      }
      else {
        if (uVar3 == 0x74494d45) {
          pnglibNamespace::png_handle_tIME(param_2,(long)param_3,uVar7);
          goto LAB_0039d08e;
        }
        if (uVar3 == 0x74524e53) {
          pnglibNamespace::png_handle_tRNS(param_2,(long)param_3,uVar7);
          goto LAB_0039d08e;
        }
        if (uVar3 == 0x7a545874) {
          pnglibNamespace::png_handle_zTXt(param_2,(long)param_3,uVar7);
          goto LAB_0039d08e;
        }
      }
      pnglibNamespace::png_handle_unknown(param_2,(long)param_3,uVar7,0);
      goto LAB_0039d08e;
    }
    goto LAB_0039d4f6;
  }
  goto LAB_0039d5a5;
LAB_0039d491:
  *(uint *)(param_2 + 0x168) = uVar7;
  if (param_3 != (uint *)0x0) {
    uVar8 = *param_3;
    *param_5 = uVar8;
    uVar3 = param_3[1];
    *param_6 = uVar3;
    uVar7 = param_3[9];
    *param_7 = (uint)(byte)uVar7;
    bVar2 = *(byte *)((long)param_3 + 0x25);
    *param_8 = (uint)bVar2;
    uVar4 = param_3[10];
    *param_9 = (uint)(byte)uVar4;
                    /* try { // try from 0039d4e3 to 0039d68d has its CatchHandler @ 0039d68e */
    pnglibNamespace::png_check_IHDR
              (param_2,uVar8,uVar3,(uint)(byte)uVar7,(uint)bVar2,(uint)(byte)uVar4,
               (uint)*(byte *)((long)param_3 + 0x26),(uint)*(byte *)((long)param_3 + 0x27));
  }
LAB_0039d4f6:
  if (*param_7 == 0x10) {
    uVar8 = *(uint *)(param_2 + 0x50);
    if ((uVar8 & 0x40) == 0) {
      *(uint *)(param_2 + 0x50) = uVar8 | 0x4000;
      param_2[0x55] = (pnglibNamespace)((byte)param_2[0x55] | 4);
    }
    else {
      if ((uVar8 & 0x400000) == 0) {
                    /* WARNING: Subroutine does not return */
        pnglibNamespace::png_err(param_2);
      }
      pnglibNamespace::png_warning
                ((long)param_2,"invalid after png_start_read_image or png_read_update_info");
    }
  }
  if (*param_8 == 3) {
    uVar8 = *(uint *)(param_2 + 0x50);
    if ((uVar8 & 0x40) == 0) {
      *(uint *)(param_2 + 0x50) = uVar8 | 0x4000;
      *(uint *)(param_2 + 0x54) = *(uint *)(param_2 + 0x54) | 0x2001000;
    }
    else {
      if ((uVar8 & 0x400000) == 0) {
                    /* WARNING: Subroutine does not return */
        pnglibNamespace::png_err(param_2);
      }
      pnglibNamespace::png_warning
                ((long)param_2,"invalid after png_start_read_image or png_read_update_info");
    }
  }
  if ((int)*param_7 < 8) {
    uVar8 = *(uint *)(param_2 + 0x50);
    if ((uVar8 & 0x40) == 0) {
      *(uint *)(param_2 + 0x50) = uVar8 | 0x4000;
      *(uint *)(param_2 + 0x54) = *(uint *)(param_2 + 0x54) | 0x2001000;
    }
    else {
      if ((uVar8 & 0x400000) == 0) {
                    /* WARNING: Subroutine does not return */
        pnglibNamespace::png_err(param_2);
      }
      pnglibNamespace::png_warning
                ((long)param_2,"invalid after png_start_read_image or png_read_update_info");
    }
  }
LAB_0039d5a5:
  if (((*param_8 & 0xfffffffb) == 0) && (param_2 != (pnglibNamespace *)0x0)) {
    uVar8 = *(uint *)(param_2 + 0x50);
    if ((uVar8 & 0x40) == 0) {
      *(uint *)(param_2 + 0x50) = uVar8 | 0x4000;
      param_2[0x55] = (pnglibNamespace)((byte)param_2[0x55] | 0x50);
    }
    else {
      if ((uVar8 & 0x400000) == 0) {
                    /* WARNING: Subroutine does not return */
        pnglibNamespace::png_err(param_2);
      }
      pnglibNamespace::png_warning
                ((long)param_2,"invalid after png_start_read_image or png_read_update_info");
    }
  }
LAB_0039cf91:
  return iVar5 == 0;
}


