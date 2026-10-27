// Function : sys_set_audio_settings
// Namespace: 
// Entry    : 0053c470
// Prototype: undefined sys_set_audio_settings(ulong * param_1)
// Body     : 0053c470 - 0053c5fc


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sys_set_audio_settings(ulong *param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined8 extraout_RDX;
  ulong *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  undefined4 auStack_8024 [3];
  undefined1 uVar13;
  int iVar14;
  undefined4 local_8014;
  undefined4 local_8010;
  undefined4 local_800c;
  char local_8008 [16384];
  char local_4008 [16384];
  
  puVar6 = auStack_8024 + 3;
  local_800c = 0;
  local_8010 = 0;
  local_8014 = 0;
  iVar14 = 0;
  puVar5 = &local_8014;
  sys_get_audio_devs(local_4008,&local_800c,local_8008,&local_8010,puVar5,auStack_8024 + 3,0x80,0x80
                     ,(int)*param_1);
  if (*(int *)((long)param_1 + 0x54) < 1) {
    *(undefined4 *)((long)param_1 + 0x54) = 0xac44;
    iVar2 = (int)param_1[0xb];
  }
  else {
    iVar2 = (int)param_1[0xb];
  }
  if (iVar2 < 0) {
    *(undefined4 *)(param_1 + 0xb) = 0x19;
  }
  iVar2 = ilog2((uint)param_1[0xc]);
  iVar3 = 1 << ((byte)iVar2 & 0x1f);
  iVar2 = 0x40;
  if (0xfffff83e < iVar3 - 0x801U) {
    iVar2 = iVar3;
  }
  *(int *)(param_1 + 0xc) = iVar2;
  if ((*(int *)((long)param_1 + 0x5c) != 0) && (iVar14 == 0)) {
    *(undefined4 *)((long)param_1 + 0x5c) = 0;
  }
  audio_make_sane((int *)((long)param_1 + 0x2c),param_1 + 6,(int *)(param_1 + 8),
                  (undefined4 *)((long)param_1 + 0x44));
  uVar13 = (undefined1)iVar14;
  puVar4 = param_1 + 1;
  audio_make_sane((int *)((long)param_1 + 4),puVar4,(int *)(param_1 + 3),
                  (undefined4 *)((long)param_1 + 0x1c));
  puVar1 = PTR_sys_schedadvance_00715858;
  *(int *)PTR_sys_schedadvance_00715858 = (int)param_1[0xb] * 1000;
  _audio_nextsettings = *param_1;
  _DAT_0071df8c = param_1[1];
  _DAT_0071df94 = *(undefined1 (*) [16])(param_1 + 2);
  uVar7 = DAT_0071df94;
  uVar8 = DAT_0071df94._4_4_;
  _DAT_0071dfa4 = *(undefined1 (*) [16])(param_1 + 4);
  uVar9 = DAT_0071dfa4;
  uVar10 = DAT_0071dfa4._4_4_;
  _DAT_0071dfb4 = *(undefined1 (*) [16])(param_1 + 6);
  uVar11 = (undefined4)DAT_0071dfb4;
  uVar12 = DAT_0071dfb4._4_4_;
  _DAT_0071dfc4 = param_1[8];
  _DAT_0071dfcc = param_1[9];
  _DAT_0071dfd4 = param_1[10];
  _DAT_0071dfdc = param_1[0xb];
  DAT_0071dfe4 = (undefined4)param_1[0xc];
  initted = 1;
  sys_log_error(_DAT_0071dfd4,(long)DAT_0071df94,(long)DAT_0071dfa4,(long)DAT_0071dfb4,in_XMM4_Qa,
                in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa,0,puVar4,extraout_RDX,puVar1,puVar5,puVar6);
  pdgui_vmess(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),CONCAT44(uVar8,uVar7),
              CONCAT44(uVar10,uVar9),CONCAT44(uVar12,uVar11),in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,
              in_XMM7_Qa,0x65d0ef,"ri","pd_whichapi",_audio_nextsettings & 0xffffffff,puVar5,puVar6,
              uVar13);
  return;
}


