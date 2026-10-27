// Function : adsr_new
// Namespace: 
// Entry    : 0056e950
// Prototype: long * adsr_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, ulong param_10, int * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0056e950 - 0056edf0


long * adsr_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,ulong param_10,int *param_11,undefined8 param_12,char *param_13,
               undefined8 param_14)

{
  bool bVar1;
  long *plVar2;
  void *pvVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined4 *puVar9;
  long lVar10;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined8 extraout_RDX_07;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  float extraout_XMM0_Da;
  float fVar14;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  undefined8 uVar15;
  undefined4 extraout_XMM0_Db_07;
  
  uVar13 = param_10 & 0xffffffff;
  plVar2 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,adsr_class,
                  param_10,param_11,param_12,param_13,param_14);
  sys_getsr();
  *(float *)(plVar2 + 0x10) = (float)((double)extraout_XMM0_Da * DAT_00651e50);
  pvVar3 = getbytes(8);
  plVar2[0x11] = (long)pvVar3;
  pvVar3 = getbytes(8);
  plVar2[0x12] = (long)pvVar3;
  pvVar3 = getbytes(8);
  plVar2[0x13] = (long)pvVar3;
  pvVar3 = getbytes(8);
  plVar2[0x14] = (long)pvVar3;
  pvVar3 = getbytes(8);
  plVar2[0x15] = (long)pvVar3;
  pvVar3 = getbytes(4);
  plVar2[0x16] = (long)pvVar3;
  pvVar3 = getbytes(4);
  plVar2[0x17] = (long)pvVar3;
  pvVar3 = getbytes(4);
  plVar2[0x18] = (long)pvVar3;
  pvVar3 = getbytes(4);
  plVar2[0x19] = (long)pvVar3;
  pvVar3 = getbytes(4);
  plVar2[0x1a] = (long)pvVar3;
  pvVar3 = getbytes(4);
  plVar2[0x1c] = (long)pvVar3;
  puVar4 = getbytes(4);
  plVar2[0x1d] = (long)puVar4;
  *(undefined8 *)plVar2[0x15] = 0;
  *(undefined8 *)plVar2[0x14] = 0;
  *(undefined8 *)plVar2[0x13] = 0;
  *(undefined8 *)plVar2[0x12] = 0;
  *(undefined8 *)plVar2[0x11] = 0;
  *(undefined4 *)plVar2[0x16] = 0;
  *(undefined4 *)plVar2[0x18] = 0;
  *(undefined4 *)plVar2[0x17] = 0;
  *(undefined4 *)plVar2[0x1a] = 0;
  puVar9 = (undefined4 *)plVar2[0x19];
  *puVar9 = 0;
  *puVar4 = 0;
  *(undefined4 *)plVar2[0x1c] = 0;
  *(undefined8 *)((long)plVar2 + 0x74) = 0x3f800000;
  plVar2[0x1b] = 0xc0800000;
  plVar2[6] = 0;
  plVar2[7] = 0;
  if (0 < (int)param_10) {
    uVar16 = 0;
    iVar11 = 0;
    bVar1 = false;
    uVar15 = extraout_RDX;
    fVar14 = DAT_0065260c;
    do {
      while( true ) {
        uVar12 = (uint)uVar13;
        if (*param_11 != 1) break;
        fVar14 = (float)atom_getfloatarg(0,uVar12,(long)param_11);
        switch(iVar11) {
        case 0:
          break;
        case 1:
          break;
        case 2:
          break;
        case 3:
          break;
        case 4:
          fVar14 = fVar14 * DAT_0065b5a8;
          *(float *)(plVar2 + 0x1b) = fVar14;
        }
        iVar11 = iVar11 + 1;
        uVar13 = (ulong)(uVar12 - 1);
        param_11 = param_11 + 4;
        uVar15 = extraout_RDX_00;
        uVar16 = extraout_XMM0_Db;
        if ((int)(uVar12 - 1) < 1) goto LAB_0056ece2;
      }
      if (((*param_11 != 2) || (bVar1)) || (iVar11 != 0)) {
LAB_0056edcc:
        pd_error(CONCAT44(uVar16,fVar14),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 (long)plVar2,"[adsr~]: improper args",uVar15,puVar9,param_13,param_14);
        return (long *)0x0;
      }
      puVar5 = (undefined8 *)atom_getsymbolarg(0,uVar12,(long)param_11);
      puVar6 = gensym("-lin");
      if (puVar5 == puVar6) {
        uVar13 = (ulong)(uVar12 - 1);
        param_11 = param_11 + 4;
        *(undefined4 *)(plVar2 + 0x1b) = 0;
        uVar15 = extraout_RDX_01;
        fVar14 = extraout_XMM0_Da_00;
        uVar16 = extraout_XMM0_Db_00;
      }
      else {
        puVar6 = gensym("-lag");
        if (puVar5 == puVar6) {
          uVar13 = (ulong)(uVar12 - 1);
          param_11 = param_11 + 4;
          *(undefined4 *)(plVar2 + 7) = 1;
          uVar15 = extraout_RDX_02;
          fVar14 = extraout_XMM0_Da_01;
          uVar16 = extraout_XMM0_Db_01;
        }
        else {
          puVar6 = gensym("-rel");
          if (puVar5 == puVar6) {
            uVar13 = (ulong)(uVar12 - 1);
            param_11 = param_11 + 4;
            *(undefined4 *)((long)plVar2 + 0x3c) = 1;
            uVar15 = extraout_RDX_03;
            fVar14 = extraout_XMM0_Da_02;
            uVar16 = extraout_XMM0_Db_02;
          }
          else {
            puVar6 = gensym("-curve");
            uVar15 = extraout_RDX_04;
            fVar14 = extraout_XMM0_Da_03;
            uVar16 = extraout_XMM0_Db_03;
            if ((puVar5 != puVar6) || (uVar12 < 2)) goto LAB_0056edcc;
            fVar14 = (float)atom_getfloat(param_11 + 4);
            fVar14 = fVar14 * DAT_0065b5a8;
            *(float *)(plVar2 + 0x1b) = fVar14;
            uVar13 = (ulong)(uVar12 - 2);
            param_11 = param_11 + 8;
            uVar15 = extraout_RDX_05;
            uVar16 = extraout_XMM0_Db_04;
          }
        }
      }
      iVar11 = 0;
      bVar1 = true;
    } while (0 < (int)uVar13);
  }
LAB_0056ece2:
  plVar7 = (long *)__tls_get_addr(&PTR_007159b0);
  inlet_new(CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_04),param_2,param_3,param_4,param_5,
            param_6,param_7,param_8,(long)plVar2,(long)plVar2,*plVar7 + 0xf0,*plVar7 + 0xf0,param_13
            ,param_14);
  plVar8 = inlet_new(CONCAT44(extraout_XMM0_Db_06,extraout_XMM0_Da_05),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,(long)plVar2,(long)plVar2,*plVar7 + 0xf0,
                     *plVar7 + 0xf0,param_13,param_14);
  plVar2[9] = (long)plVar8;
  uVar15 = pd_float(plVar8);
  plVar8 = inlet_new(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar2,
                     (long)plVar2,*plVar7 + 0xf0,*plVar7 + 0xf0,param_13,param_14);
  plVar2[10] = (long)plVar8;
  uVar15 = pd_float(plVar8);
  plVar8 = inlet_new(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar2,
                     (long)plVar2,*plVar7 + 0xf0,*plVar7 + 0xf0,param_13,param_14);
  plVar2[0xb] = (long)plVar8;
  uVar15 = pd_float(plVar8);
  lVar10 = *plVar7 + 0xf0;
  plVar8 = inlet_new(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar2,
                     (long)plVar2,lVar10,lVar10,param_13,param_14);
  plVar2[0xc] = (long)plVar8;
  uVar15 = pd_float(plVar8);
  outlet_new(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar2,
             *plVar7 + 0xf0,extraout_RDX_06,lVar10,param_13,param_14);
  plVar7 = outlet_new(CONCAT44(extraout_XMM0_Db_07,extraout_XMM0_Da_06),param_2,param_3,param_4,
                      param_5,param_6,param_7,param_8,(long)plVar2,*plVar7 + 0x78,extraout_RDX_07,
                      lVar10,param_13,param_14);
  plVar2[0xd] = (long)plVar7;
  return plVar2;
}


