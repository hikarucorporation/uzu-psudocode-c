// Function : glist_dosort
// Namespace: 
// Entry    : 00516430
// Prototype: long * glist_dosort(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, uint param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00516430 - 00516731


long * glist_dosort(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long *param_9,uint param_10,ulong param_11,undefined8 param_12,char *param_13,
                   undefined8 param_14)

{
  long *plVar1;
  float fVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 extraout_RDX;
  uint uVar9;
  uint uVar10;
  long *plVar11;
  undefined4 extraout_XMM0_Da;
  float fVar12;
  float extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Db_00;
  float fVar14;
  undefined4 uVar15;
  float local_3c;
  float local_38;
  undefined4 local_34;
  
  if ((int)param_10 < 2) {
    return param_9;
  }
  uVar10 = param_10 >> 1;
  uVar3 = uVar10 - 1;
  plVar5 = param_9;
  if (uVar3 != 0) {
    param_11 = (ulong)(uVar10 - 2);
    if ((uVar3 & 7) != 0) {
      uVar9 = 0;
      do {
        plVar5 = (long *)plVar5[1];
        uVar9 = uVar9 + 1;
      } while ((uVar3 & 7) != uVar9);
      uVar3 = uVar3 - uVar9;
    }
    if (6 < uVar10 - 2) {
      do {
        plVar5 = *(long **)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(plVar5[1] +
                                                                                       8) + 8) + 8)
                                                         + 8) + 8) + 8) + 8);
        uVar3 = uVar3 - 8;
      } while (uVar3 != 0);
    }
  }
  plVar1 = (long *)plVar5[1];
  plVar5[1] = 0;
  plVar4 = glist_dosort(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                        uVar10,param_11,plVar5,param_13,param_14);
  plVar5 = glist_dosort(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                        param_6,param_7,param_8,plVar1,param_10 - uVar10,extraout_RDX,plVar5,
                        param_13,param_14);
  fVar14 = 0.0;
  if ((plVar4 != (long *)0x0) && (fVar14 = 0.0, *plVar4 == *(long *)PTR_scalar_class_00715810)) {
    scalar_getbasexy(0,0,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar4,&local_3c,
                     &local_34,PTR_scalar_class_00715810,param_13,param_14);
    fVar14 = local_3c;
  }
  fVar12 = 0.0;
  plVar1 = (long *)PTR_scalar_class_00715810;
  if ((plVar5 != (long *)0x0) && (*plVar5 == *(long *)PTR_scalar_class_00715810)) {
    local_38 = fVar14;
    scalar_getbasexy(0,(ulong)(uint)fVar14,param_3,param_4,param_5,param_6,param_7,param_8,
                     (long)plVar5,&local_3c,&local_34,PTR_scalar_class_00715810,param_13,param_14);
    fVar12 = local_3c;
    fVar14 = local_38;
    plVar1 = (long *)PTR_scalar_class_00715810;
  }
  if (plVar4 != (long *)0x0) {
    plVar11 = (long *)0x0;
    plVar7 = (long *)0x0;
    PTR_scalar_class_00715810 = (undefined *)plVar1;
    do {
      if ((plVar5 == (long *)0x0) || (fVar14 <= fVar12)) {
        if (plVar7 != (long *)0x0) goto LAB_0051660e;
        plVar6 = (long *)plVar4[1];
        plVar11 = plVar4;
        fVar2 = local_38;
      }
      else {
        plVar6 = plVar7;
        plVar8 = plVar11;
        local_38 = fVar14;
        do {
          plVar7 = plVar5;
          plVar11 = plVar7;
          if (plVar6 != (long *)0x0) {
            plVar6[1] = (long)plVar7;
            plVar11 = plVar8;
          }
          plVar5 = (long *)plVar7[1];
          if (plVar5 == (long *)0x0) {
            plVar7[1] = 0;
            plVar5 = (long *)0x0;
            break;
          }
          fVar12 = 0.0;
          if (*plVar5 == *plVar1) {
            scalar_getbasexy(0,(ulong)(uint)fVar14,param_3,param_4,param_5,param_6,param_7,param_8,
                             (long)plVar5,&local_3c,&local_34,plVar8,param_13,param_14);
            fVar12 = local_3c;
            fVar14 = local_38;
          }
          plVar7[1] = 0;
          plVar6 = plVar7;
          plVar8 = plVar11;
        } while (fVar12 < fVar14);
LAB_0051660e:
        plVar7[1] = (long)plVar4;
        plVar6 = (long *)plVar4[1];
        fVar2 = local_38;
      }
      local_38 = fVar12;
      fVar12 = local_38;
      if (plVar6 == (long *)0x0) goto LAB_00516661;
      fVar14 = 0.0;
      if (*plVar6 == *plVar1) {
        scalar_getbasexy((ulong)(uint)local_38,0,param_3,param_4,param_5,param_6,param_7,param_8,
                         (long)plVar6,&local_3c,&local_34,plVar4,param_13,param_14);
        fVar12 = local_38;
        fVar14 = local_3c;
        fVar2 = local_38;
      }
      local_38 = fVar2;
      plVar4[1] = 0;
      plVar7 = plVar4;
      plVar4 = plVar6;
    } while( true );
  }
  plVar11 = (long *)0x0;
  plVar4 = (long *)0x0;
joined_r0x00516717:
  PTR_scalar_class_00715810 = (undefined *)plVar1;
  if (plVar5 != (long *)0x0) {
    uVar15 = 0;
    uVar13 = 0;
    while( true ) {
      plVar7 = plVar5;
      if (plVar4 != (long *)0x0) {
        plVar4[1] = (long)plVar5;
        plVar7 = plVar11;
      }
      plVar11 = plVar7;
      plVar7 = (long *)plVar5[1];
      if (plVar7 == (long *)0x0) break;
      if (*plVar7 == *plVar1) {
        scalar_getbasexy(CONCAT44(uVar13,fVar12),CONCAT44(uVar15,fVar14),param_3,param_4,param_5,
                         param_6,param_7,param_8,(long)plVar7,&local_3c,&local_34,plVar4,param_13,
                         param_14);
        fVar12 = extraout_XMM0_Da_00;
        uVar13 = extraout_XMM0_Db_00;
      }
      plVar5[1] = 0;
      plVar4 = plVar5;
      plVar5 = plVar7;
    }
    plVar5[1] = 0;
  }
  return plVar11;
LAB_00516661:
  plVar4[1] = 0;
  plVar1 = (long *)PTR_scalar_class_00715810;
  local_38 = fVar2;
  goto joined_r0x00516717;
}


