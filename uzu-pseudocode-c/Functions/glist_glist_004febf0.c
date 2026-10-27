// Function : glist_glist
// Namespace: 
// Entry    : 004febf0
// Prototype: undefined glist_glist(long * param_1, undefined8 param_2, int param_3, long param_4, uint * param_5, undefined4 * param_6)
// Body     : 004febf0 - 004fed46


void glist_glist(long *param_1,undefined8 param_2,int param_3,long param_4,uint *param_5,
                undefined4 *param_6)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  undefined8 extraout_RDX;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  
  lVar2 = param_4;
  puVar1 = (undefined8 *)atom_getsymbolarg(0,param_3,param_4);
  uVar5 = atom_getfloatarg(1,param_3,param_4);
  uVar6 = atom_getfloatarg(2,param_3,param_4);
  uVar7 = atom_getfloatarg(3,param_3,param_4);
  uVar8 = atom_getfloatarg(4,param_3,param_4);
  uVar9 = atom_getfloatarg(5,param_3,param_4);
  uVar10 = atom_getfloatarg(6,param_3,param_4);
  uVar11 = atom_getfloatarg(7,param_3,param_4);
  uVar12 = atom_getfloatarg(8,param_3,param_4);
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = extraout_XMM0_Db;
  glist_addglist((ulong)uVar5,(ulong)uVar6,(ulong)uVar7,(ulong)uVar8,(ulong)uVar9,(ulong)uVar10,
                 (ulong)uVar11,CONCAT44(extraout_XMM0_Db,uVar12),param_1,puVar1,extraout_RDX,lVar2,
                 param_5,param_6);
  lVar2 = glist_getcanvas((long)param_1);
  if (*(int *)(*(long *)(lVar2 + 0xf0) + 0x18) == 0) {
    lVar2 = glist_getcanvas((long)param_1);
    lVar3 = glist_getcanvas((long)param_1);
    piVar4 = canvas_undo_set_create
                       (CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da),CONCAT44(uVar13,uVar6),
                        CONCAT44(uVar14,uVar7),CONCAT44(uVar15,uVar8),CONCAT44(uVar16,uVar9),
                        CONCAT44(uVar17,uVar10),CONCAT44(uVar18,uVar11),CONCAT44(uVar19,uVar12),
                        lVar3);
    canvas_undo_add(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_00),CONCAT44(uVar13,uVar6),
                    CONCAT44(uVar14,uVar7),CONCAT44(uVar15,uVar8),CONCAT44(uVar16,uVar9),
                    CONCAT44(uVar17,uVar10),CONCAT44(uVar18,uVar11),CONCAT44(uVar19,uVar12),lVar2,9,
                    "create",piVar4,param_5,param_6);
    return;
  }
  return;
}


