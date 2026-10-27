// Function : canvas_stowconnections
// Namespace: 
// Entry    : 00504e60
// Prototype: undefined canvas_stowconnections(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00504e60 - 005050a8


void canvas_stowconnections
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9)

{
  long lVar1;
  long *plVar2;
  int *piVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  char *pcVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  long lStack_a8;
  long local_a0;
  uint local_94;
  long local_90;
  
  lVar8 = *(long *)(param_9 + 0xc0);
  if (lVar8 == 0) {
    return;
  }
  lVar15 = 0;
  if (*(long *)(param_9 + 0x30) != 0) {
    lVar9 = 0;
    lVar18 = 0;
    lVar12 = 0;
    lVar7 = *(long *)(param_9 + 0x30);
    do {
      lVar1 = *(long *)(lVar7 + 8);
      for (plVar2 = *(long **)(lVar8 + 0x20); plVar2 != (long *)0x0; plVar2 = (long *)plVar2[1]) {
        if (*plVar2 == lVar7) {
          lVar10 = lVar7;
          lVar13 = lVar12;
          lVar16 = lVar9;
          if (lVar9 != 0) goto LAB_00504eab;
          lVar9 = lVar7;
          lVar15 = lVar7;
          goto LAB_00504eaf;
        }
      }
      lVar10 = lVar9;
      lVar13 = lVar7;
      lVar16 = lVar12;
      if (lVar12 == 0) {
        lVar12 = lVar7;
        lVar18 = lVar7;
      }
      else {
LAB_00504eab:
        *(long *)(lVar16 + 8) = lVar7;
        lVar9 = lVar10;
        lVar12 = lVar13;
      }
LAB_00504eaf:
      *(undefined8 *)(lVar7 + 8) = 0;
      lVar7 = lVar1;
    } while (lVar1 != 0);
    if (lVar18 != 0) {
      *(long *)(param_9 + 0x30) = lVar18;
      *(long *)(lVar12 + 8) = lVar15;
      goto LAB_00504f1b;
    }
  }
  *(long *)(param_9 + 0x30) = lVar15;
LAB_00504f1b:
  binbuf_clear(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               *(int **)(lVar8 + 0x48));
  uVar19 = linetraverser_start(&lStack_a8,param_9);
  puVar5 = linetraverser_next(uVar19,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              &lStack_a8);
  uVar19 = extraout_XMM0_Qa;
joined_r0x00504f3d:
  if (puVar5 == (undefined8 *)0x0) {
    return;
  }
  lVar8 = *(long *)(param_9 + 0xc0);
  if ((lVar8 != 0) && (plVar2 = *(long **)(lVar8 + 0x20), plVar2 != (long *)0x0)) {
    plVar14 = plVar2;
    do {
      if (*plVar14 == local_a0) {
        bVar4 = true;
        goto joined_r0x00504fca;
      }
      plVar14 = (long *)plVar14[1];
    } while (plVar14 != (long *)0x0);
    bVar4 = false;
joined_r0x00504fca:
    do {
      if (plVar2 == (long *)0x0) goto LAB_00504fee;
      if (*plVar2 == local_90) {
        if (!bVar4) goto LAB_00505005;
        break;
      }
      plVar2 = (long *)plVar2[1];
    } while( true );
  }
  goto LAB_00504f70;
LAB_00504fee:
  if (bVar4) {
LAB_00505005:
    piVar3 = *(int **)(lVar8 + 0x48);
    puVar5 = gensym("#X");
    puVar6 = gensym("connect");
    lVar8 = *(long *)(param_9 + 0x30);
    dVar11 = 0.0;
    pcVar17 = (char *)0x0;
    if ((lVar8 != 0) && (pcVar17 = (char *)0x0, lVar8 != local_a0)) {
      pcVar17 = (char *)0x0;
      lVar15 = lVar8;
      do {
        pcVar17 = (char *)(ulong)((int)pcVar17 + 1);
        lVar15 = *(long *)(lVar15 + 8);
        if (lVar15 == 0) break;
      } while (lVar15 != local_a0);
    }
    if ((lVar8 != 0) && (lVar8 != local_90)) {
      dVar11 = 0.0;
      do {
        dVar11 = (double)(ulong)(SUB84(dVar11,0) + 1);
        lVar8 = *(long *)(lVar8 + 8);
        if (lVar8 == 0) break;
      } while (lVar8 != local_90);
    }
    uVar19 = binbuf_addv(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                         ,piVar3,0x65469f,puVar5,puVar6,pcVar17,(ulong)local_94,dVar11);
  }
LAB_00504f70:
  puVar5 = linetraverser_next(uVar19,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              &lStack_a8);
  uVar19 = extraout_XMM0_Qa_00;
  goto joined_r0x00504f3d;
}


