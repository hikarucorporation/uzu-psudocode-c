// Function : clone_out_anything
// Namespace: 
// Entry    : 00504310
// Prototype: undefined clone_out_anything(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, uint param_11, void * param_12, char * param_13, undefined8 param_14)
// Body     : 00504310 - 00504438


void clone_out_anything(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       long param_9,long param_10,uint param_11,void *param_12,char *param_13,
                       undefined8 param_14)

{
  void *__src;
  long *plVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined4 auStack_58 [2];
  void *local_50;
  ulong local_48;
  ulong local_40;
  long local_38;
  
  local_50 = param_12;
  local_38 = param_9;
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar3 = *plVar1;
  bVar7 = lVar3 + 0xc0 == param_10;
  bVar8 = lVar3 + 0x78 == param_10;
  bVar9 = lVar3 + 0x90 == param_10;
  bVar10 = lVar3 + 0xa8 == param_10;
  uVar5 = 2 - ((bVar10 || bVar9) || (bVar8 || bVar7));
  uVar6 = param_11 + uVar5;
  local_40 = (ulong)uVar6;
  local_48 = (ulong)param_11;
  if ((int)uVar6 < 100) {
    puVar4 = auStack_58 + (long)(int)uVar6 * -4;
    puVar2 = puVar4;
  }
  else {
    puVar2 = getbytes(local_40 << 4);
    puVar4 = auStack_58;
  }
  *puVar2 = 1;
  puVar2[2] = (float)*(int *)(local_38 + 0x10);
  __src = local_50;
  if ((!bVar10 && !bVar9) && (!bVar8 && !bVar7)) {
    puVar2[4] = 2;
    *(long *)(puVar2 + 6) = param_10;
  }
  lVar3 = (long)(int)local_48;
  *(undefined8 *)(puVar4 + -2) = 0x5043ff;
  memcpy(puVar2 + (ulong)uVar5 * 4,__src,lVar3 << 4);
  plVar1 = *(long **)(local_38 + 8);
  *(undefined8 *)(puVar4 + -2) = 0x504414;
  outlet_list(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
              param_7,param_8,plVar1,0,uVar6,puVar2,param_13,param_14);
  if (99 < (int)uVar6) {
    *(undefined8 *)(puVar4 + -2) = 0x50442a;
    freebytes(puVar2);
  }
  return;
}


