// Function : rescale_list
// Namespace: 
// Entry    : 0056e380
// Prototype: undefined rescale_list(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, uint param_11, int * param_12, char * param_13, undefined8 param_14)
// Body     : 0056e380 - 0056e4b4


void rescale_list(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,undefined8 param_10,uint param_11,int *param_12,char *param_13,
                 undefined8 param_14)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  long *plVar4;
  int *piVar5;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined1 *puVar6;
  ulong uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  ulong uVar11;
  undefined8 extraout_XMM0_Qa;
  undefined1 auStack_48 [8];
  undefined1 *local_40;
  uint local_34;
  
  if (param_11 == 1) {
    plVar1 = *(long **)(param_9 + 0x18);
    iVar9 = atom_getfloat(param_12);
    uVar7 = convert(CONCAT44(extraout_XMM0_Db,iVar9),param_9,param_10,extraout_RDX,param_12,param_13
                    ,param_14);
    outlet_float(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1);
    return;
  }
  if (param_11 == 0) {
    post(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
         "[rescale]: no method for bang");
    return;
  }
  piVar5 = param_12;
  if ((int)param_11 < 0x80) {
    puVar6 = auStack_48 + (long)(int)param_11 * -0x10;
    puVar3 = puVar6;
    if ((int)param_11 < 1) goto LAB_0056e467;
  }
  else {
    puVar3 = getbytes((ulong)param_11 << 4);
    puVar6 = auStack_48;
  }
  puVar8 = (undefined4 *)(puVar3 + 8);
  uVar7 = 0;
  local_40 = puVar3;
  local_34 = param_11;
  do {
    puVar8[-2] = 1;
    uVar11 = (ulong)param_11;
    *(undefined8 *)(puVar6 + -8) = 0x56e445;
    uVar10 = atom_getfloatarg((int)uVar7,param_11,(long)param_12);
    *(undefined8 *)(puVar6 + -8) = 0x56e44d;
    uVar11 = convert(CONCAT44(extraout_XMM0_Db_00,uVar10),param_9,uVar11,extraout_RDX_00,piVar5,
                     param_13,param_14);
    *puVar8 = (int)uVar11;
    uVar7 = uVar7 + 1;
    puVar8 = puVar8 + 4;
  } while (param_11 != uVar7);
  puVar3 = local_40;
  param_11 = local_34;
LAB_0056e467:
  plVar1 = *(long **)(param_9 + 0x18);
  *(undefined8 *)(puVar6 + -8) = 0x56e47b;
  plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar2 = *plVar4;
  *(undefined8 *)(puVar6 + -8) = 0x56e491;
  outlet_list(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1,
              lVar2 + 0xc0,param_11,puVar3,param_13,param_14);
  if (0x7f < (int)param_11) {
    *(undefined8 *)(puVar6 + -8) = 0x56e4a6;
    freebytes(puVar3);
  }
  return;
}


