// Function : obj_nexttraverseoutlet
// Namespace: 
// Entry    : 005393c0
// Prototype: undefined8 obj_nexttraverseoutlet(undefined8 * param_1, long * param_2, long * param_3, uint * param_4)
// Body     : 005393c0 - 0053944e


undefined8 obj_nexttraverseoutlet(undefined8 *param_1,long *param_2,long *param_3,uint *param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  
  plVar1 = (long *)param_1[1];
  lVar2 = *plVar1;
  if ((((lVar2 != inlet_class) && (lVar2 != pointerinlet_class)) && (lVar2 != floatinlet_class)) &&
     (lVar2 != symbolinlet_class)) {
    *param_4 = 0;
    *param_3 = 0;
    *param_2 = (long)plVar1;
    return *param_1;
  }
  plVar3 = (long *)plVar1[2];
  uVar5 = *(uint *)(*plVar3 + 0x94) >> 2 & 1;
  for (plVar4 = (long *)plVar3[4]; (plVar4 != (long *)0x0 && (plVar4 != plVar1));
      plVar4 = (long *)plVar4[1]) {
    uVar5 = uVar5 + 1;
  }
  *param_4 = uVar5;
  *param_2 = (long)plVar3;
  *param_3 = (long)plVar1;
  return *param_1;
}


