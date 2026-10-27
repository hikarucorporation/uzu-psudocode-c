// Function : highshelf_new
// Namespace: 
// Entry    : 00570670
// Prototype: long * highshelf_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, ulong param_10, int * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00570670 - 005709bf


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * highshelf_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,ulong param_10,int *param_11,undefined8 param_12,
                    char *param_13,undefined8 param_14)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  int iVar5;
  ulong uVar6;
  int iVar7;
  float fVar8;
  float extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined8 uVar9;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  float local_68;
  float local_64;
  float local_60;
  double local_48;
  double local_40;
  undefined1 local_38 [16];
  
  uVar6 = param_10 & 0xffffffff;
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,highshelf_class,
                  param_10,param_11,param_12,param_13,param_14);
  if ((int)param_10 < 1) {
    local_60 = 0.0;
    local_64 = DAT_0065ac74;
    local_68 = DAT_005d9068;
  }
  else {
    local_68 = DAT_005d9068;
    local_64 = DAT_0065ac74;
    fVar8 = 0.0;
    uVar10 = 0;
    local_60 = 0.0;
    iVar7 = 0;
    uVar9 = extraout_RDX;
    do {
      while( true ) {
        iVar5 = (int)uVar6;
        if (*param_11 != 1) break;
        fVar8 = (float)atom_getfloatarg(0,iVar5,(long)param_11);
        if (iVar7 == 2) {
          local_60 = fVar8;
        }
        else if (iVar7 == 1) {
          local_64 = fVar8;
        }
        else if (iVar7 == 0) {
          local_68 = fVar8;
        }
        iVar7 = iVar7 + 1;
        uVar6 = (ulong)(iVar5 - 1U);
        param_11 = param_11 + 4;
        uVar9 = extraout_RDX_00;
        uVar10 = extraout_XMM0_Db;
        if ((int)(iVar5 - 1U) < 1) goto LAB_0057073b;
      }
      if (*param_11 == 2) {
        pd_error(CONCAT44(uVar10,fVar8),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 (long)plVar1,"[highshelf~]: improper args",uVar9,param_12,param_13,param_14);
        return (long *)0x0;
      }
    } while (0 < iVar5);
  }
LAB_0057073b:
  sys_getsr();
  fVar8 = extraout_XMM0_Da * DAT_005d9044;
  *(float *)(plVar1 + 0xb) = fVar8;
  plVar1[0x10] = (long)(double)local_68;
  plVar1[0x11] = (long)(double)local_64;
  plVar1[0x12] = (long)(double)local_60;
  dVar11 = exp2((double)local_60 * _DAT_0065b638);
  local_38._8_4_ = extraout_XMM0_Dc;
  local_38._0_8_ = dVar11;
  local_38._12_4_ = extraout_XMM0_Dd;
  sincos(((double)local_68 * DAT_00652e70) / (double)fVar8,&local_40,&local_48);
  dVar12 = (double)local_38._0_8_ + _DAT_005d9000;
  local_40 = local_40 *
             SQRT((double)local_38._0_8_ + (double)local_38._0_8_ +
                  (_DAT_005d9000 / (double)local_64 + DAT_00651e70) *
                  ((double)local_38._0_8_ * (double)local_38._0_8_ + _DAT_005d9000));
  dVar14 = DAT_0065b188 + (double)local_38._0_8_;
  dVar19 = dVar12 - dVar14 * local_48;
  dVar16 = dVar14 * local_48 + dVar12;
  dVar18 = dVar19 + local_40;
  dVar15 = DAT_0065b138 * (double)local_38._0_8_;
  dVar17 = dVar16 + local_40;
  dVar11 = _DAT_005d9000 / dVar18;
  dVar13 = (double)local_38._0_8_ * dVar17 * dVar11;
  plVar1[0x13] = (long)dVar13;
  plVar1[0x14] = (long)(dVar15 * (dVar12 * local_48 + dVar14) * dVar11);
  dVar16 = dVar16 - local_40;
  dVar14 = DAT_0065ac98 * (dVar14 - dVar12 * local_48);
  dVar12 = (double)local_38._0_8_ * dVar16 * dVar11;
  plVar1[0x15] = (long)dVar12;
  plVar1[0x16] = (long)(dVar14 * dVar11);
  dVar11 = (local_40 - dVar19) / dVar18;
  plVar1[0x17] = (long)dVar11;
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  plVar3 = inlet_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),dVar11,dVar12,dVar13,dVar15,
                     dVar16,dVar17,dVar18,(long)plVar1,(long)plVar1,*plVar2 + 0xf0,*plVar2 + 0xf0,
                     param_13,param_14);
  plVar1[7] = (long)plVar3;
  uVar9 = pd_float(plVar3);
  plVar3 = inlet_new(uVar9,dVar11,dVar12,dVar13,dVar15,dVar16,dVar17,dVar18,(long)plVar1,
                     (long)plVar1,*plVar2 + 0xf0,*plVar2 + 0xf0,param_13,param_14);
  plVar1[8] = (long)plVar3;
  uVar9 = pd_float(plVar3);
  lVar4 = *plVar2 + 0xf0;
  plVar3 = inlet_new(uVar9,dVar11,dVar12,dVar13,dVar15,dVar16,dVar17,dVar18,(long)plVar1,
                     (long)plVar1,lVar4,lVar4,param_13,param_14);
  plVar1[9] = (long)plVar3;
  uVar9 = pd_float(plVar3);
  plVar2 = outlet_new(uVar9,dVar11,dVar12,dVar13,dVar15,dVar16,dVar17,dVar18,(long)plVar1,
                      *plVar2 + 0xf0,extraout_RDX_01,lVar4,param_13,param_14);
  plVar1[10] = (long)plVar2;
  return plVar1;
}


