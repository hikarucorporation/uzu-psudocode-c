// Function : sys_do_reopen_audio
// Namespace: 
// Entry    : 0053ca20
// Prototype: undefined sys_do_reopen_audio(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 0053ca20 - 0053cc4f


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sys_do_reopen_audio(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        )

{
  int iVar1;
  undefined8 uVar2;
  long in_RCX;
  int iVar3;
  undefined8 in_R8;
  undefined8 in_R9;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 extraout_XMM0_Da;
  undefined8 uVar7;
  undefined4 extraout_XMM0_Db;
  undefined1 in_stack_00000008;
  uint local_98;
  int iStack_94;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
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
  uStack_90 = CONCAT44(DAT_0071df90,_DAT_0071df8c);
  local_38 = DAT_0071dfe4;
  local_48 = CONCAT44(DAT_0071dfd8,DAT_0071dfd4);
  uStack_40 = CONCAT44(DAT_0071dfe0,DAT_0071dfdc);
  local_58 = _DAT_0071dfc4;
  uStack_50 = _DAT_0071dfcc;
  local_68 = CONCAT44(DAT_0071dfb8,_DAT_0071dfb4);
  uStack_60 = _DAT_0071dfbc;
  local_78 = _DAT_0071dfa4;
  uStack_70 = CONCAT44(_DAT_0071dfb0,DAT_0071dfac);
  local_88 = _DAT_0071df94;
  uStack_80 = _DAT_0071df9c;
  iStack_94 = (int)((ulong)_audio_nextsettings >> 0x20);
  iVar5 = 0;
  iVar6 = 0;
  iVar4 = 0;
  if (0 < iStack_94) {
    iVar6 = 0;
    in_RCX = 0;
    iVar4 = 0;
    do {
      iVar3 = *(int *)((long)&uStack_80 + in_RCX * 4 + 4);
      if (0 < iVar3) {
        *(int *)((long)&uStack_80 + (long)iVar4 * 4 + 4) = iVar3;
        *(undefined4 *)((long)&uStack_90 + (long)iVar4 * 4) =
             *(undefined4 *)((long)&uStack_90 + in_RCX * 4);
        iVar6 = iVar6 + *(int *)((long)&uStack_80 + in_RCX * 4 + 4);
        iVar4 = iVar4 + 1;
      }
      in_RCX = in_RCX + 1;
    } while (in_RCX < iStack_94);
  }
  local_98 = (uint)_audio_nextsettings;
  iVar3 = 0;
  if (0 < uStack_70._4_4_) {
    iVar5 = 0;
    in_RCX = 0;
    iVar3 = 0;
    do {
      iVar1 = *(int *)((long)&local_58 + in_RCX * 4 + 4);
      if (0 < iVar1) {
        *(int *)((long)&local_58 + (long)iVar3 * 4 + 4) = iVar1;
        *(undefined4 *)((long)&local_68 + (long)iVar3 * 4) =
             *(undefined4 *)((long)&local_68 + in_RCX * 4);
        iVar5 = iVar5 + *(int *)((long)&local_58 + in_RCX * 4 + 4);
        iVar3 = iVar3 + 1;
      }
      in_RCX = in_RCX + 1;
    } while (in_RCX < uStack_70._4_4_);
  }
  uVar7 = sys_lock();
  sys_setchsr(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,iVar6,iVar5,
              local_48._4_4_,in_RCX,in_R8,in_R9);
  uVar7 = sys_unlock();
  if (iVar4 == 0 && iVar3 == 0) {
    sched_set_using_audio(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0);
    return;
  }
  if (local_98 == 0) {
LAB_0053cbd7:
    sys_audioapiopened = local_98;
    iVar4 = 2 - (uint)(uStack_40._4_4_ == 0);
  }
  else {
    if (local_98 == 9) {
      uVar2 = dummy_open_audio();
      uVar7 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
      if ((int)uVar2 == 0) goto LAB_0053cbd7;
    }
    else {
      uVar7 = post(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   "unknown audio API specified %d");
    }
    sys_audioapiopened = 0;
    iVar4 = 0;
  }
  uVar7 = sched_set_using_audio(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,iVar4)
  ;
  pdgui_vmess(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x65d0ef,"ri",
              "pd_whichapi",(ulong)sys_audioapiopened,in_R8,in_R9,in_stack_00000008);
  return;
}


