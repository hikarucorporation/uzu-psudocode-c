// Function : glist_writetobinbuf
// Namespace: 
// Entry    : 0051c370
// Prototype: int * glist_writetobinbuf(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, int param_10, undefined8 param_11, void * * param_12, char * param_13, undefined8 param_14)
// Body     : 0051c370 - 0051c77b


int * glist_writetobinbuf(undefined8 param_1,undefined8 param_2,undefined8 param_3,
                         undefined8 param_4,undefined8 param_5,undefined8 param_6,undefined8 param_7
                         ,undefined8 param_8,long param_9,int param_10,undefined8 param_11,
                         void **param_12,char *param_13,undefined8 param_14)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar14;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 uVar15;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined8 extraout_XMM0_Qa_09;
  undefined1 in_stack_ffffffffffffff88;
  undefined7 in_stack_ffffffffffffff89;
  uint local_70;
  int local_6c;
  void *local_68;
  long local_60;
  ulong local_58;
  ulong local_50;
  void *local_48;
  undefined8 *local_40;
  ulong local_38;
  
  uVar13 = 0;
  local_6c = param_10;
  local_68 = getbytes(0);
  local_70 = 0;
  piVar4 = binbuf_new();
  puVar11 = PTR_scalar_class_00715810;
  plVar7 = *(long **)(param_9 + 0x30);
  local_60 = param_9;
  if (plVar7 != (long *)0x0) {
    if (local_6c == 0) {
      do {
        if ((*plVar7 == *(long *)puVar11) &&
           (uVar14 = glist_isselected(local_60,(long)plVar7), (int)uVar14 != 0)) {
          param_12 = &local_68;
          canvas_addtemplatesforscalar
                    (extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     plVar7[2],plVar7 + 3,&local_70,&local_68,param_13,param_14,
                     in_stack_ffffffffffffff88);
        }
        plVar7 = (long *)plVar7[1];
      } while (plVar7 != (long *)0x0);
    }
    else {
      lVar6 = *(long *)PTR_scalar_class_00715810;
      uVar14 = extraout_XMM0_Qa;
      do {
        if (*plVar7 == lVar6) {
          param_12 = &local_68;
          uVar14 = canvas_addtemplatesforscalar
                             (uVar14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              plVar7[2],plVar7 + 3,&local_70,&local_68,param_13,param_14,
                              in_stack_ffffffffffffff88);
          lVar6 = *(long *)puVar11;
        }
        plVar7 = (long *)plVar7[1];
      } while (plVar7 != (long *)0x0);
    }
    uVar13 = (ulong)local_70;
  }
  puVar5 = gensym("data");
  puVar11 = &DAT_0065600c;
  uVar15 = binbuf_addv(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       piVar4,0x65600c,puVar5,param_12,param_13,param_14,
                       (double)CONCAT71(in_stack_ffffffffffffff89,in_stack_ffffffffffffff88));
  uVar14 = extraout_RDX;
  local_58 = uVar13;
  if (0 < (int)uVar13) {
    local_48 = local_68;
    uVar9 = 0;
    local_50 = uVar13;
    do {
      pvVar3 = local_48;
      lVar6 = template_findbyname(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                  *(long *)((long)local_48 + uVar9 * 8));
      uVar1 = *(uint *)(lVar6 + 0x18);
      local_40 = gensym("template");
      local_38 = uVar9;
      param_12 = (void **)gensym((char *)(**(long **)((long)pvVar3 + uVar9 * 8) + 3));
      puVar11 = &DAT_00655ff8;
      uVar15 = binbuf_addv(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,
                           param_8,piVar4,0x655ff8,local_40,param_12,param_13,param_14,
                           (double)CONCAT71(in_stack_ffffffffffffff89,in_stack_ffffffffffffff88));
      uVar14 = extraout_RDX_01;
      if (0 < (int)uVar1) {
        lVar10 = 0;
        do {
          switch(*(undefined4 *)(*(long *)(lVar6 + 0x20) + lVar10)) {
          case 0:
            plVar7 = (long *)__tls_get_addr(&PTR_007159b0);
            puVar5 = (undefined8 *)(*plVar7 + 0x78);
            lVar12 = *(long *)(lVar6 + 0x20);
            iVar2 = *(int *)(lVar12 + lVar10);
            param_12 = *(void ***)(lVar12 + 8 + lVar10);
            uVar14 = extraout_XMM0_Qa_03;
            break;
          case 1:
            plVar7 = (long *)__tls_get_addr(&PTR_007159b0);
            lVar12 = *plVar7;
            lVar8 = 0x90;
            uVar14 = extraout_XMM0_Qa_05;
            goto LAB_0051c628;
          case 2:
            plVar7 = (long *)__tls_get_addr(&PTR_007159b0);
            lVar12 = *plVar7;
            lVar8 = 0xc0;
            uVar14 = extraout_XMM0_Qa_06;
LAB_0051c628:
            puVar5 = (undefined8 *)(lVar12 + lVar8);
            lVar12 = *(long *)(lVar6 + 0x20);
            iVar2 = *(int *)(lVar12 + lVar10);
            param_12 = *(void ***)(lVar12 + 8 + lVar10);
            break;
          case 3:
            puVar5 = gensym("array");
            lVar12 = *(long *)(lVar6 + 0x20);
            iVar2 = *(int *)(lVar12 + lVar10);
            param_12 = *(void ***)(lVar12 + 8 + lVar10);
            uVar14 = extraout_XMM0_Qa_07;
            break;
          default:
            plVar7 = (long *)__tls_get_addr(&PTR_007159b0);
            puVar5 = (undefined8 *)(*plVar7 + 0x78);
            uVar14 = bug(extraout_XMM0_Qa_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                         ,"canvas_write",puVar11,extraout_RDX_03,param_12,param_13,param_14,
                         in_stack_ffffffffffffff88);
            lVar12 = *(long *)(lVar6 + 0x20);
            iVar2 = *(int *)(lVar12 + lVar10);
            param_12 = *(void ***)(lVar12 + 8 + lVar10);
          }
          if (iVar2 == 3) {
            param_13 = (char *)gensym((char *)(**(long **)(lVar12 + 0x10 + lVar10) + 3));
            puVar11 = &DAT_006550e7;
            uVar15 = binbuf_addv(extraout_XMM0_Qa_08,param_2,param_3,param_4,param_5,param_6,param_7
                                 ,param_8,piVar4,0x6550e7,puVar5,param_12,param_13,param_14,
                                 (double)CONCAT71(in_stack_ffffffffffffff89,
                                                  in_stack_ffffffffffffff88));
            uVar14 = extraout_RDX_04;
          }
          else {
            puVar11 = &DAT_00655ff8;
            uVar15 = binbuf_addv(uVar14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                 piVar4,0x655ff8,puVar5,param_12,param_13,param_14,
                                 (double)CONCAT71(in_stack_ffffffffffffff89,
                                                  in_stack_ffffffffffffff88));
            uVar14 = extraout_RDX_02;
          }
          lVar10 = lVar10 + 0x18;
        } while ((ulong)uVar1 * 0x18 != lVar10);
      }
      uVar15 = binbuf_addsemi(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar4,
                              puVar11,uVar14,param_12,param_13,param_14);
      uVar9 = local_38 + 1;
      uVar14 = extraout_RDX_00;
    } while (uVar9 != local_50);
  }
  uVar14 = binbuf_addsemi(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar4,
                          puVar11,uVar14,param_12,param_13,param_14);
  puVar11 = PTR_scalar_class_00715810;
  plVar7 = *(long **)(local_60 + 0x30);
  if (plVar7 != (long *)0x0) {
    if (local_6c == 0) {
      do {
        if ((*plVar7 == *(long *)puVar11) &&
           (uVar14 = glist_isselected(local_60,(long)plVar7), (int)uVar14 != 0)) {
          canvas_writescalar(extraout_XMM0_Qa_09,param_2,param_3,param_4,param_5,param_6,param_7,
                             param_8,(long *)plVar7[2],(uint *)(plVar7 + 3),piVar4,0,param_13,
                             param_14);
        }
        plVar7 = (long *)plVar7[1];
      } while (plVar7 != (long *)0x0);
    }
    else {
      lVar6 = *(long *)PTR_scalar_class_00715810;
      do {
        if (*plVar7 == lVar6) {
          uVar14 = canvas_writescalar(uVar14,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                                      ,(long *)plVar7[2],(uint *)(plVar7 + 3),piVar4,0,param_13,
                                      param_14);
          lVar6 = *(long *)puVar11;
        }
        plVar7 = (long *)plVar7[1];
      } while (plVar7 != (long *)0x0);
    }
  }
  freebytes(local_68);
  return piVar4;
}


