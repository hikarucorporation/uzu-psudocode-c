// Function : drawnumber_motionfn
// Namespace: 
// Entry    : 005275e0
// Prototype: undefined drawnumber_motionfn(undefined8 param_1, ulong param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, uint * param_13, uint * param_14)
// Body     : 005275e0 - 0052783b


void drawnumber_motionfn(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                        double param_5,double param_6,double param_7,undefined8 param_8,long param_9
                        ,undefined8 param_10,undefined8 param_11,undefined8 param_12,uint *param_13,
                        uint *param_14)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  undefined7 extraout_var;
  long lVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  long lVar7;
  char *pcVar8;
  undefined8 *puVar9;
  undefined4 extraout_XMM0_Da;
  float fVar10;
  float extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Db_00;
  undefined8 uVar11;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 uVar13;
  float fVar14;
  ulong uVar15;
  undefined4 uVar16;
  undefined1 auVar17 [16];
  undefined1 in_stack_ffffffffffffffa8;
  int local_50 [2];
  undefined8 *local_48;
  undefined8 local_40 [3];
  
  fVar14 = (float)param_2;
  if ((float)param_3 == 0.0) {
    uVar15 = param_2;
    plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
    uVar11 = 0;
    bVar2 = gpointer_check((long *)(*(long *)(*(long *)(*plVar3 + 0x48) + 8) + 0xf0),0);
    if ((int)CONCAT71(extraout_var,bVar2) == 0) {
      post(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),uVar15,param_3,param_4,param_5,param_6,
           param_7,param_8,"drawnumber_motion: scalar disappeared");
      return;
    }
    auVar17 = __tls_get_addr();
    lVar4 = *(long *)(*(long *)(*auVar17._0_8_ + 0x48) + 8);
    uVar16 = 0;
    if (*(int *)(lVar4 + 0x108) == 0) {
      uVar12 = 0;
      fVar10 = *(float *)(lVar4 + 0xc0) - fVar14;
      *(float *)(lVar4 + 0xc0) = fVar10;
      lVar1 = *(long *)(lVar4 + 0xe8);
      puVar9 = *(undefined8 **)(param_9 + 0x30);
      if (lVar1 == 0) {
        bug((ulong)(uint)fVar10,param_2 & 0xffffffff,param_3,param_4,param_5,param_6,param_7,param_8
            ,"template_find_field",uVar11,auVar17._8_8_,param_12,(char *)param_13,param_14,
            in_stack_ffffffffffffffa8);
        fVar10 = extraout_XMM0_Da_00;
        uVar12 = extraout_XMM0_Db_00;
      }
      else if (0 < (int)*(uint *)(lVar1 + 0x18)) {
        puVar6 = (undefined8 *)(*(long *)(lVar1 + 0x20) + 8);
        lVar7 = 0;
        do {
          if ((undefined8 *)*puVar6 == puVar9) {
            if (*(int *)(puVar6 + -1) == 0) {
              piVar5 = (int *)(long)(int)lVar7;
              *(float *)(*(long *)(lVar4 + 0xe0) + (long)piVar5) = fVar10;
              goto LAB_0052770b;
            }
            uVar11 = **(undefined8 **)(lVar1 + 0x10);
            piVar5 = (int *)*puVar9;
            pcVar8 = "%s.%s: not a number";
            goto LAB_00527702;
          }
          lVar7 = lVar7 + 8;
          puVar6 = puVar6 + 3;
        } while ((ulong)*(uint *)(lVar1 + 0x18) * 8 != lVar7);
      }
      uVar11 = **(undefined8 **)(lVar1 + 0x10);
      piVar5 = (int *)*puVar9;
      pcVar8 = "%s.%s: no such field";
LAB_00527702:
      pd_error(CONCAT44(uVar12,fVar10),CONCAT44(uVar16,fVar14),param_3,param_4,param_5,param_6,
               param_7,param_8,0,pcVar8,uVar11,piVar5,(char *)param_13,param_14);
LAB_0052770b:
      plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
      lVar4 = *(long *)(*(long *)(*plVar3 + 0x48) + 8);
      lVar1 = *(long *)(lVar4 + 0xd0);
      if (lVar1 != 0) {
        puVar9 = *(undefined8 **)(lVar4 + 200);
        lVar4 = *(long *)(lVar4 + 0xe8);
        puVar6 = gensym("change");
        uVar11 = gpointer_init(local_40);
        gpointer_setglist(uVar11,CONCAT44(uVar16,fVar14),param_3,param_4,param_5,param_6,param_7,
                          param_8,local_40,(long)puVar9,lVar1,piVar5,(char *)param_13,param_14);
        local_50[0] = 3;
        lVar4 = *(long *)(lVar4 + 8);
        uVar11 = extraout_RDX;
        uVar12 = extraout_XMM0_Da_01;
        uVar13 = extraout_XMM0_Db_01;
        local_48 = local_40;
        if (lVar4 != 0) {
          piVar5 = local_50;
          outlet_anything(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),CONCAT44(uVar16,fVar14),
                          param_3,param_4,param_5,param_6,param_7,param_8,*(long **)(lVar4 + 0x18),
                          puVar6,1,piVar5,param_13,param_14);
          uVar11 = extraout_RDX_00;
          puVar9 = puVar6;
          uVar12 = extraout_XMM0_Da_02;
          uVar13 = extraout_XMM0_Db_02;
        }
        gpointer_unset(CONCAT44(uVar13,uVar12),CONCAT44(uVar16,fVar14),param_3,param_4,param_5,
                       param_6,param_7,param_8,(long)local_40,puVar9,uVar11,piVar5,(char *)param_13,
                       param_14);
        plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
        lVar4 = *(long *)(*(long *)(*plVar3 + 0x48) + 8);
        if (*(long *)(lVar4 + 0xd0) != 0) {
          scalar_redraw(*(long *)(lVar4 + 0xd0),*(long *)(lVar4 + 200));
          plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
          lVar4 = *(long *)(*(long *)(*plVar3 + 0x48) + 8);
        }
      }
      if (*(long *)(lVar4 + 0xd8) != 0) {
        array_redraw(*(long *)(lVar4 + 0xd8),*(long *)(lVar4 + 200));
      }
    }
  }
  return;
}


