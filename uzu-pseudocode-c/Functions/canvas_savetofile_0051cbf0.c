// Function : canvas_savetofile
// Namespace: 
// Entry    : 0051cbf0
// Prototype: undefined canvas_savetofile(float param_1, undefined8 param_2, double param_3, double param_4, double param_5, double param_6, double param_7, undefined8 param_8, long * param_9, long * param_10, long * param_11, undefined8 * param_12, uint * param_13, byte * param_14)
// Body     : 0051cbf0 - 0051cfb9


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void canvas_savetofile(float param_1,undefined8 param_2,double param_3,double param_4,double param_5
                      ,double param_6,double param_7,undefined8 param_8,long *param_9,long *param_10
                      ,long *param_11,undefined8 *param_12,uint *param_13,byte *param_14)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint *puVar4;
  long lVar5;
  long *plVar6;
  int *piVar7;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  ulong uVar8;
  long lVar9;
  void *pvVar10;
  uint *puVar11;
  char *pcVar12;
  char *pcVar13;
  undefined8 *puVar14;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar15;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 uVar16;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined8 extraout_XMM0_Qa_09;
  undefined8 extraout_XMM0_Qa_10;
  undefined1 in_stack_ffffffffffffff78;
  undefined7 in_stack_ffffffffffffff79;
  uint local_74;
  void *local_70;
  float local_64;
  ulong local_60;
  long *local_58;
  long *local_50;
  long *local_48;
  void *local_40;
  ulong local_38;
  
  local_64 = param_1;
  puVar4 = binbuf_new();
  local_70 = getbytes(0);
  local_74 = 0;
  puVar11 = &local_74;
  uVar15 = canvas_collecttemplatesfor
                     (extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      (long)param_9,puVar11,&local_70,param_12,(char *)param_13,param_14);
  local_60 = (ulong)local_74;
  pvVar10 = local_70;
  if ((int)local_74 < 1) {
  }
  else {
    uVar8 = 0;
    local_40 = local_70;
    local_58 = param_10;
    local_50 = param_11;
    local_48 = param_9;
    do {
      while (lVar5 = template_findbyname(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,
                                         param_8,*(long *)((long)pvVar10 + uVar8 * 8)), lVar5 != 0)
      {
        uVar1 = *(uint *)(lVar5 + 0x18);
        plVar6 = (long *)__tls_get_addr(&PTR_007159b0);
        lVar2 = *plVar6;
        param_12 = gensym("struct");
        local_38 = uVar8;
        param_13 = (uint *)gensym((char *)(**(long **)((long)pvVar10 + uVar8 * 8) + 3));
        puVar11 = (uint *)0x65e580;
        uVar16 = binbuf_addv(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,
                             param_8,(int *)puVar4,0x65e580,lVar2 + 0x108,param_12,(char *)param_13,
                             param_14,(double)CONCAT71(in_stack_ffffffffffffff79,
                                                       in_stack_ffffffffffffff78));
        uVar15 = extraout_RDX_00;
        if (0 < (int)uVar1) {
          lVar2 = (ulong)uVar1 * 0x18;
          lVar9 = 0;
LAB_0051cd66:
          do {
            switch(*(undefined4 *)(*(long *)(lVar5 + 0x20) + lVar9)) {
            case 0:
              plVar6 = (long *)__tls_get_addr(&PTR_007159b0);
              puVar14 = (undefined8 *)(*plVar6 + 0x78);
              uVar15 = extraout_XMM0_Qa_02;
              break;
            case 1:
              plVar6 = (long *)__tls_get_addr(&PTR_007159b0);
              puVar14 = (undefined8 *)(*plVar6 + 0x90);
              uVar15 = extraout_XMM0_Qa_04;
              break;
            case 2:
              pcVar13 = "text";
              goto LAB_0051ce07;
            case 3:
              pcVar13 = "array";
LAB_0051ce07:
              puVar14 = gensym(pcVar13);
              uVar15 = extraout_XMM0_Qa_05;
              break;
            default:
              plVar6 = (long *)__tls_get_addr(&PTR_007159b0);
              puVar14 = (undefined8 *)(*plVar6 + 0x78);
              uVar15 = bug(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,
                           param_8,"canvas_write",puVar11,extraout_RDX_02,param_12,(char *)param_13,
                           param_14,in_stack_ffffffffffffff78);
            }
            lVar3 = *(long *)(lVar5 + 0x20);
            param_12 = *(undefined8 **)(lVar3 + 8 + lVar9);
            if (*(int *)(lVar3 + lVar9) != 3) {
              puVar11 = (uint *)&DAT_0065470c;
              uVar16 = binbuf_addv(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                   (int *)puVar4,0x65470c,puVar14,param_12,(char *)param_13,param_14
                                   ,(double)CONCAT71(in_stack_ffffffffffffff79,
                                                     in_stack_ffffffffffffff78));
              lVar9 = lVar9 + 0x18;
              uVar15 = extraout_RDX_01;
              if (lVar2 == lVar9) break;
              goto LAB_0051cd66;
            }
            param_13 = (uint *)gensym((char *)(**(long **)(lVar3 + 0x10 + lVar9) + 3));
            puVar11 = (uint *)0x65e580;
            uVar16 = binbuf_addv(extraout_XMM0_Qa_06,param_2,param_3,param_4,param_5,param_6,param_7
                                 ,param_8,(int *)puVar4,0x65e580,puVar14,param_12,(char *)param_13,
                                 param_14,(double)CONCAT71(in_stack_ffffffffffffff79,
                                                           in_stack_ffffffffffffff78));
            lVar9 = lVar9 + 0x18;
            uVar15 = extraout_RDX_03;
          } while (lVar2 != lVar9);
        }
        uVar15 = binbuf_addsemi(uVar16,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                (int *)puVar4,puVar11,uVar15,param_12,(char *)param_13,param_14);
        uVar8 = local_38 + 1;
        pvVar10 = local_40;
        if (uVar8 == local_60) goto LAB_0051ce8d;
      }
      uVar15 = bug(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   "canvas_savetemplatesto",puVar11,extraout_RDX,param_12,(char *)param_13,param_14,
                   in_stack_ffffffffffffff78);
      uVar8 = uVar8 + 1;
    } while (uVar8 != local_60);
LAB_0051ce8d:
    param_10 = local_58;
    param_9 = local_48;
    param_11 = local_50;
  }
  uVar15 = freebytes(pvVar10);
  canvas_saveto(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9,
                (int *)puVar4,extraout_RDX_04,(ulong)param_12,(char *)param_13,param_14);
  piVar7 = __errno_location();
  *piVar7 = 0;
  pcVar13 = (char *)0x0;
  uVar15 = binbuf_write(extraout_XMM0_Qa_07,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        puVar4,(char *)*param_10,(char *)*param_11,0,(char *)param_13,
                        (undefined8 *)param_14);
  if ((int)uVar15 == 0) {
    uVar15 = extraout_XMM0_Qa_08;
    if (param_9[9] == 0) {
      uVar15 = canvas_rename(extraout_XMM0_Qa_08,param_2,param_3,param_4,param_5,param_6,param_7,
                             param_8,param_9,param_10,(char *)param_11,pcVar13,(char *)param_13,
                             param_14);
      canvas_updatewindowlist(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      uVar15 = extraout_XMM0_Qa_10;
    }
    pcVar12 = (char *)*param_11;
    post(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"saved to: %s/%s");
    uVar15 = canvas_dirty(0.0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9,
                          pcVar12,extraout_RDX_05,pcVar13,(char *)param_13,param_14);
    canvas_reload(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,param_11,
                  param_9,pcVar13,param_13,param_14);
    if (local_64 != DAT_005d9058) {
      puVar14 = gensym("menuclose");
      pd_vmess(_DAT_005d9000,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9,
               puVar14,0x651ee3,pcVar13,param_13,param_14,
               (double)CONCAT71(in_stack_ffffffffffffff79,in_stack_ffffffffffffff78));
    }
  }
  else {
    uVar15 = extraout_XMM0_Qa_08;
    if (*piVar7 != 0) {
      strerror(*piVar7);
      uVar15 = extraout_XMM0_Qa_09;
    }
    post(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"%s/%s: %s");
  }
  binbuf_free(puVar4);
  return;
}


