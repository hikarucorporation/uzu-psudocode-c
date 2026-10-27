// Function : eval_var
// Namespace: 
// Entry    : 005c60e0
// Prototype: long * eval_var(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10, float * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005c60e0 - 005c61b8


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * eval_var(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,long *param_10,float *param_11,undefined8 param_12,char *param_13,
               undefined8 param_14)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  lVar1 = param_10[1];
  if (lVar1 == 0x15) {
    puVar2 = (undefined8 *)*param_10;
LAB_005c6179:
    max_ex_var(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,puVar2,
               param_11,param_12,param_13,param_14);
  }
  else {
    if (lVar1 == 0xd) {
      puVar2 = *(undefined8 **)(param_9 + 0x698 + *param_10 * 0x20);
      if (puVar2 != (undefined8 *)0x0) goto LAB_005c6179;
      if ((*(byte *)(param_9 + 0x34) & 0x10) == 0) {
        uVar3 = post(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     "expr: syntax error: no string for inlet %d");
        uVar3 = post(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     "expr: no more table errors will be reported");
        post(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
             "expr: till the next reset");
        *(byte *)(param_9 + 0x34) = *(byte *)(param_9 + 0x34) | 0x10;
      }
      lVar1 = *(long *)(param_11 + 2);
      uVar3 = _UNK_005d99f8;
    }
    else {
      pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               "expr: eval_tbl: bad type %ld\n",lVar1,param_12,param_13,param_14);
      lVar1 = *(long *)(param_11 + 2);
      uVar3 = _UNK_005d99f8;
    }
    _UNK_005d99f8 = uVar3;
    if (lVar1 == 0xf) {
      if ((ulong)*(uint *)(param_9 + 0x28f8) != 0) {
        memset(*(void **)param_11,0,(ulong)*(uint *)(param_9 + 0x28f8) << 2);
      }
    }
    else {
      *(undefined8 *)param_11 = _DAT_005d99f0;
      *(undefined8 *)(param_11 + 2) = uVar3;
    }
  }
  return param_10 + 4;
}


