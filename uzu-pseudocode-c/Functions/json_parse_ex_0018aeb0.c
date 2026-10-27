// Function : json_parse_ex
// Namespace: 
// Entry    : 0018aeb0
// Prototype: long * json_parse_ex(long param_1, long param_2, ulong param_3, undefined * param_4, undefined8 param_5, undefined8 * param_6)
// Body     : 0018aeb0 - 0018b039


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * json_parse_ex(long param_1,long param_2,ulong param_3,undefined *param_4,undefined8 param_5,
                    undefined8 *param_6)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long local_70;
  long local_68;
  long local_60;
  ulong local_58;
  long local_50;
  long *local_48;
  long local_40;
  long lStack_38;
  undefined8 local_30;
  long lStack_28;
  undefined8 uStack_20;
  
  if (param_6 != (undefined8 *)0x0) {
    param_6[2] = 0;
    param_6[3] = 0;
    *param_6 = 0;
    param_6[1] = 0;
  }
  if (param_1 != 0) {
    local_60 = 0;
    local_30 = 1;
    local_40 = 0;
    lStack_38 = 0;
    lStack_28 = 0;
    uStack_20 = 0;
    local_70 = param_1;
    local_68 = param_2;
    local_58 = param_3;
    uVar2 = json_get_value_size(&local_70,(uint)param_3 & 4);
    if ((int)uVar2 == 0) {
      json_skip_all_skippables(&local_70);
      if (local_60 == local_68) {
        if (param_4 == (undefined *)0x0) {
          plVar3 = malloc(lStack_38 + local_40);
          local_30 = _DAT_005d99e0;
          lStack_28 = _UNK_005d99e8;
          lVar1 = _UNK_005d99f8;
        }
        else {
          plVar3 = (long *)(*(code *)param_4)(param_5);
          local_30 = _DAT_005d99e0;
          lStack_28 = _UNK_005d99e8;
          lVar1 = _UNK_005d99f8;
        }
        _DAT_005d99e0 = local_30;
        _UNK_005d99e8 = lStack_28;
        _UNK_005d99f8 = lVar1;
        if (plVar3 == (long *)0x0) {
          if (param_6 == (undefined8 *)0x0) {
            return (long *)0x0;
          }
          *param_6 = 9;
          param_6[1] = 0;
          param_6[2] = 0;
          param_6[3] = 0;
          return (long *)0x0;
        }
        local_60 = 0;
        local_50 = local_40 + (long)plVar3;
        if ((local_58 & 0x80) == 0) {
          local_48 = plVar3 + 2;
        }
        else {
          local_48 = plVar3 + 5;
          plVar3[2] = _DAT_005d99f0;
          plVar3[3] = lVar1;
          plVar3[4] = 0;
        }
        json_parse_value(&local_70,(uint)local_58 & 4,plVar3);
        return plVar3;
      }
      uStack_20 = 10;
    }
    if (param_6 != (undefined8 *)0x0) {
      *param_6 = uStack_20;
      param_6[1] = local_60;
      param_6[2] = local_30;
      param_6[3] = local_60 - lStack_28;
    }
  }
  return (long *)0x0;
}


