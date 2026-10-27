// Function : canvas_docopy
// Namespace: 
// Entry    : 005061e0
// Prototype: int * canvas_docopy(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 005061e0 - 00506454


int * canvas_docopy(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9)

{
  long lVar1;
  int *piVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  double dVar8;
  long lVar9;
  char *pcVar10;
  undefined8 uVar11;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  long lStack_a8;
  long local_a0;
  uint local_94;
  long local_90;
  
  piVar2 = binbuf_new();
  plVar4 = *(long **)(param_9 + 0x30);
  if ((plVar4 == (long *)0x0) || (lVar6 = *(long *)(param_9 + 0xc0), lVar6 == 0)) {
LAB_00506264:
    uVar11 = linetraverser_start(&lStack_a8,param_9);
    puVar3 = linetraverser_next(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                &lStack_a8);
    uVar11 = extraout_XMM0_Qa;
    do {
      if (puVar3 == (undefined8 *)0x0) {
        return piVar2;
      }
      if ((*(long *)(param_9 + 0xc0) != 0) &&
         (plVar4 = *(long **)(*(long *)(param_9 + 0xc0) + 0x20), plVar4 != (long *)0x0)) {
        plVar7 = plVar4;
        do {
          if (*plVar7 == local_a0) goto LAB_00506300;
          plVar7 = (long *)plVar7[1];
        } while (plVar7 != (long *)0x0);
      }
LAB_005062b0:
      puVar3 = linetraverser_next(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                  &lStack_a8);
      uVar11 = extraout_XMM0_Qa_00;
    } while( true );
  }
  do {
    if (lVar6 != 0) {
      for (plVar7 = *(long **)(lVar6 + 0x20); plVar7 != (long *)0x0; plVar7 = (long *)plVar7[1]) {
        if ((long *)*plVar7 == plVar4) {
          gobj_save(plVar4);
          plVar4 = (long *)plVar4[1];
          goto joined_r0x00506262;
        }
      }
    }
    plVar4 = (long *)plVar4[1];
joined_r0x00506262:
    if (plVar4 == (long *)0x0) goto LAB_00506264;
    lVar6 = *(long *)(param_9 + 0xc0);
  } while( true );
LAB_00506300:
  if (*plVar4 != local_90) goto code_r0x00506305;
  puVar3 = gensym("#X");
  puVar5 = gensym("connect");
  lVar6 = *(long *)(param_9 + 0x30);
  dVar8 = 0.0;
  pcVar10 = (char *)0x0;
  if ((lVar6 != 0) && (pcVar10 = (char *)0x0, lVar6 != local_a0)) {
    pcVar10 = (char *)0x0;
    if (*(long *)(param_9 + 0xc0) != 0) {
      plVar4 = *(long **)(*(long *)(param_9 + 0xc0) + 0x20);
      pcVar10 = (char *)0x0;
      if (plVar4 != (long *)0x0) {
        pcVar10 = (char *)0x0;
        lVar9 = lVar6;
        do {
          plVar7 = plVar4;
          do {
            lVar1 = *plVar7;
            if (lVar1 == lVar9) break;
            plVar7 = (long *)plVar7[1];
          } while (plVar7 != (long *)0x0);
          pcVar10 = (char *)(ulong)((int)pcVar10 + (uint)(lVar1 == lVar9));
          lVar9 = *(long *)(lVar9 + 8);
        } while ((lVar9 != 0) && (lVar9 != local_a0));
      }
    }
  }
  if ((lVar6 != 0) &&
     (((lVar6 != local_90 && (*(long *)(param_9 + 0xc0) != 0)) &&
      (plVar4 = *(long **)(*(long *)(param_9 + 0xc0) + 0x20), plVar4 != (long *)0x0)))) {
    dVar8 = 0.0;
    do {
      plVar7 = plVar4;
      do {
        lVar9 = *plVar7;
        if (lVar9 == lVar6) break;
        plVar7 = (long *)plVar7[1];
      } while (plVar7 != (long *)0x0);
      dVar8 = (double)(ulong)(SUB84(dVar8,0) + (uint)(lVar9 == lVar6));
      lVar6 = *(long *)(lVar6 + 8);
    } while ((lVar6 != 0) && (lVar6 != local_90));
  }
  uVar11 = binbuf_addv(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       piVar2,0x65469f,puVar3,puVar5,pcVar10,(ulong)local_94,dVar8);
  goto LAB_005062b0;
code_r0x00506305:
  plVar4 = (long *)plVar4[1];
  if (plVar4 == (long *)0x0) goto LAB_005062b0;
  goto LAB_00506300;
}


