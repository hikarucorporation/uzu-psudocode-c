// Function : tryconnect
// Namespace: 
// Entry    : 00512e20
// Prototype: undefined8 tryconnect(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10, int param_11, long * param_12, int param_13)
// Body     : 00512e20 - 005130a1


undefined8
tryconnect(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
          long *param_10,int param_11,long *param_12,int param_13)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined7 extraout_var;
  undefined8 *puVar4;
  int *piVar5;
  undefined8 extraout_RDX;
  char *pcVar6;
  char *pcVar7;
  ulong uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  uint local_108;
  uint local_104 [7];
  undefined8 local_e8;
  ulong local_e0;
  ulong local_d8;
  long *local_d0;
  char *local_c8;
  undefined *local_c0;
  char local_b8 [136];
  
  bVar1 = canconnect(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     param_10,param_11,param_12,param_13);
  uVar10 = 0;
  if (((int)CONCAT71(extraout_var,bVar1) != 0) &&
     (puVar4 = obj_connect(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                           param_5,param_6,param_7,param_8,(long)param_10,param_11,param_12,param_13
                          ), puVar4 != (undefined8 *)0x0)) {
    iVar9 = *(int *)(param_9 + 0xec);
    local_104[4] = 0;
    local_104[3] = 0;
    local_104[2] = 0;
    local_104[1] = 0;
    local_104[6] = 0;
    local_104[0] = 0;
    local_108 = 0;
    local_104[5] = 0;
    local_c8 = local_b8;
    local_c0 = &DAT_006541a7;
    sprintf(local_c8,"l%p",puVar4);
    gobj_getrect(param_10,param_9,local_104 + 4,local_104 + 6,local_104 + 3,local_104);
    gobj_getrect(param_12,param_9,local_104 + 2,&local_108,local_104 + 1,local_104 + 5);
    iVar2 = obj_noutlets((long)param_10);
    local_d0 = param_12;
    obj_ninlets(param_12);
    iVar3 = 0;
    if (1 < iVar2) {
      iVar3 = (int)(((iVar9 * -7 - local_104[4]) + local_104[3]) * param_11) / (iVar2 + -1);
    }
    iVar9 = local_104[4] + iVar9 * 3;
    local_d8 = (ulong)local_104[0];
    local_e0 = (ulong)local_108;
    local_e8 = glist_getcanvas(param_9);
    obj_issignaloutlet((long)param_10,param_11);
    pcVar7 = "line";
    uVar8 = (ulong)(uint)(iVar9 + iVar3);
    pdgui_vmess(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
                param_6,param_7,param_8,0,"crr iiii ri rS",local_e8,"create","line",uVar8,
                (char)local_d8);
    iVar9 = canvas_getindex(param_9,(long)param_10);
    iVar2 = canvas_getindex(param_9,(long)local_d0);
    piVar5 = getbytes(0x10);
    *piVar5 = iVar9;
    piVar5[1] = param_11;
    piVar5[2] = iVar2;
    piVar5[3] = param_13;
    uVar10 = 1;
    pcVar6 = (char *)0x1;
    canvas_undo_add(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,
                    param_5,param_6,param_7,param_8,param_9,1,"connect",piVar5,pcVar7,uVar8);
    canvas_dirty(DAT_005d9038,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,pcVar6
                 ,extraout_RDX,piVar5,pcVar7,uVar8);
  }
  return uVar10;
}


