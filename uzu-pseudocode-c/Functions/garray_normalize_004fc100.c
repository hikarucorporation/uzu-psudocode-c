// Function : garray_normalize
// Namespace: 
// Entry    : 004fc100
// Prototype: undefined garray_normalize(undefined8 param_1, undefined8 param_2, double param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, int * param_12, char * param_13, long param_14)
// Body     : 004fc100 - 004fc361


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void garray_normalize(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long param_9,undefined8 param_10,undefined8 param_11,int *param_12,
                     char *param_13,long param_14)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  uint *puVar4;
  long extraout_RAX;
  undefined8 *puVar5;
  undefined8 uVar6;
  int *piVar7;
  long lVar8;
  int *piVar9;
  float *pfVar10;
  char *pcVar11;
  long lVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Db_02;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  double extraout_XMM1_Qa;
  double dVar14;
  float fVar15;
  undefined4 uVar16;
  undefined1 in_stack_ffffffffffffffb8;
  int local_40;
  int local_3c;
  undefined1 local_38 [16];
  char local_20 [8];
  
  local_38._8_4_ = in_XMM0_Dc;
  local_38._0_8_ = param_1;
  local_38._12_4_ = in_XMM0_Dd;
  puVar4 = (uint *)garray_getarray(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                   param_9,param_10,param_11,param_12,param_13,param_14);
  template_findbyname(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                      param_6,param_7,param_8,*(long *)(puVar4 + 4));
  dVar14 = extraout_XMM1_Qa;
  puVar5 = gensym("y");
  piVar7 = &local_40;
  pcVar11 = local_20;
  uVar6 = template_find_field(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),dVar14,param_3,
                              param_4,param_5,param_6,param_7,param_8,extraout_RAX,(long)puVar5,
                              &local_3c,piVar7,pcVar11,param_14);
  if (((int)uVar6 == 0) || (local_40 != 0)) {
    pd_error(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),dVar14,param_3,param_4,param_5,
             param_6,param_7,param_8,0,"%s: needs floating-point \'y\' field",
             **(undefined8 **)(param_9 + 0x28),piVar7,pcVar11,param_14);
  }
  else {
    uVar3 = *puVar4;
    if (0 < (int)uVar3) {
      pcVar11 = (char *)(long)local_3c;
      lVar8 = (long)(int)puVar4[1];
      param_14 = (ulong)uVar3 - 1;
      if (param_14 == 0) {
        piVar9 = (int *)0x0;
        dVar1 = 0.0;
      }
      else {
        piVar7 = (int *)(ulong)(uVar3 & 0xfffffffe);
        pfVar10 = (float *)(*(long *)(puVar4 + 2) + (long)pcVar11 * 4);
        param_3 = 0.0;
        piVar9 = (int *)0x0;
        do {
          dVar14 = (double)*pfVar10;
          if (param_3 <= dVar14) {
            param_3 = dVar14;
          }
          dVar1 = (double)*(float *)((long)pfVar10 + lVar8);
          param_4 = (double)((ulong)dVar14 ^ _DAT_00652d10);
          if ((double)((ulong)dVar14 ^ _DAT_00652d10) <= dVar1) {
            param_4 = dVar1;
          }
          dVar1 = (double)((ulong)dVar1 ^ _DAT_00652d10);
          uVar16 = SUB84(dVar1,0);
          uVar13 = (undefined4)((ulong)dVar1 >> 0x20);
          if (dVar1 <= param_3) {
            uVar16 = SUB84(param_3,0);
            uVar13 = (undefined4)((ulong)param_3 >> 0x20);
          }
          param_3 = (double)CONCAT44(uVar13,uVar16);
          if ((double)CONCAT44(uVar13,uVar16) <= param_4) {
            param_3 = param_4;
          }
          piVar9 = (int *)((long)piVar9 + 2);
          pfVar10 = (float *)((long)pfVar10 + lVar8 * 2);
          dVar1 = param_3;
        } while (piVar7 != piVar9);
      }
      if ((uVar3 & 1) != 0) {
        dVar14 = (double)*(float *)(*(long *)(puVar4 + 2) + (long)piVar9 * lVar8 + (long)pcVar11 * 4
                                   );
        if (dVar1 <= dVar14) {
          dVar1 = dVar14;
        }
        if (dVar1 <= (double)((ulong)dVar14 ^ _DAT_00652d10)) {
          dVar1 = (double)((ulong)dVar14 ^ _DAT_00652d10);
        }
      }
      dVar14 = 0.0;
      if ((0.0 < dVar1) && (0 < (int)uVar3)) {
        param_3 = (double)(ulong)DAT_005d9038;
        fVar15 = (float)(local_38._0_4_ & -(uint)(0.0 < (float)local_38._0_4_));
        uVar16 = 0;
        param_4 = (double)(ulong)(uint)fVar15;
        dVar14 = (double)(float)(~-(uint)(0.0 < (float)local_38._0_4_) & DAT_005d9038 | (uint)fVar15
                                );
        lVar12 = *(long *)(puVar4 + 2);
        if (param_14 == 0) {
          piVar9 = (int *)0x0;
        }
        else {
          piVar7 = (int *)(ulong)(uVar3 & 0xfffffffe);
          param_3 = _DAT_005d9000 / dVar1;
          pfVar10 = (float *)(lVar12 + (long)pcVar11 * 4);
          piVar9 = (int *)0x0;
          do {
            *pfVar10 = (float)((double)*pfVar10 * dVar14 * param_3);
            dVar2 = (double)*(float *)((long)pfVar10 + lVar8) * dVar14 * param_3;
            uVar16 = (undefined4)((ulong)dVar2 >> 0x20);
            fVar15 = (float)dVar2;
            param_4 = (double)CONCAT44(uVar16,fVar15);
            *(float *)((long)pfVar10 + lVar8) = fVar15;
            piVar9 = (int *)((long)piVar9 + 2);
            pfVar10 = (float *)((long)pfVar10 + lVar8 * 2);
          } while (piVar7 != piVar9);
        }
        if ((uVar3 & 1) != 0) {
          param_4 = (double)CONCAT44(uVar16,fVar15);
          lVar12 = lVar12 + (long)piVar9 * lVar8;
          param_3 = ((double)*(float *)(lVar12 + (long)pcVar11 * 4) * dVar14) / dVar1;
          *(float *)(lVar12 + (long)pcVar11 * 4) = (float)param_3;
        }
      }
    }
    uVar3 = glist_isvisible(*(long *)(param_9 + 0x18));
    if (uVar3 == 0) {
      if ((*(byte *)(param_9 + 0x30) & 8) != 0) {
        pdgui_vmess(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),dVar14,param_3,param_4,param_5
                    ,param_6,param_7,param_8,0x653aa2,"s",**(undefined8 **)(param_9 + 0x28),piVar7,
                    pcVar11,param_14,in_stack_ffffffffffffffb8);
      }
    }
    else {
      sys_queuegui(param_9,*(long *)(param_9 + 0x18),0x4fa9e0);
    }
  }
  return;
}


