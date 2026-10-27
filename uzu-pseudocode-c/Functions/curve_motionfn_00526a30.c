// Function : curve_motionfn
// Namespace: 
// Entry    : 00526a30
// Prototype: undefined curve_motionfn(float param_1, float param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, int * param_12, uint * param_13, uint * param_14)
// Body     : 00526a30 - 00526c85


void curve_motionfn(float param_1,float param_2,undefined8 param_3,undefined8 param_4,double param_5
                   ,double param_6,double param_7,undefined8 param_8,long param_9,
                   undefined8 param_10,undefined8 param_11,int *param_12,uint *param_13,
                   uint *param_14)

{
  char *pcVar1;
  int *piVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  undefined7 extraout_var;
  undefined8 *puVar6;
  long lVar7;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  long lVar8;
  undefined8 *puVar9;
  undefined4 extraout_XMM0_Da;
  float fVar10;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Db;
  undefined8 uVar12;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int local_50 [2];
  undefined8 *local_48;
  undefined8 local_40 [3];
  
  fVar10 = (float)param_3;
  plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
  uVar15 = 0;
  if (fVar10 == 0.0) {
    lVar7 = *(long *)(param_9 + 0xe0);
    piVar2 = *(int **)(*(long *)(*plVar5 + 0x48) + 8);
    lVar8 = (long)*piVar2;
    bVar4 = gpointer_check((long *)(piVar2 + 0x12),0);
    if ((int)CONCAT71(extraout_var,bVar4) == 0) {
      post(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),CONCAT44(uVar15,fVar10),param_3,param_4,
           param_5,param_6,param_7,param_8,"curve_motion: scalar disappeared");
      return;
    }
    pcVar1 = (char *)(lVar7 + lVar8 * 0x28);
    plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
    lVar3 = *(long *)(*(long *)(*plVar5 + 0x48) + 8);
    uVar17 = 0;
    fVar10 = *(float *)(lVar3 + 4) + param_1;
    *(float *)(lVar3 + 4) = fVar10;
    uVar15 = 0;
    fVar14 = *(float *)(lVar3 + 0x10) + param_2;
    *(float *)(lVar3 + 0x10) = fVar14;
    if (*(char *)(lVar7 + 1 + lVar8 * 0x28) != '\0') {
      fVar14 = 0.0;
      uVar15 = 0;
      if (param_1 != 0.0) {
        param_12 = (int *)0x1;
        fielddesc_setcoord((ulong)(uint)(fVar10 * *(float *)(lVar3 + 0xc) + *(float *)(lVar3 + 8)),0
                           ,(ulong)(uint)param_2,(ulong)(uint)param_1,param_5,param_6,param_7,
                           param_8,pcVar1,*(long *)(lVar3 + 0x40),*(long *)(lVar3 + 0x38),1,
                           (char *)param_13,param_14);
      }
    }
    uVar16 = 0;
    if ((pcVar1[0x29] != '\0') && (param_2 != 0.0)) {
      plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
      lVar7 = *(long *)(*(long *)(*plVar5 + 0x48) + 8);
      param_12 = (int *)0x1;
      fielddesc_setcoord((ulong)(uint)(*(float *)(lVar7 + 0x18) * *(float *)(lVar7 + 0x10) +
                                      *(float *)(lVar7 + 0x14)),CONCAT44(uVar15,fVar14),
                         CONCAT44(uVar16,param_2),CONCAT44(uVar17,param_1),param_5,param_6,param_7,
                         param_8,pcVar1 + 0x28,*(long *)(lVar7 + 0x40),*(long *)(lVar7 + 0x38),1,
                         (char *)param_13,param_14);
    }
    plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
    lVar7 = *(long *)(*(long *)(*plVar5 + 0x48) + 8);
    lVar8 = *(long *)(lVar7 + 0x28);
    if (lVar8 != 0) {
      puVar9 = *(undefined8 **)(lVar7 + 0x20);
      lVar7 = *(long *)(lVar7 + 0x40);
      puVar6 = gensym("change");
      uVar12 = gpointer_init(local_40);
      gpointer_setglist(uVar12,CONCAT44(uVar15,fVar14),CONCAT44(uVar16,param_2),
                        CONCAT44(uVar17,param_1),param_5,param_6,param_7,param_8,local_40,
                        (long)puVar9,lVar8,param_12,(char *)param_13,param_14);
      local_50[0] = 3;
      lVar7 = *(long *)(lVar7 + 8);
      uVar12 = extraout_RDX;
      uVar11 = extraout_XMM0_Da_00;
      uVar13 = extraout_XMM0_Db_00;
      local_48 = local_40;
      if (lVar7 != 0) {
        param_12 = local_50;
        outlet_anything(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),CONCAT44(uVar15,fVar14),
                        CONCAT44(uVar16,param_2),CONCAT44(uVar17,param_1),param_5,param_6,param_7,
                        param_8,*(long **)(lVar7 + 0x18),puVar6,1,param_12,param_13,param_14);
        uVar12 = extraout_RDX_00;
        puVar9 = puVar6;
        uVar11 = extraout_XMM0_Da_01;
        uVar13 = extraout_XMM0_Db_01;
      }
      gpointer_unset(CONCAT44(uVar13,uVar11),CONCAT44(uVar15,fVar14),CONCAT44(uVar16,param_2),
                     CONCAT44(uVar17,param_1),param_5,param_6,param_7,param_8,(long)local_40,puVar9,
                     uVar12,param_12,(char *)param_13,param_14);
      plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
      lVar7 = *(long *)(*(long *)(*plVar5 + 0x48) + 8);
      if (*(long *)(lVar7 + 0x28) != 0) {
        scalar_redraw(*(long *)(lVar7 + 0x28),*(long *)(lVar7 + 0x20));
        plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
        lVar7 = *(long *)(*(long *)(*plVar5 + 0x48) + 8);
      }
    }
    if (*(long *)(lVar7 + 0x30) != 0) {
      array_redraw(*(long *)(lVar7 + 0x30),*(long *)(lVar7 + 0x20));
    }
  }
  return;
}


