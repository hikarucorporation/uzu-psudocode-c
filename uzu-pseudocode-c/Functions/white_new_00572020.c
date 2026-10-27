// Function : white_new
// Namespace: 
// Entry    : 00572020
// Prototype: long * white_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, ulong param_10, int * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00572020 - 005721d3


long * white_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                undefined8 param_9,ulong param_10,int *param_11,undefined8 param_12,char *param_13,
                undefined8 param_14)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 extraout_RDX;
  undefined8 uVar10;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  int iVar11;
  ulong uVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  float fVar13;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined8 uVar14;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  int local_48 [2];
  int local_40;
  
  uVar12 = param_10 & 0xffffffff;
  plVar3 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,white_class,
                  param_10,param_11,param_12,param_13,param_14);
  uVar1 = cyrandom_get_id();
  *(uint *)(plVar3 + 8) = uVar1;
  *(undefined4 *)((long)plVar3 + 0x44) = 1;
  uVar9 = (ulong)uVar1;
  uVar4 = cyget_seed(param_9,0,(int *)0x0,uVar1);
  uVar14 = cyrandom_init((uint *)((long)plVar3 + 0x34),(int)uVar4);
  *(undefined4 *)(plVar3 + 6) = 0;
  iVar11 = (int)param_10;
  uVar10 = extraout_RDX;
  while( true ) {
    if (iVar11 == 0) {
      plVar8 = (long *)__tls_get_addr(&PTR_007159b0);
      outlet_new(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,(long)plVar3,*plVar8 + 0xf0,extraout_RDX_05,uVar9,param_13,
                 param_14);
      return plVar3;
    }
    if (*param_11 != 2) break;
    puVar5 = (undefined8 *)atom_getsymbol(param_11);
    puVar6 = gensym("-seed");
    uVar14 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
    iVar11 = (int)uVar12;
    if (puVar5 == puVar6) {
      uVar10 = extraout_RDX_00;
      if (iVar11 < 2) break;
      local_48[0] = 1;
      local_40 = atom_getfloat(param_11 + 4);
      uVar12 = (ulong)(iVar11 - 2);
      param_11 = param_11 + 8;
      uVar9 = (ulong)*(uint *)(plVar3 + 8);
      uVar4 = cyget_seed(param_9,1,local_48,*(uint *)(plVar3 + 8));
      uVar14 = cyrandom_init((uint *)((long)plVar3 + 0x34),(int)uVar4);
      uVar10 = extraout_RDX_04;
    }
    else {
      puVar6 = gensym("-clip");
      uVar14 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
      if (puVar5 == puVar6) {
        *(undefined4 *)(plVar3 + 6) = 1;
        uVar12 = (ulong)(iVar11 - 1);
        param_11 = param_11 + 4;
        uVar10 = extraout_RDX_01;
      }
      else {
        puVar6 = gensym("-ch");
        uVar10 = extraout_RDX_02;
        uVar14 = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
        if ((puVar5 != puVar6) ||
           (uVar14 = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01), iVar11 < 2)) break;
        lVar7 = atom_getint(param_11 + 4);
        iVar2 = (int)lVar7;
        uVar9 = 1;
        if (iVar2 < 1) {
          iVar2 = 1;
        }
        fVar13 = (float)iVar2;
        if ((float)iVar2 <= DAT_005d9038) {
          fVar13 = DAT_005d9038;
        }
        *(int *)((long)plVar3 + 0x44) = (int)fVar13;
        canvas_update_dsp((ulong)(uint)fVar13,param_2,param_3,param_4,param_5,param_6,param_7,
                          param_8);
        uVar14 = CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02);
        uVar12 = (ulong)(iVar11 - 2);
        param_11 = param_11 + 8;
        uVar10 = extraout_RDX_03;
      }
    }
    iVar11 = (int)uVar12;
  }
  pd_error(uVar14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar3,
           "[white~]: improper args",uVar10,uVar9,param_13,param_14);
  return (long *)0x0;
}


