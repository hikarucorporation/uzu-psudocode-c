// Function : slop_tilde_new
// Namespace: 
// Entry    : 00594ea0
// Prototype: long * slop_tilde_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, ulong param_10, long param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00594ea0 - 00594f59


long * slop_tilde_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     undefined8 param_9,ulong param_10,long param_11,undefined8 param_12,
                     char *param_13,undefined8 param_14)

{
  long *plVar1;
  long *plVar2;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  int iVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  *(long *)PTR_slop_tilde_class_00715430,param_10,param_11,param_12,param_13,
                  param_14);
  iVar3 = (int)param_10;
  uVar4 = param_10 & 0xffffffff;
  uVar5 = atom_getfloatarg(0,iVar3,param_11);
  signalinlet_new(uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar1,uVar4,
                  extraout_RDX,param_12,param_13,param_14);
  uVar4 = param_10 & 0xffffffff;
  uVar5 = atom_getfloatarg(1,iVar3,param_11);
  signalinlet_new(uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar1,uVar4,
                  extraout_RDX_00,param_12,param_13,param_14);
  uVar4 = param_10 & 0xffffffff;
  uVar5 = atom_getfloatarg(2,iVar3,param_11);
  signalinlet_new(uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar1,uVar4,
                  extraout_RDX_01,param_12,param_13,param_14);
  uVar4 = param_10 & 0xffffffff;
  uVar5 = atom_getfloatarg(3,iVar3,param_11);
  signalinlet_new(uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar1,uVar4,
                  extraout_RDX_02,param_12,param_13,param_14);
  uVar4 = param_10 & 0xffffffff;
  uVar5 = atom_getfloatarg(4,iVar3,param_11);
  signalinlet_new(uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar1,uVar4,
                  extraout_RDX_03,param_12,param_13,param_14);
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  outlet_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
             param_7,param_8,(long)plVar1,*plVar2 + 0xf0,extraout_RDX_04,param_12,param_13,param_14)
  ;
  *(undefined4 *)((long)plVar1 + 0x34) = 0;
  return plVar1;
}


