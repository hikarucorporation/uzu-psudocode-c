// Function : canvas_cycleselect
// Namespace: 
// Entry    : 00510660
// Prototype: undefined canvas_cycleselect(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9)
// Body     : 00510660 - 00510c0c


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void canvas_cycleselect(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       long *param_9)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  int iVar9;
  long *plVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  char *in_R8;
  undefined8 in_R9;
  int *piVar16;
  int iVar17;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  double dVar18;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  double dVar19;
  double dVar20;
  undefined1 in_stack_ffffffffffffff28;
  undefined1 uVar21;
  int *piVar22;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  long local_a8;
  long local_a0;
  int local_94;
  long local_90;
  int local_74;
  
  lVar6 = param_9[0x18];
  if (lVar6 == 0) {
    return;
  }
  iVar17 = (int)(float)param_1;
  if ((*(byte *)(lVar6 + 0x88) & 7) == 2) {
    iVar1 = *(int *)(lVar6 + 0x68);
    iVar12 = *(int *)(lVar6 + 0x6c);
    plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
    lVar6 = **(long **)(*plVar2 + 0x48);
    iVar7 = *(int *)(lVar6 + 0x80);
    uVar11 = *(uint *)(lVar6 + 0x84);
    local_a8._0_4_ = 0;
    local_c0 = 0;
    local_c4 = 0;
    local_c8 = 0;
    if (*(long **)(lVar6 + 0x78) != param_9) {
      return;
    }
    plVar2 = canvas_findhitbox(param_9,iVar1,iVar12,(int *)&local_a8,&local_ac,&local_c0,&local_b0);
    if (plVar2 == (long *)0x0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = pd_checkobject(plVar2);
    }
    piVar22 = &local_b8;
    piVar16 = &local_c8;
    plVar4 = canvas_findhitbox(param_9,iVar7,uVar11,&local_c4,&local_b4,piVar16,piVar22);
    uVar21 = SUB81(piVar22,0);
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)0x0;
      iVar12 = local_c8;
      iVar9 = local_c4;
      iVar13 = local_c0;
      local_bc = (int)local_a8;
    }
    else {
      plVar4 = pd_checkobject(plVar4);
      iVar12 = local_c8;
      iVar9 = local_c4;
      iVar13 = local_c0;
      local_bc = (int)local_a8;
    }
    if (plVar2 == (long *)0x0) {
      return;
    }
    local_c8 = iVar12;
    local_c4 = iVar9;
    local_c0 = iVar13;
    local_a8._0_4_ = local_bc;
    if ((plVar4 == (long *)0x0) || (plVar4 == plVar2)) {
      iVar12 = obj_noutlets((long)plVar2);
      if (iVar12 < 2) {
        return;
      }
      iVar13 = iVar13 - local_bc;
      dVar20 = (double)iVar12 + DAT_00651e70;
      dVar19 = (double)((iVar13 + -7) *
                       ((((iVar13 / 2 + (iVar12 + -1) * (iVar1 - local_bc)) / iVar13 + iVar17) %
                         iVar12 + iVar12) % iVar12)) / dVar20;
      dVar18 = (double)local_bc + _DAT_006544b8 + dVar19;
      *(int *)(param_9[0x18] + 0x68) = (int)dVar18;
      canvas_doconnect(dVar18,dVar19,dVar20,param_4,param_5,param_6,param_7,param_8,param_9,iVar7,
                       uVar11,0,0,piVar16);
      return;
    }
    iVar1 = obj_ninlets(plVar4);
    if (iVar1 < 2) {
      return;
    }
    iVar12 = iVar12 - iVar9;
    dVar20 = (double)iVar1 + DAT_00651e70;
    dVar19 = (double)((iVar12 + -7) *
                     ((((iVar12 / 2 + (iVar1 + -1) * (iVar7 - iVar9)) / iVar12 + iVar17) % iVar1 +
                      iVar1) % iVar1)) / dVar20;
    dVar18 = (double)iVar9 + _DAT_006544b8 + dVar19;
    uVar5 = glist_getcanvas((long)param_9);
    pdgui_vmess(extraout_XMM0_Qa_01,dVar19,dVar20,param_4,param_5,param_6,param_7,param_8,0x654c20,
                "cii",uVar5,(ulong)(uint)(int)dVar18,(ulong)uVar11,piVar16,uVar21);
    return;
  }
  puVar3 = *(undefined8 **)(lVar6 + 0x20);
  if (puVar3 != (undefined8 *)0x0) {
    plVar2 = (long *)param_9[6];
    uVar11 = 0;
    if (plVar2 != (long *)0x0) {
      plVar4 = plVar2;
      do {
        uVar11 = uVar11 + 1;
        plVar4 = (long *)plVar4[1];
      } while (plVar4 != (long *)0x0);
    }
    if (puVar3[1] != 0) {
      return;
    }
    plVar4 = (long *)*puVar3;
    if (plVar4 == (long *)0x0) {
      return;
    }
    if (uVar11 == 0) {
      return;
    }
    iVar1 = 0;
    if ((plVar2 != (long *)0x0) && (plVar2 != plVar4)) {
      iVar1 = 0;
      do {
        iVar1 = iVar1 + 1;
        plVar2 = (long *)plVar2[1];
        if (plVar2 == (long *)0x0) break;
      } while (plVar2 != plVar4);
    }
    uVar14 = (long)(iVar1 + iVar17) % (long)(int)uVar11;
    glist_deselect(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,plVar4,
                   uVar14 & 0xffffffff,plVar2,in_R8,in_R9);
    plVar2 = (long *)param_9[6];
    if (plVar2 != (long *)0x0) {
      iVar17 = (int)uVar14;
      uVar11 = iVar17 >> 0x1f & uVar11;
      if (uVar11 + iVar17 != 0) {
        iVar17 = uVar11 + iVar17;
        do {
          iVar17 = iVar17 + -1;
          plVar2 = (long *)plVar2[1];
          if (plVar2 == (long *)0x0) break;
        } while (iVar17 != 0);
      }
    }
    if (param_9[0x18] == 0) {
      return;
    }
    puVar3 = getbytes(0x10);
    lVar6 = param_9[0x18];
    plVar8 = *(long **)(lVar6 + 0x20);
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar10 = plVar8;
      do {
        if ((long *)*plVar10 == plVar2) {
          bug(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
              "glist_select",plVar4,plVar10,plVar8,in_R8,in_R9,in_stack_ffffffffffffff28);
          lVar6 = param_9[0x18];
          plVar8 = *(long **)(lVar6 + 0x20);
          break;
        }
        plVar10 = (long *)plVar10[1];
      } while (plVar10 != (long *)0x0);
    }
    puVar3[1] = plVar8;
    *puVar3 = plVar2;
    *(undefined8 **)(lVar6 + 0x20) = puVar3;
    gobj_select(plVar2,(long)param_9);
    return;
  }
  if ((*(byte *)(lVar6 + 0x88) & 0x20) == 0) {
    return;
  }
  uVar5 = linetraverser_start(&local_a8,param_9);
  if (iVar17 == 0) {
    return;
  }
  iVar1 = 0;
  iVar12 = 0;
  do {
    puVar3 = linetraverser_next(uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                &local_a8);
    if (puVar3 == (undefined8 *)0x0) {
      if (iVar12 == 0) {
        return;
      }
      uVar14 = (long)((iVar17 + -1) % iVar12 + iVar12) % (long)iVar12 & 0xffffffff;
      uVar5 = linetraverser_start(&local_a8,param_9);
      goto LAB_00510b10;
    }
    iVar12 = iVar12 + 1;
    if (iVar1 == 0) {
      lVar6 = param_9[6];
      iVar7 = 0;
      iVar9 = 0;
      if ((lVar6 != 0) && (iVar9 = 0, lVar6 != local_a0)) {
        iVar9 = 0;
        lVar15 = lVar6;
        do {
          iVar9 = iVar9 + 1;
          lVar15 = *(long *)(lVar15 + 8);
          if (lVar15 == 0) break;
        } while (lVar15 != local_a0);
      }
      if ((lVar6 != 0) && (lVar6 != local_90)) {
        iVar7 = 0;
        do {
          iVar7 = iVar7 + 1;
          lVar6 = *(long *)(lVar6 + 8);
          if (lVar6 == 0) break;
        } while (lVar6 != local_90);
      }
      lVar6 = param_9[0x18];
      iVar1 = 0;
      if ((((iVar9 == *(int *)(lVar6 + 0x70)) && (local_94 == *(int *)(lVar6 + 0x74))) &&
          (iVar7 == *(int *)(lVar6 + 0x78))) && (iVar1 = 0, local_74 == *(int *)(lVar6 + 0x7c))) {
        iVar1 = iVar12;
      }
    }
    else {
      iVar17 = iVar17 + -1;
    }
    uVar5 = extraout_XMM0_Qa_00;
  } while (iVar17 != 0);
  goto LAB_00510b27;
  while (iVar17 != 0) {
LAB_00510b10:
    puVar3 = linetraverser_next(uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                &local_a8);
    iVar17 = (int)uVar14;
    uVar14 = (ulong)(iVar17 - 1);
    uVar5 = extraout_XMM0_Qa_02;
    if (puVar3 == (undefined8 *)0x0) break;
  }
LAB_00510b27:
  if (puVar3 != (undefined8 *)0x0) {
    lVar6 = param_9[6];
    iVar1 = 0;
    iVar17 = 0;
    if ((lVar6 != 0) && (iVar17 = 0, lVar6 != local_a0)) {
      iVar17 = 0;
      lVar15 = lVar6;
      do {
        iVar17 = iVar17 + 1;
        lVar15 = *(long *)(lVar15 + 8);
        if (lVar15 == 0) break;
      } while (lVar15 != local_a0);
    }
    if ((lVar6 != 0) && (lVar6 != local_90)) {
      iVar1 = 0;
      do {
        iVar1 = iVar1 + 1;
        lVar6 = *(long *)(lVar6 + 8);
        if (lVar6 == 0) break;
      } while (lVar6 != local_90);
    }
    glist_selectline(uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9,
                     puVar3,iVar17,local_94,iVar1,local_74);
  }
  return;
}


