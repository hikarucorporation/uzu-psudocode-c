// Function : canvas_undo_set_create
// Namespace: 
// Entry    : 005099a0
// Prototype: int * canvas_undo_set_create(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 005099a0 - 00509d9d


int * canvas_undo_set_create
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  int *piVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined8 uVar21;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  long local_a8;
  long *local_a0;
  uint local_94;
  long *local_90;
  
  piVar4 = getbytes(0x18);
  lVar5 = *(long *)(param_9 + 0x30);
  if (lVar5 == 0) {
    *piVar4 = -1;
    iVar9 = 0;
  }
  else {
    iVar9 = -1;
    lVar13 = lVar5;
    do {
      lVar13 = *(long *)(lVar13 + 8);
      iVar9 = iVar9 + 1;
    } while (lVar13 != 0);
    *piVar4 = iVar9;
    if (*(long *)(param_9 + 0xc0) == 0) {
      iVar9 = 0;
      do {
        iVar9 = iVar9 + 1;
        lVar5 = *(long *)(lVar5 + 8);
      } while (lVar5 != 0);
    }
    else {
      plVar1 = *(long **)(*(long *)(param_9 + 0xc0) + 0x20);
      iVar9 = 0;
      if (plVar1 == (long *)0x0) {
        do {
          iVar9 = iVar9 + 1;
          lVar5 = *(long *)(lVar5 + 8);
        } while (lVar5 != 0);
      }
      else {
        do {
          plVar14 = plVar1;
          do {
            lVar13 = *plVar14;
            if (lVar13 == lVar5) break;
            plVar14 = (long *)plVar14[1];
          } while (plVar14 != (long *)0x0);
          iVar9 = iVar9 + (uint)(lVar13 != lVar5);
          lVar5 = *(long *)(lVar5 + 8);
        } while (lVar5 != 0);
      }
    }
  }
  puVar6 = binbuf_new();
  *(undefined4 **)(piVar4 + 2) = puVar6;
  plVar1 = *(long **)(param_9 + 0x30);
  if (*(long **)(param_9 + 0x30) != (long *)0x0) {
    do {
      plVar14 = plVar1;
      plVar1 = (long *)plVar14[1];
    } while ((long *)plVar14[1] != (long *)0x0);
    gobj_save(plVar14);
    puVar6 = binbuf_new();
    *(undefined4 **)(piVar4 + 4) = puVar6;
    uVar21 = linetraverser_start(&local_a8,param_9);
    puVar7 = linetraverser_next(uVar21,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                &local_a8);
    uVar21 = extraout_XMM0_Qa;
    plVar1 = local_a0;
    plVar3 = local_90;
    while (puVar7 != (undefined8 *)0x0) {
      local_a0 = plVar1;
      local_90 = plVar3;
      if ((plVar1 == plVar14) != (plVar3 == plVar14)) {
        piVar2 = *(int **)(piVar4 + 4);
        puVar7 = gensym("#X");
        puVar8 = gensym("connect");
        iVar17 = 0;
        iVar19 = 0;
        if (plVar1 == plVar14) {
          iVar19 = iVar9;
        }
        plVar16 = *(long **)(param_9 + 0x30);
        iVar18 = 0;
        if ((plVar16 != (long *)0x0) && (iVar18 = 0, plVar16 != local_a0)) {
          if (*(long *)(param_9 + 0xc0) == 0) {
            iVar18 = 0;
            plVar11 = plVar16;
            do {
              iVar18 = iVar18 + (uint)(plVar1 != plVar14);
              plVar11 = (long *)plVar11[1];
              if (plVar11 == (long *)0x0) break;
            } while (plVar11 != local_a0);
          }
          else {
            plVar11 = *(long **)(*(long *)(param_9 + 0xc0) + 0x20);
            iVar18 = 0;
            plVar10 = plVar16;
            if (plVar11 == (long *)0x0) {
              do {
                iVar18 = iVar18 + (uint)(plVar1 != plVar14);
                plVar10 = (long *)plVar10[1];
                if (plVar10 == (long *)0x0) break;
              } while (plVar10 != local_a0);
            }
            else {
              do {
                plVar15 = plVar11;
                do {
                  if ((long *)*plVar15 == plVar10) {
                    uVar12 = 1;
                    goto LAB_00509c15;
                  }
                  plVar15 = (long *)plVar15[1];
                } while (plVar15 != (long *)0x0);
                uVar12 = 0;
LAB_00509c15:
                iVar18 = iVar18 + (uVar12 ^ plVar1 != plVar14);
                plVar10 = (long *)plVar10[1];
              } while ((plVar10 != (long *)0x0) && (plVar10 != local_a0));
            }
          }
        }
        iVar20 = 0;
        if (plVar3 == plVar14) {
          iVar20 = iVar9;
        }
        if ((plVar16 != (long *)0x0) && (plVar16 != local_90)) {
          if (*(long *)(param_9 + 0xc0) == 0) {
            iVar17 = 0;
            do {
              iVar17 = iVar17 + (uint)(plVar3 != plVar14);
              plVar16 = (long *)plVar16[1];
              if (plVar16 == (long *)0x0) break;
            } while (plVar16 != local_90);
          }
          else {
            plVar1 = *(long **)(*(long *)(param_9 + 0xc0) + 0x20);
            iVar17 = 0;
            if (plVar1 == (long *)0x0) {
              do {
                iVar17 = iVar17 + (uint)(plVar3 != plVar14);
                plVar16 = (long *)plVar16[1];
                if (plVar16 == (long *)0x0) break;
              } while (plVar16 != local_90);
            }
            else {
              do {
                plVar11 = plVar1;
                do {
                  if ((long *)*plVar11 == plVar16) {
                    uVar12 = 1;
                    goto LAB_00509d15;
                  }
                  plVar11 = (long *)plVar11[1];
                } while (plVar11 != (long *)0x0);
                uVar12 = 0;
LAB_00509d15:
                iVar17 = iVar17 + (uVar12 ^ plVar3 != plVar14);
                plVar16 = (long *)plVar16[1];
              } while ((plVar16 != (long *)0x0) && (plVar16 != local_90));
            }
          }
        }
        uVar21 = binbuf_addv(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,
                             param_8,piVar2,0x65469f,puVar7,puVar8,
                             (char *)(ulong)(uint)(iVar18 + iVar19),(ulong)local_94,
                             (double)(ulong)(uint)(iVar17 + iVar20));
      }
      puVar7 = linetraverser_next(uVar21,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                  &local_a8);
      uVar21 = extraout_XMM0_Qa_00;
      plVar1 = local_a0;
      plVar3 = local_90;
    }
  }
  return piVar4;
}


