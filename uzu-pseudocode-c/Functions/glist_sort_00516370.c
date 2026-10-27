// Function : glist_sort
// Namespace: 
// Entry    : 00516370
// Prototype: undefined glist_sort(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00516370 - 0051642b


void glist_sort(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               char *param_13,undefined8 param_14)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 extraout_RDX;
  uint uVar6;
  float fVar7;
  float fVar8;
  float local_44;
  long local_40;
  undefined4 local_34;
  
  puVar2 = PTR_scalar_class_00715810;
  plVar5 = *(long **)(param_9 + 0x30);
  if (plVar5 != (long *)0x0) {
    lVar4 = *(long *)PTR_scalar_class_00715810;
    uVar6 = 0;
    bVar1 = false;
    fVar8 = DAT_00654d50;
    local_40 = param_9;
    do {
      fVar7 = 0.0;
      if (*plVar5 == lVar4) {
        scalar_getbasexy(0,(ulong)(uint)fVar8,param_3,param_4,param_5,param_6,param_7,param_8,
                         (long)plVar5,&local_44,&local_34,param_12,param_13,param_14);
        lVar4 = *(long *)puVar2;
        param_11 = extraout_RDX;
        fVar7 = local_44;
      }
      lVar3 = local_40;
      if (fVar7 < fVar8) {
        bVar1 = true;
      }
      uVar6 = uVar6 + 1;
      plVar5 = (long *)plVar5[1];
      fVar8 = fVar7;
    } while (plVar5 != (long *)0x0);
    if (bVar1) {
      plVar5 = glist_dosort((ulong)(uint)fVar7,(ulong)(uint)fVar7,param_3,param_4,param_5,param_6,
                            param_7,param_8,*(long **)(local_40 + 0x30),uVar6,param_11,param_12,
                            param_13,param_14);
      *(long **)(lVar3 + 0x30) = plVar5;
    }
  }
  return;
}


