// Function : eval_tab
// Namespace: 
// Entry    : 005c5d80
// Prototype: ulong * eval_tab(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10, long * param_11, ulong param_12, char * param_13, undefined8 param_14)
// Body     : 005c5d80 - 005c5eb0


ulong * eval_tab(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,long *param_10,long *param_11,ulong param_12,char *param_13,
                undefined8 param_14)

{
  long lVar1;
  bool bVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  undefined4 extraout_XMM0_Da;
  undefined8 uVar5;
  undefined4 extraout_XMM0_Db;
  void *local_58;
  long lStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_48 = 0;
  uStack_40 = 0;
  lVar1 = param_10[1];
  if (lVar1 == 5) {
    puVar4 = (undefined8 *)*param_10;
    bVar2 = true;
    if (puVar4 != (undefined8 *)0x0) goto LAB_005c5e4e;
    post(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
         "expr: abstraction argument for table not set");
  }
  else if (lVar1 == 0xd) {
    puVar4 = *(undefined8 **)(param_9 + 0x698 + *param_10 * 0x20);
    bVar2 = true;
    if (puVar4 != (undefined8 *)0x0) goto LAB_005c5e4e;
    if ((*(byte *)(param_9 + 0x34) & 8) == 0) {
      uVar5 = pd_error(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                       "expr:\'%s\': no string for inlet %ld",*(undefined8 *)(param_9 + 0x40),
                       *param_10 + 1,param_13,param_14);
      uVar5 = post(uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   "expr: No more table errors will be reported");
      post(uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"expr: till the next reset"
          );
      *(byte *)(param_9 + 0x34) = *(byte *)(param_9 + 0x34) | 8;
    }
  }
  else {
    pd_error(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             "expr: eval_tbl: bad type %ld\n",lVar1,param_12,param_13,param_14);
  }
  puVar4 = (undefined8 *)0x0;
  bVar2 = false;
LAB_005c5e4e:
  local_58 = (void *)0x0;
  lStack_50 = 0;
  puVar3 = ex_eval(0,param_2,param_5,param_6,param_7,param_8,param_9,(ulong *)(param_10 + 4),
                   (float *)&local_58,(undefined *)(param_12 & 0xffffffff),param_13,param_14);
  if (puVar3 != (ulong *)0x0) {
    if (bVar2) {
      max_ex_tab(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6
                 ,param_7,param_8,param_9,puVar4,(float *)&local_58,(int *)0x0,param_11,param_14);
    }
    if (lStack_50 == 0xf) {
      free(local_58);
    }
  }
  return puVar3;
}


