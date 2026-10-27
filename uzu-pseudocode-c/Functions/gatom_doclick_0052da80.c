// Function : gatom_doclick
// Namespace: 
// Entry    : 0052da80
// Prototype: undefined8 gatom_doclick(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 param_10, uint param_11, int * param_12, char * param_13, byte * param_14, int param_15, int param_16)
// Body     : 0052da80 - 0052dd01


undefined8
gatom_doclick(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long *param_9,undefined8 param_10,uint param_11,int *param_12,char *param_13,
             byte *param_14,int param_15,int param_16)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 uVar7;
  uint uVar8;
  char *pcVar9;
  byte *pbVar10;
  float fVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined8 uVar12;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 uVar13;
  undefined4 uVar14;
  int local_50 [2];
  uint local_48;
  int local_3c;
  byte local_38 [4];
  char local_34 [4];
  
  piVar6 = param_12;
  pcVar9 = param_13;
  pbVar10 = param_14;
  lVar4 = gatom_getatom(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        (long)param_9);
  if (param_16 == 0) {
    return 1;
  }
  uVar8 = (uint)param_12;
  plVar5 = (long *)glist_findrtext(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,
                                   param_4,param_5,param_6,param_7,param_8,param_9[7],(long)param_9,
                                   extraout_RDX,piVar6,pcVar9,pbVar10);
  uVar12 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
  if (plVar5 == *(long **)(*(long *)(param_9[7] + 0xc0) + 0x28)) {
    rtext_mouse(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
                param_6,param_7,param_8,plVar5,param_11,uVar8,(uint)(param_15 != 0) * 2 + 1,pcVar9,
                pbVar10);
    *(byte *)(*(long *)(param_9[7] + 0xc0) + 0x88) =
         *(byte *)(*(long *)(param_9[7] + 0xc0) + 0x88) & 0xf8 | 5;
    lVar4 = *(long *)(param_9[7] + 0xc0);
    *(uint *)(lVar4 + 0x68) = param_11;
    *(uint *)(lVar4 + 0x6c) = uVar8;
    return 1;
  }
  if ((int)param_9[6] == 0) {
    iVar2 = binbuf_getnatom((undefined4 *)param_9[2]);
    lVar4 = binbuf_getvec(param_9[2]);
    piVar6 = &local_3c;
    pcVar9 = local_34;
    pbVar10 = local_38;
    uVar12 = gobj_getrect(param_9,param_10,local_50,piVar6,(undefined4 *)pcVar9,
                          (undefined4 *)pbVar10);
    uVar3 = rtext_findatomfor(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5,
                              param_11 - local_50[0],uVar8 - local_3c,piVar6,pcVar9,pbVar10);
    uVar12 = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
    uVar7 = extraout_RDX_01;
    if ((((int)uVar3 < 0) || (iVar2 <= (int)uVar3)) ||
       (piVar6 = (int *)((ulong)uVar3 * 0x10), *(int *)(lVar4 + (long)piVar6) != 1)) {
      *(undefined4 *)(param_9 + 0xe) = 0xffffffff;
      goto LAB_0052dc72;
    }
    *(uint *)(param_9 + 0xe) = uVar3;
    uVar13 = extraout_XMM0_Da_01;
    uVar14 = extraout_XMM0_Db_01;
LAB_0052dc4c:
    uVar12 = CONCAT44(uVar14,uVar13);
    piVar6 = (int *)((ulong)param_13 & 0xffffff01);
    *(byte *)(param_9 + 0xf) = *(byte *)(param_9 + 0xf) & 0xfe | (byte)piVar6;
  }
  else {
    uVar7 = extraout_RDX_00;
    if ((int)param_9[6] != 1) goto LAB_0052dc72;
    if (*(short *)((long)param_9 + 0x2c) == 1) {
      fVar11 = (float)-(uint)(*(float *)(lVar4 + 8) == 0.0);
      local_48 = DAT_005d9038 & (uint)fVar11;
    }
    else {
      if ((int)param_14 == 0) {
        *(undefined4 *)(param_9 + 0xe) = 0;
        uVar13 = extraout_XMM0_Da_00;
        uVar14 = extraout_XMM0_Db_00;
        goto LAB_0052dc4c;
      }
      fVar11 = *(float *)(lVar4 + 8);
      uVar13 = 0;
      uVar14 = 0;
      if (fVar11 == 0.0) {
        uVar12 = gatom_float((ulong)*(uint *)(param_9 + 8),0,param_3,param_4,param_5,param_6,param_7
                             ,param_8,param_9);
        param_2 = CONCAT44(uVar14,uVar13);
        uVar7 = extraout_RDX_03;
        goto LAB_0052dc72;
      }
      *(float *)(param_9 + 8) = fVar11;
      local_48 = 0;
    }
    local_50[0] = 1;
    uVar13 = 0;
    piVar6 = local_50;
    uVar3 = local_48;
    gatom_set((ulong)(uint)fVar11,(ulong)local_48,param_3,param_4,param_5,param_6,param_7,param_8,
              param_9,0,1,piVar6,pcVar9,pbVar10);
    gatom_bang(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),CONCAT44(uVar13,uVar3),param_3,
               param_4,param_5,param_6,param_7,param_8,(long)param_9);
    uVar12 = CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03);
    param_2 = CONCAT44(uVar13,uVar3);
    uVar7 = extraout_RDX_02;
  }
LAB_0052dc72:
  *(byte *)(param_9 + 0xf) = *(byte *)(param_9 + 0xf) & 0xe7 | ((byte)param_15 & 1) << 4 | 8;
  plVar5 = (long *)glist_findrtext(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                   param_9[7],(long)param_9,uVar7,piVar6,pcVar9,pbVar10);
  uVar1 = param_9[7];
  lVar4 = rtext_gettag((long)plVar5);
  rtext_width(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04),param_2,param_3,param_4,param_5,
              param_6,param_7,param_8,plVar5);
  rtext_height(plVar5);
  text_drawborder(CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_05),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,param_9,uVar1,lVar4,piVar6,pcVar9,0);
  glist_grab(param_9[7],param_9,0x52dd10,PTR_gatom_key_007155e8,param_11,uVar8);
  return 1;
}


