// Function : gatom_key
// Namespace: 
// Entry    : 0052a4c0
// Prototype: undefined gatom_key(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0052a4c0 - 0052a7f6


void gatom_key(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              long *param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
              char *param_13,byte *param_14)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined7 extraout_var;
  long lVar8;
  ulong uVar9;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  byte *pbVar10;
  uint uVar11;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar12;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 uVar13;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  double dVar14;
  undefined8 extraout_XMM0_Qa_07;
  uint local_3c;
  byte *local_38;
  
  uVar11 = (uint)(float)param_1;
  lVar4 = gatom_getatom(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        (long)param_9);
  plVar5 = (long *)glist_findrtext(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,
                                   param_8,param_9[7],(long)param_9,extraout_RDX,param_12,param_13,
                                   param_14);
  if (uVar11 == 10) {
    *(byte *)(param_9 + 0xf) = *(byte *)(param_9 + 0xf) & 0xef;
    uVar13 = extraout_XMM0_Qa_00;
    if (plVar5 == *(long **)(*(long *)(param_9[7] + 0xc0) + 0x28)) {
      rtext_gettext(plVar5,&local_38,&local_3c);
      puVar7 = gensym("End");
      rtext_key(extraout_XMM0_Qa_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5,0
                ,puVar7,param_12,param_13,param_14);
      uVar9 = (ulong)local_3c;
      if (local_38[(int)(local_3c - 1)] == 0x2e) {
        uVar11 = 1;
        if (local_38[(int)(local_3c - 2)] == 0x2e) {
          uVar9 = (ulong)(int)(local_3c - 3);
          uVar11 = local_38[uVar9] == 0x2e | 2;
        }
        do {
          plVar6 = (long *)__tls_get_addr(&PTR_007159b0);
          rtext_key(extraout_XMM0_Qa_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    plVar5,8,(undefined8 *)(*plVar6 + 0x168),uVar9,param_13,param_14);
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      uVar13 = rtext_gettext(plVar5,&local_38,&local_3c);
      if ((int)param_9[6] == 2) {
        puVar7 = gensym((char *)local_38);
        *(undefined8 **)(lVar4 + 8) = puVar7;
        uVar13 = extraout_XMM0_Qa_07;
      }
      else if ((int)param_9[6] == 1) {
        dVar14 = strtod((char *)local_38,(char **)0x0);
        uVar13 = CONCAT44((int)((ulong)dVar14 >> 0x20),(float)dVar14);
        *(float *)(lVar4 + 8) = (float)dVar14;
      }
      else {
        uVar13 = text_setto(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                            (long *)param_9[7],local_38,local_3c,param_13,param_14);
      }
      uVar13 = rtext_activate(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5,
                              0);
    }
    gatom_bang(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9);
    if ((((long *)param_9[7])[0x18] != 0) &&
       (bVar3 = gobj_shouldvis(param_9,(long *)param_9[7]), (int)CONCAT71(extraout_var,bVar3) != 0))
    {
      sys_queuegui((long)param_9,param_9[7],0x52a8a0);
    }
  }
  else if ((uVar11 == 0) && (bVar2 = *(byte *)(param_9 + 0xf), (bVar2 & 0x10) == 0)) {
    lVar4 = param_9[7];
    lVar8 = *(long *)(lVar4 + 0xc0);
    uVar13 = extraout_RDX_00;
    uVar12 = extraout_XMM0_Qa_00;
    if (plVar5 == *(long **)(lVar8 + 0x28)) {
      uVar12 = rtext_activate(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8,plVar5,0);
      bVar2 = *(byte *)(param_9 + 0xf);
      lVar4 = param_9[7];
      uVar13 = extraout_RDX_01;
    }
    *(byte *)(param_9 + 0xf) = bVar2 & 0xf7;
    plVar5 = (long *)glist_findrtext(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                     lVar4,(long)param_9,uVar13,lVar8,param_13,param_14);
    uVar9 = param_9[7];
    lVar4 = rtext_gettag((long)plVar5);
    rtext_width(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5);
    rtext_height(plVar5);
    pbVar10 = (byte *)0x0;
    uVar13 = text_drawborder(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,
                             param_8,param_9,uVar9,lVar4,lVar8,param_13,0);
    if (*(long *)(param_9[7] + 0xc0) != 0) {
      glist_retext(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9[7],
                   (long)param_9,extraout_RDX_02,lVar8,param_13,pbVar10);
      return;
    }
  }
  else {
    uVar13 = extraout_XMM0_Qa_00;
    if (plVar5 != *(long **)(*(long *)(param_9[7] + 0xc0) + 0x28)) {
      rtext_activate(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     plVar5,1);
      plVar6 = (long *)__tls_get_addr(&PTR_007159b0);
      uVar13 = rtext_key(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                         ,plVar5,0x2e,(undefined8 *)(*plVar6 + 0x168),param_12,param_13,param_14);
      uVar13 = rtext_key(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5,0x2e,
                         (undefined8 *)(*plVar6 + 0x168),param_12,param_13,param_14);
      rtext_key(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5,0x2e,
                (undefined8 *)(*plVar6 + 0x168),param_12,param_13,param_14);
      puVar7 = gensym("Home");
      uVar13 = rtext_key(extraout_XMM0_Qa_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                         ,plVar5,0,puVar7,param_12,param_13,param_14);
    }
    iVar1 = (int)param_9[6];
    if (iVar1 == 2) {
LAB_0052a75b:
      rtext_key(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5,uVar11,
                param_10,param_12,param_13,param_14);
      return;
    }
    if (iVar1 == 1) {
      if ((uVar11 - 0x30 < 10) ||
         (((uVar11 - 0x2b < 0x3b &&
           (param_12 = 0x40000000400000d,
           (0x40000000400000dU >> ((ulong)(uVar11 - 0x2b) & 0x3f) & 1) != 0)) || (uVar11 == 8))))
      goto LAB_0052a75b;
    }
    else if (iVar1 == 0) goto LAB_0052a75b;
  }
  return;
}


