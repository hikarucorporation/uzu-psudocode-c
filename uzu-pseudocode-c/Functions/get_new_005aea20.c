// Function : get_new
// Namespace: 
// Entry    : 005aea20
// Prototype: long * get_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, long param_11, long * param_12, char * param_13, undefined8 param_14)
// Body     : 005aea20 - 005aeb29


long * get_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              undefined8 param_9,undefined8 param_10,long param_11,long *param_12,char *param_13,
              undefined8 param_14)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 extraout_RDX;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined4 local_38 [2];
  long *local_30;
  
  plVar2 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,get_class,param_10
                  ,param_11,param_12,param_13,param_14);
  iVar8 = (int)param_10;
  puVar3 = (undefined8 *)atom_getsymbolarg(0,iVar8,param_11);
  if ((*(char *)*puVar3 == '\0') || (iVar1 = strcmp((char *)*puVar3,"-"), iVar1 == 0)) {
    param_12 = (long *)__tls_get_addr(&PTR_007159b0);
    plVar2[6] = *param_12 + 0x168;
  }
  else {
    lVar4 = canvas_makebindsym(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,
                               param_8,puVar3);
    plVar2[6] = lVar4;
  }
  if (iVar8 < 2) {
    local_38[0] = 2;
    plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
    puVar10 = local_38;
    param_12 = (long *)(*plVar5 + 0x168);
    uVar9 = 1;
    local_30 = param_12;
  }
  else {
    uVar9 = iVar8 - 1;
    puVar10 = (undefined4 *)(param_11 + 0x10);
  }
  plVar5 = getbytes((ulong)uVar9 << 4);
  plVar2[8] = (long)plVar5;
  *(uint *)(plVar2 + 7) = uVar9;
  uVar7 = 0;
  do {
    lVar4 = atom_getsymbolarg(uVar7,uVar9,(long)puVar10);
    *plVar5 = lVar4;
    plVar6 = outlet_new(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        (long)plVar2,0,extraout_RDX,param_12,param_13,param_14);
    plVar5[1] = (long)plVar6;
    uVar7 = uVar7 + 1;
    plVar5 = plVar5 + 2;
  } while (uVar9 != uVar7);
  return plVar2;
}


