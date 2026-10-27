// Function : canvas_pop
// Namespace: 
// Entry    : 004fd990
// Prototype: undefined canvas_pop(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, char * param_10, undefined8 param_11, undefined * param_12, char * param_13, undefined * param_14)
// Body     : 004fd990 - 004fda2e


void canvas_pop(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long *param_9,char *param_10,undefined8 param_11,undefined *param_12,char *param_13,
               undefined *param_14)

{
  code *pcVar1;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  ulong uVar2;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 in_stack_ffffffffffffffe8;
  
  uVar2 = param_1;
  if (((*(ushort *)(param_9 + 0x1d) & 0x101) != 0x100) && (*(int *)PTR_sys_zoom_open_007158d0 == 2))
  {
    param_10 = (char *)gensym("zoom");
    pcVar1 = (code *)zgetfn(param_9,(long)param_10);
    uVar2 = param_1 & 0xffffffff;
    param_11 = extraout_RDX;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(DAT_005d9078,param_9);
      uVar2 = param_1 & 0xffffffff;
      param_11 = extraout_RDX_00;
    }
  }
  uVar3 = 0;
  uVar4 = 0;
  if ((float)uVar2 != 0.0) {
    uVar2 = canvas_vis((ulong)DAT_005d9038,0,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                       ,param_10,param_11,param_12,param_13,param_14,in_stack_ffffffffffffffe8);
    param_11 = extraout_RDX_01;
  }
  pd_popsym(uVar2,CONCAT44(uVar4,uVar3),param_3,param_4,param_5,param_6,param_7,param_8,
            (long)param_9,param_10,param_11,param_12,param_13,param_14,in_stack_ffffffffffffffe8);
  canvas_resortinlets(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),CONCAT44(uVar4,uVar3),param_3,
                      param_4,param_5,param_6,param_7,param_8,param_9);
  canvas_resortoutlets
            (CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),CONCAT44(uVar4,uVar3),param_3,param_4
             ,param_5,param_6,param_7,param_8,param_9);
  *(byte *)(param_9 + 0x1d) = *(byte *)(param_9 + 0x1d) & 0xf7;
  return;
}


