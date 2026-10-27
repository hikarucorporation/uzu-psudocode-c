// Function : list_fromsymbol_symbol
// Namespace: 
// Entry    : 00553170
// Prototype: undefined list_fromsymbol_symbol(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00553170 - 005532c5


void list_fromsymbol_symbol
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,long *param_10,undefined8 param_11,undefined8 param_12,char *param_13,
               undefined8 param_14)

{
  long *plVar1;
  long lVar2;
  size_t sVar3;
  long lVar4;
  long *plVar5;
  undefined1 *puVar6;
  float *pfVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined8 uStack_30;
  
  uStack_30 = 0x553189;
  sVar3 = strlen((char *)*param_10);
  uVar8 = (uint)sVar3;
  lVar4 = (long)(int)uVar8;
  if ((int)uVar8 < 100) {
    puVar9 = (undefined1 *)((long)register_RSP + lVar4 * -0x10 + -0x28);
    puVar6 = puVar9;
    if ((int)uVar8 < 1) {
      plVar1 = *(long **)(param_9 + 0x18);
      (&uStack_30)[lVar4 * -2] = 0x5531c5;
      plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
      lVar2 = *plVar5;
      (&uStack_30)[lVar4 * -2] = 0x5531db;
      outlet_list(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,plVar1,lVar2 + 0xc0,uVar8,puVar9,param_13,param_14);
      return;
    }
  }
  else {
    uStack_30 = 0x5531e5;
    puVar6 = getbytes(lVar4 * 0x10);
    puVar9 = (undefined1 *)((long)register_RSP + -0x28);
  }
  if ((sVar3 & 0xffffffff) == 1) {
    lVar4 = 0;
  }
  else {
    pfVar7 = (float *)(puVar6 + 0x18);
    lVar4 = 0;
    do {
      pfVar7[-6] = 1.4013e-45;
      pfVar7[-4] = (float)*(byte *)(*param_10 + lVar4);
      pfVar7[-2] = 1.4013e-45;
      *pfVar7 = (float)*(byte *)(*param_10 + 1 + lVar4);
      lVar4 = lVar4 + 2;
      pfVar7 = pfVar7 + 8;
    } while ((sVar3 & 0xffffffff) - (ulong)(uVar8 & 1) != lVar4);
  }
  if ((ulong)(uVar8 & 1) != 0) {
    *(undefined4 *)(puVar6 + lVar4 * 0x10) = 1;
    *(float *)(puVar6 + lVar4 * 0x10 + 8) = (float)*(byte *)(*param_10 + lVar4);
  }
  plVar1 = *(long **)(param_9 + 0x18);
  *(undefined8 *)(puVar9 + -8) = 0x55328e;
  plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar4 = *plVar5;
  *(undefined8 *)(puVar9 + -8) = 0x5532a4;
  outlet_list(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
              param_6,param_7,param_8,plVar1,lVar4 + 0xc0,uVar8,puVar6,param_13,param_14);
  if (99 < (int)uVar8) {
    *(undefined8 *)(puVar9 + -8) = 0x5532b9;
    freebytes(puVar6);
  }
  return;
}


