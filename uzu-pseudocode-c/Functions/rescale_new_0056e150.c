// Function : rescale_new
// Namespace: 
// Entry    : 0056e150
// Prototype: long * rescale_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, ulong param_10, int * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0056e150 - 0056e371


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * rescale_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,ulong param_10,int *param_11,undefined8 param_12,char *param_13
                  ,undefined8 param_14)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar7;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined8 extraout_RDX_07;
  undefined8 extraout_RDX_08;
  undefined8 extraout_RDX_09;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  int extraout_XMM0_Da;
  int extraout_XMM0_Da_00;
  int extraout_XMM0_Da_01;
  int extraout_XMM0_Da_02;
  int iVar11;
  int extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  undefined4 extraout_XMM0_Db_07;
  undefined4 extraout_XMM0_Db_08;
  undefined4 extraout_XMM0_Db_09;
  undefined4 extraout_XMM0_Db_10;
  
  uVar9 = param_10 & 0xffffffff;
  plVar3 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,rescale_class,
                  param_10,param_11,param_12,param_13,param_14);
  uVar2 = _UNK_0065aa8c;
  uVar1 = _UNK_0065aa88;
  uVar12 = _UNK_0065aa84;
  iVar11 = _DAT_0065aa80;
  *(int *)((long)plVar3 + 0x44) = _DAT_0065aa80;
  *(undefined4 *)(plVar3 + 9) = uVar12;
  *(undefined4 *)((long)plVar3 + 0x4c) = uVar1;
  *(undefined4 *)(plVar3 + 10) = uVar2;
  *(undefined4 *)((long)plVar3 + 0x54) = 0;
  *(undefined4 *)(plVar3 + 8) = 0;
  plVar3[7] = 1;
  uVar7 = extraout_RDX;
  if ((int)param_10 != 0) {
    lVar10 = 0;
    do {
      uVar8 = (uint)uVar9;
      if (*param_11 == 2) {
        puVar4 = (undefined8 *)atom_getsymbol(param_11);
        puVar5 = gensym("-noclip");
        if ((puVar4 == puVar5) && (lVar10 == 0)) {
          *(undefined4 *)(plVar3 + 7) = 0;
          lVar10 = 0;
          uVar7 = extraout_RDX_01;
          iVar11 = extraout_XMM0_Da;
          uVar12 = extraout_XMM0_Db_00;
        }
        else {
          puVar5 = gensym("-log");
          if ((puVar4 == puVar5) && (lVar10 == 0)) {
            *(undefined4 *)((long)plVar3 + 0x3c) = 1;
            lVar10 = 0;
            uVar7 = extraout_RDX_03;
            iVar11 = extraout_XMM0_Da_00;
            uVar12 = extraout_XMM0_Db_02;
          }
          else {
            puVar5 = gensym("-rlog");
            if ((puVar4 == puVar5) && (lVar10 == 0)) {
              *(undefined4 *)(plVar3 + 8) = 1;
              lVar10 = 0;
              uVar7 = extraout_RDX_05;
              iVar11 = extraout_XMM0_Da_01;
              uVar12 = extraout_XMM0_Db_04;
            }
            else {
              iVar11 = extraout_XMM0_Da_01;
              uVar12 = extraout_XMM0_Db_04;
              if ((int)uVar8 < 2) {
LAB_0056e35f:
                post(CONCAT44(uVar12,iVar11),param_2,param_3,param_4,param_5,param_6,param_7,param_8
                     ,"[rescale]: improper args");
                return (long *)0x0;
              }
              puVar5 = gensym("-exp");
              if ((puVar4 == puVar5) && (lVar10 == 0)) {
                uVar8 = uVar8 - 1;
                param_11 = param_11 + 4;
                iVar11 = atom_getfloat(param_11);
                *(int *)((long)plVar3 + 0x54) = iVar11;
                lVar10 = 0;
                uVar7 = extraout_RDX_06;
                uVar12 = extraout_XMM0_Db_06;
              }
              else {
                iVar11 = extraout_XMM0_Da_02;
                uVar12 = extraout_XMM0_Db_05;
                if (((uVar8 < 3) ||
                    (puVar5 = gensym("-in"), iVar11 = extraout_XMM0_Da_03,
                    uVar12 = extraout_XMM0_Db_07, puVar4 != puVar5)) || (lVar10 != 0))
                goto LAB_0056e35f;
                iVar11 = atom_getfloat(param_11 + 4);
                *(int *)((long)plVar3 + 0x44) = iVar11;
                uVar8 = uVar8 - 2;
                param_11 = param_11 + 8;
                iVar11 = atom_getfloat(param_11);
                *(int *)(plVar3 + 9) = iVar11;
                lVar10 = 0;
                uVar7 = extraout_RDX_07;
                uVar12 = extraout_XMM0_Db_08;
              }
            }
          }
        }
      }
      else {
        if (lVar10 == 2) {
          iVar11 = atom_getfloat(param_11);
          *(int *)((long)plVar3 + 0x54) = iVar11;
          uVar7 = extraout_RDX_00;
          uVar12 = extraout_XMM0_Db;
        }
        else if (lVar10 == 1) {
          iVar11 = atom_getfloat(param_11);
          *(int *)(plVar3 + 10) = iVar11;
          uVar7 = extraout_RDX_04;
          uVar12 = extraout_XMM0_Db_03;
        }
        else if (lVar10 == 0) {
          iVar11 = atom_getfloat(param_11);
          *(int *)((long)plVar3 + 0x4c) = iVar11;
          uVar7 = extraout_RDX_02;
          uVar12 = extraout_XMM0_Db_01;
        }
        lVar10 = lVar10 + 1;
      }
      param_11 = param_11 + 4;
      uVar9 = (ulong)(uVar8 - 1);
    } while (uVar8 - 1 != 0);
  }
  floatinlet_new(CONCAT44(uVar12,iVar11),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 (long)plVar3,(long)plVar3 + 0x4c,uVar7,param_12,param_13,param_14);
  floatinlet_new(CONCAT44(extraout_XMM0_Db_09,extraout_XMM0_Da_04),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,(long)plVar3,(long)(plVar3 + 10),extraout_RDX_08,param_12,
                 param_13,param_14);
  plVar6 = outlet_new(CONCAT44(extraout_XMM0_Db_10,extraout_XMM0_Da_05),param_2,param_3,param_4,
                      param_5,param_6,param_7,param_8,(long)plVar3,0,extraout_RDX_09,param_12,
                      param_13,param_14);
  plVar3[6] = (long)plVar6;
  return plVar3;
}


