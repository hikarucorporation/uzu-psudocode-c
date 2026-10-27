// Function : canvas_undo_set_cut
// Namespace: 
// Entry    : 00505cf0
// Prototype: undefined8 * canvas_undo_set_cut(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, int param_10)
// Body     : 00505cf0 - 005061db


undefined8 *
canvas_undo_set_cut(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,int param_10)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  long lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  bool bVar20;
  bool bVar21;
  undefined8 uVar22;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  long local_a8;
  long local_a0;
  uint local_94;
  long local_90;
  
  lVar10 = *(long *)(param_9 + 0x30);
  iVar2 = 0;
  if (lVar10 == 0) {
    iVar19 = 0;
  }
  else {
    lVar11 = *(long *)(param_9 + 0xc0);
    if (lVar11 == 0) {
      iVar19 = 0;
      lVar16 = lVar10;
      do {
        iVar19 = iVar19 + 1;
        lVar16 = *(long *)(lVar16 + 8);
      } while (lVar16 != 0);
    }
    else {
      iVar19 = 0;
      if (*(long **)(lVar11 + 0x20) == (long *)0x0) {
        lVar16 = lVar10;
        do {
          iVar19 = iVar19 + 1;
          lVar16 = *(long *)(lVar16 + 8);
        } while (lVar16 != 0);
      }
      else {
        lVar16 = lVar10;
        do {
          plVar7 = *(long **)(lVar11 + 0x20);
          do {
            lVar1 = *plVar7;
            if (lVar1 == lVar16) break;
            plVar7 = (long *)plVar7[1];
          } while (plVar7 != (long *)0x0);
          iVar19 = iVar19 + (uint)(lVar1 != lVar16);
          lVar16 = *(long *)(lVar16 + 8);
        } while (lVar16 != 0);
      }
    }
    if ((lVar11 != 0) && (*(long **)(lVar11 + 0x20) != (long *)0x0)) {
      iVar2 = 0;
      do {
        plVar7 = *(long **)(lVar11 + 0x20);
        do {
          lVar16 = *plVar7;
          if (lVar16 == lVar10) break;
          plVar7 = (long *)plVar7[1];
        } while (plVar7 != (long *)0x0);
        iVar2 = iVar2 + (uint)(lVar16 == lVar10);
        lVar10 = *(long *)(lVar10 + 8);
      } while (lVar10 != 0);
    }
  }
  puVar4 = getbytes((long)iVar2 * 4 + 0x24);
  *(int *)((long)puVar4 + 0x1c) = iVar2;
  *(int *)(puVar4 + 3) = param_10;
  puVar4[2] = 0;
  puVar5 = binbuf_new();
  puVar4[1] = puVar5;
  uVar22 = linetraverser_start(&local_a8,param_9);
LAB_00505e85:
  do {
    do {
      puVar6 = linetraverser_next(uVar22,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                  &local_a8);
      lVar10 = local_a0;
      if (puVar6 == (undefined8 *)0x0) {
        if (param_10 - 1U < 2) {
          piVar9 = canvas_docopy(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,
                                 param_8,param_9);
          *puVar4 = piVar9;
          lVar10 = *(long *)(param_9 + 0x30);
          if (((lVar10 != 0) && (*(long *)(param_9 + 0xc0) != 0)) &&
             (plVar7 = *(long **)(*(long *)(param_9 + 0xc0) + 0x20), plVar7 != (long *)0x0)) {
            iVar2 = 0;
            iVar19 = 0;
            do {
              plVar12 = plVar7;
              do {
                if (*plVar12 == lVar10) {
                  *(int *)((long)puVar4 + (long)iVar19 * 4 + 0x20) = iVar2;
                  iVar19 = iVar19 + 1;
                  break;
                }
                plVar12 = (long *)plVar12[1];
              } while (plVar12 != (long *)0x0);
              iVar2 = iVar2 + 1;
              lVar10 = *(long *)(lVar10 + 8);
            } while (lVar10 != 0);
          }
        }
        else if (param_10 == 3) {
          piVar9 = canvas_docopy(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,
                                 param_8,param_9);
          *puVar4 = piVar9;
        }
        return puVar4;
      }
      uVar22 = extraout_XMM0_Qa;
    } while ((*(long *)(param_9 + 0xc0) == 0) ||
            (plVar7 = *(long **)(*(long *)(param_9 + 0xc0) + 0x20), plVar7 == (long *)0x0));
    plVar12 = plVar7;
    do {
      lVar11 = *plVar12;
      if (lVar11 == local_a0) {
        uVar14 = 1;
        goto LAB_00505ecc;
      }
      plVar12 = (long *)plVar12[1];
    } while (plVar12 != (long *)0x0);
    uVar14 = 0;
LAB_00505ecc:
    bVar20 = lVar11 != local_a0;
    if (plVar7 == (long *)0x0) goto LAB_00505ef5;
    do {
      lVar16 = *plVar7;
      if (lVar16 == local_90) {
        uVar3 = 1;
        goto LAB_00505f05;
      }
      plVar7 = (long *)plVar7[1];
    } while (plVar7 != (long *)0x0);
    uVar3 = 0;
LAB_00505f05:
    bVar21 = lVar16 != local_90;
  } while (uVar14 == uVar3);
  goto LAB_00505f14;
LAB_00505ef5:
  uVar3 = 0;
  bVar21 = true;
  if (uVar14 != 0) {
LAB_00505f14:
    piVar9 = (int *)puVar4[1];
    puVar6 = gensym("#X");
    puVar8 = gensym("connect");
    iVar15 = 0;
    iVar2 = 0;
    if (lVar11 == lVar10) {
      iVar2 = iVar19;
    }
    lVar10 = *(long *)(param_9 + 0x30);
    iVar17 = 0;
    if ((lVar10 != 0) && (iVar17 = 0, lVar10 != local_a0)) {
      if (*(long *)(param_9 + 0xc0) == 0) {
        iVar17 = 0;
        lVar11 = lVar10;
        do {
          iVar17 = iVar17 + (uint)bVar20;
          lVar11 = *(long *)(lVar11 + 8);
          if (lVar11 == 0) break;
        } while (lVar11 != local_a0);
      }
      else {
        plVar7 = *(long **)(*(long *)(param_9 + 0xc0) + 0x20);
        if (plVar7 == (long *)0x0) {
          iVar17 = 0;
          lVar11 = lVar10;
          do {
            iVar17 = iVar17 + (uint)bVar20;
            lVar11 = *(long *)(lVar11 + 8);
            if (lVar11 == 0) break;
          } while (lVar11 != local_a0);
        }
        else {
          iVar17 = 0;
          lVar11 = lVar10;
          do {
            plVar12 = plVar7;
            do {
              if (*plVar12 == lVar11) {
                uVar13 = 1;
                goto LAB_00505fe5;
              }
              plVar12 = (long *)plVar12[1];
            } while (plVar12 != (long *)0x0);
            uVar13 = 0;
LAB_00505fe5:
            iVar17 = iVar17 + (uVar13 ^ uVar14 ^ 1);
            lVar11 = *(long *)(lVar11 + 8);
          } while ((lVar11 != 0) && (lVar11 != local_a0));
        }
      }
    }
    iVar18 = 0;
    if (bVar21 == false) {
      iVar18 = iVar19;
    }
    if ((lVar10 != 0) && (lVar10 != local_90)) {
      if (*(long *)(param_9 + 0xc0) == 0) {
        iVar15 = 0;
        do {
          iVar15 = iVar15 + (uint)bVar21;
          lVar10 = *(long *)(lVar10 + 8);
          if (lVar10 == 0) break;
        } while (lVar10 != local_90);
      }
      else {
        plVar7 = *(long **)(*(long *)(param_9 + 0xc0) + 0x20);
        if (plVar7 == (long *)0x0) {
          iVar15 = 0;
          do {
            iVar15 = iVar15 + (uint)bVar21;
            lVar10 = *(long *)(lVar10 + 8);
            if (lVar10 == 0) break;
          } while (lVar10 != local_90);
        }
        else {
          iVar15 = 0;
          do {
            plVar12 = plVar7;
            do {
              if (*plVar12 == lVar10) {
                uVar14 = 1;
                goto LAB_005060d5;
              }
              plVar12 = (long *)plVar12[1];
            } while (plVar12 != (long *)0x0);
            uVar14 = 0;
LAB_005060d5:
            iVar15 = iVar15 + (uVar14 ^ uVar3 ^ 1);
            lVar10 = *(long *)(lVar10 + 8);
          } while ((lVar10 != 0) && (lVar10 != local_90));
        }
      }
    }
    uVar22 = binbuf_addv(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                         ,piVar9,0x65469f,puVar6,puVar8,(char *)(ulong)(uint)(iVar17 + iVar2),
                         (ulong)local_94,(double)(ulong)(uint)(iVar15 + iVar18));
  }
  goto LAB_00505e85;
}


