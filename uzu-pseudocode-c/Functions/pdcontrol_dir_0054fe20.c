// Function : pdcontrol_dir
// Namespace: 
// Entry    : 0054fe20
// Prototype: undefined pdcontrol_dir(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, ulong param_11, ulong param_12, char * param_13, undefined8 param_14)
// Body     : 0054fe20 - 0054ff4a


void pdcontrol_dir(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 *param_10,ulong param_11,ulong param_12,char *param_13,
                  undefined8 param_14)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  char acStack_488 [128];
  undefined1 in_stack_fffffffffffffbf8;
  
  puVar4 = *(undefined8 **)(param_9 + 0x30);
  uVar3 = (uint)(float)param_1;
  puVar6 = param_10;
  if (0 < (int)uVar3) {
    if (uVar3 != 1) {
      param_12 = (ulong)(uVar3 & 0xfffffffe);
      param_11 = 0;
      do {
        for (; puVar4[0x1c] == 0; puVar4 = (undefined8 *)puVar4[9]) {
        }
        puVar6 = (undefined8 *)puVar4[9];
        if ((undefined8 *)puVar4[9] == (undefined8 *)0x0) {
          puVar6 = puVar4;
        }
        lVar1 = puVar6[0x1c];
        while (lVar1 == 0) {
          puVar6 = (undefined8 *)puVar6[9];
          lVar1 = puVar6[0x1c];
        }
        puVar4 = (undefined8 *)puVar6[9];
        if ((undefined8 *)puVar6[9] == (undefined8 *)0x0) {
          puVar4 = puVar6;
        }
        uVar5 = (int)param_11 + 2;
        param_11 = (ulong)uVar5;
      } while (uVar5 != (uVar3 & 0xfffffffe));
    }
    if ((uVar3 & 1) != 0) {
      lVar1 = puVar4[0x1c];
      while (lVar1 == 0) {
        puVar4 = (undefined8 *)puVar4[9];
        lVar1 = puVar4[0x1c];
      }
      if ((undefined8 *)puVar4[9] != (undefined8 *)0x0) {
        puVar4 = (undefined8 *)puVar4[9];
      }
    }
  }
  if (*(char *)*param_10 == '\0') {
    plVar2 = *(long **)(param_9 + 0x38);
    canvas_getdir(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)puVar4,
                  puVar6,param_11,param_12,param_13,param_14);
    outlet_symbol(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,plVar2);
    return;
  }
  puVar4 = (undefined8 *)
           canvas_getdir(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                         (long)puVar4,puVar6,param_11,param_12,param_13,param_14);
  pd_snprintf(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
              param_7,param_8,acStack_488 + 0x80,1000,"%s/%s",*puVar4,*param_10,param_14,
              in_stack_fffffffffffffbf8);
  plVar2 = *(long **)(param_9 + 0x38);
  gensym(acStack_488 + 0x80);
  outlet_symbol(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
                param_6,param_7,param_8,plVar2);
  return;
}


