// Function : append_float
// Namespace: 
// Entry    : 005afe20
// Prototype: undefined append_float(ulong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005afe20 - 005affcc


void append_float(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 char *param_13,undefined8 param_14)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  undefined8 extraout_RDX;
  long *plVar6;
  char *pcVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined8 uVar11;
  undefined4 uVar12;
  
  plVar6 = *(long **)(param_9 + 0x48);
  if (*plVar6 == 0) {
    pcVar7 = "append: no template supplied";
  }
  else {
    iVar8 = *(int *)(param_9 + 0x50);
    puVar9 = *(undefined8 **)(param_9 + 0x40);
    lVar4 = template_findbyname(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                (long)plVar6);
    if (lVar4 == 0) {
      lVar4 = *plVar6;
      pcVar7 = "append: couldn\'t find template %s";
      uVar10 = extraout_XMM0_Da;
      uVar12 = extraout_XMM0_Db;
LAB_005aff69:
      pd_error(CONCAT44(uVar12,uVar10),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               param_9,pcVar7,lVar4,param_12,param_13,param_14);
      return;
    }
    param_11 = extraout_RDX;
    if (puVar9 == (undefined8 *)0x0) {
      pcVar7 = "append: no current pointer";
      param_1 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
    }
    else if (*(int *)(puVar9 + 1) == 1) {
      plVar1 = (long *)*puVar9;
      if ((int)plVar1[8] == *(int *)(param_9 + 0x38)) {
        if (iVar8 == 0) {
          return;
        }
        *(int *)(*(long *)(param_9 + 0x58) + 8) = (int)param_1;
        plVar5 = scalar_new(param_1 & 0xffffffff,param_2,param_3,param_4,param_5,param_6,param_7,
                            param_8,(long)plVar1,plVar6,extraout_RDX,param_12,param_13,param_14);
        if (plVar5 != (long *)0x0) {
          lVar2 = *(long *)(param_9 + 0x30);
          plVar6 = (long *)(lVar2 + 8);
          if (lVar2 == 0) {
            plVar6 = plVar1 + 6;
          }
          plVar5[1] = *plVar6;
          *plVar6 = (long)plVar5;
          *(long *)(param_9 + 0x30) = (long)plVar5;
          if (0 < iVar8) {
            puVar9 = *(undefined8 **)(param_9 + 0x58);
            do {
              template_setfloat((ulong)*(uint *)(puVar9 + 1),param_2,param_3,param_4,param_5,param_6
                                ,param_7,param_8,lVar4,(undefined8 *)*puVar9,(long)(plVar5 + 3),1,
                                param_13,param_14);
              puVar9 = puVar9 + 2;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
          lVar4 = glist_getcanvas((long)plVar1);
          uVar3 = glist_isvisible(lVar4);
          uVar11 = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
          if (uVar3 != 0) {
            uVar11 = gobj_vis(plVar5,plVar1,1);
          }
          outlet_pointer(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                         *(long **)(param_9 + 0x18));
          return;
        }
        lVar4 = *plVar6;
        pcVar7 = "%s: couldn\'t create scalar";
        uVar10 = extraout_XMM0_Da_00;
        uVar12 = extraout_XMM0_Db_00;
        goto LAB_005aff69;
      }
      pcVar7 = "append: stale pointer";
      param_1 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
    }
    else {
      pcVar7 = "append: lists only, not arrays";
      param_1 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
    }
  }
  pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,pcVar7,param_11,
           param_12,param_13,param_14);
  return;
}


