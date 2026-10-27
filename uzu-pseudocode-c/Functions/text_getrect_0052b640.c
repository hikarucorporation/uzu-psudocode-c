// Function : text_getrect
// Namespace: 
// Entry    : 0052b640
// Prototype: undefined text_getrect(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, int * param_11, int * param_12, int * param_13, int * param_14)
// Body     : 0052b640 - 0052b7a8


void text_getrect(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,long param_10,int *param_11,int *param_12,int *param_13,int *param_14)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  int *piVar7;
  int *extraout_RDX;
  undefined8 extraout_RDX_00;
  int *extraout_RDX_01;
  int *extraout_RDX_02;
  int *piVar8;
  undefined8 extraout_RDX_03;
  long lVar9;
  int *piVar10;
  int *piVar11;
  byte bVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  float fVar13;
  
  bVar12 = *(byte *)(param_9 + 0x2e) & 3;
  piVar7 = param_12;
  piVar10 = param_13;
  piVar11 = param_14;
  if ((*(long *)(param_10 + 0xc0) == 0) || (*(long *)(*(long *)(param_10 + 0xc0) + 0x18) == 0)) {
    iVar3 = 10;
    piVar8 = param_11;
    if (bVar12 == 3) {
      uVar1 = *(ushort *)(param_9 + 0x2c);
      uVar2 = 10;
      if (0 < (short)uVar1) {
        lVar9 = param_10;
        iVar4 = glist_fontwidth(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                param_10,param_10,param_11,param_12,(char *)param_13,param_14);
        iVar4 = iVar4 * (uint)uVar1;
        iVar3 = glist_fontheight(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,
                                 param_4,param_5,param_6,param_7,param_8,param_10,lVar9,
                                 extraout_RDX_00,piVar7,(char *)piVar10,piVar11);
        iVar5 = glist_getzoom(param_10);
        param_1 = CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02);
        if (iVar5 < 2) {
          uVar2 = iVar4 + 2;
          iVar3 = iVar3 + 4;
          piVar8 = extraout_RDX_01;
        }
        else {
          iVar5 = glist_getzoom(param_10);
          uVar2 = iVar4 + iVar5 * 2;
          iVar4 = glist_getzoom(param_10);
          param_1 = CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03);
          iVar3 = iVar3 + iVar4 * 4;
          piVar8 = extraout_RDX_02;
        }
      }
    }
    else {
      uVar2 = 10;
    }
  }
  else {
    plVar6 = (long *)glist_findrtext(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                                     ,param_10,param_9,param_11,param_12,(char *)param_13,param_14);
    uVar2 = rtext_width(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                        param_6,param_7,param_8,plVar6);
    iVar3 = rtext_height(plVar6);
    param_1 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
    iVar3 = iVar3 + (uint)(bVar12 != 0) * 2 + -2;
    piVar8 = extraout_RDX;
  }
  iVar4 = text_xpix(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10
                    ,piVar8,piVar7,(char *)piVar10,piVar11);
  iVar5 = text_ypix(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04),param_2,param_3,param_4,
                    param_5,param_6,param_7,param_8,param_9,param_10,extraout_RDX_03,piVar7,
                    (char *)piVar10,piVar11);
  if (bVar12 == 0) {
    fVar13 = DAT_005d9038;
  }
  else {
    fVar13 = 0.0;
  }
  *param_11 = (int)(float)iVar4;
  *param_12 = (int)((float)iVar5 + fVar13);
  *param_13 = (int)((float)(int)uVar2 + (float)iVar4);
  *param_14 = (int)((float)iVar3 + (float)iVar5);
  return;
}


