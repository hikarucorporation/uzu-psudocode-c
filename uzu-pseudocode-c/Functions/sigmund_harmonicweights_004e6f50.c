// Function : sigmund_harmonicweights
// Namespace: 
// Entry    : 004e6f50
// Prototype: undefined sigmund_harmonicweights(long param_1, undefined8 param_2, int param_3, long param_4)
// Body     : 004e6f50 - 004e70de


void sigmund_harmonicweights(long param_1,undefined8 param_2,int param_3,long param_4)

{
  undefined4 uVar1;
  
  uVar1 = atom_getfloatarg(0,param_3,param_4);
  *(undefined4 *)(param_1 + 0x90) = uVar1;
  uVar1 = atom_getfloatarg(1,param_3,param_4);
  *(undefined4 *)(param_1 + 0x94) = uVar1;
  uVar1 = atom_getfloatarg(2,param_3,param_4);
  *(undefined4 *)(param_1 + 0x98) = uVar1;
  uVar1 = atom_getfloatarg(3,param_3,param_4);
  *(undefined4 *)(param_1 + 0x9c) = uVar1;
  uVar1 = atom_getfloatarg(4,param_3,param_4);
  *(undefined4 *)(param_1 + 0xa0) = uVar1;
  uVar1 = atom_getfloatarg(5,param_3,param_4);
  *(undefined4 *)(param_1 + 0xa4) = uVar1;
  uVar1 = atom_getfloatarg(6,param_3,param_4);
  *(undefined4 *)(param_1 + 0xa8) = uVar1;
  uVar1 = atom_getfloatarg(7,param_3,param_4);
  *(undefined4 *)(param_1 + 0xac) = uVar1;
  uVar1 = atom_getfloatarg(8,param_3,param_4);
  *(undefined4 *)(param_1 + 0xb0) = uVar1;
  uVar1 = atom_getfloatarg(9,param_3,param_4);
  *(undefined4 *)(param_1 + 0xb4) = uVar1;
  uVar1 = atom_getfloatarg(10,param_3,param_4);
  *(undefined4 *)(param_1 + 0xb8) = uVar1;
  uVar1 = atom_getfloatarg(0xb,param_3,param_4);
  *(undefined4 *)(param_1 + 0xbc) = uVar1;
  uVar1 = atom_getfloatarg(0xc,param_3,param_4);
  *(undefined4 *)(param_1 + 0xc0) = uVar1;
  uVar1 = atom_getfloatarg(0xd,param_3,param_4);
  *(undefined4 *)(param_1 + 0xc4) = uVar1;
  uVar1 = atom_getfloatarg(0xe,param_3,param_4);
  *(undefined4 *)(param_1 + 200) = uVar1;
  uVar1 = atom_getfloatarg(0xf,param_3,param_4);
  *(undefined4 *)(param_1 + 0xcc) = uVar1;
  *(undefined8 *)(param_1 + 0xd0) = 0xbf800000bf800000;
  return;
}


