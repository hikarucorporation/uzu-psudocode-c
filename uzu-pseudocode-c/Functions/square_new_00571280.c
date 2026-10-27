// Function : square_new
// Namespace: 
// Entry    : 00571280
// Prototype: long * square_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, ulong param_10, int * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00571280 - 005715ac


long * square_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,ulong param_10,int *param_11,undefined8 param_12,char *param_13,
                 undefined8 param_14)

{
  int *piVar1;
  long *plVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long extraout_RAX;
  undefined8 extraout_RDX;
  uint uVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  undefined4 extraout_XMM0_Da;
  int iVar13;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined8 uVar14;
  undefined4 extraout_XMM0_Db_01;
  
  uVar12 = param_10 & 0xffffffff;
  plVar2 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,square_class,
                  param_10,param_11,param_12,param_13,param_14);
  plVar2[0x14] = param_9;
  plVar2[0xf] = 0;
  plVar2[0x10] = 0;
  pvVar3 = getbytes(8);
  plVar2[0x11] = (long)pvVar3;
  pvVar3 = getbytes(8);
  plVar2[6] = (long)pvVar3;
  puVar4 = getbytes(8);
  plVar2[7] = (long)puVar4;
  puVar5 = malloc(0x1000);
  plVar2[0x12] = (long)puVar5;
  *puVar4 = 0;
  *(undefined8 *)plVar2[6] = 0;
  *puVar5 = 0;
  plVar2[0x13] = 1;
  if ((int)param_10 != 0) {
    do {
      while( true ) {
        iVar11 = (int)uVar12;
        if (*param_11 != 2) {
          if ((((*param_11 == 1) && (*(int *)plVar2[0x12] = param_11[2], iVar11 != 1)) &&
              (param_11[4] == 1)) && ((iVar11 != 2 && (param_11[8] == 1)))) {
            *(double *)plVar2[6] = (double)(float)param_11[10];
          }
          goto LAB_005714ba;
        }
        puVar4 = (undefined8 *)atom_getsymbol(param_11);
        puVar6 = gensym("-midi");
        if (puVar4 != puVar6) break;
        plVar2[0xf] = 1;
LAB_0057135c:
        uVar12 = (ulong)(iVar11 - 1U);
        param_11 = param_11 + 4;
        if (iVar11 - 1U == 0) goto LAB_005714ba;
      }
      puVar4 = (undefined8 *)atom_getsymbol(param_11);
      puVar6 = gensym("-soft");
      if (puVar4 == puVar6) {
        plVar2[0x10] = 1;
        goto LAB_0057135c;
      }
      puVar4 = (undefined8 *)atom_getsymbol(param_11);
      puVar6 = gensym("-mc");
      if (((puVar4 != puVar6) || (uVar9 = iVar11 - 1, uVar9 == 0)) || (param_11[4] != 1)) {
        post(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
             param_7,param_8,"[square~]: improper args");
        return (long *)0x0;
      }
      lVar10 = 0;
      piVar1 = param_11 + 8;
      do {
        param_11 = piVar1;
        iVar13 = atom_getfloat(param_11 + -4);
        *(int *)(plVar2[0x12] + lVar10 * 4) = iVar13;
        if (iVar11 + -2 == (int)lVar10) {
          uVar12 = 0;
          goto LAB_00571453;
        }
        lVar10 = lVar10 + 1;
        piVar1 = param_11 + 4;
      } while (*param_11 == 1);
      uVar12 = (ulong)(uVar9 - (uint)lVar10);
      uVar9 = (uint)lVar10;
LAB_00571453:
      plVar2[0x13] = (ulong)uVar9;
    } while ((int)uVar12 != 0);
  }
LAB_005714ba:
  plVar7 = (long *)__tls_get_addr(&PTR_007159b0);
  plVar8 = inlet_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,(long)plVar2,(long)plVar2,*plVar7 + 0xf0,
                     *plVar7 + 0xf0,param_13,param_14);
  plVar2[0x15] = (long)plVar8;
  uVar14 = pd_float(plVar8);
  plVar8 = inlet_new(uVar14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar2,
                     (long)plVar2,*plVar7 + 0xf0,*plVar7 + 0xf0,param_13,param_14);
  plVar2[0x17] = (long)plVar8;
  uVar14 = pd_float(plVar8);
  plVar8 = inlet_new(uVar14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar2,
                     (long)plVar2,*plVar7 + 0xf0,*plVar7 + 0xf0,param_13,param_14);
  plVar2[0x16] = (long)plVar8;
  lVar10 = plVar2[6];
  uVar14 = pd_float(plVar8);
  plVar7 = outlet_new(uVar14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar2,
                      *plVar7 + 0xf0,extraout_RDX,lVar10,param_13,param_14);
  plVar2[0x18] = (long)plVar7;
  canvas_getcurrent(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,
                    param_5,param_6,param_7,param_8);
  plVar2[0x1a] = extraout_RAX;
  puVar5 = obj_findsignalscalar(plVar2,2);
  plVar2[0x1b] = (long)puVar5;
  return plVar2;
}


