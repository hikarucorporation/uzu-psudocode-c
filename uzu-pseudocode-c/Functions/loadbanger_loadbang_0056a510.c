// Function : loadbanger_loadbang
// Namespace: 
// Entry    : 0056a510
// Prototype: undefined loadbanger_loadbang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 0056a510 - 0056a5a8


void loadbanger_loadbang(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        ,long param_9)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  
  if (*(int *)(param_9 + 0x34) == 0) {
    if ((int)(float)param_1 == 0) {
      if (*(int *)(param_9 + 0x38) != 0) {
        clock_delay(0.0,*(double **)(param_9 + 0x40));
        return;
      }
      uVar3 = (ulong)*(int *)(param_9 + 0x30);
      uVar1 = uVar3;
      if (uVar3 != 0) {
        do {
          outlet_bang(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      *(long **)(*(long *)(param_9 + 0x48) + (uVar1 - 1) * 8));
          param_1 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
          uVar2 = (int)uVar3 - 1;
          uVar3 = (ulong)uVar2;
          uVar1 = uVar1 - 1;
        } while (uVar2 != 0);
      }
    }
  }
  else if (((int)(float)param_1 == 1) &&
          (uVar3 = (ulong)*(int *)(param_9 + 0x30), uVar1 = uVar3, uVar3 != 0)) {
    do {
      outlet_bang(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  *(long **)(*(long *)(param_9 + 0x48) + (uVar1 - 1) * 8));
      param_1 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
      uVar2 = (int)uVar3 - 1;
      uVar3 = (ulong)uVar2;
      uVar1 = uVar1 - 1;
    } while (uVar2 != 0);
  }
  return;
}


