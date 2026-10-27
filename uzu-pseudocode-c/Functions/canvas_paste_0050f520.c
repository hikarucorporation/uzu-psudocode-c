// Function : canvas_paste
// Namespace: 
// Entry    : 0050f520
// Prototype: undefined canvas_paste(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined * param_14, undefined1 param_15)
// Body     : 0050f520 - 0050f739


void canvas_paste(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 char *param_13,undefined *param_14,undefined1 param_15)

{
  undefined8 *puVar1;
  long *plVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  undefined8 extraout_RDX;
  int iVar7;
  int iVar8;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  uint local_30;
  uint local_2c;
  
  if (param_9[0x18] != 0) {
    if (*(long *)(param_9[0x18] + 0x28) != 0) {
      pdgui_vmess(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x654c03,"^",
                  param_9,param_12,param_13,param_14,param_15);
      return;
    }
    local_2c = 0;
    local_30 = 0;
    plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
    iVar7 = 0;
    binbuf_getpos(*(undefined4 **)**(undefined8 **)(*plVar2 + 0x48),(int *)&local_2c,
                  (int *)&local_30,(long *)0x0);
    iVar8 = 0;
    if (param_9[6] != 0) {
      param_13 = (char *)(ulong)local_2c;
      iVar8 = 0;
      param_14 = (undefined *)(ulong)local_30;
      do {
        lVar5 = param_9[6];
        while ((local_2c + iVar8 != (int)*(short *)(lVar5 + 0x28) ||
               (local_30 + iVar8 != (int)*(short *)(lVar5 + 0x2a)))) {
          lVar5 = *(long *)(lVar5 + 8);
          if (lVar5 == 0) goto LAB_0050f5ff;
        }
        iVar8 = iVar8 + 10;
      } while( true );
    }
LAB_0050f5ff:
    piVar3 = getbytes(0x18);
    lVar5 = param_9[6];
    if (lVar5 != 0) {
      iVar7 = 0;
      lVar6 = lVar5;
      do {
        iVar7 = iVar7 + 1;
        lVar6 = *(long *)(lVar6 + 8);
      } while (lVar6 != 0);
    }
    *piVar3 = iVar7;
    plVar2 = *(long **)(param_9[0x18] + 0x20);
    iVar7 = -1;
    if ((((plVar2 != (long *)0x0) && (plVar2[1] == 0)) && (iVar7 = 0, lVar5 != 0)) &&
       (lVar5 != *plVar2)) {
      iVar7 = 0;
      do {
        iVar7 = iVar7 + 1;
        lVar5 = *(long *)(lVar5 + 8);
        if (lVar5 == 0) break;
      } while (lVar5 != *plVar2);
    }
    piVar3[1] = iVar7;
    piVar3[2] = iVar8;
    plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
    piVar4 = binbuf_duplicate(*(int **)**(undefined8 **)(*plVar2 + 0x48));
    *(int **)(piVar3 + 4) = piVar4;
    canvas_undo_add(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    (long)param_9,5,"paste",piVar3,param_13,param_14);
    canvas_dopaste(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   param_9,*(uint **)**(undefined8 **)(*plVar2 + 0x48),extraout_RDX,piVar3,param_13,
                   param_14);
    if (iVar8 != 0) {
      for (puVar1 = *(undefined8 **)(param_9[0x18] + 0x20); puVar1 != (undefined8 *)0x0;
          puVar1 = (undefined8 *)puVar1[1]) {
        gobj_displace((long *)*puVar1);
      }
    }
  }
  return;
}


