// Function : pd_typedmess
// Namespace: 
// Entry    : 00536b30
// Prototype: undefined pd_typedmess(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long * param_9, undefined8 * param_10, uint param_11, int * param_12, uint * param_13, uint * param_14)
// Body     : 00536b30 - 00536ff0


void pd_typedmess(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                 double param_5,double param_6,double param_7,undefined8 param_8,long *param_9,
                 undefined8 *param_10,uint param_11,int *param_12,uint *param_13,uint *param_14)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar5;
  int *piVar6;
  char *pcVar7;
  undefined8 extraout_RDX;
  long **pplVar8;
  long lVar9;
  char *pcVar10;
  uint *puVar11;
  uint *puVar12;
  int extraout_XMM0_Da;
  uint uVar13;
  int iVar14;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar15;
  uint local_78 [8];
  long *local_58;
  long local_50 [5];
  uint switchD_00536e2c::switchdataD_006560a4;
  uint switchD_00536f33::switchdataD_00656084;
  
  puVar1 = (undefined8 *)*param_9;
  piVar6 = param_12;
  plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
  puVar12 = local_78;
  puVar11 = local_78;
  lVar9 = *plVar4;
  iVar14 = extraout_XMM0_Da;
  uVar15 = extraout_XMM0_Db;
  if ((undefined8 *)(lVar9 + 0x78) == param_10) {
    if (param_9 != (long *)PTR_pd_objectmaker_00715510) {
      if (param_11 == 0) {
        UNRECOVERED_JUMPTABLE = (code *)puVar1[9];
        iVar14 = 0;
      }
      else {
        if (*param_12 != 1) goto switchD_00536e2c_caseD_4;
        UNRECOVERED_JUMPTABLE = (code *)puVar1[9];
        iVar14 = param_12[2];
      }
                    /* WARNING: Could not recover jumptable at 0x00536c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(iVar14,param_9);
      return;
    }
    if (param_11 == 0) {
      uVar13 = 0;
    }
    else {
      if (*param_12 != 1) {
switchD_00536e2c_caseD_4:
        pd_error(CONCAT44(uVar15,iVar14),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 (long)param_9,"bad arguments for message \'%s\' to object \'%s\'",*param_10,
                 *(undefined8 *)*puVar1,(char *)param_13,param_14);
        return;
      }
      uVar13 = param_12[2];
    }
    plVar4 = pdfloat_new((ulong)uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                         PTR_pd_objectmaker_00715510,lVar9,extraout_RDX,piVar6,(char *)param_13,
                         param_14);
    goto LAB_00536ea6;
  }
  if ((undefined8 *)(lVar9 + 0xa8) == param_10) {
    if (param_9 != (long *)PTR_pd_objectmaker_00715510) {
                    /* WARNING: Could not recover jumptable at 0x00536c16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)puVar1[7])(param_9);
      return;
    }
    plVar4 = bang_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                      param_6,param_7,param_8,PTR_pd_objectmaker_00715510,lVar9,extraout_RDX,piVar6,
                      (char *)param_13,param_14);
    goto LAB_00536ea6;
  }
  if ((undefined8 *)(lVar9 + 0xc0) == param_10) {
    if (param_9 != (long *)PTR_pd_objectmaker_00715510) {
      UNRECOVERED_JUMPTABLE = (code *)puVar1[0xb];
LAB_00536cea:
                    /* WARNING: Could not recover jumptable at 0x00536d01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_9,param_10,param_11,param_12);
      return;
    }
    plVar4 = (long *)list_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                              param_5,param_6,param_7,param_8,PTR_pd_objectmaker_00715510,param_10,
                              (ulong)param_11,param_12,(char *)param_13,param_14);
    goto LAB_00536ea6;
  }
  if ((undefined8 *)(lVar9 + 0x90) == param_10) {
    if ((param_11 == 0) || (*param_12 != 2)) {
      if (param_9 != (long *)PTR_pd_objectmaker_00715510) {
        UNRECOVERED_JUMPTABLE = (code *)puVar1[10];
        lVar9 = lVar9 + 0x168;
        goto LAB_00536d1c;
      }
      lVar9 = lVar9 + 0x168;
    }
    else {
      if (param_9 != (long *)PTR_pd_objectmaker_00715510) {
        UNRECOVERED_JUMPTABLE = (code *)puVar1[10];
        goto LAB_00536c78;
      }
      lVar9 = *(long *)(param_12 + 2);
    }
    plVar4 = pdsymbol_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                          param_5,param_6,param_7,param_8,PTR_pd_objectmaker_00715510,lVar9,
                          extraout_RDX,piVar6,(char *)param_13,param_14);
LAB_00536ea6:
    plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
    *(long **)(*plVar5 + 0x58) = plVar4;
    return;
  }
  if ((param_9 == (long *)PTR_pd_objectmaker_00715510) || ((undefined8 *)(lVar9 + 0x60) != param_10)
     ) {
    iVar3 = *(int *)(puVar1 + 5);
    if (iVar3 != 0) {
      pcVar7 = (char *)(*(long *)(puVar1[4] + (long)*(int *)(lVar9 + 0x20) * 8) + 0x11);
      do {
        if (*(undefined8 **)(pcVar7 + -0x11) == param_10) {
          cVar2 = pcVar7[-1];
          if (cVar2 == '\n') {
            if (param_9 != (long *)PTR_pd_objectmaker_00715510) {
              UNRECOVERED_JUMPTABLE = *(code **)(pcVar7 + -9);
              if (UNRECOVERED_JUMPTABLE == (code *)PTR_canvas_new_00715bf0) {
                canvas_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                           param_5,param_6,param_7,param_8,param_9,param_10,(ulong)param_11,
                           (long)param_12,param_13,param_14);
                return;
              }
              goto LAB_00536cea;
            }
            plVar4 = (long *)(**(code **)(pcVar7 + -9))(param_10,param_11,param_12);
            goto LAB_00536ea6;
          }
          uVar13 = 5;
          if ((int)param_11 < 5) {
            uVar13 = param_11;
          }
          if (param_9 != (long *)PTR_pd_objectmaker_00715510) {
            plVar4 = local_50;
            param_13 = (uint *)0x0;
            iVar3 = 1;
            param_14 = &switchD_00536e2c::switchdataD_006560a4;
            pcVar10 = pcVar7;
            local_58 = param_9;
            goto LAB_00536e1a;
          }
          pplVar8 = &local_58;
          iVar3 = 0;
          param_14 = &switchD_00536f33::switchdataD_00656084;
          iVar14 = 0;
          uVar15 = 0;
          param_13 = (uint *)0x0;
          pcVar10 = pcVar7;
          goto LAB_00536f21;
        }
        iVar3 = iVar3 + -1;
        pcVar7 = pcVar7 + 0x18;
      } while (iVar3 != 0);
    }
    UNRECOVERED_JUMPTABLE = (code *)puVar1[0xc];
    goto LAB_00536cea;
  }
  if ((param_11 == 0) || (*param_12 != 3)) goto switchD_00536e2c_caseD_4;
  UNRECOVERED_JUMPTABLE = (code *)puVar1[8];
LAB_00536c78:
  lVar9 = *(long *)(param_12 + 2);
LAB_00536d1c:
                    /* WARNING: Could not recover jumptable at 0x00536d2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_9,lVar9);
  return;
LAB_00536f21:
  switch(cVar2) {
  case '\0':
    goto switchD_00536e2c_caseD_0;
  case '\x01':
    if (uVar13 == 0) goto switchD_00536e2c_caseD_4;
LAB_00536f55:
    if (*param_12 != 1) goto switchD_00536e2c_caseD_4;
    param_2 = (ulong)(uint)param_12[2];
    *puVar12 = param_12[2];
    uVar13 = uVar13 - 1;
    param_12 = param_12 + 4;
    break;
  case '\x02':
    if (uVar13 != 0) {
LAB_00536f7d:
      if (*param_12 == 1) {
        plVar4 = (long *)(lVar9 + 0x168);
        if ((float)param_12[2] == 0.0) goto LAB_00536f07;
      }
      else if (*param_12 == 2) goto LAB_00536f03;
    }
    goto switchD_00536e2c_caseD_4;
  case '\x03':
    if ((uVar13 != 0) && (*param_12 == 3)) {
LAB_00536f03:
      plVar4 = *(long **)(param_12 + 2);
LAB_00536f07:
      *pplVar8 = plVar4;
      uVar13 = uVar13 - 1;
      param_12 = param_12 + 4;
LAB_00536f13:
      iVar3 = iVar3 + 1;
      pplVar8 = pplVar8 + 1;
      goto LAB_00536f1a;
    }
  default:
    goto switchD_00536e2c_caseD_4;
  case '\x06':
    if (uVar13 != 0) goto LAB_00536f55;
    *puVar12 = 0;
    uVar13 = 0;
    break;
  case '\a':
    if (uVar13 != 0) goto LAB_00536f7d;
    *pplVar8 = (long *)(lVar9 + 0x168);
    uVar13 = 0;
    goto LAB_00536f13;
  }
  param_13 = (uint *)(ulong)((int)param_13 + 1);
  puVar12 = puVar12 + 1;
LAB_00536f1a:
  cVar2 = *pcVar10;
  pcVar10 = pcVar10 + 1;
  goto LAB_00536f21;
LAB_00536e1a:
  switch(cVar2) {
  case '\0':
switchD_00536e2c_caseD_0:
    mess_dispatch(param_9,*(undefined **)(pcVar7 + -9),iVar3,&local_58,(int)param_13,local_78);
    return;
  case '\x01':
    if (uVar13 == 0) goto switchD_00536e2c_caseD_4;
LAB_00536e51:
    if (*param_12 != 1) goto switchD_00536e2c_caseD_4;
    iVar14 = param_12[2];
    uVar15 = 0;
    *puVar11 = iVar14;
    uVar13 = uVar13 - 1;
    param_12 = param_12 + 4;
    break;
  case '\x02':
    if (uVar13 != 0) {
LAB_00536df2:
      if (*param_12 == 2) goto LAB_00536dfc;
    }
    goto switchD_00536e2c_caseD_4;
  case '\x03':
    if ((uVar13 != 0) && (*param_12 == 3)) {
LAB_00536dfc:
      *plVar4 = *(long *)(param_12 + 2);
      uVar13 = uVar13 - 1;
      param_12 = param_12 + 4;
LAB_00536e0c:
      iVar3 = iVar3 + 1;
      plVar4 = plVar4 + 1;
      goto LAB_00536e13;
    }
  default:
    goto switchD_00536e2c_caseD_4;
  case '\x06':
    if (uVar13 != 0) goto LAB_00536e51;
    *puVar11 = 0;
    uVar13 = 0;
    break;
  case '\a':
    if (uVar13 != 0) goto LAB_00536df2;
    *plVar4 = lVar9 + 0x168;
    uVar13 = 0;
    goto LAB_00536e0c;
  }
  param_13 = (uint *)(ulong)((int)param_13 + 1);
  puVar11 = puVar11 + 1;
LAB_00536e13:
  cVar2 = *pcVar10;
  pcVar10 = pcVar10 + 1;
  goto LAB_00536e1a;
}


