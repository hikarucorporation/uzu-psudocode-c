// Function : list_store_insert
// Namespace: 
// Entry    : 00552480
// Prototype: undefined list_store_insert(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, int param_11, int * param_12, char * param_13, undefined8 param_14)
// Body     : 00552480 - 005524dd


void list_store_insert(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      long param_9,undefined8 param_10,int param_11,int *param_12,char *param_13,
                      undefined8 param_14)

{
  uint uVar1;
  float fVar2;
  undefined4 extraout_XMM0_Db;
  
  if (param_11 < 2) {
    return;
  }
  fVar2 = (float)atom_getfloat(param_12);
  uVar1 = (uint)fVar2;
  if ((int)uVar1 < 0) {
    pd_error(CONCAT44(extraout_XMM0_Db,fVar2),param_2,param_3,param_4,param_5,param_6,param_7,
             param_8,param_9,"list_store_insert: index %d out of range",(ulong)uVar1,(ulong)uVar1,
             param_13,param_14);
    return;
  }
  if ((int)*(uint *)(param_9 + 0x38) < (int)uVar1) {
    uVar1 = *(uint *)(param_9 + 0x38);
  }
  list_store_doinsert(CONCAT44(extraout_XMM0_Db,fVar2),param_2,param_3,param_4,param_5,param_6,
                      param_7,param_8,param_9,param_11 - 1,(long)(param_12 + 4),uVar1,param_13,
                      param_14);
  return;
}


