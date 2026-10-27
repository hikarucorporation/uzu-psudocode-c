// Function : deflate
// Namespace: juce:zlibNamespace
// Entry    : 004b4100
// Prototype: ulong deflate(long * param_1, uint param_2)
// Body     : 004b4100 - 004b4c17


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::zlibNamespace::deflate(juce::zlibNamespace::z_stream_s*, int) */

ulong __cdecl juce::zlibNamespace::deflate(long *param_1,uint param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  int *piVar5;
  long lVar6;
  void *__s;
  char cVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong extraout_RDX_01;
  ulong extraout_RDX_02;
  long lVar13;
  ulong uVar14;
  ulong local_40;
  ulong local_38;
  
  if (param_1 == (long *)0x0) {
    return 0xfffffffe;
  }
  if (param_1[8] == 0) {
    return 0xfffffffe;
  }
  if (param_1[9] == 0) {
    return 0xfffffffe;
  }
  plVar4 = (long *)param_1[7];
  if (plVar4 == (long *)0x0) {
    return 0xfffffffe;
  }
  if ((long *)*plVar4 != param_1) {
    return 0xfffffffe;
  }
  iVar12 = (int)plVar4[1];
  if ((((0x38 < iVar12 - 0x39U) ||
       ((0x100400400011001U >> ((ulong)(iVar12 - 0x39U) & 0x3f) & 1) == 0)) && (iVar12 != 0x29a)) &&
     (iVar12 != 0x2a)) {
    return 0xfffffffe;
  }
  if (param_1[3] == 0) {
LAB_004b4178:
    param_1[6] = (long)"stream error";
    return 0xfffffffe;
  }
  uVar8 = *(uint *)(param_1 + 1);
  uVar9 = (ulong)uVar8;
  if (((uVar8 != 0) && (*param_1 == 0)) || ((param_2 != 4 && (iVar12 == 0x29a)))) goto LAB_004b4178;
  if ((int)param_1[4] == 0) {
LAB_004b4525:
    param_1[6] = (long)"buffer error";
    return 0xfffffffb;
  }
  iVar2 = *(int *)((long)plVar4 + 0x4c);
  *(uint *)((long)plVar4 + 0x4c) = param_2;
  if (plVar4[5] == 0) {
    if (uVar8 == 0) {
      uVar9 = 0;
      if ((param_2 != 4) &&
         (uVar8 = (uint)(iVar2 < 5) * 9, uVar9 = (ulong)uVar8,
         (int)(param_2 * 2) <= (int)(uVar8 + iVar2 * 2 + -9))) goto LAB_004b4525;
    }
  }
  else {
    flush_pending((long)param_1);
    if ((int)param_1[4] == 0) goto LAB_004b4b7f;
    iVar12 = (int)plVar4[1];
    uVar9 = extraout_RDX;
  }
  if (iVar12 == 0x2a) {
    if ((int)plVar4[6] != 0) {
      uVar8 = 0;
      if (((int)plVar4[0x19] < 2) && (uVar3 = *(uint *)((long)plVar4 + 0xc4), 1 < (int)uVar3)) {
        uVar8 = 0x40;
        if (5 < uVar3) {
          uVar8 = (uVar3 != 6 | 2) << 6;
        }
      }
      uVar8 = uVar8 | *(int *)((long)plVar4 + 0x54) * 0x1000 - 0x7800U;
      uVar3 = uVar8 | 0x20;
      if (*(int *)((long)plVar4 + 0xac) == 0) {
        uVar3 = uVar8;
      }
      lVar11 = plVar4[5];
      plVar4[5] = lVar11 + 1;
      *(char *)(plVar4[2] + lVar11) = (char)(uVar3 >> 8);
      lVar11 = plVar4[5];
      plVar4[5] = lVar11 + 1;
      *(byte *)(plVar4[2] + lVar11) =
           ((char)(uVar3 / 0x1f) * -0x1f + (byte)uVar3 | (byte)uVar3) ^ 0x1f;
      if (*(int *)((long)plVar4 + 0xac) != 0) {
        lVar11 = param_1[0xc];
        lVar10 = plVar4[5];
        plVar4[5] = lVar10 + 1;
        *(char *)(plVar4[2] + lVar10) = (char)((ulong)lVar11 >> 0x18);
        lVar10 = plVar4[5];
        plVar4[5] = lVar10 + 1;
        *(char *)(plVar4[2] + lVar10) = (char)((ulong)lVar11 >> 0x10);
        lVar11 = param_1[0xc];
        lVar10 = plVar4[5];
        plVar4[5] = lVar10 + 1;
        *(char *)(plVar4[2] + lVar10) = (char)((ulong)lVar11 >> 8);
        lVar10 = plVar4[5];
        plVar4[5] = lVar10 + 1;
        *(char *)(plVar4[2] + lVar10) = (char)lVar11;
      }
      param_1[0xc] = 1;
      *(undefined4 *)(plVar4 + 1) = 0x71;
      flush_pending((long)param_1);
      if (plVar4[5] != 0) goto LAB_004b4b7f;
      iVar12 = (int)plVar4[1];
      uVar9 = extraout_RDX_00;
      goto LAB_004b432b;
    }
    *(undefined4 *)(plVar4 + 1) = 0x71;
switchD_004b462f_caseD_46:
    if ((int)param_1[1] == 0) goto LAB_004b496f;
  }
  else {
    if (iVar12 != 0x29a) {
LAB_004b432b:
      if (iVar12 == 0x39) {
        param_1[0xc] = 0;
        lVar11 = plVar4[5];
        plVar4[5] = lVar11 + 1;
        *(undefined1 *)(plVar4[2] + lVar11) = 0x1f;
        lVar11 = plVar4[5];
        plVar4[5] = lVar11 + 1;
        *(undefined1 *)(plVar4[2] + lVar11) = 0x8b;
        lVar11 = plVar4[5];
        plVar4[5] = lVar11 + 1;
        *(undefined1 *)(plVar4[2] + lVar11) = 8;
        piVar5 = (int *)plVar4[7];
        if (piVar5 == (int *)0x0) {
          lVar11 = plVar4[5];
          plVar4[5] = lVar11 + 1;
          *(undefined1 *)(plVar4[2] + lVar11) = 0;
          lVar11 = plVar4[5];
          plVar4[5] = lVar11 + 1;
          *(undefined1 *)(plVar4[2] + lVar11) = 0;
          lVar11 = plVar4[5];
          plVar4[5] = lVar11 + 1;
          *(undefined1 *)(plVar4[2] + lVar11) = 0;
          lVar11 = plVar4[5];
          plVar4[5] = lVar11 + 1;
          *(undefined1 *)(plVar4[2] + lVar11) = 0;
          lVar11 = plVar4[5];
          plVar4[5] = lVar11 + 1;
          *(undefined1 *)(plVar4[2] + lVar11) = 0;
          cVar7 = '\x02';
          if (*(int *)((long)plVar4 + 0xc4) != 9) {
            cVar7 = (*(int *)((long)plVar4 + 0xc4) < 2 || 1 < (int)plVar4[0x19]) << 2;
          }
          lVar11 = plVar4[5];
          plVar4[5] = lVar11 + 1;
          *(char *)(plVar4[2] + lVar11) = cVar7;
          lVar11 = plVar4[5];
          plVar4[5] = lVar11 + 1;
          *(undefined1 *)(plVar4[2] + lVar11) = 3;
          *(undefined4 *)(plVar4 + 1) = 0x71;
          flush_pending((long)param_1);
          if (plVar4[5] != 0) goto LAB_004b4b7f;
          iVar12 = (int)plVar4[1];
          uVar9 = extraout_RDX_01;
          goto LAB_004b4615;
        }
        iVar12 = *piVar5;
        iVar2 = piVar5[0x11];
        lVar11 = *(long *)(piVar5 + 6);
        lVar10 = *(long *)(piVar5 + 10);
        lVar13 = *(long *)(piVar5 + 0xe);
        lVar6 = plVar4[5];
        plVar4[5] = lVar6 + 1;
        *(char *)(plVar4[2] + lVar6) =
             (lVar13 != 0) << 4 |
             (lVar10 != 0) << 3 | (lVar11 != 0) << 2 | (iVar2 != 0) * '\x02' | iVar12 != 0;
        uVar1 = *(undefined1 *)(plVar4[7] + 8);
        lVar11 = plVar4[5];
        plVar4[5] = lVar11 + 1;
        *(undefined1 *)(plVar4[2] + lVar11) = uVar1;
        uVar1 = *(undefined1 *)(plVar4[7] + 9);
        lVar11 = plVar4[5];
        plVar4[5] = lVar11 + 1;
        *(undefined1 *)(plVar4[2] + lVar11) = uVar1;
        uVar1 = *(undefined1 *)(plVar4[7] + 10);
        lVar11 = plVar4[5];
        plVar4[5] = lVar11 + 1;
        *(undefined1 *)(plVar4[2] + lVar11) = uVar1;
        uVar1 = *(undefined1 *)(plVar4[7] + 0xb);
        lVar11 = plVar4[5];
        plVar4[5] = lVar11 + 1;
        *(undefined1 *)(plVar4[2] + lVar11) = uVar1;
        cVar7 = '\x02';
        if (*(int *)((long)plVar4 + 0xc4) != 9) {
          cVar7 = (*(int *)((long)plVar4 + 0xc4) < 2 || 1 < (int)plVar4[0x19]) << 2;
        }
        lVar11 = plVar4[5];
        plVar4[5] = lVar11 + 1;
        *(char *)(plVar4[2] + lVar11) = cVar7;
        uVar1 = *(undefined1 *)(plVar4[7] + 0x14);
        lVar11 = plVar4[5];
        plVar4[5] = lVar11 + 1;
        *(undefined1 *)(plVar4[2] + lVar11) = uVar1;
        lVar11 = plVar4[7];
        if (*(long *)(lVar11 + 0x18) != 0) {
          uVar1 = *(undefined1 *)(lVar11 + 0x20);
          lVar11 = plVar4[5];
          plVar4[5] = lVar11 + 1;
          *(undefined1 *)(plVar4[2] + lVar11) = uVar1;
          uVar1 = *(undefined1 *)(plVar4[7] + 0x21);
          lVar11 = plVar4[5];
          plVar4[5] = lVar11 + 1;
          *(undefined1 *)(plVar4[2] + lVar11) = uVar1;
          lVar11 = plVar4[7];
        }
        if (*(int *)(lVar11 + 0x44) != 0) {
          uVar9 = crc32_z((uint)param_1[0xc],(ulong *)plVar4[2],(ulong)*(uint *)(plVar4 + 5));
          param_1[0xc] = uVar9;
        }
        plVar4[8] = 0;
        *(undefined4 *)(plVar4 + 1) = 0x45;
LAB_004b4635:
        lVar10 = *(long *)(lVar11 + 0x18);
        if (lVar10 != 0) {
          uVar9 = plVar4[3];
          uVar14 = plVar4[5];
          lVar13 = plVar4[8];
          local_40 = (ulong)((uint)*(ushort *)(lVar11 + 0x20) - (int)lVar13);
          if (uVar9 < local_40 + uVar14) {
            local_38 = 0;
            do {
              uVar8 = (int)uVar9 - (int)uVar14;
              memcpy((void *)(plVar4[2] + uVar14),(void *)(lVar13 + lVar10),(ulong)uVar8);
              uVar9 = plVar4[3];
              plVar4[5] = uVar9;
              if ((*(int *)(plVar4[7] + 0x44) != 0) && (uVar14 < uVar9)) {
                uVar9 = crc32_z((uint)param_1[0xc],(ulong *)(plVar4[2] + uVar14),
                                (ulong)(uint)((int)uVar9 - (int)uVar14));
                param_1[0xc] = uVar9;
              }
              plVar4[8] = plVar4[8] + (ulong)uVar8;
              flush_pending((long)param_1);
              if (plVar4[5] != 0) goto LAB_004b4b7f;
              local_40 = (ulong)((int)local_40 - uVar8);
              uVar9 = plVar4[3];
              lVar10 = *(long *)(plVar4[7] + 0x18);
              lVar13 = plVar4[8];
              uVar14 = 0;
            } while (uVar9 < local_40);
          }
          else {
            local_38 = uVar14;
          }
          memcpy((void *)(plVar4[2] + local_38),(void *)(lVar13 + lVar10),local_40);
          local_40 = local_40 + plVar4[5];
          plVar4[5] = local_40;
          lVar11 = plVar4[7];
          if ((*(int *)(lVar11 + 0x44) != 0) && (local_38 < local_40)) {
            uVar9 = crc32_z((uint)param_1[0xc],(ulong *)(plVar4[2] + local_38),
                            (ulong)(uint)((int)local_40 - (int)local_38));
            param_1[0xc] = uVar9;
          }
          plVar4[8] = 0;
        }
        *(undefined4 *)(plVar4 + 1) = 0x49;
LAB_004b4760:
        if (*(long *)(lVar11 + 0x28) != 0) {
          uVar9 = plVar4[5];
          uVar14 = uVar9;
          if (uVar9 != plVar4[3]) goto LAB_004b47c2;
          while( true ) {
            if ((*(int *)(plVar4[7] + 0x44) != 0) && (uVar14 < uVar9)) {
              uVar9 = crc32_z((uint)param_1[0xc],(ulong *)(plVar4[2] + uVar14),
                              (ulong)(uint)((int)uVar9 - (int)uVar14));
              param_1[0xc] = uVar9;
            }
            flush_pending((long)param_1);
            if (plVar4[5] != 0) break;
            uVar9 = 0;
            uVar14 = 0;
LAB_004b47c2:
            do {
              lVar11 = *(long *)(plVar4[7] + 0x28);
              lVar10 = plVar4[8];
              plVar4[8] = lVar10 + 1;
              cVar7 = *(char *)(lVar11 + lVar10);
              plVar4[5] = uVar9 + 1;
              *(char *)(plVar4[2] + uVar9) = cVar7;
              if (cVar7 == '\0') {
                lVar11 = plVar4[7];
                if ((*(int *)(lVar11 + 0x44) != 0) && (uVar14 < (ulong)plVar4[5])) {
                  uVar9 = crc32_z((uint)param_1[0xc],(ulong *)(plVar4[2] + uVar14),
                                  (ulong)(uint)((int)plVar4[5] - (int)uVar14));
                  param_1[0xc] = uVar9;
                }
                plVar4[8] = 0;
                goto LAB_004b4820;
              }
              uVar9 = plVar4[5];
            } while (uVar9 != plVar4[3]);
          }
          goto LAB_004b4b7f;
        }
LAB_004b4820:
        *(undefined4 *)(plVar4 + 1) = 0x5b;
LAB_004b482e:
        if (*(long *)(lVar11 + 0x38) != 0) {
          uVar9 = plVar4[5];
          uVar14 = uVar9;
          if (uVar9 != plVar4[3]) goto LAB_004b4890;
          while( true ) {
            if ((*(int *)(plVar4[7] + 0x44) != 0) && (uVar14 < uVar9)) {
              uVar9 = crc32_z((uint)param_1[0xc],(ulong *)(plVar4[2] + uVar14),
                              (ulong)(uint)((int)uVar9 - (int)uVar14));
              param_1[0xc] = uVar9;
            }
            flush_pending((long)param_1);
            if (plVar4[5] != 0) break;
            uVar9 = 0;
            uVar14 = 0;
LAB_004b4890:
            do {
              lVar11 = *(long *)(plVar4[7] + 0x38);
              lVar10 = plVar4[8];
              plVar4[8] = lVar10 + 1;
              cVar7 = *(char *)(lVar11 + lVar10);
              plVar4[5] = uVar9 + 1;
              *(char *)(plVar4[2] + uVar9) = cVar7;
              if (cVar7 == '\0') {
                lVar11 = plVar4[7];
                if ((*(int *)(lVar11 + 0x44) != 0) && (uVar14 < (ulong)plVar4[5])) {
                  uVar9 = crc32_z((uint)param_1[0xc],(ulong *)(plVar4[2] + uVar14),
                                  (ulong)(uint)((int)plVar4[5] - (int)uVar14));
                  param_1[0xc] = uVar9;
                }
                goto LAB_004b48e6;
              }
              uVar9 = plVar4[5];
            } while (uVar9 != plVar4[3]);
          }
          goto LAB_004b4b7f;
        }
LAB_004b48e6:
        *(undefined4 *)(plVar4 + 1) = 0x67;
      }
      else {
LAB_004b4615:
        switch(iVar12) {
        case 0x45:
          lVar11 = plVar4[7];
          goto LAB_004b4635;
        default:
          goto switchD_004b462f_caseD_46;
        case 0x49:
          lVar11 = plVar4[7];
          goto LAB_004b4760;
        case 0x5b:
          lVar11 = plVar4[7];
          goto LAB_004b482e;
        case 0x67:
          lVar11 = plVar4[7];
        }
      }
      if (*(int *)(lVar11 + 0x44) != 0) {
        lVar11 = plVar4[5];
        if ((ulong)plVar4[3] < lVar11 + 2U) {
          flush_pending((long)param_1);
          lVar11 = 0;
          if (plVar4[5] != 0) goto LAB_004b4a32;
        }
        lVar10 = param_1[0xc];
        plVar4[5] = lVar11 + 1;
        *(char *)(plVar4[2] + lVar11) = (char)lVar10;
        uVar1 = *(undefined1 *)((long)param_1 + 0x61);
        lVar11 = plVar4[5];
        plVar4[5] = lVar11 + 1;
        *(undefined1 *)(plVar4[2] + lVar11) = uVar1;
        param_1[0xc] = 0;
      }
      *(undefined4 *)(plVar4 + 1) = 0x71;
      flush_pending((long)param_1);
      uVar9 = extraout_RDX_02;
      if (plVar4[5] != 0) goto LAB_004b4b7f;
      goto switchD_004b462f_caseD_46;
    }
    if ((int)param_1[1] != 0) goto LAB_004b4525;
LAB_004b496f:
    if ((*(int *)((long)plVar4 + 0xb4) == 0) && ((param_2 == 0 || ((int)plVar4[1] == 0x29a))))
    goto LAB_004b4aab;
  }
  if ((long)*(int *)((long)plVar4 + 0xc4) == 0) {
    uVar8 = deflate_stored(plVar4,param_2);
  }
  else if ((int)plVar4[0x19] == 3) {
    uVar8 = deflate_rle(plVar4,param_2);
  }
  else if ((int)plVar4[0x19] == 2) {
    uVar8 = deflate_huff(plVar4,param_2);
  }
  else {
    uVar8 = (**(code **)(configuration_table + (long)*(int *)((long)plVar4 + 0xc4) * 0x10 + 8))
                      (plVar4,param_2,uVar9);
  }
  if ((uVar8 & 0xfffffffe) == 2) {
    *(undefined4 *)(plVar4 + 1) = 0x29a;
  }
  if ((uVar8 & 0xfffffffd) == 0) {
    if ((int)param_1[4] != 0) {
      return 0;
    }
LAB_004b4a32:
    *(undefined4 *)((long)plVar4 + 0x4c) = 0xffffffff;
    return 0;
  }
  if (uVar8 == 1) {
    if (param_2 != 5) {
      if (param_2 == 1) {
        _tr_align((long)plVar4);
      }
      else {
        _tr_stored_block((long)plVar4,(void *)0x0,0,0);
        if (param_2 == 3) {
          __s = (void *)plVar4[0xf];
          uVar9 = (ulong)(*(int *)((long)plVar4 + 0x84) - 1);
          *(undefined2 *)((long)__s + uVar9 * 2) = 0;
          memset(__s,0,uVar9 * 2);
          if (*(int *)((long)plVar4 + 0xb4) == 0) {
            *(undefined4 *)((long)plVar4 + 0xac) = 0;
            plVar4[0x13] = 0;
            *(undefined4 *)((long)plVar4 + 0x172c) = 0;
          }
        }
      }
    }
    flush_pending((long)param_1);
    if ((int)param_1[4] == 0) {
LAB_004b4b7f:
      *(undefined4 *)((long)plVar4 + 0x4c) = 0xffffffff;
      return 0;
    }
  }
LAB_004b4aab:
  if (param_2 != 4) {
    return 0;
  }
  if ((int)plVar4[6] < 1) {
    return 1;
  }
  lVar11 = param_1[0xc];
  if ((int)plVar4[6] == 2) {
    lVar10 = plVar4[5];
    plVar4[5] = lVar10 + 1;
    *(char *)(plVar4[2] + lVar10) = (char)lVar11;
    uVar1 = *(undefined1 *)((long)param_1 + 0x61);
    lVar11 = plVar4[5];
    plVar4[5] = lVar11 + 1;
    *(undefined1 *)(plVar4[2] + lVar11) = uVar1;
    uVar1 = *(undefined1 *)((long)param_1 + 0x62);
    lVar11 = plVar4[5];
    plVar4[5] = lVar11 + 1;
    *(undefined1 *)(plVar4[2] + lVar11) = uVar1;
    uVar1 = *(undefined1 *)((long)param_1 + 99);
    lVar11 = plVar4[5];
    plVar4[5] = lVar11 + 1;
    *(undefined1 *)(plVar4[2] + lVar11) = uVar1;
    lVar10 = param_1[2];
    lVar11 = plVar4[5];
    plVar4[5] = lVar11 + 1;
    *(char *)(plVar4[2] + lVar11) = (char)lVar10;
    uVar1 = *(undefined1 *)((long)param_1 + 0x11);
    lVar11 = plVar4[5];
    plVar4[5] = lVar11 + 1;
    *(undefined1 *)(plVar4[2] + lVar11) = uVar1;
    uVar1 = *(undefined1 *)((long)param_1 + 0x12);
    lVar11 = plVar4[5];
    plVar4[5] = lVar11 + 1;
    *(undefined1 *)(plVar4[2] + lVar11) = uVar1;
    uVar1 = *(undefined1 *)((long)param_1 + 0x13);
    lVar11 = plVar4[5];
    plVar4[5] = lVar11 + 1;
    *(undefined1 *)(plVar4[2] + lVar11) = uVar1;
  }
  else {
    lVar10 = plVar4[5];
    plVar4[5] = lVar10 + 1;
    *(char *)(plVar4[2] + lVar10) = (char)((ulong)lVar11 >> 0x18);
    lVar10 = plVar4[5];
    plVar4[5] = lVar10 + 1;
    *(char *)(plVar4[2] + lVar10) = (char)((ulong)lVar11 >> 0x10);
    lVar11 = param_1[0xc];
    lVar10 = plVar4[5];
    plVar4[5] = lVar10 + 1;
    *(char *)(plVar4[2] + lVar10) = (char)((ulong)lVar11 >> 8);
    lVar10 = plVar4[5];
    plVar4[5] = lVar10 + 1;
    *(char *)(plVar4[2] + lVar10) = (char)lVar11;
  }
  flush_pending((long)param_1);
  if (0 < (int)plVar4[6]) {
    *(int *)(plVar4 + 6) = -(int)plVar4[6];
  }
  return (ulong)(plVar4[5] == 0);
}


