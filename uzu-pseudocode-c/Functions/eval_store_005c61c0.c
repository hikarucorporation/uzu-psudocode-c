// Function : eval_store
// Namespace: 
// Entry    : 005c61c0
// Prototype: ulong * eval_store(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10, long * param_11, uint param_12, char * param_13, undefined8 param_14)
// Body     : 005c61c0 - 005c635f


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * eval_store(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,long *param_10,long *param_11,uint param_12,char *param_13,
                  undefined8 param_14)

{
  ulong *puVar1;
  undefined8 uVar2;
  ulong *puVar3;
  long lVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  char *pcVar5;
  undefined8 *puVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  void *pvVar7;
  void *local_78;
  long lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_68 = 0;
  uStack_60 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_78 = _DAT_005d99f0;
  lStack_70 = _UNK_005d99f8;
  lVar4 = param_10[1];
  if (lVar4 == 5) {
    puVar6 = (undefined8 *)*param_10;
LAB_005c6277:
    local_78 = (void *)0x0;
    lStack_70 = 0;
    puVar3 = ex_eval(0,param_2,param_5,param_6,param_7,param_8,param_9,(ulong *)(param_10 + 4),
                     (float *)&local_78,(undefined *)(ulong)param_12,param_13,param_14);
    if (puVar3 != (ulong *)0x0) {
      puVar3 = ex_eval(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_5,param_6,
                       param_7,param_8,param_9,puVar3,(float *)&local_58,
                       (undefined *)(ulong)param_12,param_13,param_14);
      lVar4 = _UNK_005d99f8;
      pvVar7 = _DAT_005d99f0;
      if (puVar3 != (ulong *)0x0) {
        *param_11 = (long)_DAT_005d99f0;
        param_11[1] = lVar4;
        max_ex_tab_store(pvVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                         puVar6,(float *)&local_78,(float *)&local_58,param_11,param_14);
joined_r0x005c62d5:
        if (lStack_70 == 0xf) {
          free(local_78);
          return puVar3;
        }
        return puVar3;
      }
    }
    return (ulong *)0x0;
  }
  pvVar7 = _DAT_005d99f0;
  if (lVar4 == 0xd) {
    if ((*(byte *)(param_10 + 3) & 2) != 0) {
      pcVar5 = "expr: symbol cannot be a left value \'%s\'";
      goto LAB_005c6345;
    }
    puVar6 = *(undefined8 **)(param_9 + 0x698 + *param_10 * 0x20);
    if (puVar6 != (undefined8 *)0x0) goto LAB_005c6277;
    if ((*(byte *)(param_9 + 0x34) & 8) == 0) {
      lVar4 = *param_10 + 1;
      uVar2 = pd_error(_DAT_005d99f0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                       ,"expr: \'%s\': syntax error: no string for inlet %ld",
                       *(undefined8 *)(param_9 + 0x40),lVar4,param_13,param_14);
      uVar2 = pd_error(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                       "expr: No more table errors will be reported",extraout_RDX,lVar4,param_13,
                       param_14);
      pvVar7 = (void *)pd_error(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                param_9,"expr: till the next reset",extraout_RDX_00,lVar4,param_13,
                                param_14);
      *(byte *)(param_9 + 0x34) = *(byte *)(param_9 + 0x34) | 8;
    }
  }
  else if (lVar4 == 0x15) {
    puVar6 = (undefined8 *)*param_10;
    puVar1 = ex_eval(_DAT_005d99f0,param_2,param_5,param_6,param_7,param_8,param_9,
                     (ulong *)(param_10 + 4),(float *)&local_78,(undefined *)(ulong)param_12,
                     param_13,param_14);
    uVar2 = max_ex_var_store(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                             param_5,param_6,param_7,param_8,param_9,puVar6,(float *)&local_78,
                             param_11,param_13,param_14);
    puVar3 = (ulong *)0x0;
    if ((int)uVar2 == 0) {
      puVar3 = puVar1;
    }
    goto joined_r0x005c62d5;
  }
  pcVar5 = "expr: \'%s\' - Bad left value";
LAB_005c6345:
  post(pvVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pcVar5);
  return (ulong *)0x0;
}


