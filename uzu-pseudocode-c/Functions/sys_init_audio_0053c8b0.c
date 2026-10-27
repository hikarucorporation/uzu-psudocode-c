// Function : sys_init_audio
// Namespace: 
// Entry    : 0053c8b0
// Prototype: undefined sys_init_audio(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 0053c8b0 - 0053ca19


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sys_init_audio(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long lVar2;
  long in_RCX;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 in_R9;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined4 local_8;
  
  if (initted == '\0') {
    _audio_nextsettings = 0x100000009;
    DAT_0071dfd8 = 0xac44;
    DAT_0071dfdc = 0x19;
    _DAT_0071dfc4 = 0x200000001;
    _DAT_0071dfb0 = 1;
    _DAT_0071dfb4 = 0;
    _DAT_0071df9c = 0x200000001;
    _DAT_0071df8c = 0;
    DAT_0071dfe4 = 0x40;
    initted = '\x01';
  }
  uStack_60 = CONCAT44(DAT_0071df90,_DAT_0071df8c);
  local_8 = DAT_0071dfe4;
  local_18 = CONCAT44(DAT_0071dfd8,DAT_0071dfd4);
  uStack_10 = CONCAT44(DAT_0071dfe0,DAT_0071dfdc);
  local_28 = _DAT_0071dfc4;
  uStack_20 = _DAT_0071dfcc;
  local_38 = CONCAT44(DAT_0071dfb8,_DAT_0071dfb4);
  uStack_30 = _DAT_0071dfbc;
  local_48 = _DAT_0071dfa4;
  uStack_40 = CONCAT44(_DAT_0071dfb0,DAT_0071dfac);
  local_58 = _DAT_0071df94;
  uStack_50 = _DAT_0071df9c;
  iStack_64 = (int)((ulong)_audio_nextsettings >> 0x20);
  iVar4 = 0;
  iVar5 = 0;
  if (0 < iStack_64) {
    iVar5 = 0;
    in_RCX = 0;
    iVar3 = 0;
    do {
      iVar1 = *(int *)((long)&uStack_50 + in_RCX * 4 + 4);
      if (0 < iVar1) {
        *(int *)((long)&uStack_50 + (long)iVar3 * 4 + 4) = iVar1;
        *(undefined4 *)((long)&uStack_60 + (long)iVar3 * 4) =
             *(undefined4 *)((long)&uStack_60 + in_RCX * 4);
        iVar5 = iVar5 + *(int *)((long)&uStack_50 + in_RCX * 4 + 4);
        iVar3 = iVar3 + 1;
      }
      in_RCX = in_RCX + 1;
    } while (in_RCX < iStack_64);
  }
  if (0 < (int)uStack_40._4_4_) {
    iVar4 = 0;
    lVar2 = 0;
    iVar3 = 0;
    do {
      iVar1 = *(int *)((long)&local_28 + lVar2 * 4 + 4);
      if (0 < iVar1) {
        *(int *)((long)&local_28 + (long)iVar3 * 4 + 4) = iVar1;
        *(undefined4 *)((long)&local_38 + (long)iVar3 * 4) =
             *(undefined4 *)((long)&local_38 + lVar2 * 4);
        iVar4 = iVar4 + *(int *)((long)&local_28 + lVar2 * 4 + 4);
        iVar3 = iVar3 + 1;
      }
      lVar2 = lVar2 + 1;
      in_RCX = (long)(int)uStack_40._4_4_;
    } while (lVar2 < in_RCX);
  }
  sys_setchsr(_DAT_0071df94,param_2,param_3,param_4,param_5,param_6,param_7,param_8,iVar5,iVar4,
              local_18._4_4_,in_RCX,(ulong)uStack_40._4_4_,in_R9);
  return;
}


