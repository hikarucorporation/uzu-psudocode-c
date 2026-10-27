// Function : loop_new
// Namespace: 
// Entry    : 005638b0
// Prototype: long * loop_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, ulong param_10, int * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005638b0 - 00563b56


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * loop_new(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,ulong param_10,int *param_11,undefined8 param_12,char *param_13,
               undefined8 param_14)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 uVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 uVar14;
  undefined4 uVar15;
  float local_6c;
  undefined8 local_58;
  
  uVar8 = param_10 & 0xffffffff;
  plVar2 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,loop_class,
                  param_10,param_11,param_12,param_13,param_14);
  lVar1 = _UNK_0065ada8;
  plVar2[10] = _DAT_0065ada0;
  plVar2[0xb] = lVar1;
  plVar2[0xc] = 0;
  plVar2[0xd] = 0;
  if ((int)param_10 < 1) {
    *(undefined4 *)(plVar2 + 7) = 0;
    local_6c = DAT_005d9038;
    param_3 = (ulong)(uint)DAT_005d9038;
    fVar10 = 0.0;
    local_58 = 0;
    *(float *)(plVar2 + 9) = DAT_005d9038;
    lVar1 = plVar2[10];
  }
  else {
    fVar12 = 0.0;
    local_6c = DAT_005d9038;
    iVar9 = 0;
    fVar10 = 0.0;
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = 0;
    local_58 = 0;
    uVar6 = extraout_RDX;
    do {
      while( true ) {
        iVar7 = (int)uVar8;
        if (*param_11 != 1) break;
        fVar11 = (float)atom_getfloatarg(0,iVar7,(long)param_11);
        if (iVar9 == 2) {
          local_6c = fVar11;
LAB_00563926:
        }
        else {
          if (iVar9 != 1) {
            if (iVar9 == 0) {
              local_58 = CONCAT44(extraout_XMM0_Db,fVar11);
            }
            goto LAB_00563926;
          }
          plVar2[10] = 0;
          fVar10 = fVar11;
          uVar13 = extraout_XMM0_Db;
        }
        iVar9 = iVar9 + 1;
        uVar6 = extraout_RDX_00;
LAB_0056392f:
        param_12 = 0xffffffff;
        param_11 = param_11 + 4;
        uVar8 = (ulong)(iVar7 - 1U);
        if (iVar7 - 1U == 0 || iVar7 < 1) goto LAB_00563a3d;
      }
      if ((*param_11 != 2) || (iVar9 != 0)) {
LAB_00563b32:
        pd_error(CONCAT44(uVar13,fVar10),CONCAT44(uVar15,uVar14),param_3,param_4,param_5,param_6,
                 param_7,param_8,(long)plVar2,"[loop]: improper args",uVar6,param_12,param_13,
                 param_14);
        return (long *)0x0;
      }
      puVar5 = (undefined8 *)atom_getsymbolarg(0,iVar7,(long)param_11);
      puVar3 = gensym("-offset");
      if (puVar5 != puVar3) {
        puVar3 = gensym("-step");
        if (puVar5 == puVar3) {
          local_6c = (float)atom_getfloatarg(0,iVar7,(long)(param_11 + 4));
          uVar6 = extraout_RDX_03;
          goto LAB_00563a1f;
        }
        puVar3 = gensym("-b");
        uVar6 = extraout_RDX_01;
        if (puVar5 != puVar3) goto LAB_00563b32;
        plVar2[0xd] = 1;
        iVar9 = 0;
        goto LAB_0056392f;
      }
      fVar12 = (float)atom_getfloatarg(0,iVar7,(long)(param_11 + 4));
      uVar6 = extraout_RDX_02;
LAB_00563a1f:
      iVar9 = 0;
      param_12 = 0xfffffffe;
      param_11 = param_11 + 8;
      uVar8 = (ulong)(iVar7 - 2U);
    } while (iVar7 - 2U != 0 && 1 < iVar7);
LAB_00563a3d:
    *(float *)(plVar2 + 7) = (float)(int)fVar12;
    if (local_6c <= 0.0) {
      pd_error(0,(ulong)(uint)local_6c,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar2,
               "[loop]: step needs to be > 0 - set to default (1)",uVar6,param_12,param_13,param_14)
      ;
      local_6c = DAT_005d9038;
    }
    *(float *)(plVar2 + 9) = local_6c;
    lVar1 = plVar2[10];
  }
  if (lVar1 == 0) {
    local_58._4_4_ = (undefined4)((ulong)local_58 >> 0x20);
    *(float *)(plVar2 + 6) = (float)local_58;
    plVar2[0xb] = (ulong)((float)local_58 < fVar10);
  }
  else {
    local_58._4_4_ = 0;
    if ((float)local_58 <= DAT_005d9038) {
      local_58._0_4_ = DAT_005d9038;
    }
    fVar10 = (float)((int)(float)local_58 + -1);
    local_58._0_4_ = local_6c;
  }
  *(float *)((long)plVar2 + 0x34) = fVar10;
  plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar1 = *plVar4;
  puVar5 = gensym("set");
  inlet_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da),CONCAT44(local_58._4_4_,(float)local_58),
            param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar2,(long)plVar2,lVar1 + 0x78,
            (long)puVar5,param_13,param_14);
  outlet_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_00),
             CONCAT44(local_58._4_4_,(float)local_58),param_3,param_4,param_5,param_6,param_7,
             param_8,(long)plVar2,0,extraout_RDX_04,puVar5,param_13,param_14);
  return plVar2;
}


