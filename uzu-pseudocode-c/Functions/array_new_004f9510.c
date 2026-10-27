// Function : array_new
// Namespace: 
// Entry    : 004f9510
// Prototype: undefined4 * array_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10)
// Body     : 004f9510 - 004f9590


undefined4 *
array_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
         undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
         undefined8 *param_10)

{
  int iVar1;
  undefined4 *puVar2;
  long extraout_RAX;
  void *pvVar3;
  undefined8 uVar4;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  
  puVar2 = getbytes(0x40);
  template_findbyname(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                      param_6,param_7,param_8,param_9);
  *(long *)(puVar2 + 4) = param_9;
  *puVar2 = 1;
  iVar1 = *(int *)(extraout_RAX + 0x18) << 3;
  puVar2[1] = iVar1;
  pvVar3 = getbytes((long)iVar1);
  *(void **)(puVar2 + 2) = pvVar3;
  uVar4 = param_10[1];
  *(undefined8 *)(puVar2 + 8) = *param_10;
  *(undefined8 *)(puVar2 + 10) = uVar4;
  *(undefined8 *)(puVar2 + 0xc) = param_10[2];
  uVar4 = gstub_new(0,(long)puVar2);
  *(undefined8 *)(puVar2 + 0xe) = uVar4;
  word_init(*(long *)(puVar2 + 2),extraout_RAX,param_10);
  return puVar2;
}


