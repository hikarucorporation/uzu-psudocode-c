// Function : outlet_new
// Namespace: 
// Entry    : 00538b60
// Prototype: long * outlet_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00538b60 - 00538c15


long * outlet_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,long param_10,undefined8 param_11,undefined8 param_12,char *param_13,
                 undefined8 param_14)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 extraout_RDX;
  long lVar7;
  undefined8 extraout_XMM0_Qa;
  
  lVar7 = param_10;
  plVar3 = getbytes(0x20);
  *plVar3 = param_9;
  plVar3[1] = 0;
  lVar2 = *(long *)(param_9 + 0x18);
  if (*(long *)(param_9 + 0x18) == 0) {
    *(long **)(param_9 + 0x18) = plVar3;
    iVar1 = *(int *)PTR_backtracer_cantrace_00715618;
  }
  else {
    do {
      lVar6 = lVar2;
      lVar2 = *(long *)(lVar6 + 8);
    } while (lVar2 != 0);
    *(long **)(lVar6 + 8) = plVar3;
    iVar1 = *(int *)PTR_backtracer_cantrace_00715618;
  }
  if (iVar1 == 0) {
    plVar3[2] = 0;
  }
  else {
    plVar4 = pd_new(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    *(long *)PTR_backtracer_class_00715ba0,lVar7,extraout_RDX,0,param_13,param_14);
    plVar4[1] = 0;
    plVar4[2] = param_9;
    puVar5 = getbytes(0x10);
    plVar3[2] = (long)puVar5;
    *puVar5 = 0;
    puVar5[1] = plVar4;
  }
  plVar3[3] = param_10;
  return plVar3;
}


