// Function : array_getcoordinate
// Namespace: 
// Entry    : 004fa680
// Prototype: undefined array_getcoordinate(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, long param_8, long param_9, uint param_10, ulong param_11, ulong param_12, undefined8 param_13, long param_14, long param_15, long param_16, float * param_17, float * param_18, undefined4 * param_19)
// Body     : 004fa680 - 004fa7f5


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void array_getcoordinate(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                        undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                        long param_9,uint param_10,ulong param_11,ulong param_12,undefined8 param_13
                        ,long param_14,long param_15,long param_16,float *param_17,float *param_18,
                        undefined4 *param_19)

{
  uint uVar1;
  ulong uVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  long lVar3;
  int iVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint extraout_XMM0_Db;
  uint extraout_XMM0_Db_00;
  uint extraout_XMM0_Dc;
  uint extraout_XMM0_Dd;
  float fVar9;
  uint uVar10;
  uint uVar11;
  undefined1 in_XMM3 [16];
  undefined1 local_58 [16];
  
  fVar9 = (float)param_2;
  iVar4 = (int)param_12;
  uVar5 = param_12 & 0xffffffff;
  if ((int)param_10 < 0) {
    fVar6 = (float)(int)param_13 * (float)param_3;
  }
  else {
    fVar6 = *(float *)(param_9 + (ulong)param_10);
  }
  if ((int)param_11 < 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(uint *)(param_9 + (param_11 & 0xffffffff));
  }
  lVar3 = param_9;
  uVar2 = fielddesc_cvttocoord((ulong)uVar11,param_15);
  fVar7 = glist_ytopixels(CONCAT44((int)(uVar2 >> 0x20),(float)uVar2 + fVar9),param_2,param_3,
                          in_XMM3._0_8_,param_4,param_5,param_6,param_7,param_8,lVar3,
                          CONCAT44(extraout_var,extraout_EDX),param_11,(char *)param_12,param_13);
  if (iVar4 < 0) {
    local_58 = ZEXT416(DAT_005d9038);
    fVar9 = fVar7;
    uVar11 = extraout_XMM0_Db;
  }
  else {
    uVar1 = *(uint *)(param_9 + uVar5);
    fVar8 = fVar7;
    uVar10 = extraout_XMM0_Db;
    uVar5 = fielddesc_cvttocoord((ulong)uVar11,param_15);
    uVar2 = fielddesc_cvttocoord((ulong)uVar1,param_16);
    fVar8 = glist_ytopixels(CONCAT44((int)(uVar2 >> 0x20),(float)uVar2 + (float)uVar5 + fVar9),
                            CONCAT44(uVar10,fVar8),param_3,in_XMM3._0_8_,param_4,param_5,param_6,
                            param_7,param_8,lVar3,CONCAT44(extraout_var_00,extraout_EDX_00),param_11
                            ,(char *)param_12,param_13);
    fVar8 = fVar8 - fVar7;
    param_3 = 0;
    fVar9 = (float)((_DAT_006524b0 ^ (uint)fVar8) & -(uint)(fVar8 < 0.0));
    uVar11 = (_UNK_006524b4 ^ extraout_XMM0_Db_00) & extraout_XMM0_Db_00;
    in_XMM3._4_4_ = uVar11;
    in_XMM3._0_4_ = fVar9;
    in_XMM3._8_4_ = (_UNK_006524b8 ^ extraout_XMM0_Dc) & extraout_XMM0_Dc;
    in_XMM3._12_4_ = (_UNK_006524bc ^ extraout_XMM0_Dd) & extraout_XMM0_Dd;
    in_XMM3 = ZEXT416(~-(uint)(fVar8 < 0.0) & (uint)fVar8) | in_XMM3;
    local_58 = in_XMM3;
  }
  uVar5 = fielddesc_cvttocoord((ulong)(uint)fVar6,param_14);
  fVar9 = glist_xtopixels(CONCAT44((int)(uVar5 >> 0x20),(float)uVar5 + param_1),
                          CONCAT44(uVar11,fVar9),param_3,in_XMM3._0_8_,param_4,param_5,param_6,
                          param_7,param_8,lVar3,CONCAT44(extraout_var_01,extraout_EDX_01),param_11,
                          (char *)param_12,param_13);
  *param_17 = fVar9;
  *param_18 = fVar7;
  *param_19 = local_58._0_4_;
  return;
}


