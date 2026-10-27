// Function : netreceive_connectpoll
// Namespace: 
// Entry    : 005830c0
// Prototype: undefined netreceive_connectpoll(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 005830c0 - 005831fc


void netreceive_connectpoll
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9)

{
  int iVar1;
  void *pvVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long lVar5;
  char *in_R8;
  undefined8 in_R9;
  int iVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined8 uVar7;
  undefined4 extraout_XMM0_Db_04;
  undefined4 uVar8;
  
  iVar1 = accept(*(int *)(param_9 + 0x48),(sockaddr *)0x0,(socklen_t *)0x0);
  if (iVar1 < 0) {
    post(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,param_7
         ,param_8,"netreceive: accept failed");
    return;
  }
  lVar5 = (long)*(int *)(param_9 + 0xe8);
  iVar6 = *(int *)(param_9 + 0xe8) + 1;
  pvVar2 = resizebytes(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                       param_6,param_7,param_8,*(void **)(param_9 + 0xf0),lVar5 * 4,lVar5 * 4 + 4);
  *(void **)(param_9 + 0xf0) = pvVar2;
  *(int *)((long)pvVar2 + (long)*(int *)(param_9 + 0xe8) * 4) = iVar1;
  pvVar2 = resizebytes(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,
                       param_5,param_6,param_7,param_8,*(void **)(param_9 + 0x100),
                       (long)*(int *)(param_9 + 0xe8) << 3,lVar5 * 8 + 8);
  *(void **)(param_9 + 0x100) = pvVar2;
  *(undefined8 *)((long)pvVar2 + (long)*(int *)(param_9 + 0xe8) * 8) = 0;
  if (*(int *)(param_9 + 0x50) == 0) {
    pcVar4 = netsend_read;
    if (*(long *)(param_9 + 0x30) == 0) {
      pcVar4 = (code *)0x0;
    }
    puVar3 = socketreceiver_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,
                                param_4,param_5,param_6,param_7,param_8,param_9,netreceive_notify,
                                pcVar4,0,in_R8,in_R9);
    uVar7 = CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_02);
    if (*(long *)(param_9 + 0x40) != 0) {
      uVar7 = socketreceiver_set_fromaddrfn((long)puVar3,0x583040);
    }
    sys_addpollfn(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,iVar1,
                  PTR_socketreceiver_read_00715498,puVar3);
    *(undefined8 **)(*(long *)(param_9 + 0x100) + (long)*(int *)(param_9 + 0xe8) * 8) = puVar3;
    uVar8 = extraout_XMM0_Db_04;
  }
  else {
    sys_addpollfn(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,iVar1,netsend_readbin,param_9);
    uVar8 = extraout_XMM0_Db_02;
  }
  *(int *)(param_9 + 0xe8) = iVar6;
  outlet_float(CONCAT44(uVar8,(float)iVar6),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               *(long **)(param_9 + 0x38));
  return;
}


