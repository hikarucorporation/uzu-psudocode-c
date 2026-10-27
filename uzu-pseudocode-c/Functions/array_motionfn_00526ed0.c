// Function : array_motionfn
// Namespace: 
// Entry    : 00526ed0
// Prototype: undefined array_motionfn(float param_1, float param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 00526ed0 - 00527424


void array_motionfn(float param_1,float param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  char *in_R8;
  undefined8 in_R9;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  undefined8 extraout_XMM0_Qa;
  double dVar11;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar12;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  float fVar13;
  undefined4 uVar14;
  double dVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float local_30;
  
  uVar16 = 0;
  uVar17 = 0;
  if ((float)param_3 == 0.0) {
    plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
    lVar3 = *(long *)(*(long *)(*plVar2 + 0x48) + 8);
    fVar9 = *(float *)(lVar3 + 0xb0) * param_1 + *(float *)(lVar3 + 0x60);
    *(float *)(lVar3 + 0x60) = fVar9;
    uVar14 = 0;
    fVar13 = *(float *)(lVar3 + 0xb4) * param_2 + *(float *)(lVar3 + 100);
    *(float *)(lVar3 + 100) = fVar13;
    if (*(char **)(lVar3 + 0x68) == (char *)0x0) {
      if (*(char **)(lVar3 + 0x70) != (char *)0x0) {
        dVar11 = (double)(fVar9 + *(float *)(lVar3 + 0xac)) + DAT_005db338;
        iVar5 = (int)dVar11;
        fVar9 = fVar13;
        fVar10 = fielddesc_getcoord(dVar11,(ulong)(uint)fVar13,param_3,CONCAT44(uVar17,uVar16),
                                    param_5,param_6,param_7,param_8,*(char **)(lVar3 + 0x70),
                                    *(long *)(lVar3 + 0x98),
                                    (long)*(int *)(lVar3 + 0xb8) * (long)*(int *)(lVar3 + 0xa4) +
                                    *(long *)(lVar3 + 0x90),1,in_R8,in_R9);
        plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
        lVar3 = *(long *)(*(long *)(*plVar2 + 0x48) + 8);
        if (iVar5 < 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(lVar3 + 0xa0) + -1;
          if (iVar5 < *(int *)(lVar3 + 0xa0)) {
            iVar7 = iVar5;
          }
        }
        iVar8 = (uint)(iVar7 <= *(int *)(lVar3 + 0xb8)) * 2 + -1;
        iVar5 = (*(int *)(lVar3 + 0xb8) - iVar7) * iVar8;
        if ((-1 < iVar5) &&
           (fielddesc_setcoord((ulong)(uint)fVar13,CONCAT44(uVar14,fVar9),param_3,
                               CONCAT44(uVar17,uVar16),param_5,param_6,param_7,param_8,
                               *(char **)(lVar3 + 0x70),*(long *)(lVar3 + 0x98),
                               (long)iVar7 * (long)*(int *)(lVar3 + 0xa4) + *(long *)(lVar3 + 0x90),
                               1,in_R8,in_R9), iVar5 != 0)) {
          dVar15 = (double)(fVar13 - fVar10) / (double)iVar5;
          dVar11 = dVar15;
          iVar1 = iVar7;
          do {
            iVar1 = iVar8 + iVar1;
            uVar14 = 0;
            fVar9 = (float)((double)fVar13 - dVar15);
            plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
            lVar3 = *(long *)(*(long *)(*plVar2 + 0x48) + 8);
            fielddesc_setcoord((ulong)(uint)fVar9,CONCAT44(uVar14,fVar13),dVar11,
                               CONCAT44(uVar17,uVar16),param_5,param_6,param_7,param_8,
                               *(char **)(lVar3 + 0x70),*(long *)(lVar3 + 0x98),
                               (long)*(int *)(lVar3 + 0xa4) * (long)iVar1 + *(long *)(lVar3 + 0x90),
                               1,in_R8,in_R9);
            iVar5 = iVar5 + -1;
            fVar13 = fVar9;
          } while (iVar5 != 0);
        }
        plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
        lVar3 = *(long *)(*(long *)(*plVar2 + 0x48) + 8);
        *(int *)(lVar3 + 0xb8) = iVar7;
      }
    }
    else if (0 < *(int *)(lVar3 + 0xa0)) {
      lVar4 = *(long *)(lVar3 + 0x90);
      fVar9 = fielddesc_getcoord((ulong)(uint)fVar9,(ulong)(uint)fVar13,param_3,
                                 CONCAT44(uVar17,uVar16),param_5,param_6,param_7,param_8,
                                 *(char **)(lVar3 + 0x68),*(long *)(lVar3 + 0x98),lVar4,1,in_R8,
                                 in_R9);
      plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
      lVar3 = *(long *)(*(long *)(*plVar2 + 0x48) + 8);
      if (*(char **)(lVar3 + 0x70) == (char *)0x0) {
        local_30 = 0.0;
      }
      else {
        local_30 = fielddesc_getcoord(extraout_XMM0_Qa,CONCAT44(uVar14,fVar13),param_3,
                                      CONCAT44(uVar17,uVar16),param_5,param_6,param_7,param_8,
                                      *(char **)(lVar3 + 0x70),*(long *)(lVar3 + 0x98),lVar4,1,in_R8
                                      ,in_R9);
        plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
        lVar3 = *(long *)(*(long *)(*plVar2 + 0x48) + 8);
      }
      fielddesc_setcoord((ulong)(uint)(*(float *)(lVar3 + 0xb0) * param_1 + fVar9),
                         CONCAT44(uVar14,fVar13),param_3,CONCAT44(uVar17,uVar16),param_5,param_6,
                         param_7,param_8,*(char **)(lVar3 + 0x68),*(long *)(lVar3 + 0x98),lVar4,1,
                         in_R8,in_R9);
      plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
      lVar3 = *(long *)(*(long *)(*plVar2 + 0x48) + 8);
      if (*(char **)(lVar3 + 0x70) != (char *)0x0) {
        if (*(int *)(lVar3 + 0xbc) == 0) {
          lVar6 = *(long *)(lVar3 + 0x98);
          local_30 = *(float *)(lVar3 + 0xb4) * param_2 + local_30;
        }
        else {
          uVar14 = 0;
          fVar13 = *(float *)(lVar3 + 0xb4) * param_2 + local_30;
          local_30 = 0.0;
          if (0.0 <= fVar13) {
            local_30 = fVar13;
          }
          lVar6 = *(long *)(lVar3 + 0x98);
        }
        fielddesc_setcoord((ulong)(uint)local_30,CONCAT44(uVar14,fVar13),param_3,
                           CONCAT44(uVar17,uVar16),param_5,param_6,param_7,param_8,
                           *(char **)(lVar3 + 0x70),lVar6,lVar4,1,in_R8,in_R9);
      }
      plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
      lVar3 = *(long *)(*(long *)(*plVar2 + 0x48) + 8);
      if (1 < *(int *)(lVar3 + 0xa0)) {
        iVar5 = 1;
        uVar12 = extraout_XMM0_Qa_00;
        do {
          lVar4 = (long)iVar5 * (long)*(int *)(lVar3 + 0xa4) + *(long *)(lVar3 + 0x90);
          fVar9 = fielddesc_getcoord(uVar12,CONCAT44(uVar14,fVar13),param_3,CONCAT44(uVar17,uVar16),
                                     param_5,param_6,param_7,param_8,*(char **)(lVar3 + 0x68),
                                     *(long *)(lVar3 + 0x98),lVar4,1,in_R8,in_R9);
          plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
          lVar3 = *(long *)(*(long *)(*plVar2 + 0x48) + 8);
          if (*(char **)(lVar3 + 0x70) == (char *)0x0) {
            local_30 = 0.0;
          }
          else {
            local_30 = fielddesc_getcoord(extraout_XMM0_Qa_01,CONCAT44(uVar14,fVar13),param_3,
                                          CONCAT44(uVar17,uVar16),param_5,param_6,param_7,param_8,
                                          *(char **)(lVar3 + 0x70),*(long *)(lVar3 + 0x98),lVar4,1,
                                          in_R8,in_R9);
            plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
            lVar3 = *(long *)(*(long *)(*plVar2 + 0x48) + 8);
          }
          fielddesc_setcoord((ulong)(uint)(*(float *)(lVar3 + 0xb0) * param_1 + fVar9),
                             CONCAT44(uVar14,fVar13),param_3,CONCAT44(uVar17,uVar16),param_5,param_6
                             ,param_7,param_8,*(char **)(lVar3 + 0x68),*(long *)(lVar3 + 0x98),lVar4
                             ,1,in_R8,in_R9);
          plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
          lVar3 = *(long *)(*(long *)(*plVar2 + 0x48) + 8);
          uVar12 = extraout_XMM0_Qa_02;
          if ((*(char **)(lVar3 + 0x70) != (char *)0x0) && (*(int *)(lVar3 + 0xbc) == 0)) {
            fielddesc_setcoord((ulong)(uint)(*(float *)(lVar3 + 0xb4) * param_2 + local_30),
                               CONCAT44(uVar14,fVar13),param_3,CONCAT44(uVar17,uVar16),param_5,
                               param_6,param_7,param_8,*(char **)(lVar3 + 0x70),
                               *(long *)(lVar3 + 0x98),lVar4,1,in_R8,in_R9);
            plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
            lVar3 = *(long *)(*(long *)(*plVar2 + 0x48) + 8);
            uVar12 = extraout_XMM0_Qa_03;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(lVar3 + 0xa0));
      }
    }
    if (*(long *)(lVar3 + 0x80) != 0) {
      scalar_redraw(*(long *)(lVar3 + 0x80),*(long *)(lVar3 + 0x78));
      plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
      lVar3 = *(long *)(*(long *)(*plVar2 + 0x48) + 8);
    }
    if (*(long *)(lVar3 + 0x88) != 0) {
      array_redraw(*(long *)(lVar3 + 0x88),*(long *)(lVar3 + 0x78));
      return;
    }
  }
  return;
}


