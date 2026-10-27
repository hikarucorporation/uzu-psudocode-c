// Function : round_tilde_new
// Namespace: 
// Entry    : 00560000
// Prototype: long * round_tilde_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, ulong param_10, uint * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00560000 - 005601c8


long * round_tilde_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      undefined8 param_9,ulong param_10,uint *param_11,undefined8 param_12,
                      char *param_13,undefined8 param_14)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  int iVar8;
  ulong uVar9;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar10;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  undefined4 uVar15;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  
  uVar13 = param_10 & 0xffffffff;
  plVar5 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,round_tilde_class,
                  param_10,param_11,param_12,param_13,param_14);
  *(undefined4 *)(plVar5 + 6) = 0x3f800000;
  uVar15 = 0;
  uVar16 = 0;
  if (0 < (int)param_10) {
    bVar1 = false;
    bVar2 = false;
    uVar10 = extraout_RDX;
    do {
      uVar11 = *param_11;
      uVar9 = (ulong)uVar11;
      uVar12 = (uint)uVar13;
      if (uVar11 == 2) {
        puVar7 = (undefined8 *)atom_getsymbolarg(0,uVar12,(long)param_11);
        iVar4 = strcmp((char *)*puVar7,"@nearest");
        uVar10 = extraout_RDX_02;
        uVar15 = extraout_XMM0_Da;
        uVar16 = extraout_XMM0_Db_01;
        if ((iVar4 != 0) || (uVar12 < 2)) {
LAB_0056014a:
          pd_error(CONCAT44(uVar16,uVar15),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   (long)plVar5,"round~: improper args",uVar10,uVar9,param_13,param_14);
          return (long *)0x0;
        }
        lVar14 = atom_getsymbolarg(1,uVar12,(long)param_11);
        plVar6 = (long *)__tls_get_addr(&PTR_007159b0);
        uVar9 = 0x168;
        uVar10 = extraout_RDX_03;
        uVar15 = extraout_XMM0_Da_00;
        uVar16 = extraout_XMM0_Db_02;
        if (lVar14 != *plVar6 + 0x168) goto LAB_0056014a;
        uVar15 = atom_getfloatarg(1,uVar12,(long)param_11);
        *(undefined4 *)(plVar5 + 6) = uVar15;
        lVar14 = 2;
        uVar10 = extraout_RDX_00;
        uVar16 = extraout_XMM0_Db;
        iVar4 = -2;
LAB_0056007a:
        iVar8 = iVar4;
        bVar1 = true;
      }
      else {
        if (uVar11 != 1) goto LAB_0056014a;
        lVar14 = 1;
        iVar8 = -1;
        iVar4 = -1;
        if (bVar1) goto LAB_0056007a;
        bVar1 = false;
        bVar3 = !bVar2;
        bVar2 = true;
        if (bVar3) {
          bVar1 = false;
          uVar15 = atom_getfloatarg(0,uVar12,(long)param_11);
          iVar8 = -1;
          uVar10 = extraout_RDX_01;
          uVar16 = extraout_XMM0_Db_00;
        }
      }
      param_11 = param_11 + lVar14 * 4;
      uVar11 = uVar12 + iVar8;
      uVar13 = (ulong)uVar11;
    } while (uVar11 != 0 && SCARRY4(uVar12,iVar8) == (int)uVar11 < 0);
  }
  plVar6 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar14 = *plVar6 + 0xf0;
  plVar6 = inlet_new(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_01),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,(long)plVar5,(long)plVar5,lVar14,lVar14,
                     param_13,param_14);
  pd_float(plVar6);
  puVar7 = gensym("signal");
  outlet_new(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_02),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)plVar5,(long)puVar7,extraout_RDX_04,lVar14,param_13,
             param_14);
  return plVar5;
}


