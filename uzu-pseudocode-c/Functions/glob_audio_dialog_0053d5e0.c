// Function : glob_audio_dialog
// Namespace: 
// Entry    : 0053d5e0
// Prototype: undefined glob_audio_dialog(undefined8 param_1, undefined8 param_2, int param_3, long param_4)
// Body     : 0053d5e0 - 0053da1e


void glob_audio_dialog(undefined8 param_1,undefined8 param_2,int param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  float fVar7;
  int local_d0;
  uint local_cc;
  int local_c8 [4];
  uint local_b8;
  int local_b4 [4];
  uint local_a4;
  int local_a0 [4];
  uint local_90;
  int local_8c [4];
  int local_7c;
  int iStack_78;
  int iStack_74;
  uint uStack_70;
  int local_6c;
  float local_68;
  float local_58;
  float local_48;
  
  local_d0 = audio_nextsettings;
  local_48 = (float)atom_getfloatarg(0x10,param_3,param_4);
  local_58 = (float)atom_getfloatarg(0x11,param_3,param_4);
  local_68 = (float)atom_getfloatarg(0x12,param_3,param_4);
  fVar7 = (float)atom_getfloatarg(0x13,param_3,param_4);
  local_7c = (int)local_48;
  iStack_78 = (int)local_58;
  iStack_74 = (int)local_68;
  uStack_70 = (uint)fVar7;
  fVar7 = (float)atom_getfloatarg(0,param_3,param_4);
  local_c8[0] = (int)fVar7;
  fVar7 = 0.0;
  local_68 = (float)local_c8[0];
  if (-1 < local_c8[0]) {
    fVar7 = (float)atom_getfloatarg(4,param_3,param_4);
  }
  local_b4[0] = (int)fVar7;
  local_48 = (float)local_b4[0];
  fVar7 = (float)atom_getfloatarg(8,param_3,param_4);
  local_a0[0] = (int)fVar7;
  fVar7 = 0.0;
  if (-1 < local_a0[0]) {
    fVar7 = (float)atom_getfloatarg(0xc,param_3,param_4);
  }
  local_8c[0] = (int)fVar7;
  fVar7 = (float)atom_getfloatarg(1,param_3,param_4);
  local_c8[1] = (int)fVar7;
  local_6c = local_c8[1];
  if (local_c8[1] < 0) {
    fVar7 = 0.0;
  }
  else {
    fVar7 = (float)atom_getfloatarg(5,param_3,param_4);
  }
  local_b4[1] = (int)fVar7;
  local_58 = (float)local_b4[1];
  fVar7 = (float)atom_getfloatarg(9,param_3,param_4);
  local_a0[1] = (int)fVar7;
  iVar4 = 0;
  local_8c[1] = 0;
  if (-1 < local_a0[1]) {
    fVar7 = (float)atom_getfloatarg(0xd,param_3,param_4);
    local_8c[1] = (int)fVar7;
  }
  fVar7 = (float)atom_getfloatarg(2,param_3,param_4);
  iVar5 = (int)fVar7;
  local_c8[2] = iVar5;
  if (-1 < iVar5) {
    fVar7 = (float)atom_getfloatarg(6,param_3,param_4);
    iVar4 = (int)fVar7;
  }
  local_b4[2] = iVar4;
  fVar7 = (float)atom_getfloatarg(10,param_3,param_4);
  local_a0[2] = (int)fVar7;
  iVar1 = 0;
  local_8c[2] = 0;
  if (-1 < local_a0[2]) {
    fVar7 = (float)atom_getfloatarg(0xe,param_3,param_4);
    local_8c[2] = (int)fVar7;
  }
  fVar7 = (float)atom_getfloatarg(3,param_3,param_4);
  local_c8[3] = (int)fVar7;
  if (-1 < local_c8[3]) {
    fVar7 = (float)atom_getfloatarg(7,param_3,param_4);
    iVar1 = (int)fVar7;
  }
  local_b4[3] = iVar1;
  fVar7 = (float)atom_getfloatarg(0xb,param_3,param_4);
  local_a0[3] = (int)fVar7;
  local_8c[3] = 0;
  if (-1 < local_a0[3]) {
    fVar7 = (float)atom_getfloatarg(0xf,param_3,param_4);
    local_8c[3] = (int)fVar7;
  }
  bVar6 = local_48 != 0.0;
  if (bVar6) {
    local_c8[0] = (int)local_68;
    local_b4[0] = (int)local_48;
  }
  local_cc = (uint)bVar6;
  uVar3 = (ulong)bVar6;
  if (local_58 != 0.0) {
    local_c8[uVar3] = local_6c;
    local_b4[uVar3] = (int)local_58;
    local_cc = bVar6 + 1;
    uVar3 = (ulong)local_cc;
  }
  uVar2 = (uint)uVar3;
  if (iVar4 != 0) {
    local_c8[uVar3] = iVar5;
    local_b4[(int)local_cc] = local_b4[2];
    uVar2 = local_cc + 1;
    iVar1 = local_b4[3];
    local_cc = uVar2;
  }
  if (iVar1 != 0) {
    local_c8[(int)uVar2] = local_c8[3];
    local_b4[(int)local_cc] = local_b4[3];
    local_cc = local_cc + 1;
  }
  local_a4 = (uint)(local_8c[0] != 0);
  uVar2 = (uint)(local_8c[0] != 0);
  if (local_8c[1] != 0) {
    local_a0[uVar2] = local_a0[1];
    local_8c[uVar2] = local_8c[1];
    local_a4 = uVar2 + 1;
  }
  if (local_8c[2] != 0) {
    local_a0[local_a4] = local_a0[2];
    local_8c[(int)local_a4] = local_8c[2];
    local_a4 = local_a4 + 1;
  }
  if (local_8c[3] != 0) {
    local_a0[(int)local_a4] = local_a0[3];
    local_8c[(int)local_a4] = local_8c[3];
    local_a4 = local_a4 + 1;
  }
  local_b8 = local_cc;
  if (iStack_74 < 0) {
    iStack_74 = 0;
  }
  local_90 = local_a4;
  iVar4 = ilog2(uStack_70);
  iVar4 = 1 << ((byte)iVar4 & 0x1f);
  uStack_70 = 0x40;
  if (0xfffff83e < iVar4 - 0x801U) {
    uStack_70 = iVar4;
  }
  sys_set_audio_settings((ulong *)&local_d0);
  if (*(int *)PTR_canvas_dspstate_00715d08 == 0) {
    iVar4 = sys_audioapiopened;
    if (sys_audioapiopened == 0) {
      iVar4 = audio_nextsettings;
    }
    if (iVar4 != 5) {
      return;
    }
  }
  sys_reopen_audio();
  return;
}


