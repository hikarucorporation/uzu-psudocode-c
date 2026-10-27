// Function : canvas_undo_set_recreate
// Namespace: 
// Entry    : 0050a160
// Prototype: undefined4 * canvas_undo_set_recreate(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10, undefined4 param_11)
// Body     : 0050a160 - 0050a4ef


undefined4 *
canvas_undo_set_recreate
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
          long *param_10,undefined4 param_11)

{
  long *plVar1;
  long lVar2;
  int *piVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  uint uVar12;
  long *plVar13;
  long *plVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined8 uVar20;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  long local_a8;
  long *local_a0;
  uint local_94;
  long *local_90;
  
  puVar4 = getbytes(0x18);
  *puVar4 = param_11;
  lVar5 = *(long *)(param_9 + 0x30);
  if (lVar5 == 0) {
    iVar19 = 0;
  }
  else if (*(long *)(param_9 + 0xc0) == 0) {
    iVar19 = 0;
    do {
      iVar19 = iVar19 + 1;
      lVar5 = *(long *)(lVar5 + 8);
    } while (lVar5 != 0);
  }
  else {
    plVar1 = *(long **)(*(long *)(param_9 + 0xc0) + 0x20);
    iVar19 = 0;
    if (plVar1 == (long *)0x0) {
      do {
        iVar19 = iVar19 + 1;
        lVar5 = *(long *)(lVar5 + 8);
      } while (lVar5 != 0);
    }
    else {
      do {
        plVar10 = plVar1;
        do {
          lVar2 = *plVar10;
          if (lVar2 == lVar5) break;
          plVar10 = (long *)plVar10[1];
        } while (plVar10 != (long *)0x0);
        iVar19 = iVar19 + (uint)(lVar2 != lVar5);
        lVar5 = *(long *)(lVar5 + 8);
      } while (lVar5 != 0);
    }
  }
  puVar6 = binbuf_new();
  *(undefined4 **)(puVar4 + 2) = puVar6;
  gobj_save(param_10);
  puVar6 = binbuf_new();
  *(undefined4 **)(puVar4 + 4) = puVar6;
  uVar20 = linetraverser_start(&local_a8,param_9);
  puVar7 = linetraverser_next(uVar20,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              &local_a8);
  if (puVar7 != (undefined8 *)0x0) {
    uVar20 = extraout_XMM0_Qa;
    do {
      plVar10 = local_90;
      plVar1 = local_a0;
      if ((local_a0 == param_10) != (local_90 == param_10)) {
        piVar3 = *(int **)(puVar4 + 4);
        puVar7 = gensym("#X");
        puVar8 = gensym("connect");
        iVar15 = 0;
        iVar17 = 0;
        if (plVar1 == param_10) {
          iVar17 = iVar19 + -1;
        }
        plVar11 = *(long **)(param_9 + 0x30);
        iVar16 = 0;
        if ((plVar11 != (long *)0x0) && (iVar16 = 0, plVar11 != local_a0)) {
          if (*(long *)(param_9 + 0xc0) == 0) {
            iVar16 = 0;
            plVar14 = plVar11;
            do {
              iVar16 = iVar16 + (uint)(plVar1 != param_10);
              plVar14 = (long *)plVar14[1];
              if (plVar14 == (long *)0x0) break;
            } while (plVar14 != local_a0);
          }
          else {
            plVar14 = *(long **)(*(long *)(param_9 + 0xc0) + 0x20);
            iVar16 = 0;
            plVar9 = plVar11;
            if (plVar14 == (long *)0x0) {
              do {
                iVar16 = iVar16 + (uint)(plVar1 != param_10);
                plVar9 = (long *)plVar9[1];
                if (plVar9 == (long *)0x0) break;
              } while (plVar9 != local_a0);
            }
            else {
              do {
                plVar13 = plVar14;
                do {
                  if ((long *)*plVar13 == plVar9) {
                    uVar12 = 1;
                    goto LAB_0050a385;
                  }
                  plVar13 = (long *)plVar13[1];
                } while (plVar13 != (long *)0x0);
                uVar12 = 0;
LAB_0050a385:
                iVar16 = iVar16 + (uVar12 ^ plVar1 != param_10);
                plVar9 = (long *)plVar9[1];
              } while ((plVar9 != (long *)0x0) && (plVar9 != local_a0));
            }
          }
        }
        iVar18 = 0;
        if (plVar10 == param_10) {
          iVar18 = iVar19 + -1;
        }
        if ((plVar11 != (long *)0x0) && (plVar11 != local_90)) {
          if (*(long *)(param_9 + 0xc0) == 0) {
            iVar15 = 0;
            do {
              iVar15 = iVar15 + (uint)(plVar10 != param_10);
              plVar11 = (long *)plVar11[1];
              if (plVar11 == (long *)0x0) break;
            } while (plVar11 != local_90);
          }
          else {
            plVar1 = *(long **)(*(long *)(param_9 + 0xc0) + 0x20);
            iVar15 = 0;
            if (plVar1 == (long *)0x0) {
              do {
                iVar15 = iVar15 + (uint)(plVar10 != param_10);
                plVar11 = (long *)plVar11[1];
                if (plVar11 == (long *)0x0) break;
              } while (plVar11 != local_90);
            }
            else {
              do {
                plVar14 = plVar1;
                do {
                  if ((long *)*plVar14 == plVar11) {
                    uVar12 = 1;
                    goto LAB_0050a475;
                  }
                  plVar14 = (long *)plVar14[1];
                } while (plVar14 != (long *)0x0);
                uVar12 = 0;
LAB_0050a475:
                iVar15 = iVar15 + (uVar12 ^ plVar10 != param_10);
                plVar11 = (long *)plVar11[1];
              } while ((plVar11 != (long *)0x0) && (plVar11 != local_90));
            }
          }
        }
        uVar20 = binbuf_addv(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,
                             param_8,piVar3,0x65469f,puVar7,puVar8,
                             (char *)(ulong)(uint)(iVar16 + iVar17),(ulong)local_94,
                             (double)(ulong)(uint)(iVar15 + iVar18));
      }
      puVar7 = linetraverser_next(uVar20,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                  &local_a8);
      uVar20 = extraout_XMM0_Qa_00;
    } while (puVar7 != (undefined8 *)0x0);
  }
  return puVar4;
}


