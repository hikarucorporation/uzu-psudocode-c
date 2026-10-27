// Function : canvas_howputnew
// Namespace: 
// Entry    : 00529c30
// Prototype: undefined canvas_howputnew(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, uint * param_10, int * param_11, int * param_12, int * param_13, int * param_14)
// Body     : 00529c30 - 00529e5d


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void canvas_howputnew(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long *param_9,uint *param_10,int *param_11,int *param_12,int *param_13,
                     int *param_14)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long lVar6;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  int iVar7;
  long *plVar8;
  uint *puVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  bool bVar14;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar15;
  undefined8 uVar16;
  double dVar17;
  int local_48;
  int local_44;
  int *local_40;
  undefined4 local_38;
  undefined4 local_34;
  
  if ((*(long *)(param_9[0x18] + 0x20) == 0) ||
     (*(long *)(*(long *)(param_9[0x18] + 0x20) + 8) != 0)) {
    bVar14 = false;
  }
  else {
    bVar14 = *(int *)PTR_sys_noautopatch_00715a78 == 0;
  }
  iVar13 = *(int *)((long)param_9 + 0xec);
  piVar5 = param_12;
  puVar9 = param_10;
  piVar11 = param_13;
  piVar12 = param_14;
  lVar3 = glist_getcanvas((long)param_9);
  uVar16 = extraout_RDX;
  uVar15 = extraout_XMM0_Qa;
  for (plVar8 = *(long **)(lVar3 + 0x30); plVar8 != (long *)0x0; plVar8 = (long *)plVar8[1]) {
    plVar4 = pd_checkobject(plVar8);
    uVar16 = extraout_RDX_00;
    uVar15 = extraout_XMM0_Qa_00;
    if ((plVar4 != (long *)0x0) &&
       (piVar5 = (int *)(ulong)(byte)~*(byte *)((long)plVar4 + 0x2e),
       (~*(byte *)((long)plVar4 + 0x2e) & 3) == 0)) {
      uVar15 = gatom_undarken(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8,plVar4,puVar9,extraout_RDX_00,piVar5,(char *)piVar11,piVar12,
                              SUB81((double)iVar13,0));
      uVar16 = extraout_RDX_01;
    }
  }
  lVar3 = param_9[0x18];
  *(undefined8 *)(lVar3 + 0x30) = 0;
  local_40 = param_14;
  if (bVar14 == false) {
    piVar10 = param_11;
    uVar16 = glist_getnextxy((long)param_9,param_11,param_12);
    *param_11 = *param_11 / *(int *)((long)param_9 + 0xec) + -3;
    iVar13 = *param_12;
    iVar7 = *(int *)((long)param_9 + 0xec);
    *param_12 = iVar13 / iVar7 + -3;
    glist_noselect(uVar16,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,piVar10,
                   (long)iVar13 % (long)iVar7 & 0xffffffff,piVar5,(char *)piVar11,piVar12);
    iVar7 = 0;
    iVar13 = 0;
  }
  else {
    lVar6 = param_9[6];
    if (lVar6 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = 0;
      do {
        iVar7 = iVar7 + 1;
        lVar6 = *(long *)(lVar6 + 8);
      } while (lVar6 != 0);
    }
    plVar8 = (long *)**(long **)(lVar3 + 0x20);
    glist_noselect(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,puVar9,
                   uVar16,0,(char *)piVar11,piVar12);
    plVar4 = (long *)param_9[6];
    if (plVar4 == (long *)0x0) {
      glist_getnextxy((long)param_9,param_11,param_12);
      *param_11 = *param_11 / *(int *)((long)param_9 + 0xec) + -3;
      iVar2 = *param_12 / *(int *)((long)param_9 + 0xec) + -3;
      iVar13 = 0;
    }
    else {
      dVar17 = (double)iVar13 * _DAT_00655908;
      if (plVar4 == plVar8) {
        iVar13 = 0;
      }
      else {
        iVar13 = 0;
        do {
          plVar1 = (long *)plVar4[1];
          if (plVar1 == (long *)0x0) {
            iVar13 = iVar7 + -1;
            plVar8 = plVar4;
            break;
          }
          iVar13 = iVar13 + 1;
          plVar4 = plVar1;
        } while (plVar1 != plVar8);
      }
      gobj_getrect(plVar8,param_9,&local_44,&local_38,&local_34,&local_48);
      *param_11 = local_44 / *(int *)((long)param_9 + 0xec);
      iVar2 = (int)(((float)local_48 + (float)dVar17) / (float)*(int *)((long)param_9 + 0xec));
    }
    *param_12 = iVar2;
  }
  *param_10 = (uint)bVar14;
  *param_13 = iVar13;
  *local_40 = iVar7;
  return;
}


